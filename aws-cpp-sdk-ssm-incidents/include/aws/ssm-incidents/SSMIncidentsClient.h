/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-incidents/model/CreateReplicationSetResult.h>
#include <aws/ssm-incidents/model/CreateResponsePlanResult.h>
#include <aws/ssm-incidents/model/CreateTimelineEventResult.h>
#include <aws/ssm-incidents/model/DeleteIncidentRecordResult.h>
#include <aws/ssm-incidents/model/DeleteReplicationSetResult.h>
#include <aws/ssm-incidents/model/DeleteResourcePolicyResult.h>
#include <aws/ssm-incidents/model/DeleteResponsePlanResult.h>
#include <aws/ssm-incidents/model/DeleteTimelineEventResult.h>
#include <aws/ssm-incidents/model/GetIncidentRecordResult.h>
#include <aws/ssm-incidents/model/GetReplicationSetResult.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesResult.h>
#include <aws/ssm-incidents/model/GetResponsePlanResult.h>
#include <aws/ssm-incidents/model/GetTimelineEventResult.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsResult.h>
#include <aws/ssm-incidents/model/ListRelatedItemsResult.h>
#include <aws/ssm-incidents/model/ListReplicationSetsResult.h>
#include <aws/ssm-incidents/model/ListResponsePlansResult.h>
#include <aws/ssm-incidents/model/ListTagsForResourceResult.h>
#include <aws/ssm-incidents/model/ListTimelineEventsResult.h>
#include <aws/ssm-incidents/model/PutResourcePolicyResult.h>
#include <aws/ssm-incidents/model/StartIncidentResult.h>
#include <aws/ssm-incidents/model/TagResourceResult.h>
#include <aws/ssm-incidents/model/UntagResourceResult.h>
#include <aws/ssm-incidents/model/UpdateDeletionProtectionResult.h>
#include <aws/ssm-incidents/model/UpdateIncidentRecordResult.h>
#include <aws/ssm-incidents/model/UpdateRelatedItemsResult.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetResult.h>
#include <aws/ssm-incidents/model/UpdateResponsePlanResult.h>
#include <aws/ssm-incidents/model/UpdateTimelineEventResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SSMIncidents
{

namespace Model
{
        class CreateReplicationSetRequest;
        class CreateResponsePlanRequest;
        class CreateTimelineEventRequest;
        class DeleteIncidentRecordRequest;
        class DeleteReplicationSetRequest;
        class DeleteResourcePolicyRequest;
        class DeleteResponsePlanRequest;
        class DeleteTimelineEventRequest;
        class GetIncidentRecordRequest;
        class GetReplicationSetRequest;
        class GetResourcePoliciesRequest;
        class GetResponsePlanRequest;
        class GetTimelineEventRequest;
        class ListIncidentRecordsRequest;
        class ListRelatedItemsRequest;
        class ListReplicationSetsRequest;
        class ListResponsePlansRequest;
        class ListTagsForResourceRequest;
        class ListTimelineEventsRequest;
        class PutResourcePolicyRequest;
        class StartIncidentRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDeletionProtectionRequest;
        class UpdateIncidentRecordRequest;
        class UpdateRelatedItemsRequest;
        class UpdateReplicationSetRequest;
        class UpdateResponsePlanRequest;
        class UpdateTimelineEventRequest;

        typedef Aws::Utils::Outcome<CreateReplicationSetResult, SSMIncidentsError> CreateReplicationSetOutcome;
        typedef Aws::Utils::Outcome<CreateResponsePlanResult, SSMIncidentsError> CreateResponsePlanOutcome;
        typedef Aws::Utils::Outcome<CreateTimelineEventResult, SSMIncidentsError> CreateTimelineEventOutcome;
        typedef Aws::Utils::Outcome<DeleteIncidentRecordResult, SSMIncidentsError> DeleteIncidentRecordOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationSetResult, SSMIncidentsError> DeleteReplicationSetOutcome;
        typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, SSMIncidentsError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteResponsePlanResult, SSMIncidentsError> DeleteResponsePlanOutcome;
        typedef Aws::Utils::Outcome<DeleteTimelineEventResult, SSMIncidentsError> DeleteTimelineEventOutcome;
        typedef Aws::Utils::Outcome<GetIncidentRecordResult, SSMIncidentsError> GetIncidentRecordOutcome;
        typedef Aws::Utils::Outcome<GetReplicationSetResult, SSMIncidentsError> GetReplicationSetOutcome;
        typedef Aws::Utils::Outcome<GetResourcePoliciesResult, SSMIncidentsError> GetResourcePoliciesOutcome;
        typedef Aws::Utils::Outcome<GetResponsePlanResult, SSMIncidentsError> GetResponsePlanOutcome;
        typedef Aws::Utils::Outcome<GetTimelineEventResult, SSMIncidentsError> GetTimelineEventOutcome;
        typedef Aws::Utils::Outcome<ListIncidentRecordsResult, SSMIncidentsError> ListIncidentRecordsOutcome;
        typedef Aws::Utils::Outcome<ListRelatedItemsResult, SSMIncidentsError> ListRelatedItemsOutcome;
        typedef Aws::Utils::Outcome<ListReplicationSetsResult, SSMIncidentsError> ListReplicationSetsOutcome;
        typedef Aws::Utils::Outcome<ListResponsePlansResult, SSMIncidentsError> ListResponsePlansOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMIncidentsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTimelineEventsResult, SSMIncidentsError> ListTimelineEventsOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, SSMIncidentsError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<StartIncidentResult, SSMIncidentsError> StartIncidentOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, SSMIncidentsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, SSMIncidentsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDeletionProtectionResult, SSMIncidentsError> UpdateDeletionProtectionOutcome;
        typedef Aws::Utils::Outcome<UpdateIncidentRecordResult, SSMIncidentsError> UpdateIncidentRecordOutcome;
        typedef Aws::Utils::Outcome<UpdateRelatedItemsResult, SSMIncidentsError> UpdateRelatedItemsOutcome;
        typedef Aws::Utils::Outcome<UpdateReplicationSetResult, SSMIncidentsError> UpdateReplicationSetOutcome;
        typedef Aws::Utils::Outcome<UpdateResponsePlanResult, SSMIncidentsError> UpdateResponsePlanOutcome;
        typedef Aws::Utils::Outcome<UpdateTimelineEventResult, SSMIncidentsError> UpdateTimelineEventOutcome;

        typedef std::future<CreateReplicationSetOutcome> CreateReplicationSetOutcomeCallable;
        typedef std::future<CreateResponsePlanOutcome> CreateResponsePlanOutcomeCallable;
        typedef std::future<CreateTimelineEventOutcome> CreateTimelineEventOutcomeCallable;
        typedef std::future<DeleteIncidentRecordOutcome> DeleteIncidentRecordOutcomeCallable;
        typedef std::future<DeleteReplicationSetOutcome> DeleteReplicationSetOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteResponsePlanOutcome> DeleteResponsePlanOutcomeCallable;
        typedef std::future<DeleteTimelineEventOutcome> DeleteTimelineEventOutcomeCallable;
        typedef std::future<GetIncidentRecordOutcome> GetIncidentRecordOutcomeCallable;
        typedef std::future<GetReplicationSetOutcome> GetReplicationSetOutcomeCallable;
        typedef std::future<GetResourcePoliciesOutcome> GetResourcePoliciesOutcomeCallable;
        typedef std::future<GetResponsePlanOutcome> GetResponsePlanOutcomeCallable;
        typedef std::future<GetTimelineEventOutcome> GetTimelineEventOutcomeCallable;
        typedef std::future<ListIncidentRecordsOutcome> ListIncidentRecordsOutcomeCallable;
        typedef std::future<ListRelatedItemsOutcome> ListRelatedItemsOutcomeCallable;
        typedef std::future<ListReplicationSetsOutcome> ListReplicationSetsOutcomeCallable;
        typedef std::future<ListResponsePlansOutcome> ListResponsePlansOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTimelineEventsOutcome> ListTimelineEventsOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<StartIncidentOutcome> StartIncidentOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDeletionProtectionOutcome> UpdateDeletionProtectionOutcomeCallable;
        typedef std::future<UpdateIncidentRecordOutcome> UpdateIncidentRecordOutcomeCallable;
        typedef std::future<UpdateRelatedItemsOutcome> UpdateRelatedItemsOutcomeCallable;
        typedef std::future<UpdateReplicationSetOutcome> UpdateReplicationSetOutcomeCallable;
        typedef std::future<UpdateResponsePlanOutcome> UpdateResponsePlanOutcomeCallable;
        typedef std::future<UpdateTimelineEventOutcome> UpdateTimelineEventOutcomeCallable;
} // namespace Model

  class SSMIncidentsClient;

    typedef std::function<void(const SSMIncidentsClient*, const Model::CreateReplicationSetRequest&, const Model::CreateReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::CreateResponsePlanRequest&, const Model::CreateResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::CreateTimelineEventRequest&, const Model::CreateTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTimelineEventResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteIncidentRecordRequest&, const Model::DeleteIncidentRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIncidentRecordResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteReplicationSetRequest&, const Model::DeleteReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteResponsePlanRequest&, const Model::DeleteResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteTimelineEventRequest&, const Model::DeleteTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTimelineEventResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetIncidentRecordRequest&, const Model::GetIncidentRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIncidentRecordResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetReplicationSetRequest&, const Model::GetReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetResourcePoliciesRequest&, const Model::GetResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetResponsePlanRequest&, const Model::GetResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetTimelineEventRequest&, const Model::GetTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTimelineEventResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListIncidentRecordsRequest&, const Model::ListIncidentRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIncidentRecordsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListRelatedItemsRequest&, const Model::ListRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListReplicationSetsRequest&, const Model::ListReplicationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReplicationSetsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListResponsePlansRequest&, const Model::ListResponsePlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResponsePlansResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListTimelineEventsRequest&, const Model::ListTimelineEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTimelineEventsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::StartIncidentRequest&, const Model::StartIncidentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartIncidentResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateDeletionProtectionRequest&, const Model::UpdateDeletionProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeletionProtectionResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateIncidentRecordRequest&, const Model::UpdateIncidentRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIncidentRecordResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateRelatedItemsRequest&, const Model::UpdateRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateReplicationSetRequest&, const Model::UpdateReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateResponsePlanRequest&, const Model::UpdateResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateTimelineEventRequest&, const Model::UpdateTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTimelineEventResponseReceivedHandler;

  /**
   * <p>Systems Manager Incident Manager is an incident management console designed
   * to help users mitigate and recover from incidents affecting their Amazon Web
   * Services-hosted applications. An incident is any unplanned interruption or
   * reduction in quality of services. </p> <p>Incident Manager increases incident
   * resolution by notifying responders of impact, highlighting relevant
   * troubleshooting data, and providing collaboration tools to get services back up
   * and running. To achieve the primary goal of reducing the time-to-resolution of
   * critical incidents, Incident Manager automates response plans and enables
   * responder team escalation. </p>
   */
  class AWS_SSMINCIDENTS_API SSMIncidentsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMIncidentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SSMIncidentsClient();


        /**
         * <p>A replication set replicates and encrypts your data to the provided Regions
         * with the provided KMS key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationSetOutcome CreateReplicationSet(const Model::CreateReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationSetOutcomeCallable CreateReplicationSetCallable(const Model::CreateReplicationSetRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationSetAsync(const Model::CreateReplicationSetRequest& request, const CreateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a response plan that automates the initial response to incidents. A
         * response plan engages contacts, starts chat channel collaboration, and initiates
         * runbooks at the beginning of an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResponsePlanOutcome CreateResponsePlan(const Model::CreateResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for CreateResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResponsePlanOutcomeCallable CreateResponsePlanCallable(const Model::CreateResponsePlanRequest& request) const;

        /**
         * An Async wrapper for CreateResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResponsePlanAsync(const Model::CreateResponsePlanRequest& request, const CreateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom timeline event on the incident details page of an incident
         * record. Timeline events are automatically created by Incident Manager, marking
         * key moment during an incident. You can create custom timeline events to mark
         * important events that are automatically detected by Incident
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTimelineEventOutcome CreateTimelineEvent(const Model::CreateTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for CreateTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTimelineEventOutcomeCallable CreateTimelineEventCallable(const Model::CreateTimelineEventRequest& request) const;

        /**
         * An Async wrapper for CreateTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTimelineEventAsync(const Model::CreateTimelineEventRequest& request, const CreateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an incident record from Incident Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIncidentRecordOutcome DeleteIncidentRecord(const Model::DeleteIncidentRecordRequest& request) const;

        /**
         * A Callable wrapper for DeleteIncidentRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIncidentRecordOutcomeCallable DeleteIncidentRecordCallable(const Model::DeleteIncidentRecordRequest& request) const;

        /**
         * An Async wrapper for DeleteIncidentRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIncidentRecordAsync(const Model::DeleteIncidentRecordRequest& request, const DeleteIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all Regions in your replication set. Deleting the replication set
         * deletes all Incident Manager data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationSetOutcome DeleteReplicationSet(const Model::DeleteReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationSetOutcomeCallable DeleteReplicationSetCallable(const Model::DeleteReplicationSetRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationSetAsync(const Model::DeleteReplicationSetRequest& request, const DeleteReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the resource policy that Resource Access Manager uses to share your
         * Incident Manager resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified response plan. Deleting a response plan stops all
         * linked CloudWatch alarms and EventBridge events from creating an incident with
         * this response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResponsePlanOutcome DeleteResponsePlan(const Model::DeleteResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResponsePlanOutcomeCallable DeleteResponsePlanCallable(const Model::DeleteResponsePlanRequest& request) const;

        /**
         * An Async wrapper for DeleteResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResponsePlanAsync(const Model::DeleteResponsePlanRequest& request, const DeleteResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a timeline event from an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTimelineEventOutcome DeleteTimelineEvent(const Model::DeleteTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for DeleteTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTimelineEventOutcomeCallable DeleteTimelineEventCallable(const Model::DeleteTimelineEventRequest& request) const;

        /**
         * An Async wrapper for DeleteTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTimelineEventAsync(const Model::DeleteTimelineEventRequest& request, const DeleteTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the specified incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIncidentRecordOutcome GetIncidentRecord(const Model::GetIncidentRecordRequest& request) const;

        /**
         * A Callable wrapper for GetIncidentRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIncidentRecordOutcomeCallable GetIncidentRecordCallable(const Model::GetIncidentRecordRequest& request) const;

        /**
         * An Async wrapper for GetIncidentRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIncidentRecordAsync(const Model::GetIncidentRecordRequest& request, const GetIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve your Incident Manager replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationSetOutcome GetReplicationSet(const Model::GetReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for GetReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationSetOutcomeCallable GetReplicationSetCallable(const Model::GetReplicationSetRequest& request) const;

        /**
         * An Async wrapper for GetReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationSetAsync(const Model::GetReplicationSetRequest& request, const GetReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource policies attached to the specified response
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePoliciesAsync(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of the specified response plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResponsePlanOutcome GetResponsePlan(const Model::GetResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for GetResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResponsePlanOutcomeCallable GetResponsePlanCallable(const Model::GetResponsePlanRequest& request) const;

        /**
         * An Async wrapper for GetResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResponsePlanAsync(const Model::GetResponsePlanRequest& request, const GetResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a timeline event based on its ID and incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimelineEventOutcome GetTimelineEvent(const Model::GetTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for GetTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTimelineEventOutcomeCallable GetTimelineEventCallable(const Model::GetTimelineEventRequest& request) const;

        /**
         * An Async wrapper for GetTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTimelineEventAsync(const Model::GetTimelineEventRequest& request, const GetTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all incident records in your account. Use this command to retrieve the
         * Amazon Resource Name (ARN) of the incident record you want to update.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListIncidentRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIncidentRecordsOutcome ListIncidentRecords(const Model::ListIncidentRecordsRequest& request) const;

        /**
         * A Callable wrapper for ListIncidentRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIncidentRecordsOutcomeCallable ListIncidentRecordsCallable(const Model::ListIncidentRecordsRequest& request) const;

        /**
         * An Async wrapper for ListIncidentRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIncidentRecordsAsync(const Model::ListIncidentRecordsRequest& request, const ListIncidentRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all related items for an incident record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRelatedItemsOutcome ListRelatedItems(const Model::ListRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for ListRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRelatedItemsOutcomeCallable ListRelatedItemsCallable(const Model::ListRelatedItemsRequest& request) const;

        /**
         * An Async wrapper for ListRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRelatedItemsAsync(const Model::ListRelatedItemsRequest& request, const ListRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists details about the replication set configured in your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListReplicationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplicationSetsOutcome ListReplicationSets(const Model::ListReplicationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReplicationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReplicationSetsOutcomeCallable ListReplicationSetsCallable(const Model::ListReplicationSetsRequest& request) const;

        /**
         * An Async wrapper for ListReplicationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReplicationSetsAsync(const Model::ListReplicationSetsRequest& request, const ListReplicationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all response plans in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListResponsePlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResponsePlansOutcome ListResponsePlans(const Model::ListResponsePlansRequest& request) const;

        /**
         * A Callable wrapper for ListResponsePlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResponsePlansOutcomeCallable ListResponsePlansCallable(const Model::ListResponsePlansRequest& request) const;

        /**
         * An Async wrapper for ListResponsePlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResponsePlansAsync(const Model::ListResponsePlansRequest& request, const ListResponsePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that are attached to the specified response
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListTagsForResource">AWS
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
         * <p>Lists timeline events for the specified incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListTimelineEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTimelineEventsOutcome ListTimelineEvents(const Model::ListTimelineEventsRequest& request) const;

        /**
         * A Callable wrapper for ListTimelineEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTimelineEventsOutcomeCallable ListTimelineEventsCallable(const Model::ListTimelineEventsRequest& request) const;

        /**
         * An Async wrapper for ListTimelineEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTimelineEventsAsync(const Model::ListTimelineEventsRequest& request, const ListTimelineEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a resource policy to the specified response plan. The resource policy is
         * used to share the response plan using Resource Access Manager (RAM). For more
         * information about cross-account sharing, see <a
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/xa.html">Setting
         * up cross-account functionality</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to start an incident from CloudWatch alarms, EventBridge events, or
         * manually. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/StartIncident">AWS
         * API Reference</a></p>
         */
        virtual Model::StartIncidentOutcome StartIncident(const Model::StartIncidentRequest& request) const;

        /**
         * A Callable wrapper for StartIncident that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartIncidentOutcomeCallable StartIncidentCallable(const Model::StartIncidentRequest& request) const;

        /**
         * An Async wrapper for StartIncident that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartIncidentAsync(const Model::StartIncidentRequest& request, const StartIncidentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a tag to a response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/TagResource">AWS
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
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UntagResource">AWS
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
         * <p>Update deletion protection to either allow or deny deletion of the final
         * Region in a replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateDeletionProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeletionProtectionOutcome UpdateDeletionProtection(const Model::UpdateDeletionProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeletionProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeletionProtectionOutcomeCallable UpdateDeletionProtectionCallable(const Model::UpdateDeletionProtectionRequest& request) const;

        /**
         * An Async wrapper for UpdateDeletionProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeletionProtectionAsync(const Model::UpdateDeletionProtectionRequest& request, const UpdateDeletionProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the details of an incident record. You can use this operation to
         * update an incident record from the defined chat channel. For more information
         * about using actions in chat channels, see <a
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/chat.html#chat-interact">Interacting
         * through chat</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIncidentRecordOutcome UpdateIncidentRecord(const Model::UpdateIncidentRecordRequest& request) const;

        /**
         * A Callable wrapper for UpdateIncidentRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIncidentRecordOutcomeCallable UpdateIncidentRecordCallable(const Model::UpdateIncidentRecordRequest& request) const;

        /**
         * An Async wrapper for UpdateIncidentRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIncidentRecordAsync(const Model::UpdateIncidentRecordRequest& request, const UpdateIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add or remove related items from the related items tab of an incident
         * record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelatedItemsOutcome UpdateRelatedItems(const Model::UpdateRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRelatedItemsOutcomeCallable UpdateRelatedItemsCallable(const Model::UpdateRelatedItemsRequest& request) const;

        /**
         * An Async wrapper for UpdateRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRelatedItemsAsync(const Model::UpdateRelatedItemsRequest& request, const UpdateRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add or delete Regions from your replication set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationSetOutcome UpdateReplicationSet(const Model::UpdateReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationSetOutcomeCallable UpdateReplicationSetCallable(const Model::UpdateReplicationSetRequest& request) const;

        /**
         * An Async wrapper for UpdateReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationSetAsync(const Model::UpdateReplicationSetRequest& request, const UpdateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResponsePlanOutcome UpdateResponsePlan(const Model::UpdateResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResponsePlanOutcomeCallable UpdateResponsePlanCallable(const Model::UpdateResponsePlanRequest& request) const;

        /**
         * An Async wrapper for UpdateResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResponsePlanAsync(const Model::UpdateResponsePlanRequest& request, const UpdateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a timeline event. You can update events of type <code>Custom
         * Event</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTimelineEventOutcome UpdateTimelineEvent(const Model::UpdateTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for UpdateTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTimelineEventOutcomeCallable UpdateTimelineEventCallable(const Model::UpdateTimelineEventRequest& request) const;

        /**
         * An Async wrapper for UpdateTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTimelineEventAsync(const Model::UpdateTimelineEventRequest& request, const UpdateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SSMIncidents
} // namespace Aws
