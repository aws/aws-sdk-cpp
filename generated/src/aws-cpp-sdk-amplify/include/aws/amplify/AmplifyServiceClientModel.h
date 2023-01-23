/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/amplify/AmplifyErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/amplify/AmplifyEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AmplifyClient header */
#include <aws/amplify/model/CreateAppResult.h>
#include <aws/amplify/model/CreateBackendEnvironmentResult.h>
#include <aws/amplify/model/CreateBranchResult.h>
#include <aws/amplify/model/CreateDeploymentResult.h>
#include <aws/amplify/model/CreateDomainAssociationResult.h>
#include <aws/amplify/model/CreateWebhookResult.h>
#include <aws/amplify/model/DeleteAppResult.h>
#include <aws/amplify/model/DeleteBackendEnvironmentResult.h>
#include <aws/amplify/model/DeleteBranchResult.h>
#include <aws/amplify/model/DeleteDomainAssociationResult.h>
#include <aws/amplify/model/DeleteJobResult.h>
#include <aws/amplify/model/DeleteWebhookResult.h>
#include <aws/amplify/model/GenerateAccessLogsResult.h>
#include <aws/amplify/model/GetAppResult.h>
#include <aws/amplify/model/GetArtifactUrlResult.h>
#include <aws/amplify/model/GetBackendEnvironmentResult.h>
#include <aws/amplify/model/GetBranchResult.h>
#include <aws/amplify/model/GetDomainAssociationResult.h>
#include <aws/amplify/model/GetJobResult.h>
#include <aws/amplify/model/GetWebhookResult.h>
#include <aws/amplify/model/ListAppsResult.h>
#include <aws/amplify/model/ListArtifactsResult.h>
#include <aws/amplify/model/ListBackendEnvironmentsResult.h>
#include <aws/amplify/model/ListBranchesResult.h>
#include <aws/amplify/model/ListDomainAssociationsResult.h>
#include <aws/amplify/model/ListJobsResult.h>
#include <aws/amplify/model/ListTagsForResourceResult.h>
#include <aws/amplify/model/ListWebhooksResult.h>
#include <aws/amplify/model/StartDeploymentResult.h>
#include <aws/amplify/model/StartJobResult.h>
#include <aws/amplify/model/StopJobResult.h>
#include <aws/amplify/model/TagResourceResult.h>
#include <aws/amplify/model/UntagResourceResult.h>
#include <aws/amplify/model/UpdateAppResult.h>
#include <aws/amplify/model/UpdateBranchResult.h>
#include <aws/amplify/model/UpdateDomainAssociationResult.h>
#include <aws/amplify/model/UpdateWebhookResult.h>
/* End of service model headers required in AmplifyClient header */

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

  namespace Amplify
  {
    using AmplifyClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AmplifyEndpointProviderBase = Aws::Amplify::Endpoint::AmplifyEndpointProviderBase;
    using AmplifyEndpointProvider = Aws::Amplify::Endpoint::AmplifyEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AmplifyClient header */
      class CreateAppRequest;
      class CreateBackendEnvironmentRequest;
      class CreateBranchRequest;
      class CreateDeploymentRequest;
      class CreateDomainAssociationRequest;
      class CreateWebhookRequest;
      class DeleteAppRequest;
      class DeleteBackendEnvironmentRequest;
      class DeleteBranchRequest;
      class DeleteDomainAssociationRequest;
      class DeleteJobRequest;
      class DeleteWebhookRequest;
      class GenerateAccessLogsRequest;
      class GetAppRequest;
      class GetArtifactUrlRequest;
      class GetBackendEnvironmentRequest;
      class GetBranchRequest;
      class GetDomainAssociationRequest;
      class GetJobRequest;
      class GetWebhookRequest;
      class ListAppsRequest;
      class ListArtifactsRequest;
      class ListBackendEnvironmentsRequest;
      class ListBranchesRequest;
      class ListDomainAssociationsRequest;
      class ListJobsRequest;
      class ListTagsForResourceRequest;
      class ListWebhooksRequest;
      class StartDeploymentRequest;
      class StartJobRequest;
      class StopJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAppRequest;
      class UpdateBranchRequest;
      class UpdateDomainAssociationRequest;
      class UpdateWebhookRequest;
      /* End of service model forward declarations required in AmplifyClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAppResult, AmplifyError> CreateAppOutcome;
      typedef Aws::Utils::Outcome<CreateBackendEnvironmentResult, AmplifyError> CreateBackendEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateBranchResult, AmplifyError> CreateBranchOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, AmplifyError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateDomainAssociationResult, AmplifyError> CreateDomainAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateWebhookResult, AmplifyError> CreateWebhookOutcome;
      typedef Aws::Utils::Outcome<DeleteAppResult, AmplifyError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<DeleteBackendEnvironmentResult, AmplifyError> DeleteBackendEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteBranchResult, AmplifyError> DeleteBranchOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainAssociationResult, AmplifyError> DeleteDomainAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteJobResult, AmplifyError> DeleteJobOutcome;
      typedef Aws::Utils::Outcome<DeleteWebhookResult, AmplifyError> DeleteWebhookOutcome;
      typedef Aws::Utils::Outcome<GenerateAccessLogsResult, AmplifyError> GenerateAccessLogsOutcome;
      typedef Aws::Utils::Outcome<GetAppResult, AmplifyError> GetAppOutcome;
      typedef Aws::Utils::Outcome<GetArtifactUrlResult, AmplifyError> GetArtifactUrlOutcome;
      typedef Aws::Utils::Outcome<GetBackendEnvironmentResult, AmplifyError> GetBackendEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetBranchResult, AmplifyError> GetBranchOutcome;
      typedef Aws::Utils::Outcome<GetDomainAssociationResult, AmplifyError> GetDomainAssociationOutcome;
      typedef Aws::Utils::Outcome<GetJobResult, AmplifyError> GetJobOutcome;
      typedef Aws::Utils::Outcome<GetWebhookResult, AmplifyError> GetWebhookOutcome;
      typedef Aws::Utils::Outcome<ListAppsResult, AmplifyError> ListAppsOutcome;
      typedef Aws::Utils::Outcome<ListArtifactsResult, AmplifyError> ListArtifactsOutcome;
      typedef Aws::Utils::Outcome<ListBackendEnvironmentsResult, AmplifyError> ListBackendEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListBranchesResult, AmplifyError> ListBranchesOutcome;
      typedef Aws::Utils::Outcome<ListDomainAssociationsResult, AmplifyError> ListDomainAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, AmplifyError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AmplifyError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWebhooksResult, AmplifyError> ListWebhooksOutcome;
      typedef Aws::Utils::Outcome<StartDeploymentResult, AmplifyError> StartDeploymentOutcome;
      typedef Aws::Utils::Outcome<StartJobResult, AmplifyError> StartJobOutcome;
      typedef Aws::Utils::Outcome<StopJobResult, AmplifyError> StopJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AmplifyError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AmplifyError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAppResult, AmplifyError> UpdateAppOutcome;
      typedef Aws::Utils::Outcome<UpdateBranchResult, AmplifyError> UpdateBranchOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainAssociationResult, AmplifyError> UpdateDomainAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateWebhookResult, AmplifyError> UpdateWebhookOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
      typedef std::future<CreateBackendEnvironmentOutcome> CreateBackendEnvironmentOutcomeCallable;
      typedef std::future<CreateBranchOutcome> CreateBranchOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<CreateDomainAssociationOutcome> CreateDomainAssociationOutcomeCallable;
      typedef std::future<CreateWebhookOutcome> CreateWebhookOutcomeCallable;
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteBackendEnvironmentOutcome> DeleteBackendEnvironmentOutcomeCallable;
      typedef std::future<DeleteBranchOutcome> DeleteBranchOutcomeCallable;
      typedef std::future<DeleteDomainAssociationOutcome> DeleteDomainAssociationOutcomeCallable;
      typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
      typedef std::future<DeleteWebhookOutcome> DeleteWebhookOutcomeCallable;
      typedef std::future<GenerateAccessLogsOutcome> GenerateAccessLogsOutcomeCallable;
      typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
      typedef std::future<GetArtifactUrlOutcome> GetArtifactUrlOutcomeCallable;
      typedef std::future<GetBackendEnvironmentOutcome> GetBackendEnvironmentOutcomeCallable;
      typedef std::future<GetBranchOutcome> GetBranchOutcomeCallable;
      typedef std::future<GetDomainAssociationOutcome> GetDomainAssociationOutcomeCallable;
      typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
      typedef std::future<GetWebhookOutcome> GetWebhookOutcomeCallable;
      typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
      typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
      typedef std::future<ListBackendEnvironmentsOutcome> ListBackendEnvironmentsOutcomeCallable;
      typedef std::future<ListBranchesOutcome> ListBranchesOutcomeCallable;
      typedef std::future<ListDomainAssociationsOutcome> ListDomainAssociationsOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWebhooksOutcome> ListWebhooksOutcomeCallable;
      typedef std::future<StartDeploymentOutcome> StartDeploymentOutcomeCallable;
      typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
      typedef std::future<StopJobOutcome> StopJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
      typedef std::future<UpdateBranchOutcome> UpdateBranchOutcomeCallable;
      typedef std::future<UpdateDomainAssociationOutcome> UpdateDomainAssociationOutcomeCallable;
      typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AmplifyClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AmplifyClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateBackendEnvironmentRequest&, const Model::CreateBackendEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackendEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateBranchRequest&, const Model::CreateBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateDomainAssociationRequest&, const Model::CreateDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::CreateWebhookRequest&, const Model::CreateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebhookResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteBackendEnvironmentRequest&, const Model::DeleteBackendEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackendEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteBranchRequest&, const Model::DeleteBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteDomainAssociationRequest&, const Model::DeleteDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::DeleteWebhookRequest&, const Model::DeleteWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebhookResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GenerateAccessLogsRequest&, const Model::GenerateAccessLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateAccessLogsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetAppRequest&, const Model::GetAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetArtifactUrlRequest&, const Model::GetArtifactUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArtifactUrlResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetBackendEnvironmentRequest&, const Model::GetBackendEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBackendEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetBranchRequest&, const Model::GetBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetDomainAssociationRequest&, const Model::GetDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::GetWebhookRequest&, const Model::GetWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebhookResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListArtifactsRequest&, const Model::ListArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArtifactsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListBackendEnvironmentsRequest&, const Model::ListBackendEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBackendEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListBranchesRequest&, const Model::ListBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBranchesResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListDomainAssociationsRequest&, const Model::ListDomainAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainAssociationsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::ListWebhooksRequest&, const Model::ListWebhooksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebhooksResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::StartDeploymentRequest&, const Model::StartDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeploymentResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::StartJobRequest&, const Model::StartJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::StopJobRequest&, const Model::StopJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopJobResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateBranchRequest&, const Model::UpdateBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBranchResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateDomainAssociationRequest&, const Model::UpdateDomainAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainAssociationResponseReceivedHandler;
    typedef std::function<void(const AmplifyClient*, const Model::UpdateWebhookRequest&, const Model::UpdateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebhookResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Amplify
} // namespace Aws
