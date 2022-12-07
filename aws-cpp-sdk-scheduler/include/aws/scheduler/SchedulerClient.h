/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/scheduler/SchedulerServiceClientModel.h>

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
  class AWS_SCHEDULER_API SchedulerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SchedulerClient>
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

        /**
         * <p>Creates the specified schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/CreateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduleOutcome CreateSchedule(const Model::CreateScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreateSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduleOutcomeCallable CreateScheduleCallable(const Model::CreateScheduleRequest& request) const;

        /**
         * An Async wrapper for CreateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduleAsync(const Model::CreateScheduleRequest& request, const CreateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified schedule group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/CreateScheduleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduleGroupOutcome CreateScheduleGroup(const Model::CreateScheduleGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateScheduleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduleGroupOutcomeCallable CreateScheduleGroupCallable(const Model::CreateScheduleGroupRequest& request) const;

        /**
         * An Async wrapper for CreateScheduleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduleGroupAsync(const Model::CreateScheduleGroupRequest& request, const CreateScheduleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const Model::DeleteScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteScheduleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduleGroupOutcomeCallable DeleteScheduleGroupCallable(const Model::DeleteScheduleGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteScheduleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduleGroupAsync(const Model::DeleteScheduleGroupRequest& request, const DeleteScheduleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/GetSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScheduleOutcome GetSchedule(const Model::GetScheduleRequest& request) const;

        /**
         * A Callable wrapper for GetSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetScheduleOutcomeCallable GetScheduleCallable(const Model::GetScheduleRequest& request) const;

        /**
         * An Async wrapper for GetSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetScheduleAsync(const Model::GetScheduleRequest& request, const GetScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified schedule group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/GetScheduleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScheduleGroupOutcome GetScheduleGroup(const Model::GetScheduleGroupRequest& request) const;

        /**
         * A Callable wrapper for GetScheduleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetScheduleGroupOutcomeCallable GetScheduleGroupCallable(const Model::GetScheduleGroupRequest& request) const;

        /**
         * An Async wrapper for GetScheduleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetScheduleGroupAsync(const Model::GetScheduleGroupRequest& request, const GetScheduleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of your schedule groups.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ListScheduleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduleGroupsOutcome ListScheduleGroups(const Model::ListScheduleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListScheduleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScheduleGroupsOutcomeCallable ListScheduleGroupsCallable(const Model::ListScheduleGroupsRequest& request) const;

        /**
         * An Async wrapper for ListScheduleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScheduleGroupsAsync(const Model::ListScheduleGroupsRequest& request, const ListScheduleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of your EventBridge Scheduler
         * schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ListSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchedulesOutcome ListSchedules(const Model::ListSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchedulesOutcomeCallable ListSchedulesCallable(const Model::ListSchedulesRequest& request) const;

        /**
         * An Async wrapper for ListSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchedulesAsync(const Model::ListSchedulesRequest& request, const ListSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags associated with the Scheduler resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified EventBridge
         * Scheduler resource. You can only assign tags to schedule groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified EventBridge Scheduler schedule
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * A Callable wrapper for UpdateSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScheduleOutcomeCallable UpdateScheduleCallable(const Model::UpdateScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScheduleAsync(const Model::UpdateScheduleRequest& request, const UpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SchedulerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SchedulerClient>;
      void init(const SchedulerClientConfiguration& clientConfiguration);

      SchedulerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SchedulerEndpointProviderBase> m_endpointProvider;
  };

} // namespace Scheduler
} // namespace Aws
