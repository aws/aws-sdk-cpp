/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codebuild/CodeBuildServiceClientModel.h>

namespace Aws
{
namespace CodeBuild
{
  /**
   * <fullname>CodeBuild</fullname> <p>CodeBuild is a fully managed build service in
   * the cloud. CodeBuild compiles your source code, runs unit tests, and produces
   * artifacts that are ready to deploy. CodeBuild eliminates the need to provision,
   * manage, and scale your own build servers. It provides prepackaged build
   * environments for the most popular programming languages and build tools, such as
   * Apache Maven, Gradle, and more. You can also fully customize build environments
   * in CodeBuild to use your own build tools. CodeBuild scales automatically to meet
   * peak build requests. You pay only for the build time you consume. For more
   * information about CodeBuild, see the <i> <a
   * href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">CodeBuild
   * User Guide</a>.</i> </p>
   */
  class AWS_CODEBUILD_API CodeBuildClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeBuildClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::CodeBuild::CodeBuildClientConfiguration& clientConfiguration = Aws::CodeBuild::CodeBuildClientConfiguration(),
                        std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG),
                        const Aws::CodeBuild::CodeBuildClientConfiguration& clientConfiguration = Aws::CodeBuild::CodeBuildClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeBuildClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeBuildEndpointProvider>(ALLOCATION_TAG),
                        const Aws::CodeBuild::CodeBuildClientConfiguration& clientConfiguration = Aws::CodeBuild::CodeBuildClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeBuildClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeBuildClient();

