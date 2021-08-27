/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/codebuild/model/UpdateReportGroupResult.h>
#include <aws/codebuild/model/UpdateWebhookResult.h>
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

namespace CodeBuild
{

namespace Model
{
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
        class UpdateReportGroupRequest;
        class UpdateWebhookRequest;

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
        typedef Aws::Utils::Outcome<UpdateReportGroupResult, CodeBuildError> UpdateReportGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateWebhookResult, CodeBuildError> UpdateWebhookOutcome;

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
        typedef std::future<UpdateReportGroupOutcome> UpdateReportGroupOutcomeCallable;
        typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
} // namespace Model

  class CodeBuildClient;

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
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateReportGroupRequest&, const Model::UpdateReportGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReportGroupResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateWebhookRequest&, const Model::UpdateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebhookResponseReceivedHandler;

  /**
   * <fullname>AWS CodeBuild</fullname> <p>AWS CodeBuild is a fully managed build
   * service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
   * and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the
   * need to provision, manage, and scale your own build servers. It provides
   * prepackaged build environments for the most popular programming languages and
   * build tools, such as Apache Maven, Gradle, and more. You can also fully
   * customize build environments in AWS CodeBuild to use your own build tools. AWS
   * CodeBuild scales automatically to meet peak build requests. You pay only for the
   * build time you consume. For more information about AWS CodeBuild, see the <i> <a
   * href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS
   * CodeBuild User Guide</a>.</i> </p> <p>AWS CodeBuild supports these
   * operations:</p> <ul> <li> <p> <code>BatchDeleteBuilds</code>: Deletes one or
   * more builds.</p> </li> <li> <p> <code>BatchGetBuilds</code>: Gets information
   * about one or more builds.</p> </li> <li> <p> <code>BatchGetProjects</code>: Gets
   * information about one or more build projects. A <i>build project</i> defines how
   * AWS CodeBuild runs a build. This includes information such as where to get the
   * source code to build, the build environment to use, the build commands to run,
   * and where to store the build output. A <i>build environment</i> is a
   * representation of operating system, programming language runtime, and tools that
   * AWS CodeBuild uses to run a build. You can add tags to build projects to help
   * manage your resources and costs.</p> </li> <li> <p>
   * <code>BatchGetReportGroups</code>: Returns an array of report groups. </p> </li>
   * <li> <p> <code>BatchGetReports</code>: Returns an array of reports. </p> </li>
   * <li> <p> <code>CreateProject</code>: Creates a build project.</p> </li> <li> <p>
   * <code>CreateReportGroup</code>: Creates a report group. A report group contains
   * a collection of reports. </p> </li> <li> <p> <code>CreateWebhook</code>: For an
   * existing AWS CodeBuild build project that has its source code stored in a GitHub
   * or Bitbucket repository, enables AWS CodeBuild to start rebuilding the source
   * code every time a code change is pushed to the repository.</p> </li> <li> <p>
   * <code>DeleteProject</code>: Deletes a build project.</p> </li> <li> <p>
   * <code>DeleteReport</code>: Deletes a report. </p> </li> <li> <p>
   * <code>DeleteReportGroup</code>: Deletes a report group. </p> </li> <li> <p>
   * <code>DeleteResourcePolicy</code>: Deletes a resource policy that is identified
   * by its resource ARN. </p> </li> <li> <p> <code>DeleteSourceCredentials</code>:
   * Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source credentials.</p>
   * </li> <li> <p> <code>DeleteWebhook</code>: For an existing AWS CodeBuild build
   * project that has its source code stored in a GitHub or Bitbucket repository,
   * stops AWS CodeBuild from rebuilding the source code every time a code change is
   * pushed to the repository.</p> </li> <li> <p> <code>DescribeTestCases</code>:
   * Returns a list of details about test cases for a report. </p> </li> <li> <p>
   * <code>GetResourcePolicy</code>: Gets a resource policy that is identified by its
   * resource ARN. </p> </li> <li> <p> <code>ImportSourceCredentials</code>: Imports
   * the source repository credentials for an AWS CodeBuild project that has its
   * source code stored in a GitHub, GitHub Enterprise, or Bitbucket repository.</p>
   * </li> <li> <p> <code>InvalidateProjectCache</code>: Resets the cache for a
   * project.</p> </li> <li> <p> <code>ListBuilds</code>: Gets a list of build IDs,
   * with each build ID representing a single build.</p> </li> <li> <p>
   * <code>ListBuildsForProject</code>: Gets a list of build IDs for the specified
   * build project, with each build ID representing a single build.</p> </li> <li>
   * <p> <code>ListCuratedEnvironmentImages</code>: Gets information about Docker
   * images that are managed by AWS CodeBuild.</p> </li> <li> <p>
   * <code>ListProjects</code>: Gets a list of build project names, with each build
   * project name representing a single build project.</p> </li> <li> <p>
   * <code>ListReportGroups</code>: Gets a list ARNs for the report groups in the
   * current AWS account. </p> </li> <li> <p> <code>ListReports</code>: Gets a list
   * ARNs for the reports in the current AWS account. </p> </li> <li> <p>
   * <code>ListReportsForReportGroup</code>: Returns a list of ARNs for the reports
   * that belong to a <code>ReportGroup</code>. </p> </li> <li> <p>
   * <code>ListSharedProjects</code>: Gets a list of ARNs associated with projects
   * shared with the current AWS account or user.</p> </li> <li> <p>
   * <code>ListSharedReportGroups</code>: Gets a list of ARNs associated with report
   * groups shared with the current AWS account or user</p> </li> <li> <p>
   * <code>ListSourceCredentials</code>: Returns a list of
   * <code>SourceCredentialsInfo</code> objects. Each
   * <code>SourceCredentialsInfo</code> object includes the authentication type,
   * token ARN, and type of source provider for one set of credentials.</p> </li>
   * <li> <p> <code>PutResourcePolicy</code>: Stores a resource policy for the ARN of
   * a <code>Project</code> or <code>ReportGroup</code> object. </p> </li> <li> <p>
   * <code>StartBuild</code>: Starts running a build.</p> </li> <li> <p>
   * <code>StopBuild</code>: Attempts to stop running a build.</p> </li> <li> <p>
   * <code>UpdateProject</code>: Changes the settings of an existing build
   * project.</p> </li> <li> <p> <code>UpdateReportGroup</code>: Changes a report
   * group.</p> </li> <li> <p> <code>UpdateWebhook</code>: Changes the settings of an
   * existing webhook.</p> </li> </ul>
   */
  class AWS_CODEBUILD_API CodeBuildClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeBuildClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeBuildClient();


