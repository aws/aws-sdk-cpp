/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifyuibuilder/model/CreateComponentResult.h>
#include <aws/amplifyuibuilder/model/CreateThemeResult.h>
#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenResult.h>
#include <aws/amplifyuibuilder/model/ExportComponentsResult.h>
#include <aws/amplifyuibuilder/model/ExportThemesResult.h>
#include <aws/amplifyuibuilder/model/GetComponentResult.h>
#include <aws/amplifyuibuilder/model/GetThemeResult.h>
#include <aws/amplifyuibuilder/model/ListComponentsResult.h>
#include <aws/amplifyuibuilder/model/ListThemesResult.h>
#include <aws/amplifyuibuilder/model/RefreshTokenResult.h>
#include <aws/amplifyuibuilder/model/UpdateComponentResult.h>
#include <aws/amplifyuibuilder/model/UpdateThemeResult.h>
#include <aws/core/NoResult.h>
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

namespace AmplifyUIBuilder
{

namespace Model
{
        class CreateComponentRequest;
        class CreateThemeRequest;
        class DeleteComponentRequest;
        class DeleteThemeRequest;
        class ExchangeCodeForTokenRequest;
        class ExportComponentsRequest;
        class ExportThemesRequest;
        class GetComponentRequest;
        class GetThemeRequest;
        class ListComponentsRequest;
        class ListThemesRequest;
        class RefreshTokenRequest;
        class UpdateComponentRequest;
        class UpdateThemeRequest;

        typedef Aws::Utils::Outcome<CreateComponentResult, AmplifyUIBuilderError> CreateComponentOutcome;
        typedef Aws::Utils::Outcome<CreateThemeResult, AmplifyUIBuilderError> CreateThemeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AmplifyUIBuilderError> DeleteComponentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AmplifyUIBuilderError> DeleteThemeOutcome;
        typedef Aws::Utils::Outcome<ExchangeCodeForTokenResult, AmplifyUIBuilderError> ExchangeCodeForTokenOutcome;
        typedef Aws::Utils::Outcome<ExportComponentsResult, AmplifyUIBuilderError> ExportComponentsOutcome;
        typedef Aws::Utils::Outcome<ExportThemesResult, AmplifyUIBuilderError> ExportThemesOutcome;
        typedef Aws::Utils::Outcome<GetComponentResult, AmplifyUIBuilderError> GetComponentOutcome;
        typedef Aws::Utils::Outcome<GetThemeResult, AmplifyUIBuilderError> GetThemeOutcome;
        typedef Aws::Utils::Outcome<ListComponentsResult, AmplifyUIBuilderError> ListComponentsOutcome;
        typedef Aws::Utils::Outcome<ListThemesResult, AmplifyUIBuilderError> ListThemesOutcome;
        typedef Aws::Utils::Outcome<RefreshTokenResult, AmplifyUIBuilderError> RefreshTokenOutcome;
        typedef Aws::Utils::Outcome<UpdateComponentResult, AmplifyUIBuilderError> UpdateComponentOutcome;
        typedef Aws::Utils::Outcome<UpdateThemeResult, AmplifyUIBuilderError> UpdateThemeOutcome;

        typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
        typedef std::future<CreateThemeOutcome> CreateThemeOutcomeCallable;
        typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
        typedef std::future<DeleteThemeOutcome> DeleteThemeOutcomeCallable;
        typedef std::future<ExchangeCodeForTokenOutcome> ExchangeCodeForTokenOutcomeCallable;
        typedef std::future<ExportComponentsOutcome> ExportComponentsOutcomeCallable;
        typedef std::future<ExportThemesOutcome> ExportThemesOutcomeCallable;
        typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
        typedef std::future<GetThemeOutcome> GetThemeOutcomeCallable;
        typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
        typedef std::future<ListThemesOutcome> ListThemesOutcomeCallable;
        typedef std::future<RefreshTokenOutcome> RefreshTokenOutcomeCallable;
        typedef std::future<UpdateComponentOutcome> UpdateComponentOutcomeCallable;
        typedef std::future<UpdateThemeOutcome> UpdateThemeOutcomeCallable;
} // namespace Model

  class AmplifyUIBuilderClient;

    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::CreateThemeRequest&, const Model::CreateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThemeResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::DeleteThemeRequest&, const Model::DeleteThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThemeResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExchangeCodeForTokenRequest&, const Model::ExchangeCodeForTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExchangeCodeForTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExportComponentsRequest&, const Model::ExportComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportComponentsResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExportThemesRequest&, const Model::ExportThemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportThemesResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::GetThemeRequest&, const Model::GetThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThemeResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ListThemesRequest&, const Model::ListThemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemesResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::RefreshTokenRequest&, const Model::RefreshTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::UpdateComponentRequest&, const Model::UpdateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::UpdateThemeRequest&, const Model::UpdateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemeResponseReceivedHandler;

