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

namespace Aws
{
namespace CodeCatalyst
{
  /**
   *  <p> <b>Amazon CodeCatalyst is in preview release and subject to
   * change.</b> </p>  <p>Welcome to the Amazon CodeCatalyst API reference.
   * This reference provides descriptions of operations and data types for Amazon
   * CodeCatalyst. You can use the Amazon CodeCatalyst API to work with the following
   * objects. </p> <p>Dev Environments and the Amazon Web Services Toolkits, by
   * calling the following:</p> <ul> <li> <p> <a>CreateAccessToken</a>, which creates
   * a personal access token (PAT) for the current user.</p> </li> <li> <p>
   * <a>CreateDevEnvironment</a>, which creates a Dev Environment, where you can
   * quickly work on the code stored in the source repositories of your project.</p>
   * </li> <li> <p> <a>CreateProject</a> which creates a project in a specified
   * space.</p> </li> <li> <p> <a>CreateSourceRepositoryBranch</a>, which creates a
   * branch in a specified repository where you can work on code.</p> </li> <li> <p>
   * <a>DeleteDevEnvironment</a>, which deletes a Dev Environment.</p> </li> <li> <p>
   * <a>GetDevEnvironment</a>, which returns information about a Dev Environment.</p>
   * </li> <li> <p> <a>GetProject</a>, which returns information about a project.</p>
   * </li> <li> <p> <a>GetSourceRepositoryCloneUrls</a>, which returns information
   * about the URLs that can be used with a Git client to clone a source
   * repository.</p> </li> <li> <p> <a>GetSubscription</a>, which returns information
   * about the Amazon Web Services account used for billing purposes and the billing
   * plan for the space.</p> </li> <li> <p> <a>GetUserDetails</a>, which returns
   * information about a user in Amazon CodeCatalyst.</p> </li> <li> <p>
   * <a>ListDevEnvironments</a>, which retrives a list of Dev Environments in a
   * project.</p> </li> <li> <p> <a>ListProjects</a>, which retrieves a list of
   * projects in a space.</p> </li> <li> <p> <a>ListSourceRepositories</a>, which
   * retrieves a list of source repositories in a project.</p> </li> <li> <p>
   * <a>ListSourceRepositoryBranches</a>, which retrieves a list of branches in a
   * source repository.</p> </li> <li> <p> <a>ListSpaces</a>, which retrieves a list
   * of spaces.</p> </li> <li> <p> <a>StartDevEnvironment</a>, which starts a
   * specified Dev Environment and puts it into an active state.</p> </li> <li> <p>
   * <a>StartDevEnvironmentSession</a>, which starts a session to a specified Dev
   * Environment.</p> </li> <li> <p> <a>StopDevEnvironment</a>, which stops a
   * specified Dev Environment and puts it into an stopped state.</p> </li> <li> <p>
   * <a>UpdateDevEnvironment</a>, which changes one or more values for a Dev
   * Environment.</p> </li> <li> <p> <a>VerifySession</a>, which verifies whether the
   * calling user has a valid Amazon CodeCatalyst login and session.</p> </li> </ul>
   * <p>Security, activity, and resource management in Amazon CodeCatalyst, by
   * calling the following:</p> <ul> <li> <p> <a>DeleteAccessToken</a>, which deletes
   * a specified personal access token (PAT).</p> </li> <li> <p>
   * <a>ListAccessTokens</a>, which lists all personal access tokens (PATs)
   * associated with a user.</p> </li> <li> <p> <a>ListEventLogs</a>, which retrieves
   * a list of events that occurred during a specified time period in a space.</p>
   * </li> </ul>
   */
  class AWS_CODECATALYST_API CodeCatalystClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeCatalystClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

