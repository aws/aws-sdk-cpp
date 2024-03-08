/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codecatalyst/CodeCatalystServiceClientModel.h>
#include <aws/codecatalyst/model/VerifySessionRequest.h>

namespace Aws
{
namespace CodeCatalyst
{
  /**
   * <p>Welcome to the Amazon CodeCatalyst API reference. This reference provides
   * descriptions of operations and data types for Amazon CodeCatalyst. You can use
   * the Amazon CodeCatalyst API to work with the following objects. </p> <p>Spaces,
   * by calling the following:</p> <ul> <li> <p> <a>DeleteSpace</a>, which deletes a
   * space.</p> </li> <li> <p> <a>GetSpace</a>, which returns information about a
   * space.</p> </li> <li> <p> <a>GetSubscription</a>, which returns information
   * about the Amazon Web Services account used for billing purposes and the billing
   * plan for the space.</p> </li> <li> <p> <a>ListSpaces</a>, which retrieves a list
   * of spaces.</p> </li> <li> <p> <a>UpdateSpace</a>, which changes one or more
   * values for a space.</p> </li> </ul> <p>Projects, by calling the following:</p>
   * <ul> <li> <p> <a>CreateProject</a> which creates a project in a specified
   * space.</p> </li> <li> <p> <a>GetProject</a>, which returns information about a
   * project.</p> </li> <li> <p> <a>ListProjects</a>, which retrieves a list of
   * projects in a space.</p> </li> </ul> <p>Users, by calling the following:</p>
   * <ul> <li> <p> <a>GetUserDetails</a>, which returns information about a user in
   * Amazon CodeCatalyst.</p> </li> </ul> <p>Source repositories, by calling the
   * following:</p> <ul> <li> <p> <a>CreateSourceRepository</a>, which creates an
   * empty Git-based source repository in a specified project.</p> </li> <li> <p>
   * <a>CreateSourceRepositoryBranch</a>, which creates a branch in a specified
   * repository where you can work on code.</p> </li> <li> <p>
   * <a>DeleteSourceRepository</a>, which deletes a source repository.</p> </li> <li>
   * <p> <a>GetSourceRepository</a>, which returns information about a source
   * repository.</p> </li> <li> <p> <a>GetSourceRepositoryCloneUrls</a>, which
   * returns information about the URLs that can be used with a Git client to clone a
   * source repository.</p> </li> <li> <p> <a>ListSourceRepositories</a>, which
   * retrieves a list of source repositories in a project.</p> </li> <li> <p>
   * <a>ListSourceRepositoryBranches</a>, which retrieves a list of branches in a
   * source repository.</p> </li> </ul> <p>Dev Environments and the Amazon Web
   * Services Toolkits, by calling the following:</p> <ul> <li> <p>
   * <a>CreateDevEnvironment</a>, which creates a Dev Environment, where you can
   * quickly work on the code stored in the source repositories of your project.</p>
   * </li> <li> <p> <a>DeleteDevEnvironment</a>, which deletes a Dev Environment.</p>
   * </li> <li> <p> <a>GetDevEnvironment</a>, which returns information about a Dev
   * Environment.</p> </li> <li> <p> <a>ListDevEnvironments</a>, which retrieves a
   * list of Dev Environments in a project.</p> </li> <li> <p>
   * <a>ListDevEnvironmentSessions</a>, which retrieves a list of active Dev
   * Environment sessions in a project.</p> </li> <li> <p>
   * <a>StartDevEnvironment</a>, which starts a specified Dev Environment and puts it
   * into an active state.</p> </li> <li> <p> <a>StartDevEnvironmentSession</a>,
   * which starts a session to a specified Dev Environment.</p> </li> <li> <p>
   * <a>StopDevEnvironment</a>, which stops a specified Dev Environment and puts it
   * into an stopped state.</p> </li> <li> <p> <a>StopDevEnvironmentSession</a>,
   * which stops a session for a specified Dev Environment.</p> </li> <li> <p>
   * <a>UpdateDevEnvironment</a>, which changes one or more values for a Dev
   * Environment.</p> </li> </ul> <p>Workflows, by calling the following:</p> <ul>
   * <li> <p> <a>GetWorkflow</a>, which returns information about a workflow.</p>
   * </li> <li> <p> <a>GetWorkflowRun</a>, which returns information about a
   * specified run of a workflow.</p> </li> <li> <p> <a>ListWorkflowRuns</a>, which
   * retrieves a list of runs of a specified workflow.</p> </li> <li> <p>
   * <a>ListWorkflows</a>, which retrieves a list of workflows in a specified
   * project.</p> </li> <li> <p> <a>StartWorkflowRun</a>, which starts a run of a
   * specified workflow.</p> </li> </ul> <p>Security, activity, and resource
   * management in Amazon CodeCatalyst, by calling the following:</p> <ul> <li> <p>
   * <a>CreateAccessToken</a>, which creates a personal access token (PAT) for the
   * current user.</p> </li> <li> <p> <a>DeleteAccessToken</a>, which deletes a
   * specified personal access token (PAT).</p> </li> <li> <p>
   * <a>ListAccessTokens</a>, which lists all personal access tokens (PATs)
   * associated with a user.</p> </li> <li> <p> <a>ListEventLogs</a>, which retrieves
   * a list of events that occurred during a specified time period in a space.</p>
   * </li> <li> <p> <a>VerifySession</a>, which verifies whether the calling user has
   * a valid Amazon CodeCatalyst login and session.</p> </li> </ul>  <p>If you
   * are using the Amazon CodeCatalyst APIs with an SDK or the CLI, you must
   * configure your computer to work with Amazon CodeCatalyst and single sign-on
   * (SSO). For more information, see <a
   * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/set-up-cli.html">Setting
   * up to use the CLI with Amazon CodeCatalyst</a> and the SSO documentation for
   * your SDK.</p> 
   */
  class AWS_CODECATALYST_API CodeCatalystClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeCatalystClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeCatalystClientConfiguration ClientConfigurationType;
      typedef CodeCatalystEndpointProvider EndpointProviderType;

