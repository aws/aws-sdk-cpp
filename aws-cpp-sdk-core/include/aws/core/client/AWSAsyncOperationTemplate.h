/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/**
 * A template function that is used to create an Async Operation function body for AWS Operations
 * Call a virtual constructor on request object just in case customer has inherited the request class.
 *  Use shared_ptr because unique_ptr is not copy-constructible, and a "packed" task for the Executor interface
 *  is represented by a std::function object (that must be copy-constructible).
 */
#define AWS_MAKE_ASYNC_OPERATION(FUNCTION, REQUEST, HANDLER, CONTEXT, P_EXECUTOR) \
do { \
    std::shared_ptr<std::remove_reference<decltype(*REQUEST.Clone().get())>::type> pRequest = REQUEST.Clone(); \
    P_EXECUTOR->Submit( [this, pRequest, HANDLER, CONTEXT]() \
                       { \
                           HANDLER(this, \
                                   *pRequest, \
                                   FUNCTION(*pRequest), \
                                   CONTEXT); \
                       } ); \
} while (0)

/**
 * A template function that is used to create an Async Operation function body for AWS _Streaming_ Operations
 *   The only difference compared to a regular non-streaming Operation is that
 *   the request is passed by non-const reference, therefore virtual copy constructor is not needed.
 *   However, caller code must ensure the life time of the request object is maintained during the Async execution.
 */
#define AWS_MAKE_ASYNC_STREAMING_OPERATION(FUNCTION, REQUEST, HANDLER, CONTEXT, P_EXECUTOR) \
do { \
    P_EXECUTOR->Submit( [this, &REQUEST, HANDLER, CONTEXT]() /* note capture by ref */\
                       { \
                           HANDLER(this, \
                                   REQUEST, \
                                   FUNCTION(REQUEST), \
                                   CONTEXT); \
                       } ); \
} while (0)


/**
 * A template function that is used to create an Async Operation function body for AWS Operations
 *  Call a virtual constructor on request object just in case customer has inherited the request class.
 *  Use shared_ptr because unique_ptr is not copy-constructible, and a "packed" task for the Executor interface
 *  is represented by a std::function object (that must be copy-constructible).
 */
#define AWS_MAKE_CALLABLE_OPERATION(FUNCTION, REQUEST, P_EXECUTOR) \
    using OperationOutcomeT = decltype(FUNCTION(REQUEST)); \
    std::shared_ptr<std::remove_reference<decltype(*REQUEST.Clone().get())>::type> pRequest = REQUEST.Clone(); \
    auto task = Aws::MakeShared< std::packaged_task< OperationOutcomeT() > >( \
            ALLOCATION_TAG, \
            [this, pRequest]() \
            { \
                return FUNCTION(*pRequest); \
            } ); \
    auto packagedFunction = [task]() { (*task)(); }; \
    P_EXECUTOR->Submit(packagedFunction); \
    return task->get_future()

/**
 * A template function that is used to create a Callable Operation function body for AWS Streaming Operations
 *   The only difference compared to a regular non-streaming Operation is that
 *   the request is passed by non-const reference, therefore virtual copy constructor is not needed.
 *   However, caller code must ensure the life time of the request object is maintained during the Async execution.
 */
#define AWS_MAKE_CALLABLE_STREAMING_OPERATION(FUNCTION, REQUEST, P_EXECUTOR) \
    using OperationOutcomeT = decltype(FUNCTION(REQUEST)); \
    auto task = Aws::MakeShared< std::packaged_task< OperationOutcomeT() > >( \
            ALLOCATION_TAG, \
            [this, &REQUEST]() /* note capture by ref */\
            { \
                return FUNCTION(REQUEST); \
            } ); \
    auto packagedFunction = [task]() { (*task)(); }; \
    P_EXECUTOR->Submit(packagedFunction); \
    return task->get_future()
