/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-incidents/SSMIncidentsServiceClientModel.h>
#include <aws/ssm-incidents/SSMIncidentsLegacyAsyncMacros.h>

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
  class AWS_SSMINCIDENTS_API SSMIncidentsClient : public Aws::Client::AWSJsonClient
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
         * <p>A replication set replicates and encrypts your data to the provided Regions
         * with the provided KMS key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationSetOutcome CreateReplicationSet(const Model::CreateReplicationSetRequest& request) const;


        /**
         * <p>Creates a response plan that automates the initial response to incidents. A
         * response plan engages contacts, starts chat channel collaboration, and initiates
         * runbooks at the beginning of an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResponsePlanOutcome CreateResponsePlan(const Model::CreateResponsePlanRequest& request) const;


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
         * <p>Delete an incident record from Incident Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIncidentRecordOutcome DeleteIncidentRecord(const Model::DeleteIncidentRecordRequest& request) const;


        /**
         * <p>Deletes all Regions in your replication set. Deleting the replication set
         * deletes all Incident Manager data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationSetOutcome DeleteReplicationSet(const Model::DeleteReplicationSetRequest& request) const;


        /**
         * <p>Deletes the resource policy that Resource Access Manager uses to share your
         * Incident Manager resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Deletes the specified response plan. Deleting a response plan stops all
         * linked CloudWatch alarms and EventBridge events from creating an incident with
         * this response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResponsePlanOutcome DeleteResponsePlan(const Model::DeleteResponsePlanRequest& request) const;


        /**
         * <p>Deletes a timeline event from an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTimelineEventOutcome DeleteTimelineEvent(const Model::DeleteTimelineEventRequest& request) const;


        /**
         * <p>Returns the details for the specified incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIncidentRecordOutcome GetIncidentRecord(const Model::GetIncidentRecordRequest& request) const;


        /**
         * <p>Retrieve your Incident Manager replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationSetOutcome GetReplicationSet(const Model::GetReplicationSetRequest& request) const;


        /**
         * <p>Retrieves the resource policies attached to the specified response
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;


        /**
         * <p>Retrieves the details of the specified response plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResponsePlanOutcome GetResponsePlan(const Model::GetResponsePlanRequest& request) const;


        /**
         * <p>Retrieves a timeline event based on its ID and incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimelineEventOutcome GetTimelineEvent(const Model::GetTimelineEventRequest& request) const;


        /**
         * <p>Lists all incident records in your account. Use this command to retrieve the
         * Amazon Resource Name (ARN) of the incident record you want to update.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListIncidentRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIncidentRecordsOutcome ListIncidentRecords(const Model::ListIncidentRecordsRequest& request) const;


        /**
         * <p>List all related items for an incident record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRelatedItemsOutcome ListRelatedItems(const Model::ListRelatedItemsRequest& request) const;


        /**
         * <p>Lists details about the replication set configured in your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListReplicationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplicationSetsOutcome ListReplicationSets(const Model::ListReplicationSetsRequest& request) const;


        /**
         * <p>Lists all response plans in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListResponsePlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResponsePlansOutcome ListResponsePlans(const Model::ListResponsePlansRequest& request) const;


        /**
         * <p>Lists the tags that are attached to the specified response
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Lists timeline events for the specified incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListTimelineEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTimelineEventsOutcome ListTimelineEvents(const Model::ListTimelineEventsRequest& request) const;


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
         * <p>Used to start an incident from CloudWatch alarms, EventBridge events, or
         * manually. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/StartIncident">AWS
         * API Reference</a></p>
         */
        virtual Model::StartIncidentOutcome StartIncident(const Model::StartIncidentRequest& request) const;


        /**
         * <p>Adds a tag to a response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Update deletion protection to either allow or deny deletion of the final
         * Region in a replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateDeletionProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeletionProtectionOutcome UpdateDeletionProtection(const Model::UpdateDeletionProtectionRequest& request) const;


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
         * <p>Add or remove related items from the related items tab of an incident
         * record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelatedItemsOutcome UpdateRelatedItems(const Model::UpdateRelatedItemsRequest& request) const;


        /**
         * <p>Add or delete Regions from your replication set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationSetOutcome UpdateReplicationSet(const Model::UpdateReplicationSetRequest& request) const;


        /**
         * <p>Updates the specified response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResponsePlanOutcome UpdateResponsePlan(const Model::UpdateResponsePlanRequest& request) const;


        /**
         * <p>Updates a timeline event. You can update events of type <code>Custom
         * Event</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTimelineEventOutcome UpdateTimelineEvent(const Model::UpdateTimelineEventRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMIncidentsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SSMIncidentsClientConfiguration& clientConfiguration);

      SSMIncidentsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMIncidentsEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMIncidents
} // namespace Aws