        /**
        * Initializes client to use BearerTokenAuthSignerProvider, with default http client factory, and optional client config.
        */
        CodeCatalystClient(const Aws::Auth::BearerTokenAuthSignerProvider& bearerTokenProvider,
                           std::shared_ptr<CodeCatalystEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeCatalystEndpointProvider>(ALLOCATION_TAG),
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
         * token (PAT) is similar to a password. It is associated with your user account.
         * You use PATs to access Amazon CodeCatalyst resources such as source repositories
         * from third-party applications like Git and integrated development environments
         * (IDEs). For more information, see <a
         * href="https://docs.aws.amazon.com/codecatalyst/latest/userguide/ipa-tokens-keys.html">Managing
         * personal access tokens in Amazon CodeCatalyst</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateAccessToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessTokenOutcome CreateAccessToken(const Model::CreateAccessTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessTokenOutcomeCallable CreateAccessTokenCallable(const Model::CreateAccessTokenRequest& request) const;

        /**
         * An Async wrapper for CreateAccessToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessTokenAsync(const Model::CreateAccessTokenRequest& request, const CreateAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Dev Environment in Amazon CodeCatalyst, a cloud-based development
         * Dev Environment that you can use to quickly work on the code stored in the
         * source repositories of your project. By default, a Dev Environment is configured
         * to have a 2 core processor, 4GB of RAM, and 16GB of persistent storage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevEnvironmentOutcome CreateDevEnvironment(const Model::CreateDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDevEnvironmentOutcomeCallable CreateDevEnvironmentCallable(const Model::CreateDevEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDevEnvironmentAsync(const Model::CreateDevEnvironmentRequest& request, const CreateDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project in a specified space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/CreateProject">AWS
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
        virtual Model::CreateSourceRepositoryBranchOutcomeCallable CreateSourceRepositoryBranchCallable(const Model::CreateSourceRepositoryBranchRequest& request) const;

        /**
         * An Async wrapper for CreateSourceRepositoryBranch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSourceRepositoryBranchAsync(const Model::CreateSourceRepositoryBranchRequest& request, const CreateSourceRepositoryBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAccessTokenOutcomeCallable DeleteAccessTokenCallable(const Model::DeleteAccessTokenRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessTokenAsync(const Model::DeleteAccessTokenRequest& request, const DeleteAccessTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Dev Environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DeleteDevEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevEnvironmentOutcome DeleteDevEnvironment(const Model::DeleteDevEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDevEnvironmentOutcomeCallable DeleteDevEnvironmentCallable(const Model::DeleteDevEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDevEnvironmentAsync(const Model::DeleteDevEnvironmentRequest& request, const DeleteDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDevEnvironmentOutcomeCallable GetDevEnvironmentCallable(const Model::GetDevEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevEnvironmentAsync(const Model::GetDevEnvironmentRequest& request, const GetDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * A Callable wrapper for GetProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProjectOutcomeCallable GetProjectCallable(const Model::GetProjectRequest& request) const;

        /**
         * An Async wrapper for GetProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProjectAsync(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSourceRepositoryCloneUrlsOutcomeCallable GetSourceRepositoryCloneUrlsCallable(const Model::GetSourceRepositoryCloneUrlsRequest& request) const;

        /**
         * An Async wrapper for GetSourceRepositoryCloneUrls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSourceRepositoryCloneUrlsAsync(const Model::GetSourceRepositoryCloneUrlsRequest& request, const GetSourceRepositoryCloneUrlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetSpace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSpaceOutcome GetSpace(const Model::GetSpaceRequest& request) const;

        /**
         * A Callable wrapper for GetSpace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSpaceOutcomeCallable GetSpaceCallable(const Model::GetSpaceRequest& request) const;

        /**
         * An Async wrapper for GetSpace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSpaceAsync(const Model::GetSpaceRequest& request, const GetSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSubscriptionOutcomeCallable GetSubscriptionCallable(const Model::GetSubscriptionRequest& request) const;

        /**
         * An Async wrapper for GetSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionAsync(const Model::GetSubscriptionRequest& request, const GetSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a user. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/GetUserDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDetailsOutcome GetUserDetails(const Model::GetUserDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetUserDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserDetailsOutcomeCallable GetUserDetailsCallable(const Model::GetUserDetailsRequest& request) const;

        /**
         * An Async wrapper for GetUserDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserDetailsAsync(const Model::GetUserDetailsRequest& request, const GetUserDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all personal access tokens (PATs) associated with the user who calls
         * the API. You can only list PATs associated with your user account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListAccessTokens">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessTokensOutcome ListAccessTokens(const Model::ListAccessTokensRequest& request) const;

        /**
         * A Callable wrapper for ListAccessTokens that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessTokensOutcomeCallable ListAccessTokensCallable(const Model::ListAccessTokensRequest& request) const;

        /**
         * An Async wrapper for ListAccessTokens that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessTokensAsync(const Model::ListAccessTokensRequest& request, const ListAccessTokensResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrives a list of Dev Environments in a project.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListDevEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevEnvironmentsOutcome ListDevEnvironments(const Model::ListDevEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListDevEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevEnvironmentsOutcomeCallable ListDevEnvironmentsCallable(const Model::ListDevEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListDevEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevEnvironmentsAsync(const Model::ListDevEnvironmentsRequest& request, const ListDevEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of events that occurred during a specified time period in a
         * space. You can use these events to audit user and system activity in a
         * space.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListEventLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventLogsOutcome ListEventLogs(const Model::ListEventLogsRequest& request) const;

        /**
         * A Callable wrapper for ListEventLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventLogsOutcomeCallable ListEventLogsCallable(const Model::ListEventLogsRequest& request) const;

        /**
         * An Async wrapper for ListEventLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventLogsAsync(const Model::ListEventLogsRequest& request, const ListEventLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListProjects">AWS
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
         * <p>Retrieves a list of source repositories in a project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSourceRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceRepositoriesOutcome ListSourceRepositories(const Model::ListSourceRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for ListSourceRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSourceRepositoriesOutcomeCallable ListSourceRepositoriesCallable(const Model::ListSourceRepositoriesRequest& request) const;

        /**
         * An Async wrapper for ListSourceRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSourceRepositoriesAsync(const Model::ListSourceRepositoriesRequest& request, const ListSourceRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSourceRepositoryBranchesOutcomeCallable ListSourceRepositoryBranchesCallable(const Model::ListSourceRepositoryBranchesRequest& request) const;

        /**
         * An Async wrapper for ListSourceRepositoryBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSourceRepositoryBranchesAsync(const Model::ListSourceRepositoryBranchesRequest& request, const ListSourceRepositoryBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of spaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/ListSpaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request) const;

        /**
         * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSpacesOutcomeCallable ListSpacesCallable(const Model::ListSpacesRequest& request) const;

        /**
         * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSpacesAsync(const Model::ListSpacesRequest& request, const ListSpacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDevEnvironmentOutcomeCallable StartDevEnvironmentCallable(const Model::StartDevEnvironmentRequest& request) const;

        /**
         * An Async wrapper for StartDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDevEnvironmentAsync(const Model::StartDevEnvironmentRequest& request, const StartDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDevEnvironmentSessionOutcomeCallable StartDevEnvironmentSessionCallable(const Model::StartDevEnvironmentSessionRequest& request) const;

        /**
         * An Async wrapper for StartDevEnvironmentSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDevEnvironmentSessionAsync(const Model::StartDevEnvironmentSessionRequest& request, const StartDevEnvironmentSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopDevEnvironmentOutcomeCallable StopDevEnvironmentCallable(const Model::StopDevEnvironmentRequest& request) const;

        /**
         * An Async wrapper for StopDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDevEnvironmentAsync(const Model::StopDevEnvironmentRequest& request, const StopDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDevEnvironmentOutcomeCallable UpdateDevEnvironmentCallable(const Model::UpdateDevEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateDevEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevEnvironmentAsync(const Model::UpdateDevEnvironmentRequest& request, const UpdateDevEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Verifies whether the calling user has a valid Amazon CodeCatalyst login and
         * session. If successful, this returns the ID of the user in Amazon
         * CodeCatalyst.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/VerifySession">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySessionOutcome VerifySession() const;

        /**
         * A Callable wrapper for VerifySession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifySessionOutcomeCallable VerifySessionCallable() const;

        /**
         * An Async wrapper for VerifySession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifySessionAsync(const VerifySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
