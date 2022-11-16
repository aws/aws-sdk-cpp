/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <future>

namespace Aws
{
namespace Client
{
    /**
     * A template function that is used to create an Async Operation function body for AWS Operations
     */
    template<typename ClientT,
             typename RequestT,
             typename HandlerT,
             typename HandlerContextT,
             typename OperationFuncT,
             typename ExecutorT>
    inline void MakeAsyncOperation(OperationFuncT&& operationFunc,
                                   const ClientT* clientThis,
                                   const RequestT& request,
                                   const HandlerT& handler,
                                   const HandlerContextT& context,
                                   ExecutorT* pExecutor)
    {
        /** Call a virtual constructor just in case customer has inherited the request class.
            Use shared_ptr because unique_ptr is not copy-constructible, and a "packed" task for the Executor interface
              is represented by a std::function object (that must be copy-constructible). */
        std::shared_ptr<RequestT> pRequest = request.Clone();
        pExecutor->Submit( [operationFunc, clientThis, pRequest, handler, context]()
                           {
                               handler(clientThis,
                                       *pRequest,
                                       (clientThis->*operationFunc)(*pRequest),
                                       context);
                           } );
    }

    /**
     * A template function that is used to create an Async Operation function body for AWS Streaming Operations
     *   The only difference compared to a regular non-streaming Operation is that
     *   the request is passed by non-const reference, therefore virtual copy constructor is not needed.
     *   However, caller code must ensure the life time of the request object is maintained during the Async execution.
     */
    template<typename ClientT,
             typename RequestT,
             typename HandlerT,
             typename HandlerContextT,
             typename OperationFuncT,
             typename ExecutorT>
    inline void MakeAsyncStreamingOperation(OperationFuncT&& operationFunc,
                                            const ClientT* clientThis,
                                            RequestT& request, // note non-const ref
                                            const HandlerT& handler,
                                            const HandlerContextT& context,
                                            ExecutorT* pExecutor)
    {
        pExecutor->Submit( [operationFunc, clientThis, &request, handler, context]()  // note capture by ref
                           {
                               handler(clientThis,
                                       request,
                                       (clientThis->*operationFunc)(request),
                                       context);
                           } );
    }

    /**
     * A template function that is used to create a Callable Operation function body for AWS Operations
     */
    template<typename ClientT,
             typename RequestT,
             typename OperationFuncT,
             typename ExecutorT>
    inline auto MakeCallableOperation(const char* ALLOCATION_TAG,
                                      OperationFuncT&& operationFunc,
                                      const ClientT* clientThis,
                                      const RequestT& request,
                                      ExecutorT* pExecutor) -> std::future<decltype((clientThis->*operationFunc)(request))>
    {
        using OperationOutcomeT = decltype((clientThis->*operationFunc)(request));
        /** Call a virtual copy constructor just in case customer has inherited the request class.
            For the same reason as in the template above. */
        std::shared_ptr<RequestT> pRequest = request.Clone();

        auto task = Aws::MakeShared< std::packaged_task< OperationOutcomeT() > >(
                ALLOCATION_TAG,
                [clientThis, operationFunc, pRequest]()
                {
                    return (clientThis->*operationFunc)(*pRequest);
                } );

        auto packagedFunction = [task]() { (*task)(); };
        pExecutor->Submit(packagedFunction);
        return task->get_future();
    }

    /**
     * A template function that is used to create a Callable Operation function body for AWS Streaming Operations
     *   The only difference compared to a regular non-streaming Operation is that
     *   the request is passed by non-const reference, therefore virtual copy constructor is not needed.
     *   However, caller code must ensure the life time of the request object is maintained during the Async execution.
     */
    template<typename ClientT,
             typename RequestT,
             typename OperationFuncT,
             typename ExecutorT>
    inline auto MakeCallableStreamingOperation(const char* ALLOCATION_TAG,
                                               OperationFuncT&& operationFunc,
                                               const ClientT* clientThis,
                                               RequestT& request,  // note non-const ref
                                               ExecutorT* pExecutor) -> std::future<decltype((clientThis->*operationFunc)(request))>
    {
        using OperationOutcomeT = decltype((clientThis->*operationFunc)(request));

        auto task = Aws::MakeShared< std::packaged_task< OperationOutcomeT() > >(
                ALLOCATION_TAG,
                [clientThis, operationFunc, &request]()  // note capture by ref
                {
                    return (clientThis->*operationFunc)(request);
                } );

        auto packagedFunction = [task]() { (*task)(); };
        pExecutor->Submit(packagedFunction);
        return task->get_future();
    }
} // namespace Client
} // namespace Aws


