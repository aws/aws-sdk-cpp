/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/codebuild/model/BatchGetBuildsResult.h>
#include <aws/codebuild/model/BatchGetProjectsResult.h>
#include <aws/codebuild/model/CreateProjectResult.h>
#include <aws/codebuild/model/CreateWebhookResult.h>
#include <aws/codebuild/model/DeleteProjectResult.h>
#include <aws/codebuild/model/DeleteSourceCredentialsResult.h>
#include <aws/codebuild/model/DeleteWebhookResult.h>
#include <aws/codebuild/model/ImportSourceCredentialsResult.h>
#include <aws/codebuild/model/InvalidateProjectCacheResult.h>
#include <aws/codebuild/model/ListBuildsResult.h>
#include <aws/codebuild/model/ListBuildsForProjectResult.h>
#include <aws/codebuild/model/ListCuratedEnvironmentImagesResult.h>
#include <aws/codebuild/model/ListProjectsResult.h>
#include <aws/codebuild/model/ListSourceCredentialsResult.h>
#include <aws/codebuild/model/StartBuildResult.h>
#include <aws/codebuild/model/StopBuildResult.h>
#include <aws/codebuild/model/UpdateProjectResult.h>
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
        class BatchGetBuildsRequest;
        class BatchGetProjectsRequest;
        class CreateProjectRequest;
        class CreateWebhookRequest;
        class DeleteProjectRequest;
        class DeleteSourceCredentialsRequest;
        class DeleteWebhookRequest;
        class ImportSourceCredentialsRequest;
        class InvalidateProjectCacheRequest;
        class ListBuildsRequest;
        class ListBuildsForProjectRequest;
        class ListCuratedEnvironmentImagesRequest;
        class ListProjectsRequest;
        class ListSourceCredentialsRequest;
        class StartBuildRequest;
        class StopBuildRequest;
        class UpdateProjectRequest;
        class UpdateWebhookRequest;

        typedef Aws::Utils::Outcome<BatchDeleteBuildsResult, Aws::Client::AWSError<CodeBuildErrors>> BatchDeleteBuildsOutcome;
        typedef Aws::Utils::Outcome<BatchGetBuildsResult, Aws::Client::AWSError<CodeBuildErrors>> BatchGetBuildsOutcome;
        typedef Aws::Utils::Outcome<BatchGetProjectsResult, Aws::Client::AWSError<CodeBuildErrors>> BatchGetProjectsOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, Aws::Client::AWSError<CodeBuildErrors>> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<CreateWebhookResult, Aws::Client::AWSError<CodeBuildErrors>> CreateWebhookOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, Aws::Client::AWSError<CodeBuildErrors>> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteSourceCredentialsResult, Aws::Client::AWSError<CodeBuildErrors>> DeleteSourceCredentialsOutcome;
        typedef Aws::Utils::Outcome<DeleteWebhookResult, Aws::Client::AWSError<CodeBuildErrors>> DeleteWebhookOutcome;
        typedef Aws::Utils::Outcome<ImportSourceCredentialsResult, Aws::Client::AWSError<CodeBuildErrors>> ImportSourceCredentialsOutcome;
        typedef Aws::Utils::Outcome<InvalidateProjectCacheResult, Aws::Client::AWSError<CodeBuildErrors>> InvalidateProjectCacheOutcome;
        typedef Aws::Utils::Outcome<ListBuildsResult, Aws::Client::AWSError<CodeBuildErrors>> ListBuildsOutcome;
        typedef Aws::Utils::Outcome<ListBuildsForProjectResult, Aws::Client::AWSError<CodeBuildErrors>> ListBuildsForProjectOutcome;
        typedef Aws::Utils::Outcome<ListCuratedEnvironmentImagesResult, Aws::Client::AWSError<CodeBuildErrors>> ListCuratedEnvironmentImagesOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, Aws::Client::AWSError<CodeBuildErrors>> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListSourceCredentialsResult, Aws::Client::AWSError<CodeBuildErrors>> ListSourceCredentialsOutcome;
        typedef Aws::Utils::Outcome<StartBuildResult, Aws::Client::AWSError<CodeBuildErrors>> StartBuildOutcome;
        typedef Aws::Utils::Outcome<StopBuildResult, Aws::Client::AWSError<CodeBuildErrors>> StopBuildOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, Aws::Client::AWSError<CodeBuildErrors>> UpdateProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateWebhookResult, Aws::Client::AWSError<CodeBuildErrors>> UpdateWebhookOutcome;

        typedef std::future<BatchDeleteBuildsOutcome> BatchDeleteBuildsOutcomeCallable;
        typedef std::future<BatchGetBuildsOutcome> BatchGetBuildsOutcomeCallable;
        typedef std::future<BatchGetProjectsOutcome> BatchGetProjectsOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<CreateWebhookOutcome> CreateWebhookOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DeleteSourceCredentialsOutcome> DeleteSourceCredentialsOutcomeCallable;
        typedef std::future<DeleteWebhookOutcome> DeleteWebhookOutcomeCallable;
        typedef std::future<ImportSourceCredentialsOutcome> ImportSourceCredentialsOutcomeCallable;
        typedef std::future<InvalidateProjectCacheOutcome> InvalidateProjectCacheOutcomeCallable;
        typedef std::future<ListBuildsOutcome> ListBuildsOutcomeCallable;
        typedef std::future<ListBuildsForProjectOutcome> ListBuildsForProjectOutcomeCallable;
        typedef std::future<ListCuratedEnvironmentImagesOutcome> ListCuratedEnvironmentImagesOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListSourceCredentialsOutcome> ListSourceCredentialsOutcomeCallable;
        typedef std::future<StartBuildOutcome> StartBuildOutcomeCallable;
        typedef std::future<StopBuildOutcome> StopBuildOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
        typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
} // namespace Model

  class CodeBuildClient;

    typedef std::function<void(const CodeBuildClient*, const Model::BatchDeleteBuildsRequest&, const Model::BatchDeleteBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteBuildsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetBuildsRequest&, const Model::BatchGetBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetBuildsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::BatchGetProjectsRequest&, const Model::BatchGetProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::CreateWebhookRequest&, const Model::CreateWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebhookResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteSourceCredentialsRequest&, const Model::DeleteSourceCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceCredentialsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::DeleteWebhookRequest&, const Model::DeleteWebhookOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebhookResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ImportSourceCredentialsRequest&, const Model::ImportSourceCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportSourceCredentialsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::InvalidateProjectCacheRequest&, const Model::InvalidateProjectCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvalidateProjectCacheResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListBuildsRequest&, const Model::ListBuildsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListBuildsForProjectRequest&, const Model::ListBuildsForProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuildsForProjectResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListCuratedEnvironmentImagesRequest&, const Model::ListCuratedEnvironmentImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCuratedEnvironmentImagesResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::ListSourceCredentialsRequest&, const Model::ListSourceCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceCredentialsResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::StartBuildRequest&, const Model::StartBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBuildResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::StopBuildRequest&, const Model::StopBuildOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBuildResponseReceivedHandler;
    typedef std::function<void(const CodeBuildClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
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
   * build time you consume. For more information about AWS CodeBuild, see the <i>AWS
   * CodeBuild User Guide</i>.</p> <p>AWS CodeBuild supports these operations:</p>
   * <ul> <li> <p> <code>BatchDeleteBuilds</code>: Deletes one or more builds.</p>
   * </li> <li> <p> <code>BatchGetProjects</code>: Gets information about one or more
   * build projects. A <i>build project</i> defines how AWS CodeBuild runs a build.
   * This includes information such as where to get the source code to build, the
   * build environment to use, the build commands to run, and where to store the
   * build output. A <i>build environment</i> is a representation of operating
   * system, programming language runtime, and tools that AWS CodeBuild uses to run a
   * build. You can add tags to build projects to help manage your resources and
   * costs.</p> </li> <li> <p> <code>CreateProject</code>: Creates a build
   * project.</p> </li> <li> <p> <code>CreateWebhook</code>: For an existing AWS
   * CodeBuild build project that has its source code stored in a GitHub or Bitbucket
   * repository, enables AWS CodeBuild to start rebuilding the source code every time
   * a code change is pushed to the repository.</p> </li> <li> <p>
   * <code>UpdateWebhook</code>: Changes the settings of an existing webhook.</p>
   * </li> <li> <p> <code>DeleteProject</code>: Deletes a build project.</p> </li>
   * <li> <p> <code>DeleteWebhook</code>: For an existing AWS CodeBuild build project
   * that has its source code stored in a GitHub or Bitbucket repository, stops AWS
   * CodeBuild from rebuilding the source code every time a code change is pushed to
   * the repository.</p> </li> <li> <p> <code>ListProjects</code>: Gets a list of
   * build project names, with each build project name representing a single build
   * project.</p> </li> <li> <p> <code>UpdateProject</code>: Changes the settings of
   * an existing build project.</p> </li> <li> <p> <code>BatchGetBuilds</code>: Gets
   * information about one or more builds.</p> </li> <li> <p>
   * <code>ListBuilds</code>: Gets a list of build IDs, with each build ID
   * representing a single build.</p> </li> <li> <p>
   * <code>ListBuildsForProject</code>: Gets a list of build IDs for the specified
   * build project, with each build ID representing a single build.</p> </li> <li>
   * <p> <code>StartBuild</code>: Starts running a build.</p> </li> <li> <p>
   * <code>StopBuild</code>: Attempts to stop running a build.</p> </li> <li> <p>
   * <code>ListCuratedEnvironmentImages</code>: Gets information about Docker images
   * that are managed by AWS CodeBuild.</p> </li> <li> <p>
   * <code>DeleteSourceCredentials</code>: Deletes a set of GitHub, GitHub
   * Enterprise, or Bitbucket source credentials.</p> </li> <li> <p>
   * <code>ImportSourceCredentials</code>: Imports the source repository credentials
   * for an AWS CodeBuild project that has its source code stored in a GitHub, GitHub
   * Enterprise, or Bitbucket repository.</p> </li> <li> <p>
   * <code>ListSourceCredentials</code>: Returns a list of
   * <code>SourceCredentialsInfo</code> objects. Each
   * <code>SourceCredentialsInfo</code> object includes the authentication type,
   * token ARN, and type of source provider for one set of credentials.</p> </li>
   * </ul>
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

        inline virtual const char* GetServiceClientName() const override { return "CodeBuild"; }


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
         * <p>Gets information about builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBuildsOutcome BatchGetBuilds(const Model::BatchGetBuildsRequest& request) const;

        /**
         * <p>Gets information about builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetBuildsOutcomeCallable BatchGetBuildsCallable(const Model::BatchGetBuildsRequest& request) const;

        /**
         * <p>Gets information about builds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetBuilds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetBuildsAsync(const Model::BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about build projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetProjectsOutcome BatchGetProjects(const Model::BatchGetProjectsRequest& request) const;

        /**
         * <p>Gets information about build projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetProjectsOutcomeCallable BatchGetProjectsCallable(const Model::BatchGetProjectsRequest& request) const;

        /**
         * <p>Gets information about build projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchGetProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetProjectsAsync(const Model::BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, enables AWS CodeBuild to start rebuilding
         * the source code every time a code change is pushed to the repository.</p>
         * <important> <p>If you enable webhooks for an AWS CodeBuild project, and the
         * project is used as a build step in AWS CodePipeline, then two identical builds
         * are created for each commit. One build is triggered through webhooks, and one
         * through AWS CodePipeline. Because billing is on a per-build basis, you are
         * billed for both builds. Therefore, if you are using AWS CodePipeline, we
         * recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild
         * console, clear the Webhook box. For more information, see step 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebhookOutcome CreateWebhook(const Model::CreateWebhookRequest& request) const;

        /**
         * <p>For an existing AWS CodeBuild build project that has its source code stored
         * in a GitHub or Bitbucket repository, enables AWS CodeBuild to start rebuilding
         * the source code every time a code change is pushed to the repository.</p>
         * <important> <p>If you enable webhooks for an AWS CodeBuild project, and the
         * project is used as a build step in AWS CodePipeline, then two identical builds
         * are created for each commit. One build is triggered through webhooks, and one
         * through AWS CodePipeline. Because billing is on a per-build basis, you are
         * billed for both builds. Therefore, if you are using AWS CodePipeline, we
         * recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild
         * console, clear the Webhook box. For more information, see step 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> </important><p><h3>See Also:</h3>   <a
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
         * <important> <p>If you enable webhooks for an AWS CodeBuild project, and the
         * project is used as a build step in AWS CodePipeline, then two identical builds
         * are created for each commit. One build is triggered through webhooks, and one
         * through AWS CodePipeline. Because billing is on a per-build basis, you are
         * billed for both builds. Therefore, if you are using AWS CodePipeline, we
         * recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild
         * console, clear the Webhook box. For more information, see step 5 in <a
         * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change
         * a Build Project's Settings</a>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CreateWebhook">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a build project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> Updates the webhook associated with an AWS CodeBuild build project. </p>
         * <note> <p> If you use Bitbucket for your repository, <code>rotateSecret</code>
         * is ignored. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebhookOutcome UpdateWebhook(const Model::UpdateWebhookRequest& request) const;

        /**
         * <p> Updates the webhook associated with an AWS CodeBuild build project. </p>
         * <note> <p> If you use Bitbucket for your repository, <code>rotateSecret</code>
         * is ignored. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/UpdateWebhook">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWebhookOutcomeCallable UpdateWebhookCallable(const Model::UpdateWebhookRequest& request) const;

        /**
         * <p> Updates the webhook associated with an AWS CodeBuild build project. </p>
         * <note> <p> If you use Bitbucket for your repository, <code>rotateSecret</code>
         * is ignored. </p> </note><p><h3>See Also:</h3>   <a
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
        void BatchGetBuildsAsyncHelper(const Model::BatchGetBuildsRequest& request, const BatchGetBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetProjectsAsyncHelper(const Model::BatchGetProjectsRequest& request, const BatchGetProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWebhookAsyncHelper(const Model::CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSourceCredentialsAsyncHelper(const Model::DeleteSourceCredentialsRequest& request, const DeleteSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWebhookAsyncHelper(const Model::DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportSourceCredentialsAsyncHelper(const Model::ImportSourceCredentialsRequest& request, const ImportSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvalidateProjectCacheAsyncHelper(const Model::InvalidateProjectCacheRequest& request, const InvalidateProjectCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsAsyncHelper(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuildsForProjectAsyncHelper(const Model::ListBuildsForProjectRequest& request, const ListBuildsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCuratedEnvironmentImagesAsyncHelper(const Model::ListCuratedEnvironmentImagesRequest& request, const ListCuratedEnvironmentImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSourceCredentialsAsyncHelper(const Model::ListSourceCredentialsRequest& request, const ListSourceCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBuildAsyncHelper(const Model::StartBuildRequest& request, const StartBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopBuildAsyncHelper(const Model::StopBuildRequest& request, const StopBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWebhookAsyncHelper(const Model::UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeBuild
} // namespace Aws