        /**
        * Initializes client to use BearerTokenAuthSignerProvider, with default http client factory, and optional client config.
        */
        CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                           std::shared_ptr<CodeCatalystEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::CodeCatalyst::CodeCatalystClientConfiguration& clientConfiguration = Aws::CodeCatalyst::CodeCatalystClientConfiguration());


        /* Legacy constructors due deprecation */
        /**
        * Initializes client to use BearerTokenAuthSignerProvider, with default http client factory, and optional client config.
        */
        CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeCatalystClient();

        /**
         * <p>Creates a personal access token (PAT) for the current user. A personal access
         * token (PAT) is similar to a password. It is associated with your user identity
         * for use across all spaces and projects in Amazon CodeCatalyst. You use PATs to
         * access CodeCatalyst from resources that include integrated development
         * environments (IDEs) and Git-based source repositories. PATs represent you in
         * Amazon CodeCatalyst and you can manage them in your user settings.For more
         * information, see <a
         * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/ipa-tokens-keys.html">Managing
         * personal access tokens in Amazon CodeCatalyst</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateAccessToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessTokenOutcome CreateAccessToken(const Model::CreateAccessTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessTokenRequestT = Model::CreateAccessTokenRequest>
        Model::CreateAccessTokenOutcomeCallable CreateAccessTokenCallable(const CreateAccessTokenRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::CreateAccessToken, request);
        }

        /**
         * An Async wrapper for CreateAccessToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessTokenRequestT = Model::CreateAccessTokenRequest>
        void CreateAccessTokenAsync(const CreateAccessTokenRequestT& request, const CreateAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::CreateAccessToken, request, handler, context);
        }

        /**
         * <p>Creates a Dev Environment in Amazon CodeCatalyst, a cloud-based development
         * environment that you can use to quickly work on the code stored in the source
         * repositories of your project. </p>  <p>When created in the Amazon
         * CodeCatalyst console, by default a Dev Environment is configured to have a 2
         * core processor, 4GB of RAM, and 16GB of persistent storage. None of these
         * defaults apply to a Dev Environment created programmatically.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevEnvironmentOutcome CreateDevEnvironment(const Model::CreateDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDevEnvironmentRequestT = Model::CreateDevEnvironmentRequest>
        Model::CreateDevEnvironmentOutcomeCallable CreateDevEnvironmentCallable(const CreateDevEnvironmentRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::CreateDevEnvironment, request);
        }

        /**
         * An Async wrapper for CreateDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDevEnvironmentRequestT = Model::CreateDevEnvironmentRequest>
        void CreateDevEnvironmentAsync(const CreateDevEnvironmentRequestT& request, const CreateDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::CreateDevEnvironment, request, handler, context);
        }

        /**
         * <p>Creates a project in a specified space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Creates an empty Git-based source repository in a specified project. The
         * repository is created with an initial empty commit with a default branch named
         * <code>main</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateSourceRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSourceRepositoryOutcome CreateSourceRepository(const Model::CreateSourceRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateSourceRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSourceRepositoryRequestT = Model::CreateSourceRepositoryRequest>
        Model::CreateSourceRepositoryOutcomeCallable CreateSourceRepositoryCallable(const CreateSourceRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::CreateSourceRepository, request);
        }

        /**
         * An Async wrapper for CreateSourceRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSourceRepositoryRequestT = Model::CreateSourceRepositoryRequest>
        void CreateSourceRepositoryAsync(const CreateSourceRepositoryRequestT& request, const CreateSourceRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::CreateSourceRepository, request, handler, context);
        }

        /**
         * <p>Creates a branch in a specified source repository in Amazon CodeCatalyst.
         * </p>  <p>This API only creates a branch in a source repository hosted in
         * Amazon CodeCatalyst. You cannot use this API to create a branch in a linked
         * repository.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateSourceRepositoryBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSourceRepositoryBranchOutcome CreateSourceRepositoryBranch(const Model::CreateSourceRepositoryBranchRequest& request) const;

        /**
         * A Callable wrapper for CreateSourceRepositoryBranch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSourceRepositoryBranchRequestT = Model::CreateSourceRepositoryBranchRequest>
        Model::CreateSourceRepositoryBranchOutcomeCallable CreateSourceRepositoryBranchCallable(const CreateSourceRepositoryBranchRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::CreateSourceRepositoryBranch, request);
        }

        /**
         * An Async wrapper for CreateSourceRepositoryBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSourceRepositoryBranchRequestT = Model::CreateSourceRepositoryBranchRequest>
        void CreateSourceRepositoryBranchAsync(const CreateSourceRepositoryBranchRequestT& request, const CreateSourceRepositoryBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::CreateSourceRepositoryBranch, request, handler, context);
        }

        /**
         * <p>Deletes a specified personal access token (PAT). A personal access token can
         * only be deleted by the user who created it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DeleteAccessToken">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessTokenOutcome DeleteAccessToken(const Model::DeleteAccessTokenRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessTokenRequestT = Model::DeleteAccessTokenRequest>
        Model::DeleteAccessTokenOutcomeCallable DeleteAccessTokenCallable(const DeleteAccessTokenRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::DeleteAccessToken, request);
        }

        /**
         * An Async wrapper for DeleteAccessToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessTokenRequestT = Model::DeleteAccessTokenRequest>
        void DeleteAccessTokenAsync(const DeleteAccessTokenRequestT& request, const DeleteAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::DeleteAccessToken, request, handler, context);
        }

        /**
         * <p>Deletes a Dev Environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DeleteDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevEnvironmentOutcome DeleteDevEnvironment(const Model::DeleteDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDevEnvironmentRequestT = Model::DeleteDevEnvironmentRequest>
        Model::DeleteDevEnvironmentOutcomeCallable DeleteDevEnvironmentCallable(const DeleteDevEnvironmentRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::DeleteDevEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDevEnvironmentRequestT = Model::DeleteDevEnvironmentRequest>
        void DeleteDevEnvironmentAsync(const DeleteDevEnvironmentRequestT& request, const DeleteDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::DeleteDevEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes a project in a space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Deletes a source repository in Amazon CodeCatalyst. You cannot use this API
         * to delete a linked repository. It can only be used to delete a Amazon
         * CodeCatalyst source repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DeleteSourceRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceRepositoryOutcome DeleteSourceRepository(const Model::DeleteSourceRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteSourceRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSourceRepositoryRequestT = Model::DeleteSourceRepositoryRequest>
        Model::DeleteSourceRepositoryOutcomeCallable DeleteSourceRepositoryCallable(const DeleteSourceRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::DeleteSourceRepository, request);
        }

        /**
         * An Async wrapper for DeleteSourceRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSourceRepositoryRequestT = Model::DeleteSourceRepositoryRequest>
        void DeleteSourceRepositoryAsync(const DeleteSourceRepositoryRequestT& request, const DeleteSourceRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::DeleteSourceRepository, request, handler, context);
        }

        /**
         * <p>Deletes a space.</p>  <p>Deleting a space cannot be undone.
         * Additionally, since space names must be unique across Amazon CodeCatalyst, you
         * cannot reuse names of deleted spaces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DeleteSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
        Model::DeleteSpaceOutcomeCallable DeleteSpaceCallable(const DeleteSpaceRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::DeleteSpace, request);
        }

        /**
         * An Async wrapper for DeleteSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
        void DeleteSpaceAsync(const DeleteSpaceRequestT& request, const DeleteSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::DeleteSpace, request, handler, context);
        }

        /**
         * <p>Returns information about a Dev Environment for a source repository in a
         * project. Dev Environments are specific to the user who creates
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevEnvironmentOutcome GetDevEnvironment(const Model::GetDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDevEnvironmentRequestT = Model::GetDevEnvironmentRequest>
        Model::GetDevEnvironmentOutcomeCallable GetDevEnvironmentCallable(const GetDevEnvironmentRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetDevEnvironment, request);
        }

        /**
         * An Async wrapper for GetDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevEnvironmentRequestT = Model::GetDevEnvironmentRequest>
        void GetDevEnvironmentAsync(const GetDevEnvironmentRequestT& request, const GetDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetDevEnvironment, request, handler, context);
        }

        /**
         * <p>Returns information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * A Callable wrapper for GetProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        Model::GetProjectOutcomeCallable GetProjectCallable(const GetProjectRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetProject, request);
        }

        /**
         * An Async wrapper for GetProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        void GetProjectAsync(const GetProjectRequestT& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetProject, request, handler, context);
        }

        /**
         * <p>Returns information about a source repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetSourceRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSourceRepositoryOutcome GetSourceRepository(const Model::GetSourceRepositoryRequest& request) const;

        /**
         * A Callable wrapper for GetSourceRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSourceRepositoryRequestT = Model::GetSourceRepositoryRequest>
        Model::GetSourceRepositoryOutcomeCallable GetSourceRepositoryCallable(const GetSourceRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetSourceRepository, request);
        }

        /**
         * An Async wrapper for GetSourceRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSourceRepositoryRequestT = Model::GetSourceRepositoryRequest>
        void GetSourceRepositoryAsync(const GetSourceRepositoryRequestT& request, const GetSourceRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetSourceRepository, request, handler, context);
        }

        /**
         * <p>Returns information about the URLs that can be used with a Git client to
         * clone a source repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetSourceRepositoryCloneUrls">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSourceRepositoryCloneUrlsOutcome GetSourceRepositoryCloneUrls(const Model::GetSourceRepositoryCloneUrlsRequest& request) const;

        /**
         * A Callable wrapper for GetSourceRepositoryCloneUrls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSourceRepositoryCloneUrlsRequestT = Model::GetSourceRepositoryCloneUrlsRequest>
        Model::GetSourceRepositoryCloneUrlsOutcomeCallable GetSourceRepositoryCloneUrlsCallable(const GetSourceRepositoryCloneUrlsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetSourceRepositoryCloneUrls, request);
        }

        /**
         * An Async wrapper for GetSourceRepositoryCloneUrls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSourceRepositoryCloneUrlsRequestT = Model::GetSourceRepositoryCloneUrlsRequest>
        void GetSourceRepositoryCloneUrlsAsync(const GetSourceRepositoryCloneUrlsRequestT& request, const GetSourceRepositoryCloneUrlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetSourceRepositoryCloneUrls, request, handler, context);
        }

        /**
         * <p>Returns information about an space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpaceOutcome GetSpace(const Model::GetSpaceRequest& request) const;

        /**
         * A Callable wrapper for GetSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSpaceRequestT = Model::GetSpaceRequest>
        Model::GetSpaceOutcomeCallable GetSpaceCallable(const GetSpaceRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetSpace, request);
        }

        /**
         * An Async wrapper for GetSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSpaceRequestT = Model::GetSpaceRequest>
        void GetSpaceAsync(const GetSpaceRequestT& request, const GetSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetSpace, request, handler, context);
        }

        /**
         * <p>Returns information about the Amazon Web Services account used for billing
         * purposes and the billing plan for the space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionOutcome GetSubscription(const Model::GetSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for GetSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
        Model::GetSubscriptionOutcomeCallable GetSubscriptionCallable(const GetSubscriptionRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetSubscription, request);
        }

        /**
         * An Async wrapper for GetSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionRequestT = Model::GetSubscriptionRequest>
        void GetSubscriptionAsync(const GetSubscriptionRequestT& request, const GetSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetSubscription, request, handler, context);
        }

        /**
         * <p>Returns information about a user. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetUserDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDetailsOutcome GetUserDetails(const Model::GetUserDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetUserDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserDetailsRequestT = Model::GetUserDetailsRequest>
        Model::GetUserDetailsOutcomeCallable GetUserDetailsCallable(const GetUserDetailsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetUserDetails, request);
        }

        /**
         * An Async wrapper for GetUserDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserDetailsRequestT = Model::GetUserDetailsRequest>
        void GetUserDetailsAsync(const GetUserDetailsRequestT& request, const GetUserDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetUserDetails, request, handler, context);
        }

        /**
         * <p>Returns information about a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetWorkflow, request);
        }

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetWorkflow, request, handler, context);
        }

        /**
         * <p>Returns information about a specified run of a workflow.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
        Model::GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const GetWorkflowRunRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::GetWorkflowRun, request);
        }

        /**
         * An Async wrapper for GetWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
        void GetWorkflowRunAsync(const GetWorkflowRunRequestT& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::GetWorkflowRun, request, handler, context);
        }

        /**
         * <p>Lists all personal access tokens (PATs) associated with the user who calls
         * the API. You can only list PATs associated with your Amazon Web Services Builder
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListAccessTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessTokensOutcome ListAccessTokens(const Model::ListAccessTokensRequest& request) const;

        /**
         * A Callable wrapper for ListAccessTokens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessTokensRequestT = Model::ListAccessTokensRequest>
        Model::ListAccessTokensOutcomeCallable ListAccessTokensCallable(const ListAccessTokensRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListAccessTokens, request);
        }

        /**
         * An Async wrapper for ListAccessTokens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessTokensRequestT = Model::ListAccessTokensRequest>
        void ListAccessTokensAsync(const ListAccessTokensRequestT& request, const ListAccessTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListAccessTokens, request, handler, context);
        }

        /**
         * <p>Retrieves a list of active sessions for a Dev Environment in a
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListDevEnvironmentSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevEnvironmentSessionsOutcome ListDevEnvironmentSessions(const Model::ListDevEnvironmentSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListDevEnvironmentSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevEnvironmentSessionsRequestT = Model::ListDevEnvironmentSessionsRequest>
        Model::ListDevEnvironmentSessionsOutcomeCallable ListDevEnvironmentSessionsCallable(const ListDevEnvironmentSessionsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListDevEnvironmentSessions, request);
        }

        /**
         * An Async wrapper for ListDevEnvironmentSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevEnvironmentSessionsRequestT = Model::ListDevEnvironmentSessionsRequest>
        void ListDevEnvironmentSessionsAsync(const ListDevEnvironmentSessionsRequestT& request, const ListDevEnvironmentSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListDevEnvironmentSessions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of Dev Environments in a project.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListDevEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevEnvironmentsOutcome ListDevEnvironments(const Model::ListDevEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListDevEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevEnvironmentsRequestT = Model::ListDevEnvironmentsRequest>
        Model::ListDevEnvironmentsOutcomeCallable ListDevEnvironmentsCallable(const ListDevEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListDevEnvironments, request);
        }

        /**
         * An Async wrapper for ListDevEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevEnvironmentsRequestT = Model::ListDevEnvironmentsRequest>
        void ListDevEnvironmentsAsync(const ListDevEnvironmentsRequestT& request, const ListDevEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListDevEnvironments, request, handler, context);
        }

        /**
         * <p>Retrieves a list of events that occurred during a specific time in a space.
         * You can use these events to audit user and system activity in a space. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/ipa-monitoring.html">Monitoring</a>
         * in the <i>Amazon CodeCatalyst User Guide</i>.</p>  <p>ListEventLogs
         * guarantees events for the last 30 days in a given space. You can also view and
         * retrieve a list of management events over the last 90 days for Amazon
         * CodeCatalyst in the CloudTrail console by viewing Event history, or by creating
         * a trail to create and maintain a record of events that extends past 90 days. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/view-cloudtrail-events.html">Working
         * with CloudTrail Event History</a> and <a
         * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-getting-started.html">Working
         * with CloudTrail trails</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListEventLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventLogsOutcome ListEventLogs(const Model::ListEventLogsRequest& request) const;

        /**
         * A Callable wrapper for ListEventLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventLogsRequestT = Model::ListEventLogsRequest>
        Model::ListEventLogsOutcomeCallable ListEventLogsCallable(const ListEventLogsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListEventLogs, request);
        }

        /**
         * An Async wrapper for ListEventLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventLogsRequestT = Model::ListEventLogsRequest>
        void ListEventLogsAsync(const ListEventLogsRequestT& request, const ListEventLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListEventLogs, request, handler, context);
        }

        /**
         * <p>Retrieves a list of projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListProjects, request, handler, context);
        }

        /**
         * <p>Retrieves a list of source repositories in a project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSourceRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceRepositoriesOutcome ListSourceRepositories(const Model::ListSourceRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListSourceRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSourceRepositoriesRequestT = Model::ListSourceRepositoriesRequest>
        Model::ListSourceRepositoriesOutcomeCallable ListSourceRepositoriesCallable(const ListSourceRepositoriesRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListSourceRepositories, request);
        }

        /**
         * An Async wrapper for ListSourceRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSourceRepositoriesRequestT = Model::ListSourceRepositoriesRequest>
        void ListSourceRepositoriesAsync(const ListSourceRepositoriesRequestT& request, const ListSourceRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListSourceRepositories, request, handler, context);
        }

        /**
         * <p>Retrieves a list of branches in a specified source repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSourceRepositoryBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceRepositoryBranchesOutcome ListSourceRepositoryBranches(const Model::ListSourceRepositoryBranchesRequest& request) const;

        /**
         * A Callable wrapper for ListSourceRepositoryBranches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSourceRepositoryBranchesRequestT = Model::ListSourceRepositoryBranchesRequest>
        Model::ListSourceRepositoryBranchesOutcomeCallable ListSourceRepositoryBranchesCallable(const ListSourceRepositoryBranchesRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListSourceRepositoryBranches, request);
        }

        /**
         * An Async wrapper for ListSourceRepositoryBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSourceRepositoryBranchesRequestT = Model::ListSourceRepositoryBranchesRequest>
        void ListSourceRepositoryBranchesAsync(const ListSourceRepositoryBranchesRequestT& request, const ListSourceRepositoryBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListSourceRepositoryBranches, request, handler, context);
        }

        /**
         * <p>Retrieves a list of spaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSpaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request) const;

        /**
         * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSpacesRequestT = Model::ListSpacesRequest>
        Model::ListSpacesOutcomeCallable ListSpacesCallable(const ListSpacesRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListSpaces, request);
        }

        /**
         * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSpacesRequestT = Model::ListSpacesRequest>
        void ListSpacesAsync(const ListSpacesRequestT& request, const ListSpacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListSpaces, request, handler, context);
        }

        /**
         * <p>Retrieves a list of workflow runs of a specified workflow.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListWorkflowRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowRunsOutcome ListWorkflowRuns(const Model::ListWorkflowRunsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowRunsRequestT = Model::ListWorkflowRunsRequest>
        Model::ListWorkflowRunsOutcomeCallable ListWorkflowRunsCallable(const ListWorkflowRunsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListWorkflowRuns, request);
        }

        /**
         * An Async wrapper for ListWorkflowRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowRunsRequestT = Model::ListWorkflowRunsRequest>
        void ListWorkflowRunsAsync(const ListWorkflowRunsRequestT& request, const ListWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListWorkflowRuns, request, handler, context);
        }

        /**
         * <p>Retrieves a list of workflows in a specified project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::ListWorkflows, request, handler, context);
        }

        /**
         * <p>Starts a specified Dev Environment and puts it into an active state.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/StartDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDevEnvironmentOutcome StartDevEnvironment(const Model::StartDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for StartDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDevEnvironmentRequestT = Model::StartDevEnvironmentRequest>
        Model::StartDevEnvironmentOutcomeCallable StartDevEnvironmentCallable(const StartDevEnvironmentRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::StartDevEnvironment, request);
        }

        /**
         * An Async wrapper for StartDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDevEnvironmentRequestT = Model::StartDevEnvironmentRequest>
        void StartDevEnvironmentAsync(const StartDevEnvironmentRequestT& request, const StartDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::StartDevEnvironment, request, handler, context);
        }

        /**
         * <p>Starts a session for a specified Dev Environment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/StartDevEnvironmentSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDevEnvironmentSessionOutcome StartDevEnvironmentSession(const Model::StartDevEnvironmentSessionRequest& request) const;

        /**
         * A Callable wrapper for StartDevEnvironmentSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDevEnvironmentSessionRequestT = Model::StartDevEnvironmentSessionRequest>
        Model::StartDevEnvironmentSessionOutcomeCallable StartDevEnvironmentSessionCallable(const StartDevEnvironmentSessionRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::StartDevEnvironmentSession, request);
        }

        /**
         * An Async wrapper for StartDevEnvironmentSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDevEnvironmentSessionRequestT = Model::StartDevEnvironmentSessionRequest>
        void StartDevEnvironmentSessionAsync(const StartDevEnvironmentSessionRequestT& request, const StartDevEnvironmentSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::StartDevEnvironmentSession, request, handler, context);
        }

        /**
         * <p>Begins a run of a specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/StartWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowRunOutcome StartWorkflowRun(const Model::StartWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for StartWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWorkflowRunRequestT = Model::StartWorkflowRunRequest>
        Model::StartWorkflowRunOutcomeCallable StartWorkflowRunCallable(const StartWorkflowRunRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::StartWorkflowRun, request);
        }

        /**
         * An Async wrapper for StartWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWorkflowRunRequestT = Model::StartWorkflowRunRequest>
        void StartWorkflowRunAsync(const StartWorkflowRunRequestT& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::StartWorkflowRun, request, handler, context);
        }

        /**
         * <p>Pauses a specified Dev Environment and places it in a non-running state.
         * Stopped Dev Environments do not consume compute minutes.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/StopDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDevEnvironmentOutcome StopDevEnvironment(const Model::StopDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for StopDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDevEnvironmentRequestT = Model::StopDevEnvironmentRequest>
        Model::StopDevEnvironmentOutcomeCallable StopDevEnvironmentCallable(const StopDevEnvironmentRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::StopDevEnvironment, request);
        }

        /**
         * An Async wrapper for StopDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDevEnvironmentRequestT = Model::StopDevEnvironmentRequest>
        void StopDevEnvironmentAsync(const StopDevEnvironmentRequestT& request, const StopDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::StopDevEnvironment, request, handler, context);
        }

        /**
         * <p>Stops a session for a specified Dev Environment.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/StopDevEnvironmentSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDevEnvironmentSessionOutcome StopDevEnvironmentSession(const Model::StopDevEnvironmentSessionRequest& request) const;

        /**
         * A Callable wrapper for StopDevEnvironmentSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDevEnvironmentSessionRequestT = Model::StopDevEnvironmentSessionRequest>
        Model::StopDevEnvironmentSessionOutcomeCallable StopDevEnvironmentSessionCallable(const StopDevEnvironmentSessionRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::StopDevEnvironmentSession, request);
        }

        /**
         * An Async wrapper for StopDevEnvironmentSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDevEnvironmentSessionRequestT = Model::StopDevEnvironmentSessionRequest>
        void StopDevEnvironmentSessionAsync(const StopDevEnvironmentSessionRequestT& request, const StopDevEnvironmentSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::StopDevEnvironmentSession, request, handler, context);
        }

        /**
         * <p>Changes one or more values for a Dev Environment. Updating certain values of
         * the Dev Environment will cause a restart.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/UpdateDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevEnvironmentOutcome UpdateDevEnvironment(const Model::UpdateDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDevEnvironmentRequestT = Model::UpdateDevEnvironmentRequest>
        Model::UpdateDevEnvironmentOutcomeCallable UpdateDevEnvironmentCallable(const UpdateDevEnvironmentRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::UpdateDevEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDevEnvironmentRequestT = Model::UpdateDevEnvironmentRequest>
        void UpdateDevEnvironmentAsync(const UpdateDevEnvironmentRequestT& request, const UpdateDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::UpdateDevEnvironment, request, handler, context);
        }

        /**
         * <p>Changes one or more values for a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::UpdateProject, request, handler, context);
        }

        /**
         * <p>Changes one or more values for a space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/UpdateSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSpaceOutcome UpdateSpace(const Model::UpdateSpaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
        Model::UpdateSpaceOutcomeCallable UpdateSpaceCallable(const UpdateSpaceRequestT& request) const
        {
            return SubmitCallable(&CodeCatalystClient::UpdateSpace, request);
        }

        /**
         * An Async wrapper for UpdateSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
        void UpdateSpaceAsync(const UpdateSpaceRequestT& request, const UpdateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeCatalystClient::UpdateSpace, request, handler, context);
        }

        /**
         * <p>Verifies whether the calling user has a valid Amazon CodeCatalyst login and
         * session. If successful, this returns the ID of the user in Amazon
         * CodeCatalyst.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/VerifySession">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySessionOutcome VerifySession(const Model::VerifySessionRequest& request = {}) const;

        /**
         * A Callable wrapper for VerifySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifySessionRequestT = Model::VerifySessionRequest>
        Model::VerifySessionOutcomeCallable VerifySessionCallable(const VerifySessionRequestT& request = {}) const
        {
            return SubmitCallable(&CodeCatalystClient::VerifySession, request);
        }

        /**
         * An Async wrapper for VerifySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifySessionRequestT = Model::VerifySessionRequest>
        void VerifySessionAsync(const VerifySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const VerifySessionRequestT& request = {}) const
        {
            return SubmitAsync(&CodeCatalystClient::VerifySession, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeCatalystEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeCatalystClient>;
      void init(const CodeCatalystClientConfiguration& clientConfiguration);

      CodeCatalystClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeCatalystEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeCatalyst
} // namespace Aws
