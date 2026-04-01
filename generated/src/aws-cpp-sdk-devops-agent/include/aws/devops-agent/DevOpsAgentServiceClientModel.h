/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentEndpointProvider.h>
#include <aws/devops-agent/DevOpsAgentErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in DevOpsAgentClient header */
#include <aws/core/NoResult.h>
#include <aws/devops-agent/model/AllowVendedLogDeliveryForResourceResult.h>
#include <aws/devops-agent/model/AssociateServiceResult.h>
#include <aws/devops-agent/model/CreateAgentSpaceResult.h>
#include <aws/devops-agent/model/CreateBacklogTaskResult.h>
#include <aws/devops-agent/model/CreateChatResult.h>
#include <aws/devops-agent/model/CreatePrivateConnectionResult.h>
#include <aws/devops-agent/model/DeleteAgentSpaceResult.h>
#include <aws/devops-agent/model/DeletePrivateConnectionResult.h>
#include <aws/devops-agent/model/DeregisterServiceResult.h>
#include <aws/devops-agent/model/DescribePrivateConnectionResult.h>
#include <aws/devops-agent/model/DisassociateServiceResult.h>
#include <aws/devops-agent/model/EnableOperatorAppResult.h>
#include <aws/devops-agent/model/GetAccountUsageRequest.h>
#include <aws/devops-agent/model/GetAccountUsageResult.h>
#include <aws/devops-agent/model/GetAgentSpaceResult.h>
#include <aws/devops-agent/model/GetAssociationResult.h>
#include <aws/devops-agent/model/GetBacklogTaskResult.h>
#include <aws/devops-agent/model/GetOperatorAppResult.h>
#include <aws/devops-agent/model/GetRecommendationResult.h>
#include <aws/devops-agent/model/GetServiceResult.h>
#include <aws/devops-agent/model/ListAgentSpacesRequest.h>
#include <aws/devops-agent/model/ListAgentSpacesResult.h>
#include <aws/devops-agent/model/ListAssociationsResult.h>
#include <aws/devops-agent/model/ListBacklogTasksResult.h>
#include <aws/devops-agent/model/ListChatsResult.h>
#include <aws/devops-agent/model/ListExecutionsResult.h>
#include <aws/devops-agent/model/ListGoalsResult.h>
#include <aws/devops-agent/model/ListJournalRecordsResult.h>
#include <aws/devops-agent/model/ListPendingMessagesResult.h>
#include <aws/devops-agent/model/ListPrivateConnectionsRequest.h>
#include <aws/devops-agent/model/ListPrivateConnectionsResult.h>
#include <aws/devops-agent/model/ListRecommendationsResult.h>
#include <aws/devops-agent/model/ListServicesRequest.h>
#include <aws/devops-agent/model/ListServicesResult.h>
#include <aws/devops-agent/model/ListTagsForResourceResult.h>
#include <aws/devops-agent/model/ListWebhooksResult.h>
#include <aws/devops-agent/model/RegisterServiceResult.h>
#include <aws/devops-agent/model/TagResourceResult.h>
#include <aws/devops-agent/model/UntagResourceResult.h>
#include <aws/devops-agent/model/UpdateAgentSpaceResult.h>
#include <aws/devops-agent/model/UpdateAssociationResult.h>
#include <aws/devops-agent/model/UpdateBacklogTaskResult.h>
#include <aws/devops-agent/model/UpdateGoalResult.h>
#include <aws/devops-agent/model/UpdateOperatorAppIdpConfigResult.h>
#include <aws/devops-agent/model/UpdatePrivateConnectionCertificateResult.h>
#include <aws/devops-agent/model/UpdateRecommendationResult.h>
#include <aws/devops-agent/model/ValidateAwsAssociationsResult.h>
/* End of service model headers required in DevOpsAgentClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace DevOpsAgent {
using DevOpsAgentClientConfiguration = Aws::Client::GenericClientConfiguration;
using DevOpsAgentEndpointProviderBase = Aws::DevOpsAgent::Endpoint::DevOpsAgentEndpointProviderBase;
using DevOpsAgentEndpointProvider = Aws::DevOpsAgent::Endpoint::DevOpsAgentEndpointProvider;

namespace Model {
/* Service model forward declarations required in DevOpsAgentClient header */
class AllowVendedLogDeliveryForResourceRequest;
class AssociateServiceRequest;
class CreateAgentSpaceRequest;
class CreateBacklogTaskRequest;
class CreateChatRequest;
class CreatePrivateConnectionRequest;
class DeleteAgentSpaceRequest;
class DeletePrivateConnectionRequest;
class DeregisterServiceRequest;
class DescribePrivateConnectionRequest;
class DisableOperatorAppRequest;
class DisassociateServiceRequest;
class EnableOperatorAppRequest;
class GetAccountUsageRequest;
class GetAgentSpaceRequest;
class GetAssociationRequest;
class GetBacklogTaskRequest;
class GetOperatorAppRequest;
class GetRecommendationRequest;
class GetServiceRequest;
class ListAgentSpacesRequest;
class ListAssociationsRequest;
class ListBacklogTasksRequest;
class ListChatsRequest;
class ListExecutionsRequest;
class ListGoalsRequest;
class ListJournalRecordsRequest;
class ListPendingMessagesRequest;
class ListPrivateConnectionsRequest;
class ListRecommendationsRequest;
class ListServicesRequest;
class ListTagsForResourceRequest;
class ListWebhooksRequest;
class RegisterServiceRequest;
class SendMessageRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAgentSpaceRequest;
class UpdateAssociationRequest;
class UpdateBacklogTaskRequest;
class UpdateGoalRequest;
class UpdateOperatorAppIdpConfigRequest;
class UpdatePrivateConnectionCertificateRequest;
class UpdateRecommendationRequest;
class ValidateAwsAssociationsRequest;
/* End of service model forward declarations required in DevOpsAgentClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AllowVendedLogDeliveryForResourceResult, DevOpsAgentError> AllowVendedLogDeliveryForResourceOutcome;
typedef Aws::Utils::Outcome<AssociateServiceResult, DevOpsAgentError> AssociateServiceOutcome;
typedef Aws::Utils::Outcome<CreateAgentSpaceResult, DevOpsAgentError> CreateAgentSpaceOutcome;
typedef Aws::Utils::Outcome<CreateBacklogTaskResult, DevOpsAgentError> CreateBacklogTaskOutcome;
typedef Aws::Utils::Outcome<CreateChatResult, DevOpsAgentError> CreateChatOutcome;
typedef Aws::Utils::Outcome<CreatePrivateConnectionResult, DevOpsAgentError> CreatePrivateConnectionOutcome;
typedef Aws::Utils::Outcome<DeleteAgentSpaceResult, DevOpsAgentError> DeleteAgentSpaceOutcome;
typedef Aws::Utils::Outcome<DeletePrivateConnectionResult, DevOpsAgentError> DeletePrivateConnectionOutcome;
typedef Aws::Utils::Outcome<DeregisterServiceResult, DevOpsAgentError> DeregisterServiceOutcome;
typedef Aws::Utils::Outcome<DescribePrivateConnectionResult, DevOpsAgentError> DescribePrivateConnectionOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, DevOpsAgentError> DisableOperatorAppOutcome;
typedef Aws::Utils::Outcome<DisassociateServiceResult, DevOpsAgentError> DisassociateServiceOutcome;
typedef Aws::Utils::Outcome<EnableOperatorAppResult, DevOpsAgentError> EnableOperatorAppOutcome;
typedef Aws::Utils::Outcome<GetAccountUsageResult, DevOpsAgentError> GetAccountUsageOutcome;
typedef Aws::Utils::Outcome<GetAgentSpaceResult, DevOpsAgentError> GetAgentSpaceOutcome;
typedef Aws::Utils::Outcome<GetAssociationResult, DevOpsAgentError> GetAssociationOutcome;
typedef Aws::Utils::Outcome<GetBacklogTaskResult, DevOpsAgentError> GetBacklogTaskOutcome;
typedef Aws::Utils::Outcome<GetOperatorAppResult, DevOpsAgentError> GetOperatorAppOutcome;
typedef Aws::Utils::Outcome<GetRecommendationResult, DevOpsAgentError> GetRecommendationOutcome;
typedef Aws::Utils::Outcome<GetServiceResult, DevOpsAgentError> GetServiceOutcome;
typedef Aws::Utils::Outcome<ListAgentSpacesResult, DevOpsAgentError> ListAgentSpacesOutcome;
typedef Aws::Utils::Outcome<ListAssociationsResult, DevOpsAgentError> ListAssociationsOutcome;
typedef Aws::Utils::Outcome<ListBacklogTasksResult, DevOpsAgentError> ListBacklogTasksOutcome;
typedef Aws::Utils::Outcome<ListChatsResult, DevOpsAgentError> ListChatsOutcome;
typedef Aws::Utils::Outcome<ListExecutionsResult, DevOpsAgentError> ListExecutionsOutcome;
typedef Aws::Utils::Outcome<ListGoalsResult, DevOpsAgentError> ListGoalsOutcome;
typedef Aws::Utils::Outcome<ListJournalRecordsResult, DevOpsAgentError> ListJournalRecordsOutcome;
typedef Aws::Utils::Outcome<ListPendingMessagesResult, DevOpsAgentError> ListPendingMessagesOutcome;
typedef Aws::Utils::Outcome<ListPrivateConnectionsResult, DevOpsAgentError> ListPrivateConnectionsOutcome;
typedef Aws::Utils::Outcome<ListRecommendationsResult, DevOpsAgentError> ListRecommendationsOutcome;
typedef Aws::Utils::Outcome<ListServicesResult, DevOpsAgentError> ListServicesOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, DevOpsAgentError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListWebhooksResult, DevOpsAgentError> ListWebhooksOutcome;
typedef Aws::Utils::Outcome<RegisterServiceResult, DevOpsAgentError> RegisterServiceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, DevOpsAgentError> SendMessageOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, DevOpsAgentError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, DevOpsAgentError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAgentSpaceResult, DevOpsAgentError> UpdateAgentSpaceOutcome;
typedef Aws::Utils::Outcome<UpdateAssociationResult, DevOpsAgentError> UpdateAssociationOutcome;
typedef Aws::Utils::Outcome<UpdateBacklogTaskResult, DevOpsAgentError> UpdateBacklogTaskOutcome;
typedef Aws::Utils::Outcome<UpdateGoalResult, DevOpsAgentError> UpdateGoalOutcome;
typedef Aws::Utils::Outcome<UpdateOperatorAppIdpConfigResult, DevOpsAgentError> UpdateOperatorAppIdpConfigOutcome;
typedef Aws::Utils::Outcome<UpdatePrivateConnectionCertificateResult, DevOpsAgentError> UpdatePrivateConnectionCertificateOutcome;
typedef Aws::Utils::Outcome<UpdateRecommendationResult, DevOpsAgentError> UpdateRecommendationOutcome;
typedef Aws::Utils::Outcome<ValidateAwsAssociationsResult, DevOpsAgentError> ValidateAwsAssociationsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AllowVendedLogDeliveryForResourceOutcome> AllowVendedLogDeliveryForResourceOutcomeCallable;
typedef std::future<AssociateServiceOutcome> AssociateServiceOutcomeCallable;
typedef std::future<CreateAgentSpaceOutcome> CreateAgentSpaceOutcomeCallable;
typedef std::future<CreateBacklogTaskOutcome> CreateBacklogTaskOutcomeCallable;
typedef std::future<CreateChatOutcome> CreateChatOutcomeCallable;
typedef std::future<CreatePrivateConnectionOutcome> CreatePrivateConnectionOutcomeCallable;
typedef std::future<DeleteAgentSpaceOutcome> DeleteAgentSpaceOutcomeCallable;
typedef std::future<DeletePrivateConnectionOutcome> DeletePrivateConnectionOutcomeCallable;
typedef std::future<DeregisterServiceOutcome> DeregisterServiceOutcomeCallable;
typedef std::future<DescribePrivateConnectionOutcome> DescribePrivateConnectionOutcomeCallable;
typedef std::future<DisableOperatorAppOutcome> DisableOperatorAppOutcomeCallable;
typedef std::future<DisassociateServiceOutcome> DisassociateServiceOutcomeCallable;
typedef std::future<EnableOperatorAppOutcome> EnableOperatorAppOutcomeCallable;
typedef std::future<GetAccountUsageOutcome> GetAccountUsageOutcomeCallable;
typedef std::future<GetAgentSpaceOutcome> GetAgentSpaceOutcomeCallable;
typedef std::future<GetAssociationOutcome> GetAssociationOutcomeCallable;
typedef std::future<GetBacklogTaskOutcome> GetBacklogTaskOutcomeCallable;
typedef std::future<GetOperatorAppOutcome> GetOperatorAppOutcomeCallable;
typedef std::future<GetRecommendationOutcome> GetRecommendationOutcomeCallable;
typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
typedef std::future<ListAgentSpacesOutcome> ListAgentSpacesOutcomeCallable;
typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
typedef std::future<ListBacklogTasksOutcome> ListBacklogTasksOutcomeCallable;
typedef std::future<ListChatsOutcome> ListChatsOutcomeCallable;
typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
typedef std::future<ListGoalsOutcome> ListGoalsOutcomeCallable;
typedef std::future<ListJournalRecordsOutcome> ListJournalRecordsOutcomeCallable;
typedef std::future<ListPendingMessagesOutcome> ListPendingMessagesOutcomeCallable;
typedef std::future<ListPrivateConnectionsOutcome> ListPrivateConnectionsOutcomeCallable;
typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListWebhooksOutcome> ListWebhooksOutcomeCallable;
typedef std::future<RegisterServiceOutcome> RegisterServiceOutcomeCallable;
typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAgentSpaceOutcome> UpdateAgentSpaceOutcomeCallable;
typedef std::future<UpdateAssociationOutcome> UpdateAssociationOutcomeCallable;
typedef std::future<UpdateBacklogTaskOutcome> UpdateBacklogTaskOutcomeCallable;
typedef std::future<UpdateGoalOutcome> UpdateGoalOutcomeCallable;
typedef std::future<UpdateOperatorAppIdpConfigOutcome> UpdateOperatorAppIdpConfigOutcomeCallable;
typedef std::future<UpdatePrivateConnectionCertificateOutcome> UpdatePrivateConnectionCertificateOutcomeCallable;
typedef std::future<UpdateRecommendationOutcome> UpdateRecommendationOutcomeCallable;
typedef std::future<ValidateAwsAssociationsOutcome> ValidateAwsAssociationsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class DevOpsAgentClient;

/* Service model async handlers definitions */
typedef std::function<void(const DevOpsAgentClient*, const Model::AllowVendedLogDeliveryForResourceRequest&,
                           const Model::AllowVendedLogDeliveryForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AllowVendedLogDeliveryForResourceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::AssociateServiceRequest&, const Model::AssociateServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateServiceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::CreateAgentSpaceRequest&, const Model::CreateAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAgentSpaceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::CreateBacklogTaskRequest&, const Model::CreateBacklogTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBacklogTaskResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::CreateChatRequest&, const Model::CreateChatOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateChatResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::CreatePrivateConnectionRequest&,
                           const Model::CreatePrivateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePrivateConnectionResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::DeleteAgentSpaceRequest&, const Model::DeleteAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAgentSpaceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::DeletePrivateConnectionRequest&,
                           const Model::DeletePrivateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePrivateConnectionResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::DeregisterServiceRequest&, const Model::DeregisterServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeregisterServiceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::DescribePrivateConnectionRequest&,
                           const Model::DescribePrivateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribePrivateConnectionResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::DisableOperatorAppRequest&, const Model::DisableOperatorAppOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisableOperatorAppResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::DisassociateServiceRequest&, const Model::DisassociateServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateServiceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::EnableOperatorAppRequest&, const Model::EnableOperatorAppOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EnableOperatorAppResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetAccountUsageRequest&, const Model::GetAccountUsageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccountUsageResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetAgentSpaceRequest&, const Model::GetAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgentSpaceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetAssociationRequest&, const Model::GetAssociationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAssociationResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetBacklogTaskRequest&, const Model::GetBacklogTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBacklogTaskResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetOperatorAppRequest&, const Model::GetOperatorAppOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOperatorAppResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetRecommendationRequest&, const Model::GetRecommendationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRecommendationResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetServiceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListAgentSpacesRequest&, const Model::ListAgentSpacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgentSpacesResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAssociationsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListBacklogTasksRequest&, const Model::ListBacklogTasksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBacklogTasksResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListChatsRequest&, const Model::ListChatsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListChatsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListExecutionsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListGoalsRequest&, const Model::ListGoalsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGoalsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListJournalRecordsRequest&, const Model::ListJournalRecordsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListJournalRecordsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListPendingMessagesRequest&, const Model::ListPendingMessagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPendingMessagesResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListPrivateConnectionsRequest&,
                           const Model::ListPrivateConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPrivateConnectionsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRecommendationsResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListServicesResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ListWebhooksRequest&, const Model::ListWebhooksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWebhooksResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::RegisterServiceRequest&, const Model::RegisterServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RegisterServiceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::SendMessageRequest&, const Model::SendMessageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SendMessageResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdateAgentSpaceRequest&, const Model::UpdateAgentSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAgentSpaceResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdateAssociationRequest&, const Model::UpdateAssociationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAssociationResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdateBacklogTaskRequest&, const Model::UpdateBacklogTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBacklogTaskResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdateGoalRequest&, const Model::UpdateGoalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGoalResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdateOperatorAppIdpConfigRequest&,
                           const Model::UpdateOperatorAppIdpConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateOperatorAppIdpConfigResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdatePrivateConnectionCertificateRequest&,
                           const Model::UpdatePrivateConnectionCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePrivateConnectionCertificateResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::UpdateRecommendationRequest&, const Model::UpdateRecommendationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRecommendationResponseReceivedHandler;
typedef std::function<void(const DevOpsAgentClient*, const Model::ValidateAwsAssociationsRequest&,
                           const Model::ValidateAwsAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ValidateAwsAssociationsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace DevOpsAgent
}  // namespace Aws