        /**
         * <p>Deletes one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchDeleteBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteBuildsOutcome BatchDeleteBuilds(const Model::BatchDeleteBuildsRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteBuilds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteBuildsOutcomeCallable BatchDeleteBuildsCallable(const Model::BatchDeleteBuildsRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for BatchGetBuildBatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetBuildBatchesOutcomeCallable BatchGetBuildBatchesCallable(const Model::BatchGetBuildBatchesRequest& request) const;

        /**
         * An Async wrapper for BatchGetBuildBatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetBuildBatchesAsync(const Model::BatchGetBuildBatchesRequest& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildsOutcome BatchGetBuilds(const Model::BatchGetBuildsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetBuilds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetBuildsOutcomeCallable BatchGetBuildsCallable(const Model::BatchGetBuildsRequest& request) const;

        /**
         * An Async wrapper for BatchGetBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for BatchGetProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetProjectsOutcomeCallable BatchGetProjectsCallable(const Model::BatchGetProjectsRequest& request) const;

        /**
         * An Async wrapper for BatchGetProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetProjectsAsync(const Model::BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an array of report groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportGroupsOutcome BatchGetReportGroups(const Model::BatchGetReportGroupsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetReportGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetReportGroupsOutcomeCallable BatchGetReportGroupsCallable(const Model::BatchGetReportGroupsRequest& request) const;

        /**
         * An Async wrapper for BatchGetReportGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetReportGroupsAsync(const Model::BatchGetReportGroupsRequest& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns an array of reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReports">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportsOutcome BatchGetReports(const Model::BatchGetReportsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetReportsOutcomeCallable BatchGetReportsCallable(const Model::BatchGetReportsRequest& request) const;

        /**
         * An Async wrapper for BatchGetReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetReportsAsync(const Model::BatchGetReportsRequest& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateReportGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReportGroupOutcomeCallable CreateReportGroupCallable(const Model::CreateReportGroupRequest& request) const;

        /**
         * An Async wrapper for CreateReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReportGroupAsync(const Model::CreateReportGroupRequest& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For an existing CodeBuild build project that has its source code stored in a
         * GitHub or Bitbucket repository, enables CodeBuild to start rebuilding the source
         * code every time a code change is pushed to the repository.</p>  <p>If
         * you enable webhooks for an CodeBuild project, and the project is used as a build
         * step in CodePipeline, then two identical builds are created for each commit. One
         * build is triggered through webhooks, and one through CodePipeline. Because
         * billing is on a per-build basis, you are billed for both builds. Therefore, if
         * you are using CodePipeline, we recommend that you disable webhooks in CodeBuild.
         * In the CodeBuild console, clear the Webhook box. For more information, see step
         * 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;

        /**
         * A Callable wrapper for CreateWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWebhookOutcomeCallable CreateWebhookCallable(const Model::CreateWebhookRequest& request) const;

        /**
         * An Async wrapper for CreateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildBatchOutcome DeleteBuildBatch(const Model::DeleteBuildBatchRequest& request) const;

        /**
         * A Callable wrapper for DeleteBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildBatchOutcomeCallable DeleteBuildBatchCallable(const Model::DeleteBuildBatchRequest& request) const;

        /**
         * An Async wrapper for DeleteBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportOutcome DeleteReport(const Model::DeleteReportRequest& request) const;

        /**
         * A Callable wrapper for DeleteReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportOutcomeCallable DeleteReportCallable(const Model::DeleteReportRequest& request) const;

        /**
         * An Async wrapper for DeleteReport that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteReportGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReportGroupOutcomeCallable DeleteReportGroupCallable(const Model::DeleteReportGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteSourceCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSourceCredentialsOutcomeCallable DeleteSourceCredentialsCallable(const Model::DeleteSourceCredentialsRequest& request) const;

        /**
         * An Async wrapper for DeleteSourceCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSourceCredentialsAsync(const Model::DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For an existing CodeBuild build project that has its source code stored in a
         * GitHub or Bitbucket repository, stops CodeBuild from rebuilding the source code
         * every time a code change is pushed to the repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebhookOutcome DeleteWebhook(const Model::DeleteWebhookRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const Model::DeleteWebhookRequest& request) const;

        /**
         * An Async wrapper for DeleteWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWebhookAsync(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves one or more code coverage reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeCodeCoverages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeCoveragesOutcome DescribeCodeCoverages(const Model::DescribeCodeCoveragesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeCoverages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeCoveragesOutcomeCallable DescribeCodeCoveragesCallable(const Model::DescribeCodeCoveragesRequest& request) const;

        /**
         * An Async wrapper for DescribeCodeCoverages that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeTestCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTestCasesOutcomeCallable DescribeTestCasesCallable(const Model::DescribeTestCasesRequest& request) const;

        /**
         * An Async wrapper for DescribeTestCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTestCasesAsync(const Model::DescribeTestCasesRequest& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Analyzes and accumulates test report values for the specified test
         * reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GetReportGroupTrend">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportGroupTrendOutcome GetReportGroupTrend(const Model::GetReportGroupTrendRequest& request) const;

        /**
         * A Callable wrapper for GetReportGroupTrend that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReportGroupTrendOutcomeCallable GetReportGroupTrendCallable(const Model::GetReportGroupTrendRequest& request) const;

        /**
         * An Async wrapper for GetReportGroupTrend that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Imports the source repository credentials for an CodeBuild project that has
         * its source code stored in a GitHub, GitHub Enterprise, or Bitbucket repository.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ImportSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSourceCredentialsOutcome ImportSourceCredentials(const Model::ImportSourceCredentialsRequest& request) const;

        /**
         * A Callable wrapper for ImportSourceCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportSourceCredentialsOutcomeCallable ImportSourceCredentialsCallable(const Model::ImportSourceCredentialsRequest& request) const;

        /**
         * An Async wrapper for ImportSourceCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportSourceCredentialsAsync(const Model::ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the cache for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/InvalidateProjectCache">AWS
         * API Reference</a></p>
         */
        virtual Model::InvalidateProjectCacheOutcome InvalidateProjectCache(const Model::InvalidateProjectCacheRequest& request) const;

