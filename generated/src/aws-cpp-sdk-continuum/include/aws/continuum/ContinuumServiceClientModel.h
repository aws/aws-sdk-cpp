/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/continuum/ContinuumEndpointProvider.h>
#include <aws/continuum/ContinuumErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ContinuumClient header */
#include <aws/continuum/model/AssociateCollectorResult.h>
#include <aws/continuum/model/CreateCodeFindingResult.h>
#include <aws/continuum/model/CreateCodeScanResult.h>
#include <aws/continuum/model/CreateCollectorRequest.h>
#include <aws/continuum/model/CreateCollectorResult.h>
#include <aws/continuum/model/CreateEnvironmentResult.h>
#include <aws/continuum/model/CreateIntegrationResult.h>
#include <aws/continuum/model/GetCodeFindingResult.h>
#include <aws/continuum/model/GetCodeIssueArtifactResult.h>
#include <aws/continuum/model/GetCodeIssueResult.h>
#include <aws/continuum/model/GetCodeScanResult.h>
#include <aws/continuum/model/GetCollectorDataAccessAuthorizationResult.h>
#include <aws/continuum/model/GetCollectorResult.h>
#include <aws/continuum/model/GetEnvironmentResult.h>
#include <aws/continuum/model/GetIntegrationResult.h>
#include <aws/continuum/model/GetResourcePolicyResult.h>
#include <aws/continuum/model/ListAssociatedCollectorsResult.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsResult.h>
#include <aws/continuum/model/ListCodeFindingsResult.h>
#include <aws/continuum/model/ListCodeIssueArtifactsResult.h>
#include <aws/continuum/model/ListCodeIssuesResult.h>
#include <aws/continuum/model/ListCodeScansResult.h>
#include <aws/continuum/model/ListCollectorsRequest.h>
#include <aws/continuum/model/ListCollectorsResult.h>
#include <aws/continuum/model/ListEnvironmentsRequest.h>
#include <aws/continuum/model/ListEnvironmentsResult.h>
#include <aws/continuum/model/ListIntegrationsRequest.h>
#include <aws/continuum/model/ListIntegrationsResult.h>
#include <aws/continuum/model/PutResourcePolicyResult.h>
#include <aws/continuum/model/StartIntegrationAuthorizationResult.h>
#include <aws/continuum/model/UpdateCollectorResult.h>
#include <aws/continuum/model/UpdateEnvironmentResult.h>
#include <aws/continuum/model/UpdateIntegrationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ContinuumClient header */

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

