/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codebuild/CodeBuildErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codebuild/CodeBuildEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeBuildClient header */
#include <aws/codebuild/model/BatchDeleteBuildsResult.h>
#include <aws/codebuild/model/BatchGetBuildBatchesResult.h>
#include <aws/codebuild/model/BatchGetBuildsResult.h>
#include <aws/codebuild/model/BatchGetProjectsResult.h>
#include <aws/codebuild/model/BatchGetReportGroupsResult.h>
#include <aws/codebuild/model/BatchGetReportsResult.h>
#include <aws/codebuild/model/CreateProjectResult.h>
#include <aws/codebuild/model/CreateReportGroupResult.h>
#include <aws/codebuild/model/CreateWebhookResult.h>
#include <aws/codebuild/model/DeleteBuildBatchResult.h>
#include <aws/codebuild/model/DeleteProjectResult.h>
#include <aws/codebuild/model/DeleteReportResult.h>
#include <aws/codebuild/model/DeleteReportGroupResult.h>
#include <aws/codebuild/model/DeleteResourcePolicyResult.h>
#include <aws/codebuild/model/DeleteSourceCredentialsResult.h>
#include <aws/codebuild/model/DeleteWebhookResult.h>
#include <aws/codebuild/model/DescribeCodeCoveragesResult.h>
#include <aws/codebuild/model/DescribeTestCasesResult.h>
#include <aws/codebuild/model/GetReportGroupTrendResult.h>
#include <aws/codebuild/model/GetResourcePolicyResult.h>
#include <aws/codebuild/model/ImportSourceCredentialsResult.h>
#include <aws/codebuild/model/InvalidateProjectCacheResult.h>
#include <aws/codebuild/model/ListBuildBatchesResult.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectResult.h>
#include <aws/codebuild/model/ListBuildsResult.h>
#include <aws/codebuild/model/ListBuildsForProjectResult.h>
#include <aws/codebuild/model/ListCuratedEnvironmentImagesResult.h>
#include <aws/codebuild/model/ListProjectsResult.h>
#include <aws/codebuild/model/ListReportGroupsResult.h>
#include <aws/codebuild/model/ListReportsResult.h>
#include <aws/codebuild/model/ListReportsForReportGroupResult.h>
#include <aws/codebuild/model/ListSharedProjectsResult.h>
#include <aws/codebuild/model/ListSharedReportGroupsResult.h>
#include <aws/codebuild/model/ListSourceCredentialsResult.h>
#include <aws/codebuild/model/PutResourcePolicyResult.h>
#include <aws/codebuild/model/RetryBuildResult.h>
#include <aws/codebuild/model/RetryBuildBatchResult.h>
#include <aws/codebuild/model/StartBuildResult.h>
#include <aws/codebuild/model/StartBuildBatchResult.h>
#include <aws/codebuild/model/StopBuildResult.h>
#include <aws/codebuild/model/StopBuildBatchResult.h>
#include <aws/codebuild/model/UpdateProjectResult.h>
#include <aws/codebuild/model/UpdateProjectVisibilityResult.h>
#include <aws/codebuild/model/UpdateReportGroupResult.h>
#include <aws/codebuild/model/UpdateWebhookResult.h>
/* End of service model headers required in CodeBuildClient header */

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

  namespace CodeBuild
  {
    using CodeBuildClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeBuildEndpointProviderBase = Aws::CodeBuild::Endpoint::CodeBuildEndpointProviderBase;
    using CodeBuildEndpointProvider = Aws::CodeBuild::Endpoint::CodeBuildEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeBuildClient header */
      class BatchDeleteBuildsRequest;
      class BatchGetBuildBatchesRequest;
      class BatchGetBuildsRequest;
      class BatchGetProjectsRequest;
      class BatchGetReportGroupsRequest;
      class BatchGetReportsRequest;
      class CreateProjectRequest;
      class CreateReportGroupRequest;
      class CreateWebhookRequest;
      class DeleteBuildBatchRequest;
      class DeleteProjectRequest;
      class DeleteReportRequest;
      class DeleteReportGroupRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSourceCredentialsRequest;
      class DeleteWebhookRequest;
      class DescribeCodeCoveragesRequest;
      class DescribeTestCasesRequest;
      class GetReportGroupTrendRequest;
      class GetResourcePolicyRequest;
      class ImportSourceCredentialsRequest;
      class InvalidateProjectCacheRequest;
      class ListBuildBatchesRequest;
      class ListBuildBatchesForProjectRequest;
      class ListBuildsRequest;
      class ListBuildsForProjectRequest;
      class ListCuratedEnvironmentImagesRequest;
      class ListProjectsRequest;
      class ListReportGroupsRequest;
      class ListReportsRequest;
      class ListReportsForReportGroupRequest;
      class ListSharedProjectsRequest;
      class ListSharedReportGroupsRequest;
      class ListSourceCredentialsRequest;
      class PutResourcePolicyRequest;
      class RetryBuildRequest;
      class RetryBuildBatchRequest;
      class StartBuildRequest;
      class StartBuildBatchRequest;
      class StopBuildRequest;
      class StopBuildBatchRequest;
      class UpdateProjectRequest;
      class UpdateProjectVisibilityRequest;
      class UpdateReportGroupRequest;
      class UpdateWebhookRequest;
      /* End of service model forward declarations required in CodeBuildClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDeleteBuildsResult, CodeBuildError> BatchDeleteBuildsOutcome;
      typedef Aws::Utils::Outcome<BatchGetBuildBatchesResult, CodeBuildError> BatchGetBuildBatchesOutcome;
      typedef Aws::Utils::Outcome<BatchGetBuildsResult, CodeBuildError> BatchGetBuildsOutcome;
      typedef Aws::Utils::Outcome<BatchGetProjectsResult, CodeBuildError> BatchGetProjectsOutcome;
      typedef Aws::Utils::Outcome<BatchGetReportGroupsResult, CodeBuildError> BatchGetReportGroupsOutcome;
      typedef Aws::Utils::Outcome<BatchGetReportsResult, CodeBuildError> BatchGetReportsOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, CodeBuildError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateReportGroupResult, CodeBuildError> CreateReportGroupOutcome;
      typedef Aws::Utils::Outcome<CreateWebhookResult, CodeBuildError> CreateWebhookOutcome;
      typedef Aws::Utils::Outcome<DeleteBuildBatchResult, CodeBuildError> DeleteBuildBatchOutcome;
      typedef Aws::Utils::Outcome<DeleteProjectResult, CodeBuildError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteReportResult, CodeBuildError> DeleteReportOutcome;
      typedef Aws::Utils::Outcome<DeleteReportGroupResult, CodeBuildError> DeleteReportGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, CodeBuildError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceCredentialsResult, CodeBuildError> DeleteSourceCredentialsOutcome;
      typedef Aws::Utils::Outcome<DeleteWebhookResult, CodeBuildError> DeleteWebhookOutcome;
      typedef Aws::Utils::Outcome<DescribeCodeCoveragesResult, CodeBuildError> DescribeCodeCoveragesOutcome;
      typedef Aws::Utils::Outcome<DescribeTestCasesResult, CodeBuildError> DescribeTestCasesOutcome;
      typedef Aws::Utils::Outcome<GetReportGroupTrendResult, CodeBuildError> GetReportGroupTrendOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, CodeBuildError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<ImportSourceCredentialsResult, CodeBuildError> ImportSourceCredentialsOutcome;
      typedef Aws::Utils::Outcome<InvalidateProjectCacheResult, CodeBuildError> InvalidateProjectCacheOutcome;
      typedef Aws::Utils::Outcome<ListBuildBatchesResult, CodeBuildError> ListBuildBatchesOutcome;
      typedef Aws::Utils::Outcome<ListBuildBatchesForProjectResult, CodeBuildError> ListBuildBatchesForProjectOutcome;
      typedef Aws::Utils::Outcome<ListBuildsResult, CodeBuildError> ListBuildsOutcome;
      typedef Aws::Utils::Outcome<ListBuildsForProjectResult, CodeBuildError> ListBuildsForProjectOutcome;
      typedef Aws::Utils::Outcome<ListCuratedEnvironmentImagesResult, CodeBuildError> ListCuratedEnvironmentImagesOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, CodeBuildError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListReportGroupsResult, CodeBuildError> ListReportGroupsOutcome;
      typedef Aws::Utils::Outcome<ListReportsResult, CodeBuildError> ListReportsOutcome;
      typedef Aws::Utils::Outcome<ListReportsForReportGroupResult, CodeBuildError> ListReportsForReportGroupOutcome;
      typedef Aws::Utils::Outcome<ListSharedProjectsResult, CodeBuildError> ListSharedProjectsOutcome;
      typedef Aws::Utils::Outcome<ListSharedReportGroupsResult, CodeBuildError> ListSharedReportGroupsOutcome;
      typedef Aws::Utils::Outcome<ListSourceCredentialsResult, CodeBuildError> ListSourceCredentialsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, CodeBuildError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RetryBuildResult, CodeBuildError> RetryBuildOutcome;
      typedef Aws::Utils::Outcome<RetryBuildBatchResult, CodeBuildError> RetryBuildBatchOutcome;
      typedef Aws::Utils::Outcome<StartBuildResult, CodeBuildError> StartBuildOutcome;
      typedef Aws::Utils::Outcome<StartBuildBatchResult, CodeBuildError> StartBuildBatchOutcome;
      typedef Aws::Utils::Outcome<StopBuildResult, CodeBuildError> StopBuildOutcome;
      typedef Aws::Utils::Outcome<StopBuildBatchResult, CodeBuildError> StopBuildBatchOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, CodeBuildError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectVisibilityResult, CodeBuildError> UpdateProjectVisibilityOutcome;
      typedef Aws::Utils::Outcome<UpdateReportGroupResult, CodeBuildError> UpdateReportGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateWebhookResult, CodeBuildError> UpdateWebhookOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteBuildsOutcome> BatchDeleteBuildsOutcomeCallable;
      typedef std::future<BatchGetBuildBatchesOutcome> BatchGetBuildBatchesOutcomeCallable;
      typedef std::future<BatchGetBuildsOutcome> BatchGetBuildsOutcomeCallable;
      typedef std::future<BatchGetProjectsOutcome> BatchGetProjectsOutcomeCallable;
      typedef std::future<BatchGetReportGroupsOutcome> BatchGetReportGroupsOutcomeCallable;
      typedef std::future<BatchGetReportsOutcome> BatchGetReportsOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateReportGroupOutcome> CreateReportGroupOutcomeCallable;
      typedef std::future<CreateWebhookOutcome> CreateWebhookOutcomeCallable;
      typedef std::future<DeleteBuildBatchOutcome> DeleteBuildBatchOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteReportOutcome> DeleteReportOutcomeCallable;
      typedef std::future<DeleteReportGroupOutcome> DeleteReportGroupOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSourceCredentialsOutcome> DeleteSourceCredentialsOutcomeCallable;
      typedef std::future<DeleteWebhookOutcome> DeleteWebhookOutcomeCallable;
      typedef std::future<DescribeCodeCoveragesOutcome> DescribeCodeCoveragesOutcomeCallable;
      typedef std::future<DescribeTestCasesOutcome> DescribeTestCasesOutcomeCallable;
      typedef std::future<GetReportGroupTrendOutcome> GetReportGroupTrendOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<ImportSourceCredentialsOutcome> ImportSourceCredentialsOutcomeCallable;
      typedef std::future<InvalidateProjectCacheOutcome> InvalidateProjectCacheOutcomeCallable;
      typedef std::future<ListBuildBatchesOutcome> ListBuildBatchesOutcomeCallable;
      typedef std::future<ListBuildBatchesForProjectOutcome> ListBuildBatchesForProjectOutcomeCallable;
      typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
      typedef std::future<ListBuildsForProjectOutcome> ListBuildsForProjectOutcomeCallable;
      typedef std::future<ListCuratedEnvironmentImagesOutcome> ListCuratedEnvironmentImagesOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListReportGroupsOutcome> ListReportGroupsOutcomeCallable;
      typedef std::future<ListReportsOutcome> ListReportsOutcomeCallable;
      typedef std::future<ListReportsForReportGroupOutcome> ListReportsForReportGroupOutcomeCallable;
      typedef std::future<ListSharedProjectsOutcome> ListSharedProjectsOutcomeCallable;
      typedef std::future<ListSharedReportGroupsOutcome> ListSharedReportGroupsOutcomeCallable;
      typedef std::future<ListSourceCredentialsOutcome> ListSourceCredentialsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RetryBuildOutcome> RetryBuildOutcomeCallable;
      typedef std::future<RetryBuildBatchOutcome> RetryBuildBatchOutcomeCallable;
      typedef std::future<StartBuildOutcome> StartBuildOutcomeCallable;
      typedef std::future<StartBuildBatchOutcome> StartBuildBatchOutcomeCallable;
      typedef std::future<StopBuildOutcome> StopBuildOutcomeCallable;
      typedef std::future<StopBuildBatchOutcome> StopBuildBatchOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      typedef std::future<UpdateProjectVisibilityOutcome> UpdateProjectVisibilityOutcomeCallable;
      typedef std::future<UpdateReportGroupOutcome> UpdateReportGroupOutcomeCallable;
      typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeBuildClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeBuildClient*, const Model::BatchDeleteBuildsRequest&, const Model::BatchDeleteBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteBuildsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetBuildBatchesRequest&, const Model::BatchGetBuildBatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetBuildBatchesResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetBuildsRequest&, const Model::BatchGetBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetBuildsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetProjectsRequest&, const Model::BatchGetProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetReportGroupsRequest&, const Model::BatchGetReportGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetReportGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetReportsRequest&, const Model::BatchGetReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetReportsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::CreateReportGroupRequest&, const Model::CreateReportGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReportGroupResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::CreateWebhookRequest&, const Model::CreateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebhookResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteBuildBatchRequest&, const Model::DeleteBuildBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBuildBatchResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteReportRequest&, const Model::DeleteReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteReportGroupRequest&, const Model::DeleteReportGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportGroupResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteSourceCredentialsRequest&, const Model::DeleteSourceCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceCredentialsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteWebhookRequest&, const Model::DeleteWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebhookResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DescribeCodeCoveragesRequest&, const Model::DescribeCodeCoveragesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeCoveragesResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DescribeTestCasesRequest&, const Model::DescribeTestCasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTestCasesResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::GetReportGroupTrendRequest&, const Model::GetReportGroupTrendOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReportGroupTrendResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ImportSourceCredentialsRequest&, const Model::ImportSourceCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportSourceCredentialsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::InvalidateProjectCacheRequest&, const Model::InvalidateProjectCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvalidateProjectCacheResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListBuildBatchesRequest&, const Model::ListBuildBatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildBatchesResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListBuildBatchesForProjectRequest&, const Model::ListBuildBatchesForProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildBatchesForProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListBuildsForProjectRequest&, const Model::ListBuildsForProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsForProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListCuratedEnvironmentImagesRequest&, const Model::ListCuratedEnvironmentImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCuratedEnvironmentImagesResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListReportGroupsRequest&, const Model::ListReportGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListReportsRequest&, const Model::ListReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListReportsForReportGroupRequest&, const Model::ListReportsForReportGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportsForReportGroupResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListSharedProjectsRequest&, const Model::ListSharedProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSharedProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListSharedReportGroupsRequest&, const Model::ListSharedReportGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSharedReportGroupsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListSourceCredentialsRequest&, const Model::ListSourceCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceCredentialsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::RetryBuildRequest&, const Model::RetryBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryBuildResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::RetryBuildBatchRequest&, const Model::RetryBuildBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryBuildBatchResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::StartBuildRequest&, const Model::StartBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBuildResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::StartBuildBatchRequest&, const Model::StartBuildBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBuildBatchResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::StopBuildRequest&, const Model::StopBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBuildResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::StopBuildBatchRequest&, const Model::StopBuildBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBuildBatchResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateProjectVisibilityRequest&, const Model::UpdateProjectVisibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectVisibilityResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateReportGroupRequest&, const Model::UpdateReportGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReportGroupResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateWebhookRequest&, const Model::UpdateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebhookResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeBuild
} // namespace Aws