        /**
         * <p>Deletes one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchDeleteBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteBuildsOutcome BatchDeleteBuilds(const Model::BatchDeleteBuildsRequest& request) const;

        /**
         * <p>Deletes one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchDeleteBuilds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteBuildsOutcomeCallable BatchDeleteBuildsCallable(const Model::BatchDeleteBuildsRequest& request) const;

        /**
         * <p>Deletes one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchDeleteBuilds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteBuildsAsync(const Model::BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about one or more batch builds.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuildBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildBatchesOutcome BatchGetBuildBatches(const Model::BatchGetBuildBatchesRequest& request) const;

        /**
         * <p>Retrieves information about one or more batch builds.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuildBatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetBuildBatchesOutcomeCallable BatchGetBuildBatchesCallable(const Model::BatchGetBuildBatchesRequest& request) const;

        /**
         * <p>Retrieves information about one or more batch builds.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuildBatches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetBuildBatchesAsync(const Model::BatchGetBuildBatchesRequest& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildsOutcome BatchGetBuilds(const Model::BatchGetBuildsRequest& request) const;

        /**
         * <p>Gets information about one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetBuildsOutcomeCallable BatchGetBuildsCallable(const Model::BatchGetBuildsRequest& request) const;

        /**
         * <p>Gets information about one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetBuildsAsync(const Model::BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more build projects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetProjectsOutcome BatchGetProjects(const Model::BatchGetProjectsRequest& request) const;

        /**
         * <p>Gets information about one or more build projects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetProjectsOutcomeCallable BatchGetProjectsCallable(const Model::BatchGetProjectsRequest& request) const;

        /**
         * <p>Gets information about one or more build projects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetProjectsAsync(const Model::BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an array of report groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportGroupsOutcome BatchGetReportGroups(const Model::BatchGetReportGroupsRequest& request) const;

        /**
         * <p> Returns an array of report groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReportGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetReportGroupsOutcomeCallable BatchGetReportGroupsCallable(const Model::BatchGetReportGroupsRequest& request) const;

        /**
         * <p> Returns an array of report groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReportGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetReportGroupsAsync(const Model::BatchGetReportGroupsRequest& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an array of reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReports">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportsOutcome BatchGetReports(const Model::BatchGetReportsRequest& request) const;

        /**
         * <p> Returns an array of reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetReportsOutcomeCallable BatchGetReportsCallable(const Model::BatchGetReportsRequest& request) const;

        /**
         * <p> Returns an array of reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetReportsAsync(const Model::BatchGetReportsRequest& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a report group. A report group contains a collection of reports.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReportGroupOutcome CreateReportGroup(const Model::CreateReportGroupRequest& request) const;

        /**
         * <p> Creates a report group. A report group contains a collection of reports.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateReportGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReportGroupOutcomeCallable CreateReportGroupCallable(const Model::CreateReportGroupRequest& request) const;

        /**
         * <p> Creates a report group. A report group contains a collection of reports.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateReportGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReportGroupAsync(const Model::CreateReportGroupRequest& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, enables AWS CodeBuild to start rebuilding
         * the source code every time a code change is pushed to the repository.</p>
         *  <p>If you enable webhooks for an AWS CodeBuild project, and the
         * project is used as a build step in AWS CodePipeline, then two identical builds
         * are created for each commit. One build is triggered through webhooks, and one
         * through AWS CodePipeline. Because billing is on a per-build basis, you are
         * billed for both builds. Therefore, if you are using AWS CodePipeline, we
         * recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild
         * console, clear the Webhook box. For more information, see step 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, enables AWS CodeBuild to start rebuilding
         * the source code every time a code change is pushed to the repository.</p>
         *  <p>If you enable webhooks for an AWS CodeBuild project, and the
         * project is used as a build step in AWS CodePipeline, then two identical builds
         * are created for each commit. One build is triggered through webhooks, and one
         * through AWS CodePipeline. Because billing is on a per-build basis, you are
         * billed for both builds. Therefore, if you are using AWS CodePipeline, we
         * recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild
         * console, clear the Webhook box. For more information, see step 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebhookOutcomeCallable CreateWebhookCallable(const Model::CreateWebhookRequest& request) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, enables AWS CodeBuild to start rebuilding
         * the source code every time a code change is pushed to the repository.</p>
         *  <p>If you enable webhooks for an AWS CodeBuild project, and the
         * project is used as a build step in AWS CodePipeline, then two identical builds
         * are created for each commit. One build is triggered through webhooks, and one
         * through AWS CodePipeline. Because billing is on a per-build basis, you are
         * billed for both builds. Therefore, if you are using AWS CodePipeline, we
         * recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild
         * console, clear the Webhook box. For more information, see step 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildBatchOutcome DeleteBuildBatch(const Model::DeleteBuildBatchRequest& request) const;

        /**
         * <p>Deletes a batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteBuildBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildBatchOutcomeCallable DeleteBuildBatchCallable(const Model::DeleteBuildBatchRequest& request) const;

        /**
         * <p>Deletes a batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteBuildBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBuildBatchAsync(const Model::DeleteBuildBatchRequest& request, const DeleteBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a build project. When you delete a project, its builds are not
         * deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p> Deletes a build project. When you delete a project, its builds are not
         * deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p> Deletes a build project. When you delete a project, its builds are not
         * deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportOutcome DeleteReport(const Model::DeleteReportRequest& request) const;

        /**
         * <p> Deletes a report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportOutcomeCallable DeleteReportCallable(const Model::DeleteReportRequest& request) const;

        /**
         * <p> Deletes a report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReportAsync(const Model::DeleteReportRequest& request, const DeleteReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a report group. Before you delete a report group, you must delete its
         * reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportGroupOutcome DeleteReportGroup(const Model::DeleteReportGroupRequest& request) const;

        /**
         * <p>Deletes a report group. Before you delete a report group, you must delete its
         * reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReportGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportGroupOutcomeCallable DeleteReportGroupCallable(const Model::DeleteReportGroupRequest& request) const;

        /**
         * <p>Deletes a report group. Before you delete a report group, you must delete its
         * reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReportGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReportGroupAsync(const Model::DeleteReportGroupRequest& request, const DeleteReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p> Deletes a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p> Deletes a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source credentials.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceCredentialsOutcome DeleteSourceCredentials(const Model::DeleteSourceCredentialsRequest& request) const;

        /**
         * <p> Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source credentials.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteSourceCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSourceCredentialsOutcomeCallable DeleteSourceCredentialsCallable(const Model::DeleteSourceCredentialsRequest& request) const;

        /**
         * <p> Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source credentials.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteSourceCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSourceCredentialsAsync(const Model::DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, stops AWS CodeBuild from rebuilding the
         * source code every time a code change is pushed to the repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, stops AWS CodeBuild from rebuilding the
         * source code every time a code change is pushed to the repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const Model::DeleteWebhookRequest& request) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, stops AWS CodeBuild from rebuilding the
         * source code every time a code change is pushed to the repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebhookAsync(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves one or more code coverage reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeCodeCoverages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeCoveragesOutcome DescribeCodeCoverages(const Model::DescribeCodeCoveragesRequest& request) const;

        /**
         * <p>Retrieves one or more code coverage reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeCodeCoverages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeCoveragesOutcomeCallable DescribeCodeCoveragesCallable(const Model::DescribeCodeCoveragesRequest& request) const;

        /**
         * <p>Retrieves one or more code coverage reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeCodeCoverages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCodeCoveragesAsync(const Model::DescribeCodeCoveragesRequest& request, const DescribeCodeCoveragesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of details about test cases for a report. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeTestCases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTestCasesOutcome DescribeTestCases(const Model::DescribeTestCasesRequest& request) const;

        /**
         * <p> Returns a list of details about test cases for a report. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeTestCases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTestCasesOutcomeCallable DescribeTestCasesCallable(const Model::DescribeTestCasesRequest& request) const;

        /**
         * <p> Returns a list of details about test cases for a report. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeTestCases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTestCasesAsync(const Model::DescribeTestCasesRequest& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetReportGroupTrendOutcome GetReportGroupTrend(const Model::GetReportGroupTrendRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReportGroupTrendOutcomeCallable GetReportGroupTrendCallable(const Model::GetReportGroupTrendRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReportGroupTrendAsync(const Model::GetReportGroupTrendRequest& request, const GetReportGroupTrendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p> Gets a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p> Gets a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Imports the source repository credentials for an AWS CodeBuild project that
         * has its source code stored in a GitHub, GitHub Enterprise, or Bitbucket
         * repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ImportSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSourceCredentialsOutcome ImportSourceCredentials(const Model::ImportSourceCredentialsRequest& request) const;

        /**
         * <p> Imports the source repository credentials for an AWS CodeBuild project that
         * has its source code stored in a GitHub, GitHub Enterprise, or Bitbucket
         * repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ImportSourceCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportSourceCredentialsOutcomeCallable ImportSourceCredentialsCallable(const Model::ImportSourceCredentialsRequest& request) const;

        /**
         * <p> Imports the source repository credentials for an AWS CodeBuild project that
         * has its source code stored in a GitHub, GitHub Enterprise, or Bitbucket
         * repository. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ImportSourceCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportSourceCredentialsAsync(const Model::ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the cache for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/InvalidateProjectCache">AWS
         * API Reference</a></p>
         */
        virtual Model::InvalidateProjectCacheOutcome InvalidateProjectCache(const Model::InvalidateProjectCacheRequest& request) const;

