/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-incidents/SSMIncidentsServiceClientModel.h>

namespace Aws
{
namespace SSMIncidents
{
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
  class AWS_SSMINCIDENTS_API SSMIncidentsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSMIncidentsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration(),
                           std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG),
                           const Aws::SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMIncidentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider = Aws::MakeShared<SSMIncidentsEndpointProvider>(ALLOCATION_TAG),
                           const Aws::SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMIncidentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/incident-manager-cross-account-cross-region.html">Cross-Region
         * and cross-account incident management</a>.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<SSMIncidentsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSMIncidentsClient>;
      void init(const SSMIncidentsClientConfiguration& clientConfiguration);

      SSMIncidentsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMIncidentsEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMIncidents
} // namespace Aws