  /**
   * <p>The Amplify UI Builder API provides a programmatic interface for creating and
   * configuring user interface (UI) component libraries and themes for use in your
   * Amplify applications. You can then connect these UI components to an
   * application's backend Amazon Web Services resources.</p> <p>You can also use the
   * Amplify Studio visual designer to create UI components and model data for an
   * app. For more information, see <a
   * href="https://docs.amplify.aws/console/adminui/intro">Introduction</a> in the
   * <i>Amplify Docs</i>.</p> <p>The Amplify Framework is a comprehensive set of
   * SDKs, libraries, tools, and documentation for client app development. For more
   * information, see the <a href="https://docs.amplify.aws/">Amplify Framework</a>.
   * For more information about deploying an Amplify application to Amazon Web
   * Services, see the <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify
   * User Guide</a>.</p>
   */
  class AWS_AMPLIFYUIBUILDER_API AmplifyUIBuilderClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyUIBuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AmplifyUIBuilderClient();


        /**
         * <p>Creates a new component for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentOutcomeCallable CreateComponentCallable(const Model::CreateComponentRequest& request) const;

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentAsync(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a theme to apply to the components in an Amplify app.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeOutcome CreateTheme(const Model::CreateThemeRequest& request) const;

        /**
         * A Callable wrapper for CreateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThemeOutcomeCallable CreateThemeCallable(const Model::CreateThemeRequest& request) const;

        /**
         * An Async wrapper for CreateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThemeAsync(const Model::CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a component from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a theme from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeOutcome DeleteTheme(const Model::DeleteThemeRequest& request) const;

        /**
         * A Callable wrapper for DeleteTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThemeOutcomeCallable DeleteThemeCallable(const Model::DeleteThemeRequest& request) const;

        /**
         * An Async wrapper for DeleteTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThemeAsync(const Model::DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exchanges an access code for a token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExchangeCodeForToken">AWS
         * API Reference</a></p>
         */
        virtual Model::ExchangeCodeForTokenOutcome ExchangeCodeForToken(const Model::ExchangeCodeForTokenRequest& request) const;

        /**
         * A Callable wrapper for ExchangeCodeForToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExchangeCodeForTokenOutcomeCallable ExchangeCodeForTokenCallable(const Model::ExchangeCodeForTokenRequest& request) const;

        /**
         * An Async wrapper for ExchangeCodeForToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExchangeCodeForTokenAsync(const Model::ExchangeCodeForTokenRequest& request, const ExchangeCodeForTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports component configurations to code that is ready to integrate into an
         * Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExportComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportComponentsOutcome ExportComponents(const Model::ExportComponentsRequest& request) const;

        /**
         * A Callable wrapper for ExportComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportComponentsOutcomeCallable ExportComponentsCallable(const Model::ExportComponentsRequest& request) const;

        /**
         * An Async wrapper for ExportComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportComponentsAsync(const Model::ExportComponentsRequest& request, const ExportComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports theme configurations to code that is ready to integrate into an
         * Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExportThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportThemesOutcome ExportThemes(const Model::ExportThemesRequest& request) const;

        /**
         * A Callable wrapper for ExportThemes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportThemesOutcomeCallable ExportThemesCallable(const Model::ExportThemesRequest& request) const;

        /**
         * An Async wrapper for ExportThemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportThemesAsync(const Model::ExportThemesRequest& request, const ExportThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an existing component for an Amplify app.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * A Callable wrapper for GetComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentOutcomeCallable GetComponentCallable(const Model::GetComponentRequest& request) const;

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentAsync(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an existing theme for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThemeOutcome GetTheme(const Model::GetThemeRequest& request) const;

        /**
         * A Callable wrapper for GetTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetThemeOutcomeCallable GetThemeCallable(const Model::GetThemeRequest& request) const;

        /**
         * An Async wrapper for GetTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetThemeAsync(const Model::GetThemeRequest& request, const GetThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of components for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of themes for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemesOutcome ListThemes(const Model::ListThemesRequest& request) const;

        /**
         * A Callable wrapper for ListThemes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThemesOutcomeCallable ListThemesCallable(const Model::ListThemesRequest& request) const;

        /**
         * An Async wrapper for ListThemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThemesAsync(const Model::ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Refreshes a previously issued access token that might have
         * expired.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/RefreshToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshTokenOutcome RefreshToken(const Model::RefreshTokenRequest& request) const;

        /**
         * A Callable wrapper for RefreshToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RefreshTokenOutcomeCallable RefreshTokenCallable(const Model::RefreshTokenRequest& request) const;

        /**
         * An Async wrapper for RefreshToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RefreshTokenAsync(const Model::RefreshTokenRequest& request, const RefreshTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComponentOutcomeCallable UpdateComponentCallable(const Model::UpdateComponentRequest& request) const;

        /**
         * An Async wrapper for UpdateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentAsync(const Model::UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeOutcome UpdateTheme(const Model::UpdateThemeRequest& request) const;

        /**
         * A Callable wrapper for UpdateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThemeOutcomeCallable UpdateThemeCallable(const Model::UpdateThemeRequest& request) const;

        /**
         * An Async wrapper for UpdateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThemeAsync(const Model::UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AmplifyUIBuilder
} // namespace Aws
