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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeBuildClientConfiguration ClientConfigurationType;
      typedef CodeBuildEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::CodeBuild::CodeBuildClientConfiguration& clientConfiguration = Aws::CodeBuild::CodeBuildClientConfiguration(),
                        std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeBuildClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::CodeBuild::CodeBuildClientConfiguration& clientConfiguration = Aws::CodeBuild::CodeBuildClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeBuildClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<CodeBuildEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename BatchDeleteBuildsRequestT = Model::BatchDeleteBuildsRequest>
        Model::BatchDeleteBuildsOutcomeCallable BatchDeleteBuildsCallable(const BatchDeleteBuildsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchDeleteBuilds, request);
        }

        /**
         * An Async wrapper for BatchDeleteBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteBuildsRequestT = Model::BatchDeleteBuildsRequest>
        void BatchDeleteBuildsAsync(const BatchDeleteBuildsRequestT& request, const BatchDeleteBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchDeleteBuilds, request, handler, context);
        }

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
        template<typename BatchGetBuildBatchesRequestT = Model::BatchGetBuildBatchesRequest>
        Model::BatchGetBuildBatchesOutcomeCallable BatchGetBuildBatchesCallable(const BatchGetBuildBatchesRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchGetBuildBatches, request);
        }

        /**
         * An Async wrapper for BatchGetBuildBatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetBuildBatchesRequestT = Model::BatchGetBuildBatchesRequest>
        void BatchGetBuildBatchesAsync(const BatchGetBuildBatchesRequestT& request, const BatchGetBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchGetBuildBatches, request, handler, context);
        }

        /**
         * <p>Gets information about one or more builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildsOutcome BatchGetBuilds(const Model::BatchGetBuildsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetBuilds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetBuildsRequestT = Model::BatchGetBuildsRequest>
        Model::BatchGetBuildsOutcomeCallable BatchGetBuildsCallable(const BatchGetBuildsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchGetBuilds, request);
        }

        /**
         * An Async wrapper for BatchGetBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetBuildsRequestT = Model::BatchGetBuildsRequest>
        void BatchGetBuildsAsync(const BatchGetBuildsRequestT& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchGetBuilds, request, handler, context);
        }

        /**
         * <p>Gets information about one or more compute fleets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFleetsOutcome BatchGetFleets(const Model::BatchGetFleetsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetFleetsRequestT = Model::BatchGetFleetsRequest>
        Model::BatchGetFleetsOutcomeCallable BatchGetFleetsCallable(const BatchGetFleetsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchGetFleets, request);
        }

        /**
         * An Async wrapper for BatchGetFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetFleetsRequestT = Model::BatchGetFleetsRequest>
        void BatchGetFleetsAsync(const BatchGetFleetsRequestT& request, const BatchGetFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchGetFleets, request, handler, context);
        }

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
        template<typename BatchGetProjectsRequestT = Model::BatchGetProjectsRequest>
        Model::BatchGetProjectsOutcomeCallable BatchGetProjectsCallable(const BatchGetProjectsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchGetProjects, request);
        }

        /**
         * An Async wrapper for BatchGetProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetProjectsRequestT = Model::BatchGetProjectsRequest>
        void BatchGetProjectsAsync(const BatchGetProjectsRequestT& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchGetProjects, request, handler, context);
        }

        /**
         * <p> Returns an array of report groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReportGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportGroupsOutcome BatchGetReportGroups(const Model::BatchGetReportGroupsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetReportGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetReportGroupsRequestT = Model::BatchGetReportGroupsRequest>
        Model::BatchGetReportGroupsOutcomeCallable BatchGetReportGroupsCallable(const BatchGetReportGroupsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchGetReportGroups, request);
        }

        /**
         * An Async wrapper for BatchGetReportGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetReportGroupsRequestT = Model::BatchGetReportGroupsRequest>
        void BatchGetReportGroupsAsync(const BatchGetReportGroupsRequestT& request, const BatchGetReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchGetReportGroups, request, handler, context);
        }

        /**
         * <p> Returns an array of reports. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetReports">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetReportsOutcome BatchGetReports(const Model::BatchGetReportsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetReportsRequestT = Model::BatchGetReportsRequest>
        Model::BatchGetReportsOutcomeCallable BatchGetReportsCallable(const BatchGetReportsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::BatchGetReports, request);
        }

        /**
         * An Async wrapper for BatchGetReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetReportsRequestT = Model::BatchGetReportsRequest>
        void BatchGetReportsAsync(const BatchGetReportsRequestT& request, const BatchGetReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::BatchGetReports, request, handler, context);
        }

        /**
         * <p>Creates a compute fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        Model::CreateFleetOutcomeCallable CreateFleetCallable(const CreateFleetRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::CreateFleet, request);
        }

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        void CreateFleetAsync(const CreateFleetRequestT& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::CreateFleet, request, handler, context);
        }

        /**
         * <p>Creates a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::CreateProject, request, handler, context);
        }

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
        template<typename CreateReportGroupRequestT = Model::CreateReportGroupRequest>
        Model::CreateReportGroupOutcomeCallable CreateReportGroupCallable(const CreateReportGroupRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::CreateReportGroup, request);
        }

        /**
         * An Async wrapper for CreateReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReportGroupRequestT = Model::CreateReportGroupRequest>
        void CreateReportGroupAsync(const CreateReportGroupRequestT& request, const CreateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::CreateReportGroup, request, handler, context);
        }

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
        template<typename CreateWebhookRequestT = Model::CreateWebhookRequest>
        Model::CreateWebhookOutcomeCallable CreateWebhookCallable(const CreateWebhookRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::CreateWebhook, request);
        }

        /**
         * An Async wrapper for CreateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWebhookRequestT = Model::CreateWebhookRequest>
        void CreateWebhookAsync(const CreateWebhookRequestT& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::CreateWebhook, request, handler, context);
        }

        /**
         * <p>Deletes a batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildBatchOutcome DeleteBuildBatch(const Model::DeleteBuildBatchRequest& request) const;

        /**
         * A Callable wrapper for DeleteBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBuildBatchRequestT = Model::DeleteBuildBatchRequest>
        Model::DeleteBuildBatchOutcomeCallable DeleteBuildBatchCallable(const DeleteBuildBatchRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteBuildBatch, request);
        }

        /**
         * An Async wrapper for DeleteBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBuildBatchRequestT = Model::DeleteBuildBatchRequest>
        void DeleteBuildBatchAsync(const DeleteBuildBatchRequestT& request, const DeleteBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteBuildBatch, request, handler, context);
        }

        /**
         * <p>Deletes a compute fleet. When you delete a compute fleet, its builds are not
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const DeleteFleetRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteFleet, request);
        }

        /**
         * An Async wrapper for DeleteFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        void DeleteFleetAsync(const DeleteFleetRequestT& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteFleet, request, handler, context);
        }

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
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteProject, request, handler, context);
        }

        /**
         * <p> Deletes a report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportOutcome DeleteReport(const Model::DeleteReportRequest& request) const;

        /**
         * A Callable wrapper for DeleteReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReportRequestT = Model::DeleteReportRequest>
        Model::DeleteReportOutcomeCallable DeleteReportCallable(const DeleteReportRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteReport, request);
        }

        /**
         * An Async wrapper for DeleteReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReportRequestT = Model::DeleteReportRequest>
        void DeleteReportAsync(const DeleteReportRequestT& request, const DeleteReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteReport, request, handler, context);
        }

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
        template<typename DeleteReportGroupRequestT = Model::DeleteReportGroupRequest>
        Model::DeleteReportGroupOutcomeCallable DeleteReportGroupCallable(const DeleteReportGroupRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteReportGroup, request);
        }

        /**
         * An Async wrapper for DeleteReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReportGroupRequestT = Model::DeleteReportGroupRequest>
        void DeleteReportGroupAsync(const DeleteReportGroupRequestT& request, const DeleteReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteReportGroup, request, handler, context);
        }

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
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteResourcePolicy, request, handler, context);
        }

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
        template<typename DeleteSourceCredentialsRequestT = Model::DeleteSourceCredentialsRequest>
        Model::DeleteSourceCredentialsOutcomeCallable DeleteSourceCredentialsCallable(const DeleteSourceCredentialsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteSourceCredentials, request);
        }

        /**
         * An Async wrapper for DeleteSourceCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSourceCredentialsRequestT = Model::DeleteSourceCredentialsRequest>
        void DeleteSourceCredentialsAsync(const DeleteSourceCredentialsRequestT& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteSourceCredentials, request, handler, context);
        }

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
        template<typename DeleteWebhookRequestT = Model::DeleteWebhookRequest>
        Model::DeleteWebhookOutcomeCallable DeleteWebhookCallable(const DeleteWebhookRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DeleteWebhook, request);
        }

        /**
         * An Async wrapper for DeleteWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWebhookRequestT = Model::DeleteWebhookRequest>
        void DeleteWebhookAsync(const DeleteWebhookRequestT& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DeleteWebhook, request, handler, context);
        }

        /**
         * <p>Retrieves one or more code coverage reports.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DescribeCodeCoverages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeCoveragesOutcome DescribeCodeCoverages(const Model::DescribeCodeCoveragesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeCoverages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCodeCoveragesRequestT = Model::DescribeCodeCoveragesRequest>
        Model::DescribeCodeCoveragesOutcomeCallable DescribeCodeCoveragesCallable(const DescribeCodeCoveragesRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DescribeCodeCoverages, request);
        }

        /**
         * An Async wrapper for DescribeCodeCoverages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCodeCoveragesRequestT = Model::DescribeCodeCoveragesRequest>
        void DescribeCodeCoveragesAsync(const DescribeCodeCoveragesRequestT& request, const DescribeCodeCoveragesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DescribeCodeCoverages, request, handler, context);
        }

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
        template<typename DescribeTestCasesRequestT = Model::DescribeTestCasesRequest>
        Model::DescribeTestCasesOutcomeCallable DescribeTestCasesCallable(const DescribeTestCasesRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::DescribeTestCases, request);
        }

        /**
         * An Async wrapper for DescribeTestCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTestCasesRequestT = Model::DescribeTestCasesRequest>
        void DescribeTestCasesAsync(const DescribeTestCasesRequestT& request, const DescribeTestCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::DescribeTestCases, request, handler, context);
        }

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
        template<typename GetReportGroupTrendRequestT = Model::GetReportGroupTrendRequest>
        Model::GetReportGroupTrendOutcomeCallable GetReportGroupTrendCallable(const GetReportGroupTrendRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::GetReportGroupTrend, request);
        }

        /**
         * An Async wrapper for GetReportGroupTrend that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReportGroupTrendRequestT = Model::GetReportGroupTrendRequest>
        void GetReportGroupTrendAsync(const GetReportGroupTrendRequestT& request, const GetReportGroupTrendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::GetReportGroupTrend, request, handler, context);
        }

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
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::GetResourcePolicy, request, handler, context);
        }

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
        template<typename ImportSourceCredentialsRequestT = Model::ImportSourceCredentialsRequest>
        Model::ImportSourceCredentialsOutcomeCallable ImportSourceCredentialsCallable(const ImportSourceCredentialsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ImportSourceCredentials, request);
        }

        /**
         * An Async wrapper for ImportSourceCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportSourceCredentialsRequestT = Model::ImportSourceCredentialsRequest>
        void ImportSourceCredentialsAsync(const ImportSourceCredentialsRequestT& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ImportSourceCredentials, request, handler, context);
        }

        /**
         * <p>Resets the cache for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/InvalidateProjectCache">AWS
         * API Reference</a></p>
         */
        virtual Model::InvalidateProjectCacheOutcome InvalidateProjectCache(const Model::InvalidateProjectCacheRequest& request) const;

        /**
         * A Callable wrapper for InvalidateProjectCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InvalidateProjectCacheRequestT = Model::InvalidateProjectCacheRequest>
        Model::InvalidateProjectCacheOutcomeCallable InvalidateProjectCacheCallable(const InvalidateProjectCacheRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::InvalidateProjectCache, request);
        }

        /**
         * An Async wrapper for InvalidateProjectCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InvalidateProjectCacheRequestT = Model::InvalidateProjectCacheRequest>
        void InvalidateProjectCacheAsync(const InvalidateProjectCacheRequestT& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::InvalidateProjectCache, request, handler, context);
        }

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
        template<typename ListBuildBatchesRequestT = Model::ListBuildBatchesRequest>
        Model::ListBuildBatchesOutcomeCallable ListBuildBatchesCallable(const ListBuildBatchesRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListBuildBatches, request);
        }

        /**
         * An Async wrapper for ListBuildBatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBuildBatchesRequestT = Model::ListBuildBatchesRequest>
        void ListBuildBatchesAsync(const ListBuildBatchesRequestT& request, const ListBuildBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListBuildBatches, request, handler, context);
        }

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
        template<typename ListBuildBatchesForProjectRequestT = Model::ListBuildBatchesForProjectRequest>
        Model::ListBuildBatchesForProjectOutcomeCallable ListBuildBatchesForProjectCallable(const ListBuildBatchesForProjectRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListBuildBatchesForProject, request);
        }

        /**
         * An Async wrapper for ListBuildBatchesForProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBuildBatchesForProjectRequestT = Model::ListBuildBatchesForProjectRequest>
        void ListBuildBatchesForProjectAsync(const ListBuildBatchesForProjectRequestT& request, const ListBuildBatchesForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListBuildBatchesForProject, request, handler, context);
        }

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
        template<typename ListBuildsRequestT = Model::ListBuildsRequest>
        Model::ListBuildsOutcomeCallable ListBuildsCallable(const ListBuildsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListBuilds, request);
        }

        /**
         * An Async wrapper for ListBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBuildsRequestT = Model::ListBuildsRequest>
        void ListBuildsAsync(const ListBuildsRequestT& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListBuilds, request, handler, context);
        }

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
        template<typename ListBuildsForProjectRequestT = Model::ListBuildsForProjectRequest>
        Model::ListBuildsForProjectOutcomeCallable ListBuildsForProjectCallable(const ListBuildsForProjectRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListBuildsForProject, request);
        }

        /**
         * An Async wrapper for ListBuildsForProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBuildsForProjectRequestT = Model::ListBuildsForProjectRequest>
        void ListBuildsForProjectAsync(const ListBuildsForProjectRequestT& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListBuildsForProject, request, handler, context);
        }

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
        template<typename ListCuratedEnvironmentImagesRequestT = Model::ListCuratedEnvironmentImagesRequest>
        Model::ListCuratedEnvironmentImagesOutcomeCallable ListCuratedEnvironmentImagesCallable(const ListCuratedEnvironmentImagesRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListCuratedEnvironmentImages, request);
        }

        /**
         * An Async wrapper for ListCuratedEnvironmentImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCuratedEnvironmentImagesRequestT = Model::ListCuratedEnvironmentImagesRequest>
        void ListCuratedEnvironmentImagesAsync(const ListCuratedEnvironmentImagesRequestT& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListCuratedEnvironmentImages, request, handler, context);
        }

        /**
         * <p>Gets a list of compute fleet names with each compute fleet name representing
         * a single compute fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFleetsRequestT = Model::ListFleetsRequest>
        Model::ListFleetsOutcomeCallable ListFleetsCallable(const ListFleetsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListFleets, request);
        }

        /**
         * An Async wrapper for ListFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFleetsRequestT = Model::ListFleetsRequest>
        void ListFleetsAsync(const ListFleetsRequestT& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListFleets, request, handler, context);
        }

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
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListProjects, request, handler, context);
        }

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
        template<typename ListReportGroupsRequestT = Model::ListReportGroupsRequest>
        Model::ListReportGroupsOutcomeCallable ListReportGroupsCallable(const ListReportGroupsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListReportGroups, request);
        }

        /**
         * An Async wrapper for ListReportGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportGroupsRequestT = Model::ListReportGroupsRequest>
        void ListReportGroupsAsync(const ListReportGroupsRequestT& request, const ListReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListReportGroups, request, handler, context);
        }

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
        template<typename ListReportsRequestT = Model::ListReportsRequest>
        Model::ListReportsOutcomeCallable ListReportsCallable(const ListReportsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListReports, request);
        }

        /**
         * An Async wrapper for ListReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportsRequestT = Model::ListReportsRequest>
        void ListReportsAsync(const ListReportsRequestT& request, const ListReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListReports, request, handler, context);
        }

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
        template<typename ListReportsForReportGroupRequestT = Model::ListReportsForReportGroupRequest>
        Model::ListReportsForReportGroupOutcomeCallable ListReportsForReportGroupCallable(const ListReportsForReportGroupRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListReportsForReportGroup, request);
        }

        /**
         * An Async wrapper for ListReportsForReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportsForReportGroupRequestT = Model::ListReportsForReportGroupRequest>
        void ListReportsForReportGroupAsync(const ListReportsForReportGroupRequestT& request, const ListReportsForReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListReportsForReportGroup, request, handler, context);
        }

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
        template<typename ListSharedProjectsRequestT = Model::ListSharedProjectsRequest>
        Model::ListSharedProjectsOutcomeCallable ListSharedProjectsCallable(const ListSharedProjectsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListSharedProjects, request);
        }

        /**
         * An Async wrapper for ListSharedProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSharedProjectsRequestT = Model::ListSharedProjectsRequest>
        void ListSharedProjectsAsync(const ListSharedProjectsRequestT& request, const ListSharedProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListSharedProjects, request, handler, context);
        }

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
        template<typename ListSharedReportGroupsRequestT = Model::ListSharedReportGroupsRequest>
        Model::ListSharedReportGroupsOutcomeCallable ListSharedReportGroupsCallable(const ListSharedReportGroupsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListSharedReportGroups, request);
        }

        /**
         * An Async wrapper for ListSharedReportGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSharedReportGroupsRequestT = Model::ListSharedReportGroupsRequest>
        void ListSharedReportGroupsAsync(const ListSharedReportGroupsRequestT& request, const ListSharedReportGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListSharedReportGroups, request, handler, context);
        }

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
        template<typename ListSourceCredentialsRequestT = Model::ListSourceCredentialsRequest>
        Model::ListSourceCredentialsOutcomeCallable ListSourceCredentialsCallable(const ListSourceCredentialsRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::ListSourceCredentials, request);
        }

        /**
         * An Async wrapper for ListSourceCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSourceCredentialsRequestT = Model::ListSourceCredentialsRequest>
        void ListSourceCredentialsAsync(const ListSourceCredentialsRequestT& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::ListSourceCredentials, request, handler, context);
        }

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
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Restarts a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/RetryBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryBuildOutcome RetryBuild(const Model::RetryBuildRequest& request) const;

        /**
         * A Callable wrapper for RetryBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetryBuildRequestT = Model::RetryBuildRequest>
        Model::RetryBuildOutcomeCallable RetryBuildCallable(const RetryBuildRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::RetryBuild, request);
        }

        /**
         * An Async wrapper for RetryBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetryBuildRequestT = Model::RetryBuildRequest>
        void RetryBuildAsync(const RetryBuildRequestT& request, const RetryBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::RetryBuild, request, handler, context);
        }

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
        template<typename RetryBuildBatchRequestT = Model::RetryBuildBatchRequest>
        Model::RetryBuildBatchOutcomeCallable RetryBuildBatchCallable(const RetryBuildBatchRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::RetryBuildBatch, request);
        }

        /**
         * An Async wrapper for RetryBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetryBuildBatchRequestT = Model::RetryBuildBatchRequest>
        void RetryBuildBatchAsync(const RetryBuildBatchRequestT& request, const RetryBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::RetryBuildBatch, request, handler, context);
        }

        /**
         * <p>Starts running a build with the settings defined in the project. These
         * setting include: how to run a build, where to get the source code, which build
         * environment to use, which build commands to run, and where to store the build
         * output.</p> <p>You can also start a build run by overriding some of the build
         * settings in the project. The overrides only apply for that specific start build
         * request. The settings in the project are unaltered.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildOutcome StartBuild(const Model::StartBuildRequest& request) const;

        /**
         * A Callable wrapper for StartBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartBuildRequestT = Model::StartBuildRequest>
        Model::StartBuildOutcomeCallable StartBuildCallable(const StartBuildRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::StartBuild, request);
        }

        /**
         * An Async wrapper for StartBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBuildRequestT = Model::StartBuildRequest>
        void StartBuildAsync(const StartBuildRequestT& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::StartBuild, request, handler, context);
        }

        /**
         * <p>Starts a batch build for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StartBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBuildBatchOutcome StartBuildBatch(const Model::StartBuildBatchRequest& request) const;

        /**
         * A Callable wrapper for StartBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartBuildBatchRequestT = Model::StartBuildBatchRequest>
        Model::StartBuildBatchOutcomeCallable StartBuildBatchCallable(const StartBuildBatchRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::StartBuildBatch, request);
        }

        /**
         * An Async wrapper for StartBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBuildBatchRequestT = Model::StartBuildBatchRequest>
        void StartBuildBatchAsync(const StartBuildBatchRequestT& request, const StartBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::StartBuildBatch, request, handler, context);
        }

        /**
         * <p>Attempts to stop running a build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildOutcome StopBuild(const Model::StopBuildRequest& request) const;

        /**
         * A Callable wrapper for StopBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopBuildRequestT = Model::StopBuildRequest>
        Model::StopBuildOutcomeCallable StopBuildCallable(const StopBuildRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::StopBuild, request);
        }

        /**
         * An Async wrapper for StopBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopBuildRequestT = Model::StopBuildRequest>
        void StopBuildAsync(const StopBuildRequestT& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::StopBuild, request, handler, context);
        }

        /**
         * <p>Stops a running batch build.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/StopBuildBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBuildBatchOutcome StopBuildBatch(const Model::StopBuildBatchRequest& request) const;

        /**
         * A Callable wrapper for StopBuildBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopBuildBatchRequestT = Model::StopBuildBatchRequest>
        Model::StopBuildBatchOutcomeCallable StopBuildBatchCallable(const StopBuildBatchRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::StopBuildBatch, request);
        }

        /**
         * An Async wrapper for StopBuildBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopBuildBatchRequestT = Model::StopBuildBatchRequest>
        void StopBuildBatchAsync(const StopBuildBatchRequestT& request, const StopBuildBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::StopBuildBatch, request, handler, context);
        }

        /**
         * <p>Updates a compute fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetOutcome UpdateFleet(const Model::UpdateFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        Model::UpdateFleetOutcomeCallable UpdateFleetCallable(const UpdateFleetRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::UpdateFleet, request);
        }

        /**
         * An Async wrapper for UpdateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        void UpdateFleetAsync(const UpdateFleetRequestT& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::UpdateFleet, request, handler, context);
        }

        /**
         * <p>Changes the settings of a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::UpdateProject, request, handler, context);
        }

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
         * <p>Do not store sensitive values in environment variables. We recommend that you
         * use an Amazon EC2 Systems Manager Parameter Store or Secrets Manager to store
         * sensitive values.</p> </li> <li> <p>Follow <a
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
        template<typename UpdateProjectVisibilityRequestT = Model::UpdateProjectVisibilityRequest>
        Model::UpdateProjectVisibilityOutcomeCallable UpdateProjectVisibilityCallable(const UpdateProjectVisibilityRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::UpdateProjectVisibility, request);
        }

        /**
         * An Async wrapper for UpdateProjectVisibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectVisibilityRequestT = Model::UpdateProjectVisibilityRequest>
        void UpdateProjectVisibilityAsync(const UpdateProjectVisibilityRequestT& request, const UpdateProjectVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::UpdateProjectVisibility, request, handler, context);
        }

        /**
         * <p> Updates a report group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateReportGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportGroupOutcome UpdateReportGroup(const Model::UpdateReportGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateReportGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReportGroupRequestT = Model::UpdateReportGroupRequest>
        Model::UpdateReportGroupOutcomeCallable UpdateReportGroupCallable(const UpdateReportGroupRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::UpdateReportGroup, request);
        }

        /**
         * An Async wrapper for UpdateReportGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReportGroupRequestT = Model::UpdateReportGroupRequest>
        void UpdateReportGroupAsync(const UpdateReportGroupRequestT& request, const UpdateReportGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::UpdateReportGroup, request, handler, context);
        }

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
        template<typename UpdateWebhookRequestT = Model::UpdateWebhookRequest>
        Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const UpdateWebhookRequestT& request) const
        {
            return SubmitCallable(&CodeBuildClient::UpdateWebhook, request);
        }

        /**
         * An Async wrapper for UpdateWebhook that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWebhookRequestT = Model::UpdateWebhookRequest>
        void UpdateWebhookAsync(const UpdateWebhookRequestT& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeBuildClient::UpdateWebhook, request, handler, context);
        }


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
