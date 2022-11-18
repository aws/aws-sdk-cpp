/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/scheduler/SchedulerServiceClientModel.h>
#include <aws/scheduler/SchedulerLegacyAsyncMacros.h>

namespace Aws
{
namespace Scheduler
{
  /**
   * <p> Amazon EventBridge Scheduler is a serverless scheduler that allows you to
   * create, run, and manage tasks from one central, managed service. EventBridge
   * Scheduler delivers your tasks reliably, with built-in mechanisms that adjust
   * your schedules based on the availability of downstream targets. The following
   * reference lists the available API actions, and data types for EventBridge
   * Scheduler. </p>
   */
  class AWS_SCHEDULER_API SchedulerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchedulerClient(const Aws::Scheduler::SchedulerClientConfiguration& clientConfiguration = Aws::Scheduler::SchedulerClientConfiguration(),
                        std::shared_ptr<SchedulerEndpointProviderBase> endpointProvider = Aws::MakeShared<SchedulerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchedulerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<SchedulerEndpointProviderBase> endpointProvider = Aws::MakeShared<SchedulerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Scheduler::SchedulerClientConfiguration& clientConfiguration = Aws::Scheduler::SchedulerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchedulerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<SchedulerEndpointProviderBase> endpointProvider = Aws::MakeShared<SchedulerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Scheduler::SchedulerClientConfiguration& clientConfiguration = Aws::Scheduler::SchedulerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchedulerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SchedulerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SchedulerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SchedulerClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates the specified schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/CreateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest& request) const;


        /**
         * <p>Creates the specified schedule group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/CreateScheduleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduleGroupOutcome CreateScheduleGroup(const Model::CreateScheduleGroupRequest& request) const;


        /**
         * <p>Deletes the specified schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;


        /**
         * <p>Deletes the specified schedule group. Deleting a schedule group results in
         * EventBridge Scheduler deleting all schedules associated with the group. When you
         * delete a group, it remains in a <code>DELETING</code> state until all of its
         * associated schedules are deleted. Schedules associated with the group that are
         * set to run while the schedule group is in the process of being deleted might
         * continue to invoke their targets until the schedule group and its associated
         * schedules are deleted.</p>  <p> This operation is eventually consistent.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/DeleteScheduleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleGroupOutcome DeleteScheduleGroup(const Model::DeleteScheduleGroupRequest& request) const;


        /**
         * <p>Retrieves the specified schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/GetSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScheduleOutcome GetSchedule(const Model::GetScheduleRequest& request) const;


        /**
         * <p>Retrieves the specified schedule group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/GetScheduleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScheduleGroupOutcome GetScheduleGroup(const Model::GetScheduleGroupRequest& request) const;


        /**
         * <p>Returns a paginated list of your schedule groups.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ListScheduleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduleGroupsOutcome ListScheduleGroups(const Model::ListScheduleGroupsRequest& request) const;


        /**
         * <p>Returns a paginated list of your EventBridge Scheduler
         * schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ListSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulesOutcome ListSchedules(const Model::ListSchedulesRequest& request) const;


        /**
         * <p>Lists the tags associated with the Scheduler resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * Scheduler resource. You can only assign tags to schedule groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from the specified EventBridge Scheduler schedule
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Updates the specified schedule. When you call <code>UpdateSchedule</code>,
         * EventBridge Scheduler uses all values, including empty values, specified in the
         * request and overrides the existing schedule. This is by design. This means that
         * if you do not set an optional field in your request, that field will be set to
         * its system-default value after the update. </p> <p> Before calling this
         * operation, we recommend that you call the <code>GetSchedule</code> API operation
         * and make a note of all optional parameters for your <code>UpdateSchedule</code>
         * call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/UpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduleOutcome UpdateSchedule(const Model::UpdateScheduleRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SchedulerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SchedulerClientConfiguration& clientConfiguration);

      SchedulerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SchedulerEndpointProviderBase> m_endpointProvider;
  };

} // namespace Scheduler
} // namespace Aws