        /**
         * <p>Resets the cache for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/InvalidateProjectCache">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvalidateProjectCacheOutcomeCallable InvalidateProjectCacheCallable(const Model::InvalidateProjectCacheRequest& request) const;

        /**
         * <p>Resets the cache for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/InvalidateProjectCache">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvalidateProjectCacheAsync(const Model::InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the identifiers of your build batches in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildBatchesOutcome ListBuildBatches(const Model::ListBuildBatchesRequest& request) const;

        /**
         * <p>Retrieves the identifiers of your build batches in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildBatchesOutcomeCallable ListBuildBatchesCallable(const Model::ListBuildBatchesRequest& request) const;

        /**
         * <p>Retrieves the identifiers of your build batches in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildBatchesAsync(const Model::ListBuildBatchesRequest& request, const ListBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the identifiers of the build batches for a specific
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatchesForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildBatchesForProjectOutcome ListBuildBatchesForProject(const Model::ListBuildBatchesForProjectRequest& request) const;

        /**
         * <p>Retrieves the identifiers of the build batches for a specific
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatchesForProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildBatchesForProjectOutcomeCallable ListBuildBatchesForProjectCallable(const Model::ListBuildBatchesForProjectRequest& request) const;

        /**
         * <p>Retrieves the identifiers of the build batches for a specific
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatchesForProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildBatchesForProjectAsync(const Model::ListBuildBatchesForProjectRequest& request, const ListBuildBatchesForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of build IDs, with each build ID representing a single
         * build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Gets a list of build IDs, with each build ID representing a single
         * build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuilds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * <p>Gets a list of build IDs, with each build ID representing a single
         * build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuilds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of build IDs for the specified build project, with each build ID
         * representing a single build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildsForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsForProjectOutcome ListBuildsForProject(const Model::ListBuildsForProjectRequest& request) const;

        /**
         * <p>Gets a list of build IDs for the specified build project, with each build ID
         * representing a single build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildsForProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsForProjectOutcomeCallable ListBuildsForProjectCallable(const Model::ListBuildsForProjectRequest& request) const;

        /**
         * <p>Gets a list of build IDs for the specified build project, with each build ID
         * representing a single build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildsForProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsForProjectAsync(const Model::ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about Docker images that are managed by AWS
         * CodeBuild.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListCuratedEnvironmentImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCuratedEnvironmentImagesOutcome ListCuratedEnvironmentImages(const Model::ListCuratedEnvironmentImagesRequest& request) const;

        /**
         * <p>Gets information about Docker images that are managed by AWS
         * CodeBuild.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListCuratedEnvironmentImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCuratedEnvironmentImagesOutcomeCallable ListCuratedEnvironmentImagesCallable(const Model::ListCuratedEnvironmentImagesRequest& request) const;

        /**
         * <p>Gets information about Docker images that are managed by AWS
         * CodeBuild.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListCuratedEnvironmentImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCuratedEnvironmentImagesAsync(const Model::ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of build project names, with each build project name representing
         * a single build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Gets a list of build project names, with each build project name representing
         * a single build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Gets a list of build project names, with each build project name representing
         * a single build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a list ARNs for the report groups in the current AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportGroupsOutcome ListReportGroups(const Model::ListReportGroupsRequest& request) const;

        /**
         * <p> Gets a list ARNs for the report groups in the current AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportGroupsOutcomeCallable ListReportGroupsCallable(const Model::ListReportGroupsRequest& request) const;

        /**
         * <p> Gets a list ARNs for the report groups in the current AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportGroupsAsync(const Model::ListReportGroupsRequest& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of ARNs for the reports in the current AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportsOutcome ListReports(const Model::ListReportsRequest& request) const;

        /**
         * <p> Returns a list of ARNs for the reports in the current AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportsOutcomeCallable ListReportsCallable(const Model::ListReportsRequest& request) const;

        /**
         * <p> Returns a list of ARNs for the reports in the current AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportsAsync(const Model::ListReportsRequest& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of ARNs for the reports that belong to a
         * <code>ReportGroup</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportsForReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportsForReportGroupOutcome ListReportsForReportGroup(const Model::ListReportsForReportGroupRequest& request) const;

        /**
         * <p> Returns a list of ARNs for the reports that belong to a
         * <code>ReportGroup</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportsForReportGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportsForReportGroupOutcomeCallable ListReportsForReportGroupCallable(const Model::ListReportsForReportGroupRequest& request) const;

        /**
         * <p> Returns a list of ARNs for the reports that belong to a
         * <code>ReportGroup</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportsForReportGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportsForReportGroupAsync(const Model::ListReportsForReportGroupRequest& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a list of projects that are shared with other AWS accounts or users.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedProjectsOutcome ListSharedProjects(const Model::ListSharedProjectsRequest& request) const;

        /**
         * <p> Gets a list of projects that are shared with other AWS accounts or users.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSharedProjectsOutcomeCallable ListSharedProjectsCallable(const Model::ListSharedProjectsRequest& request) const;

        /**
         * <p> Gets a list of projects that are shared with other AWS accounts or users.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSharedProjectsAsync(const Model::ListSharedProjectsRequest& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a list of report groups that are shared with other AWS accounts or
         * users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedReportGroupsOutcome ListSharedReportGroups(const Model::ListSharedReportGroupsRequest& request) const;

        /**
         * <p> Gets a list of report groups that are shared with other AWS accounts or
         * users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedReportGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSharedReportGroupsOutcomeCallable ListSharedReportGroupsCallable(const Model::ListSharedReportGroupsRequest& request) const;

        /**
         * <p> Gets a list of report groups that are shared with other AWS accounts or
         * users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedReportGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSharedReportGroupsAsync(const Model::ListSharedReportGroupsRequest& request, const ListSharedReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <code>SourceCredentialsInfo</code> objects. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceCredentialsOutcome ListSourceCredentials(const Model::ListSourceCredentialsRequest& request) const;

        /**
         * <p> Returns a list of <code>SourceCredentialsInfo</code> objects. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSourceCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSourceCredentialsOutcomeCallable ListSourceCredentialsCallable(const Model::ListSourceCredentialsRequest& request) const;

        /**
         * <p> Returns a list of <code>SourceCredentialsInfo</code> objects. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSourceCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSourceCredentialsAsync(const Model::ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stores a resource policy for the ARN of a <code>Project</code> or
         * <code>ReportGroup</code> object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p> Stores a resource policy for the ARN of a <code>Project</code> or
         * <code>ReportGroup</code> object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p> Stores a resource policy for the ARN of a <code>Project</code> or
         * <code>ReportGroup</code> object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryBuildOutcome RetryBuild(const Model::RetryBuildRequest& request) const;

        /**
         * <p>Restarts a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryBuildOutcomeCallable RetryBuildCallable(const Model::RetryBuildRequest& request) const;

        /**
         * <p>Restarts a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryBuildAsync(const Model::RetryBuildRequest& request, const RetryBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a failed batch build. Only batch builds that have failed can be
         * retried.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryBuildBatchOutcome RetryBuildBatch(const Model::RetryBuildBatchRequest& request) const;

        /**
         * <p>Restarts a failed batch build. Only batch builds that have failed can be
         * retried.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuildBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryBuildBatchOutcomeCallable RetryBuildBatchCallable(const Model::RetryBuildBatchRequest& request) const;

        /**
         * <p>Restarts a failed batch build. Only batch builds that have failed can be
         * retried.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuildBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryBuildBatchAsync(const Model::RetryBuildBatchRequest& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildOutcome StartBuild(const Model::StartBuildRequest& request) const;

        /**
         * <p>Starts running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBuildOutcomeCallable StartBuildCallable(const Model::StartBuildRequest& request) const;

        /**
         * <p>Starts running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBuildAsync(const Model::StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a batch build for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildBatchOutcome StartBuildBatch(const Model::StartBuildBatchRequest& request) const;

        /**
         * <p>Starts a batch build for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuildBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBuildBatchOutcomeCallable StartBuildBatchCallable(const Model::StartBuildBatchRequest& request) const;

        /**
         * <p>Starts a batch build for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuildBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBuildBatchAsync(const Model::StartBuildBatchRequest& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to stop running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildOutcome StopBuild(const Model::StopBuildRequest& request) const;

        /**
         * <p>Attempts to stop running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuild">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBuildOutcomeCallable StopBuildCallable(const Model::StopBuildRequest& request) const;

        /**
         * <p>Attempts to stop running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuild">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBuildAsync(const Model::StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildBatchOutcome StopBuildBatch(const Model::StopBuildBatchRequest& request) const;

        /**
         * <p>Stops a running batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuildBatch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBuildBatchOutcomeCallable StopBuildBatchCallable(const Model::StopBuildBatchRequest& request) const;

        /**
         * <p>Stops a running batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuildBatch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBuildBatchAsync(const Model::StopBuildBatchRequest& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings of a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Changes the settings of a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Changes the settings of a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a report group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportGroupOutcome UpdateReportGroup(const Model::UpdateReportGroupRequest& request) const;

        /**
         * <p> Updates a report group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateReportGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReportGroupOutcomeCallable UpdateReportGroupCallable(const Model::UpdateReportGroupRequest& request) const;

        /**
         * <p> Updates a report group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateReportGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReportGroupAsync(const Model::UpdateReportGroupRequest& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the webhook associated with an AWS CodeBuild build project. </p>
         *  <p> If you use Bitbucket for your repository, <code>rotateSecret</code>
         * is ignored. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;

        /**
         * <p> Updates the webhook associated with an AWS CodeBuild build project. </p>
         *  <p> If you use Bitbucket for your repository, <code>rotateSecret</code>
         * is ignored. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const Model::UpdateWebhookRequest& request) const;

        /**
         * <p> Updates the webhook associated with an AWS CodeBuild build project. </p>
         *  <p> If you use Bitbucket for your repository, <code>rotateSecret</code>
         * is ignored. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebhookAsync(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchDeleteBuildsAsyncHelper(const Model::BatchDeleteBuildsRequest& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetBuildBatchesAsyncHelper(const Model::BatchGetBuildBatchesRequest& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetBuildsAsyncHelper(const Model::BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetProjectsAsyncHelper(const Model::BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetReportGroupsAsyncHelper(const Model::BatchGetReportGroupsRequest& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetReportsAsyncHelper(const Model::BatchGetReportsRequest& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReportGroupAsyncHelper(const Model::CreateReportGroupRequest& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWebhookAsyncHelper(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBuildBatchAsyncHelper(const Model::DeleteBuildBatchRequest& request, const DeleteBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReportAsyncHelper(const Model::DeleteReportRequest& request, const DeleteReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReportGroupAsyncHelper(const Model::DeleteReportGroupRequest& request, const DeleteReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSourceCredentialsAsyncHelper(const Model::DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWebhookAsyncHelper(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCodeCoveragesAsyncHelper(const Model::DescribeCodeCoveragesRequest& request, const DescribeCodeCoveragesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTestCasesAsyncHelper(const Model::DescribeTestCasesRequest& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReportGroupTrendAsyncHelper(const Model::GetReportGroupTrendRequest& request, const GetReportGroupTrendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePolicyAsyncHelper(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportSourceCredentialsAsyncHelper(const Model::ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvalidateProjectCacheAsyncHelper(const Model::InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildBatchesAsyncHelper(const Model::ListBuildBatchesRequest& request, const ListBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildBatchesForProjectAsyncHelper(const Model::ListBuildBatchesForProjectRequest& request, const ListBuildBatchesForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsAsyncHelper(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsForProjectAsyncHelper(const Model::ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCuratedEnvironmentImagesAsyncHelper(const Model::ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReportGroupsAsyncHelper(const Model::ListReportGroupsRequest& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReportsAsyncHelper(const Model::ListReportsRequest& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReportsForReportGroupAsyncHelper(const Model::ListReportsForReportGroupRequest& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSharedProjectsAsyncHelper(const Model::ListSharedProjectsRequest& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSharedReportGroupsAsyncHelper(const Model::ListSharedReportGroupsRequest& request, const ListSharedReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSourceCredentialsAsyncHelper(const Model::ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetryBuildAsyncHelper(const Model::RetryBuildRequest& request, const RetryBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetryBuildBatchAsyncHelper(const Model::RetryBuildBatchRequest& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBuildAsyncHelper(const Model::StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBuildBatchAsyncHelper(const Model::StartBuildBatchRequest& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopBuildAsyncHelper(const Model::StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopBuildBatchAsyncHelper(const Model::StopBuildBatchRequest& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReportGroupAsyncHelper(const Model::UpdateReportGroupRequest& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWebhookAsyncHelper(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeBuild
} // namespace Aws
