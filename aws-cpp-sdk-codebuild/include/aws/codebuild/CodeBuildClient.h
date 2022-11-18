/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codebuild/CodeBuildServiceClientModel.h>
#include <aws/codebuild/CodeBuildLegacyAsyncMacros.h>

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
  class AWS_CODEBUILD_API CodeBuildClient : public Aws::Client::AWSJsonClient
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
         * <p>Deletes one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchDeleteBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteBuildsOutcome BatchDeleteBuilds(const Model::BatchDeleteBuildsRequest& request) const;


        /**
         * <p>Retrieves information about one or more batch builds.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuildBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildBatchesOutcome BatchGetBuildBatches(const Model::BatchGetBuildBatchesRequest& request) const;


        /**
         * <p>Gets information about one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildsOutcome BatchGetBuilds(const Model::BatchGetBuildsRequest& request) const;


        /**
         * <p>Gets information about one or more build projects.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetProjectsOutcome BatchGetProjects(const Model::BatchGetProjectsRequest& request) const;


        /**
         * <p> Returns an array of report groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportGroupsOutcome BatchGetReportGroups(const Model::BatchGetReportGroupsRequest& request) const;


        /**
         * <p> Returns an array of reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReports">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportsOutcome BatchGetReports(const Model::BatchGetReportsRequest& request) const;


        /**
         * <p>Creates a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


        /**
         * <p> Creates a report group. A report group contains a collection of reports.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReportGroupOutcome CreateReportGroup(const Model::CreateReportGroupRequest& request) const;


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
         * <p>Deletes a batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildBatchOutcome DeleteBuildBatch(const Model::DeleteBuildBatchRequest& request) const;


        /**
         * <p> Deletes a build project. When you delete a project, its builds are not
         * deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;


        /**
         * <p> Deletes a report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportOutcome DeleteReport(const Model::DeleteReportRequest& request) const;


        /**
         * <p>Deletes a report group. Before you delete a report group, you must delete its
         * reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportGroupOutcome DeleteReportGroup(const Model::DeleteReportGroupRequest& request) const;


        /**
         * <p> Deletes a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p> Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source credentials.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceCredentialsOutcome DeleteSourceCredentials(const Model::DeleteSourceCredentialsRequest& request) const;


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
         * <p>Retrieves one or more code coverage reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeCodeCoverages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeCoveragesOutcome DescribeCodeCoverages(const Model::DescribeCodeCoveragesRequest& request) const;


        /**
         * <p> Returns a list of details about test cases for a report. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeTestCases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTestCasesOutcome DescribeTestCases(const Model::DescribeTestCasesRequest& request) const;


        /**
         * <p>Analyzes and accumulates test report values for the specified test
         * reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GetReportGroupTrend">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportGroupTrendOutcome GetReportGroupTrend(const Model::GetReportGroupTrendRequest& request) const;


        /**
         * <p> Gets a resource policy that is identified by its resource ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;


        /**
         * <p> Imports the source repository credentials for an CodeBuild project that has
         * its source code stored in a GitHub, GitHub Enterprise, or Bitbucket repository.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ImportSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportSourceCredentialsOutcome ImportSourceCredentials(const Model::ImportSourceCredentialsRequest& request) const;


        /**
         * <p>Resets the cache for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/InvalidateProjectCache">AWS
         * API Reference</a></p>
         */
        virtual Model::InvalidateProjectCacheOutcome InvalidateProjectCache(const Model::InvalidateProjectCacheRequest& request) const;


        /**
         * <p>Retrieves the identifiers of your build batches in the current
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildBatchesOutcome ListBuildBatches(const Model::ListBuildBatchesRequest& request) const;


        /**
         * <p>Retrieves the identifiers of the build batches for a specific
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildBatchesForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildBatchesForProjectOutcome ListBuildBatchesForProject(const Model::ListBuildBatchesForProjectRequest& request) const;


        /**
         * <p>Gets a list of build IDs, with each build ID representing a single
         * build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;


        /**
         * <p>Gets a list of build identifiers for the specified build project, with each
         * build identifier representing a single build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListBuildsForProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsForProjectOutcome ListBuildsForProject(const Model::ListBuildsForProjectRequest& request) const;


        /**
         * <p>Gets information about Docker images that are managed by
         * CodeBuild.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListCuratedEnvironmentImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCuratedEnvironmentImagesOutcome ListCuratedEnvironmentImages(const Model::ListCuratedEnvironmentImagesRequest& request) const;


        /**
         * <p>Gets a list of build project names, with each build project name representing
         * a single build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;


        /**
         * <p> Gets a list ARNs for the report groups in the current Amazon Web Services
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportGroupsOutcome ListReportGroups(const Model::ListReportGroupsRequest& request) const;


        /**
         * <p> Returns a list of ARNs for the reports in the current Amazon Web Services
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportsOutcome ListReports(const Model::ListReportsRequest& request) const;


        /**
         * <p> Returns a list of ARNs for the reports that belong to a
         * <code>ReportGroup</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListReportsForReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportsForReportGroupOutcome ListReportsForReportGroup(const Model::ListReportsForReportGroupRequest& request) const;


        /**
         * <p> Gets a list of projects that are shared with other Amazon Web Services
         * accounts or users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedProjectsOutcome ListSharedProjects(const Model::ListSharedProjectsRequest& request) const;


        /**
         * <p> Gets a list of report groups that are shared with other Amazon Web Services
         * accounts or users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSharedReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedReportGroupsOutcome ListSharedReportGroups(const Model::ListSharedReportGroupsRequest& request) const;


        /**
         * <p> Returns a list of <code>SourceCredentialsInfo</code> objects. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListSourceCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceCredentialsOutcome ListSourceCredentials(const Model::ListSourceCredentialsRequest& request) const;


        /**
         * <p> Stores a resource policy for the ARN of a <code>Project</code> or
         * <code>ReportGroup</code> object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


        /**
         * <p>Restarts a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryBuildOutcome RetryBuild(const Model::RetryBuildRequest& request) const;


        /**
         * <p>Restarts a failed batch build. Only batch builds that have failed can be
         * retried.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryBuildBatchOutcome RetryBuildBatch(const Model::RetryBuildBatchRequest& request) const;


        /**
         * <p>Starts running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildOutcome StartBuild(const Model::StartBuildRequest& request) const;


        /**
         * <p>Starts a batch build for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildBatchOutcome StartBuildBatch(const Model::StartBuildBatchRequest& request) const;


        /**
         * <p>Attempts to stop running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildOutcome StopBuild(const Model::StopBuildRequest& request) const;


        /**
         * <p>Stops a running batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildBatchOutcome StopBuildBatch(const Model::StopBuildBatchRequest& request) const;


        /**
         * <p>Changes the settings of a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;


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
         * <p> Updates a report group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportGroupOutcome UpdateReportGroup(const Model::UpdateReportGroupRequest& request) const;


        /**
         * <p> Updates the webhook associated with an CodeBuild build project. </p> 
         * <p> If you use Bitbucket for your repository, <code>rotateSecret</code> is
         * ignored. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeBuildEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CodeBuildClientConfiguration& clientConfiguration);

      CodeBuildClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeBuildEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeBuild
} // namespace Aws