        /**
         * A Callable wrapper for InvalidateProjectCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvalidateProjectCacheOutcomeCallable InvalidateProjectCacheCallable(const Model::InvalidateProjectCacheRequest& request) const;

        /**
         * An Async wrapper for InvalidateProjectCache that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListBuildBatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildBatchesOutcomeCallable ListBuildBatchesCallable(const Model::ListBuildBatchesRequest& request) const;

        /**
         * An Async wrapper for ListBuildBatches that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListBuildBatchesForProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildBatchesForProjectOutcomeCallable ListBuildBatchesForProjectCallable(const Model::ListBuildBatchesForProjectRequest& request) const;

        /**
         * An Async wrapper for ListBuildBatchesForProject that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListBuilds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * An Async wrapper for ListBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of build identifiers for the specified build project, with each
         * build identifier representing a single build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildsForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsForProjectOutcome ListBuildsForProject(const Model::ListBuildsForProjectRequest& request) const;

        /**
         * A Callable wrapper for ListBuildsForProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsForProjectOutcomeCallable ListBuildsForProjectCallable(const Model::ListBuildsForProjectRequest& request) const;

        /**
         * An Async wrapper for ListBuildsForProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsForProjectAsync(const Model::ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about Docker images that are managed by
         * CodeBuild.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListCuratedEnvironmentImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCuratedEnvironmentImagesOutcome ListCuratedEnvironmentImages(const Model::ListCuratedEnvironmentImagesRequest& request) const;

        /**
         * A Callable wrapper for ListCuratedEnvironmentImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCuratedEnvironmentImagesOutcomeCallable ListCuratedEnvironmentImagesCallable(const Model::ListCuratedEnvironmentImagesRequest& request) const;

        /**
         * An Async wrapper for ListCuratedEnvironmentImages that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a list ARNs for the report groups in the current Amazon Web Services
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportGroupsOutcome ListReportGroups(const Model::ListReportGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListReportGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportGroupsOutcomeCallable ListReportGroupsCallable(const Model::ListReportGroupsRequest& request) const;

        /**
         * An Async wrapper for ListReportGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportGroupsAsync(const Model::ListReportGroupsRequest& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of ARNs for the reports in the current Amazon Web Services
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportsOutcome ListReports(const Model::ListReportsRequest& request) const;

        /**
         * A Callable wrapper for ListReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportsOutcomeCallable ListReportsCallable(const Model::ListReportsRequest& request) const;

        /**
         * An Async wrapper for ListReports that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListReportsForReportGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReportsForReportGroupOutcomeCallable ListReportsForReportGroupCallable(const Model::ListReportsForReportGroupRequest& request) const;

        /**
         * An Async wrapper for ListReportsForReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReportsForReportGroupAsync(const Model::ListReportsForReportGroupRequest& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a list of projects that are shared with other Amazon Web Services
         * accounts or users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedProjectsOutcome ListSharedProjects(const Model::ListSharedProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListSharedProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSharedProjectsOutcomeCallable ListSharedProjectsCallable(const Model::ListSharedProjectsRequest& request) const;

        /**
         * An Async wrapper for ListSharedProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSharedProjectsAsync(const Model::ListSharedProjectsRequest& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a list of report groups that are shared with other Amazon Web Services
         * accounts or users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedReportGroupsOutcome ListSharedReportGroups(const Model::ListSharedReportGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListSharedReportGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSharedReportGroupsOutcomeCallable ListSharedReportGroupsCallable(const Model::ListSharedReportGroupsRequest& request) const;

        /**
         * An Async wrapper for ListSharedReportGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListSourceCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSourceCredentialsOutcomeCallable ListSourceCredentialsCallable(const Model::ListSourceCredentialsRequest& request) const;

        /**
         * An Async wrapper for ListSourceCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryBuildOutcome RetryBuild(const Model::RetryBuildRequest& request) const;

        /**
         * A Callable wrapper for RetryBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryBuildOutcomeCallable RetryBuildCallable(const Model::RetryBuildRequest& request) const;

        /**
         * An Async wrapper for RetryBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RetryBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryBuildBatchOutcomeCallable RetryBuildBatchCallable(const Model::RetryBuildBatchRequest& request) const;

        /**
         * An Async wrapper for RetryBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryBuildBatchAsync(const Model::RetryBuildBatchRequest& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildOutcome StartBuild(const Model::StartBuildRequest& request) const;

        /**
         * A Callable wrapper for StartBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBuildOutcomeCallable StartBuildCallable(const Model::StartBuildRequest& request) const;

        /**
         * An Async wrapper for StartBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBuildAsync(const Model::StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a batch build for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildBatchOutcome StartBuildBatch(const Model::StartBuildBatchRequest& request) const;

        /**
         * A Callable wrapper for StartBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBuildBatchOutcomeCallable StartBuildBatchCallable(const Model::StartBuildBatchRequest& request) const;

        /**
         * An Async wrapper for StartBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBuildBatchAsync(const Model::StartBuildBatchRequest& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to stop running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildOutcome StopBuild(const Model::StopBuildRequest& request) const;

        /**
         * A Callable wrapper for StopBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBuildOutcomeCallable StopBuildCallable(const Model::StopBuildRequest& request) const;

        /**
         * An Async wrapper for StopBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBuildAsync(const Model::StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildBatchOutcome StopBuildBatch(const Model::StopBuildBatchRequest& request) const;

        /**
         * A Callable wrapper for StopBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBuildBatchOutcomeCallable StopBuildBatchCallable(const Model::StopBuildBatchRequest& request) const;

        /**
         * An Async wrapper for StopBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBuildBatchAsync(const Model::StopBuildBatchRequest& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the settings of a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the public visibility for a project. The project's build results,
         * logs, and artifacts are available to the general public. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/public-builds.html">Public
         * build projects</a> in the <i>CodeBuild User Guide</i>.</p>  <p>The
         * following should be kept in mind when making your projects public:</p> <ul> <li>
         * <p>All of a project's build results, logs, and artifacts, including builds that
         * were run when the project was private, are available to the general public.</p>
         * </li> <li> <p>All build logs and artifacts are available to the public.
         * Environment variables, source code, and other sensitive information may have
         * been output to the build logs and artifacts. You must be careful about what
         * information is output to the build logs. Some best practice are:</p> <ul> <li>
         * <p>Do not store sensitive values, especially Amazon Web Services access key IDs
         * and secret access keys, in environment variables. We recommend that you use an
         * Amazon EC2 Systems Manager Parameter Store or Secrets Manager to store sensitive
         * values.</p> </li> <li> <p>Follow <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/webhooks.html#webhook-best-practices">Best
         * practices for using webhooks</a> in the <i>CodeBuild User Guide</i> to limit
         * which entities can trigger a build, and do not store the buildspec in the
         * project itself, to ensure that your webhooks are as secure as possible.</p>
         * </li> </ul> </li> <li> <p>A malicious user can use public builds to distribute
         * malicious artifacts. We recommend that you review all pull requests to verify
         * that the pull request is a legitimate change. We also recommend that you
         * validate any artifacts with their checksums to make sure that the correct
         * artifacts are being downloaded.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProjectVisibility">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectVisibilityOutcome UpdateProjectVisibility(const Model::UpdateProjectVisibilityRequest& request) const;

        /**
         * A Callable wrapper for UpdateProjectVisibility that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectVisibilityOutcomeCallable UpdateProjectVisibilityCallable(const Model::UpdateProjectVisibilityRequest& request) const;

        /**
         * An Async wrapper for UpdateProjectVisibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectVisibilityAsync(const Model::UpdateProjectVisibilityRequest& request, const UpdateProjectVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a report group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportGroupOutcome UpdateReportGroup(const Model::UpdateReportGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateReportGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReportGroupOutcomeCallable UpdateReportGroupCallable(const Model::UpdateReportGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReportGroupAsync(const Model::UpdateReportGroupRequest& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the webhook associated with an CodeBuild build project. </p> 
         * <p> If you use Bitbucket for your repository, <code>rotateSecret</code> is
         * ignored. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebhook that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const Model::UpdateWebhookRequest& request) const;

        /**
         * An Async wrapper for UpdateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWebhookAsync(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeBuildEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeBuildClient>;
      void init(const CodeBuildClientConfiguration& clientConfiguration);

      CodeBuildClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeBuildEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeBuild
} // namespace Aws