namespace Continuum {
using ContinuumClientConfiguration = Aws::Client::GenericClientConfiguration;
using ContinuumEndpointProviderBase = Aws::Continuum::Endpoint::ContinuumEndpointProviderBase;
using ContinuumEndpointProvider = Aws::Continuum::Endpoint::ContinuumEndpointProvider;

namespace Model {
/* Service model forward declarations required in ContinuumClient header */
class AssociateCollectorRequest;
class CreateCodeFindingRequest;
class CreateCodeScanRequest;
class CreateCollectorRequest;
class CreateEnvironmentRequest;
class CreateIntegrationRequest;
class DeleteCollectorRequest;
class DeleteEnvironmentRequest;
class DeleteIntegrationRequest;
class DisassociateCollectorRequest;
class GetCodeFindingRequest;
class GetCodeIssueRequest;
class GetCodeIssueArtifactRequest;
class GetCodeScanRequest;
class GetCollectorRequest;
class GetCollectorDataAccessAuthorizationRequest;
class GetEnvironmentRequest;
class GetIntegrationRequest;
class GetResourcePolicyRequest;
class ListAssociatedCollectorsRequest;
class ListAssociatedEnvironmentsRequest;
class ListCodeFindingsRequest;
class ListCodeIssueArtifactsRequest;
class ListCodeIssuesRequest;
class ListCodeScansRequest;
class ListCollectorsRequest;
class ListEnvironmentsRequest;
class ListIntegrationsRequest;
class PutResourcePolicyRequest;
class StartIntegrationAuthorizationRequest;
class UpdateCollectorRequest;
class UpdateEnvironmentRequest;
class UpdateIntegrationRequest;
/* End of service model forward declarations required in ContinuumClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateCollectorResult, ContinuumError> AssociateCollectorOutcome;
typedef Aws::Utils::Outcome<CreateCodeFindingResult, ContinuumError> CreateCodeFindingOutcome;
typedef Aws::Utils::Outcome<CreateCodeScanResult, ContinuumError> CreateCodeScanOutcome;
typedef Aws::Utils::Outcome<CreateCollectorResult, ContinuumError> CreateCollectorOutcome;
typedef Aws::Utils::Outcome<CreateEnvironmentResult, ContinuumError> CreateEnvironmentOutcome;
typedef Aws::Utils::Outcome<CreateIntegrationResult, ContinuumError> CreateIntegrationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ContinuumError> DeleteCollectorOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ContinuumError> DeleteEnvironmentOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ContinuumError> DeleteIntegrationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ContinuumError> DisassociateCollectorOutcome;
typedef Aws::Utils::Outcome<GetCodeFindingResult, ContinuumError> GetCodeFindingOutcome;
typedef Aws::Utils::Outcome<GetCodeIssueResult, ContinuumError> GetCodeIssueOutcome;
typedef Aws::Utils::Outcome<GetCodeIssueArtifactResult, ContinuumError> GetCodeIssueArtifactOutcome;
typedef Aws::Utils::Outcome<GetCodeScanResult, ContinuumError> GetCodeScanOutcome;
typedef Aws::Utils::Outcome<GetCollectorResult, ContinuumError> GetCollectorOutcome;
typedef Aws::Utils::Outcome<GetCollectorDataAccessAuthorizationResult, ContinuumError> GetCollectorDataAccessAuthorizationOutcome;
typedef Aws::Utils::Outcome<GetEnvironmentResult, ContinuumError> GetEnvironmentOutcome;
typedef Aws::Utils::Outcome<GetIntegrationResult, ContinuumError> GetIntegrationOutcome;
typedef Aws::Utils::Outcome<GetResourcePolicyResult, ContinuumError> GetResourcePolicyOutcome;
typedef Aws::Utils::Outcome<ListAssociatedCollectorsResult, ContinuumError> ListAssociatedCollectorsOutcome;
typedef Aws::Utils::Outcome<ListAssociatedEnvironmentsResult, ContinuumError> ListAssociatedEnvironmentsOutcome;
typedef Aws::Utils::Outcome<ListCodeFindingsResult, ContinuumError> ListCodeFindingsOutcome;
typedef Aws::Utils::Outcome<ListCodeIssueArtifactsResult, ContinuumError> ListCodeIssueArtifactsOutcome;
typedef Aws::Utils::Outcome<ListCodeIssuesResult, ContinuumError> ListCodeIssuesOutcome;
typedef Aws::Utils::Outcome<ListCodeScansResult, ContinuumError> ListCodeScansOutcome;
typedef Aws::Utils::Outcome<ListCollectorsResult, ContinuumError> ListCollectorsOutcome;
typedef Aws::Utils::Outcome<ListEnvironmentsResult, ContinuumError> ListEnvironmentsOutcome;
typedef Aws::Utils::Outcome<ListIntegrationsResult, ContinuumError> ListIntegrationsOutcome;
typedef Aws::Utils::Outcome<PutResourcePolicyResult, ContinuumError> PutResourcePolicyOutcome;
typedef Aws::Utils::Outcome<StartIntegrationAuthorizationResult, ContinuumError> StartIntegrationAuthorizationOutcome;
typedef Aws::Utils::Outcome<UpdateCollectorResult, ContinuumError> UpdateCollectorOutcome;
typedef Aws::Utils::Outcome<UpdateEnvironmentResult, ContinuumError> UpdateEnvironmentOutcome;
typedef Aws::Utils::Outcome<UpdateIntegrationResult, ContinuumError> UpdateIntegrationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateCollectorOutcome> AssociateCollectorOutcomeCallable;
typedef std::future<CreateCodeFindingOutcome> CreateCodeFindingOutcomeCallable;
typedef std::future<CreateCodeScanOutcome> CreateCodeScanOutcomeCallable;
typedef std::future<CreateCollectorOutcome> CreateCollectorOutcomeCallable;
typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
typedef std::future<DeleteCollectorOutcome> DeleteCollectorOutcomeCallable;
typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
typedef std::future<DisassociateCollectorOutcome> DisassociateCollectorOutcomeCallable;
typedef std::future<GetCodeFindingOutcome> GetCodeFindingOutcomeCallable;
typedef std::future<GetCodeIssueOutcome> GetCodeIssueOutcomeCallable;
typedef std::future<GetCodeIssueArtifactOutcome> GetCodeIssueArtifactOutcomeCallable;
typedef std::future<GetCodeScanOutcome> GetCodeScanOutcomeCallable;
typedef std::future<GetCollectorOutcome> GetCollectorOutcomeCallable;
typedef std::future<GetCollectorDataAccessAuthorizationOutcome> GetCollectorDataAccessAuthorizationOutcomeCallable;
typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
typedef std::future<ListAssociatedCollectorsOutcome> ListAssociatedCollectorsOutcomeCallable;
typedef std::future<ListAssociatedEnvironmentsOutcome> ListAssociatedEnvironmentsOutcomeCallable;
typedef std::future<ListCodeFindingsOutcome> ListCodeFindingsOutcomeCallable;
typedef std::future<ListCodeIssueArtifactsOutcome> ListCodeIssueArtifactsOutcomeCallable;
typedef std::future<ListCodeIssuesOutcome> ListCodeIssuesOutcomeCallable;
typedef std::future<ListCodeScansOutcome> ListCodeScansOutcomeCallable;
typedef std::future<ListCollectorsOutcome> ListCollectorsOutcomeCallable;
typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
typedef std::future<ListIntegrationsOutcome> ListIntegrationsOutcomeCallable;
typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
typedef std::future<StartIntegrationAuthorizationOutcome> StartIntegrationAuthorizationOutcomeCallable;
typedef std::future<UpdateCollectorOutcome> UpdateCollectorOutcomeCallable;
typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ContinuumClient;

/* Service model async handlers definitions */
typedef std::function<void(const ContinuumClient*, const Model::AssociateCollectorRequest&, const Model::AssociateCollectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateCollectorResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::CreateCodeFindingRequest&, const Model::CreateCodeFindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCodeFindingResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::CreateCodeScanRequest&, const Model::CreateCodeScanOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCodeScanResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::CreateCollectorRequest&, const Model::CreateCollectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCollectorResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEnvironmentResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateIntegrationResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::DeleteCollectorRequest&, const Model::DeleteCollectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCollectorResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEnvironmentResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteIntegrationResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::DisassociateCollectorRequest&, const Model::DisassociateCollectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateCollectorResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetCodeFindingRequest&, const Model::GetCodeFindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCodeFindingResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetCodeIssueRequest&, const Model::GetCodeIssueOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCodeIssueResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetCodeIssueArtifactRequest&, const Model::GetCodeIssueArtifactOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCodeIssueArtifactResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetCodeScanRequest&, const Model::GetCodeScanOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCodeScanResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetCollectorRequest&, const Model::GetCollectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCollectorResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetCollectorDataAccessAuthorizationRequest&,
                           const Model::GetCollectorDataAccessAuthorizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCollectorDataAccessAuthorizationResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEnvironmentResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePolicyResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListAssociatedCollectorsRequest&,
                           const Model::ListAssociatedCollectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAssociatedCollectorsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListAssociatedEnvironmentsRequest&,
                           const Model::ListAssociatedEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAssociatedEnvironmentsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListCodeFindingsRequest&, const Model::ListCodeFindingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeFindingsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListCodeIssueArtifactsRequest&, const Model::ListCodeIssueArtifactsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeIssueArtifactsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListCodeIssuesRequest&, const Model::ListCodeIssuesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeIssuesResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListCodeScansRequest&, const Model::ListCodeScansOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeScansResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListCollectorsRequest&, const Model::ListCollectorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCollectorsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEnvironmentsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::ListIntegrationsRequest&, const Model::ListIntegrationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListIntegrationsResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutResourcePolicyResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::StartIntegrationAuthorizationRequest&,
                           const Model::StartIntegrationAuthorizationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartIntegrationAuthorizationResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::UpdateCollectorRequest&, const Model::UpdateCollectorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCollectorResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateEnvironmentResponseReceivedHandler;
typedef std::function<void(const ContinuumClient*, const Model::UpdateIntegrationRequest&, const Model::UpdateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateIntegrationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Continuum
}  // namespace Aws
