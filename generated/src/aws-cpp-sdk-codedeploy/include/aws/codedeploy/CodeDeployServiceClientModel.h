/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codedeploy/CodeDeployErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codedeploy/CodeDeployEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeDeployClient header */
#include <aws/codedeploy/model/BatchGetApplicationRevisionsResult.h>
#include <aws/codedeploy/model/BatchGetApplicationsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentGroupsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentTargetsResult.h>
#include <aws/codedeploy/model/BatchGetDeploymentsResult.h>
#include <aws/codedeploy/model/BatchGetOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/CreateApplicationResult.h>
#include <aws/codedeploy/model/CreateDeploymentResult.h>
#include <aws/codedeploy/model/CreateDeploymentConfigResult.h>
#include <aws/codedeploy/model/CreateDeploymentGroupResult.h>
#include <aws/codedeploy/model/DeleteDeploymentGroupResult.h>
#include <aws/codedeploy/model/DeleteGitHubAccountTokenResult.h>
#include <aws/codedeploy/model/DeleteResourcesByExternalIdResult.h>
#include <aws/codedeploy/model/GetApplicationResult.h>
#include <aws/codedeploy/model/GetApplicationRevisionResult.h>
#include <aws/codedeploy/model/GetDeploymentResult.h>
#include <aws/codedeploy/model/GetDeploymentConfigResult.h>
#include <aws/codedeploy/model/GetDeploymentGroupResult.h>
#include <aws/codedeploy/model/GetDeploymentTargetResult.h>
#include <aws/codedeploy/model/GetOnPremisesInstanceResult.h>
#include <aws/codedeploy/model/ListApplicationRevisionsResult.h>
#include <aws/codedeploy/model/ListApplicationsResult.h>
#include <aws/codedeploy/model/ListDeploymentConfigsResult.h>
#include <aws/codedeploy/model/ListDeploymentGroupsResult.h>
#include <aws/codedeploy/model/ListDeploymentTargetsResult.h>
#include <aws/codedeploy/model/ListDeploymentsResult.h>
#include <aws/codedeploy/model/ListGitHubAccountTokenNamesResult.h>
#include <aws/codedeploy/model/ListOnPremisesInstancesResult.h>
#include <aws/codedeploy/model/ListTagsForResourceResult.h>
#include <aws/codedeploy/model/PutLifecycleEventHookExecutionStatusResult.h>
#include <aws/codedeploy/model/StopDeploymentResult.h>
#include <aws/codedeploy/model/TagResourceResult.h>
#include <aws/codedeploy/model/UntagResourceResult.h>
#include <aws/codedeploy/model/UpdateDeploymentGroupResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CodeDeployClient header */

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

  namespace CodeDeploy
  {
    using CodeDeployClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeDeployEndpointProviderBase = Aws::CodeDeploy::Endpoint::CodeDeployEndpointProviderBase;
    using CodeDeployEndpointProvider = Aws::CodeDeploy::Endpoint::CodeDeployEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeDeployClient header */
      class AddTagsToOnPremisesInstancesRequest;
      class BatchGetApplicationRevisionsRequest;
      class BatchGetApplicationsRequest;
      class BatchGetDeploymentGroupsRequest;
      class BatchGetDeploymentTargetsRequest;
      class BatchGetDeploymentsRequest;
      class BatchGetOnPremisesInstancesRequest;
      class ContinueDeploymentRequest;
      class CreateApplicationRequest;
      class CreateDeploymentRequest;
      class CreateDeploymentConfigRequest;
      class CreateDeploymentGroupRequest;
      class DeleteApplicationRequest;
      class DeleteDeploymentConfigRequest;
      class DeleteDeploymentGroupRequest;
      class DeleteGitHubAccountTokenRequest;
      class DeleteResourcesByExternalIdRequest;
      class DeregisterOnPremisesInstanceRequest;
      class GetApplicationRequest;
      class GetApplicationRevisionRequest;
      class GetDeploymentRequest;
      class GetDeploymentConfigRequest;
      class GetDeploymentGroupRequest;
      class GetDeploymentTargetRequest;
      class GetOnPremisesInstanceRequest;
      class ListApplicationRevisionsRequest;
      class ListApplicationsRequest;
      class ListDeploymentConfigsRequest;
      class ListDeploymentGroupsRequest;
      class ListDeploymentTargetsRequest;
      class ListDeploymentsRequest;
      class ListGitHubAccountTokenNamesRequest;
      class ListOnPremisesInstancesRequest;
      class ListTagsForResourceRequest;
      class PutLifecycleEventHookExecutionStatusRequest;
      class RegisterApplicationRevisionRequest;
      class RegisterOnPremisesInstanceRequest;
      class RemoveTagsFromOnPremisesInstancesRequest;
      class StopDeploymentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateDeploymentGroupRequest;
      /* End of service model forward declarations required in CodeDeployClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> AddTagsToOnPremisesInstancesOutcome;
      typedef Aws::Utils::Outcome<BatchGetApplicationRevisionsResult, CodeDeployError> BatchGetApplicationRevisionsOutcome;
      typedef Aws::Utils::Outcome<BatchGetApplicationsResult, CodeDeployError> BatchGetApplicationsOutcome;
      typedef Aws::Utils::Outcome<BatchGetDeploymentGroupsResult, CodeDeployError> BatchGetDeploymentGroupsOutcome;
      typedef Aws::Utils::Outcome<BatchGetDeploymentTargetsResult, CodeDeployError> BatchGetDeploymentTargetsOutcome;
      typedef Aws::Utils::Outcome<BatchGetDeploymentsResult, CodeDeployError> BatchGetDeploymentsOutcome;
      typedef Aws::Utils::Outcome<BatchGetOnPremisesInstancesResult, CodeDeployError> BatchGetOnPremisesInstancesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> ContinueDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, CodeDeployError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, CodeDeployError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentConfigResult, CodeDeployError> CreateDeploymentConfigOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentGroupResult, CodeDeployError> CreateDeploymentGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> DeleteDeploymentConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteDeploymentGroupResult, CodeDeployError> DeleteDeploymentGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteGitHubAccountTokenResult, CodeDeployError> DeleteGitHubAccountTokenOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcesByExternalIdResult, CodeDeployError> DeleteResourcesByExternalIdOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> DeregisterOnPremisesInstanceOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, CodeDeployError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetApplicationRevisionResult, CodeDeployError> GetApplicationRevisionOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentResult, CodeDeployError> GetDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentConfigResult, CodeDeployError> GetDeploymentConfigOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentGroupResult, CodeDeployError> GetDeploymentGroupOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentTargetResult, CodeDeployError> GetDeploymentTargetOutcome;
      typedef Aws::Utils::Outcome<GetOnPremisesInstanceResult, CodeDeployError> GetOnPremisesInstanceOutcome;
      typedef Aws::Utils::Outcome<ListApplicationRevisionsResult, CodeDeployError> ListApplicationRevisionsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, CodeDeployError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentConfigsResult, CodeDeployError> ListDeploymentConfigsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentGroupsResult, CodeDeployError> ListDeploymentGroupsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentTargetsResult, CodeDeployError> ListDeploymentTargetsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentsResult, CodeDeployError> ListDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListGitHubAccountTokenNamesResult, CodeDeployError> ListGitHubAccountTokenNamesOutcome;
      typedef Aws::Utils::Outcome<ListOnPremisesInstancesResult, CodeDeployError> ListOnPremisesInstancesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeDeployError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutLifecycleEventHookExecutionStatusResult, CodeDeployError> PutLifecycleEventHookExecutionStatusOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> RegisterApplicationRevisionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> RegisterOnPremisesInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> RemoveTagsFromOnPremisesInstancesOutcome;
      typedef Aws::Utils::Outcome<StopDeploymentResult, CodeDeployError> StopDeploymentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeDeployError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeDeployError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CodeDeployError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateDeploymentGroupResult, CodeDeployError> UpdateDeploymentGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsToOnPremisesInstancesOutcome> AddTagsToOnPremisesInstancesOutcomeCallable;
      typedef std::future<BatchGetApplicationRevisionsOutcome> BatchGetApplicationRevisionsOutcomeCallable;
      typedef std::future<BatchGetApplicationsOutcome> BatchGetApplicationsOutcomeCallable;
      typedef std::future<BatchGetDeploymentGroupsOutcome> BatchGetDeploymentGroupsOutcomeCallable;
      typedef std::future<BatchGetDeploymentTargetsOutcome> BatchGetDeploymentTargetsOutcomeCallable;
      typedef std::future<BatchGetDeploymentsOutcome> BatchGetDeploymentsOutcomeCallable;
      typedef std::future<BatchGetOnPremisesInstancesOutcome> BatchGetOnPremisesInstancesOutcomeCallable;
      typedef std::future<ContinueDeploymentOutcome> ContinueDeploymentOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<CreateDeploymentConfigOutcome> CreateDeploymentConfigOutcomeCallable;
      typedef std::future<CreateDeploymentGroupOutcome> CreateDeploymentGroupOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteDeploymentConfigOutcome> DeleteDeploymentConfigOutcomeCallable;
      typedef std::future<DeleteDeploymentGroupOutcome> DeleteDeploymentGroupOutcomeCallable;
      typedef std::future<DeleteGitHubAccountTokenOutcome> DeleteGitHubAccountTokenOutcomeCallable;
      typedef std::future<DeleteResourcesByExternalIdOutcome> DeleteResourcesByExternalIdOutcomeCallable;
      typedef std::future<DeregisterOnPremisesInstanceOutcome> DeregisterOnPremisesInstanceOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetApplicationRevisionOutcome> GetApplicationRevisionOutcomeCallable;
      typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
      typedef std::future<GetDeploymentConfigOutcome> GetDeploymentConfigOutcomeCallable;
      typedef std::future<GetDeploymentGroupOutcome> GetDeploymentGroupOutcomeCallable;
      typedef std::future<GetDeploymentTargetOutcome> GetDeploymentTargetOutcomeCallable;
      typedef std::future<GetOnPremisesInstanceOutcome> GetOnPremisesInstanceOutcomeCallable;
      typedef std::future<ListApplicationRevisionsOutcome> ListApplicationRevisionsOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListDeploymentConfigsOutcome> ListDeploymentConfigsOutcomeCallable;
      typedef std::future<ListDeploymentGroupsOutcome> ListDeploymentGroupsOutcomeCallable;
      typedef std::future<ListDeploymentTargetsOutcome> ListDeploymentTargetsOutcomeCallable;
      typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
      typedef std::future<ListGitHubAccountTokenNamesOutcome> ListGitHubAccountTokenNamesOutcomeCallable;
      typedef std::future<ListOnPremisesInstancesOutcome> ListOnPremisesInstancesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutLifecycleEventHookExecutionStatusOutcome> PutLifecycleEventHookExecutionStatusOutcomeCallable;
      typedef std::future<RegisterApplicationRevisionOutcome> RegisterApplicationRevisionOutcomeCallable;
      typedef std::future<RegisterOnPremisesInstanceOutcome> RegisterOnPremisesInstanceOutcomeCallable;
      typedef std::future<RemoveTagsFromOnPremisesInstancesOutcome> RemoveTagsFromOnPremisesInstancesOutcomeCallable;
      typedef std::future<StopDeploymentOutcome> StopDeploymentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateDeploymentGroupOutcome> UpdateDeploymentGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeDeployClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeDeployClient*, const Model::AddTagsToOnPremisesInstancesRequest&, const Model::AddTagsToOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationRevisionsRequest&, const Model::BatchGetApplicationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationRevisionsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetApplicationsRequest&, const Model::BatchGetApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentGroupsRequest&, const Model::BatchGetDeploymentGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentTargetsRequest&, const Model::BatchGetDeploymentTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentTargetsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetDeploymentsRequest&, const Model::BatchGetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::BatchGetOnPremisesInstancesRequest&, const Model::BatchGetOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ContinueDeploymentRequest&, const Model::ContinueDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ContinueDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentConfigRequest&, const Model::CreateDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::CreateDeploymentGroupRequest&, const Model::CreateDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteDeploymentConfigRequest&, const Model::DeleteDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteDeploymentGroupRequest&, const Model::DeleteDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteGitHubAccountTokenRequest&, const Model::DeleteGitHubAccountTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGitHubAccountTokenResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeleteResourcesByExternalIdRequest&, const Model::DeleteResourcesByExternalIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcesByExternalIdResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::DeregisterOnPremisesInstanceRequest&, const Model::DeregisterOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetApplicationRevisionRequest&, const Model::GetApplicationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationRevisionResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentConfigRequest&, const Model::GetDeploymentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentConfigResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentGroupRequest&, const Model::GetDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentGroupResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetDeploymentTargetRequest&, const Model::GetDeploymentTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentTargetResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::GetOnPremisesInstanceRequest&, const Model::GetOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListApplicationRevisionsRequest&, const Model::ListApplicationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationRevisionsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentConfigsRequest&, const Model::ListDeploymentConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentConfigsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentGroupsRequest&, const Model::ListDeploymentGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentTargetsRequest&, const Model::ListDeploymentTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentTargetsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListGitHubAccountTokenNamesRequest&, const Model::ListGitHubAccountTokenNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGitHubAccountTokenNamesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListOnPremisesInstancesRequest&, const Model::ListOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::PutLifecycleEventHookExecutionStatusRequest&, const Model::PutLifecycleEventHookExecutionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecycleEventHookExecutionStatusResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RegisterApplicationRevisionRequest&, const Model::RegisterApplicationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterApplicationRevisionResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RegisterOnPremisesInstanceRequest&, const Model::RegisterOnPremisesInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterOnPremisesInstanceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::RemoveTagsFromOnPremisesInstancesRequest&, const Model::RemoveTagsFromOnPremisesInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromOnPremisesInstancesResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::StopDeploymentRequest&, const Model::StopDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDeploymentResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const CodeDeployClient*, const Model::UpdateDeploymentGroupRequest&, const Model::UpdateDeploymentGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeDeploy
} // namespace Aws
