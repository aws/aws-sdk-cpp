/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderServiceClientModel.h>

namespace Aws
{
namespace AmplifyUIBuilder
{
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
  class AWS_AMPLIFYUIBUILDER_API AmplifyUIBuilderClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AmplifyUIBuilderClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration = Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration(),
                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG),
                               const Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration = Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyUIBuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider = Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG),
                               const Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration = Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyUIBuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <p>Creates a new form for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateForm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFormOutcome CreateForm(const Model::CreateFormRequest& request) const;

        /**
         * A Callable wrapper for CreateForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFormOutcomeCallable CreateFormCallable(const Model::CreateFormRequest& request) const;

        /**
         * An Async wrapper for CreateForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFormAsync(const Model::CreateFormRequest& request, const CreateFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes a form from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteForm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFormOutcome DeleteForm(const Model::DeleteFormRequest& request) const;

        /**
         * A Callable wrapper for DeleteForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFormOutcomeCallable DeleteFormCallable(const Model::DeleteFormRequest& request) const;

        /**
         * An Async wrapper for DeleteForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFormAsync(const Model::DeleteFormRequest& request, const DeleteFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Exports form configurations to code that is ready to integrate into an
         * Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExportForms">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportFormsOutcome ExportForms(const Model::ExportFormsRequest& request) const;

        /**
         * A Callable wrapper for ExportForms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportFormsOutcomeCallable ExportFormsCallable(const Model::ExportFormsRequest& request) const;

        /**
         * An Async wrapper for ExportForms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportFormsAsync(const Model::ExportFormsRequest& request, const ExportFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Returns an existing form for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetForm">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFormOutcome GetForm(const Model::GetFormRequest& request) const;

        /**
         * A Callable wrapper for GetForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFormOutcomeCallable GetFormCallable(const Model::GetFormRequest& request) const;

        /**
         * An Async wrapper for GetForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFormAsync(const Model::GetFormRequest& request, const GetFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns existing metadata for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetadataOutcome GetMetadata(const Model::GetMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMetadataOutcomeCallable GetMetadataCallable(const Model::GetMetadataRequest& request) const;

        /**
         * An Async wrapper for GetMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMetadataAsync(const Model::GetMetadataRequest& request, const GetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieves a list of forms for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListForms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFormsOutcome ListForms(const Model::ListFormsRequest& request) const;

        /**
         * A Callable wrapper for ListForms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFormsOutcomeCallable ListFormsCallable(const Model::ListFormsRequest& request) const;

        /**
         * An Async wrapper for ListForms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFormsAsync(const Model::ListFormsRequest& request, const ListFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Stores the metadata information about a feature on a form or
         * view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/PutMetadataFlag">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetadataFlagOutcome PutMetadataFlag(const Model::PutMetadataFlagRequest& request) const;

        /**
         * A Callable wrapper for PutMetadataFlag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetadataFlagOutcomeCallable PutMetadataFlagCallable(const Model::PutMetadataFlagRequest& request) const;

        /**
         * An Async wrapper for PutMetadataFlag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetadataFlagAsync(const Model::PutMetadataFlagRequest& request, const PutMetadataFlagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates an existing form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateForm">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFormOutcome UpdateForm(const Model::UpdateFormRequest& request) const;

        /**
         * A Callable wrapper for UpdateForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFormOutcomeCallable UpdateFormCallable(const Model::UpdateFormRequest& request) const;

        /**
         * An Async wrapper for UpdateForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFormAsync(const Model::UpdateFormRequest& request, const UpdateFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<AmplifyUIBuilderEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AmplifyUIBuilderClient>;
      void init(const AmplifyUIBuilderClientConfiguration& clientConfiguration);

      AmplifyUIBuilderClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> m_endpointProvider;
  };

} // namespace AmplifyUIBuilder
} // namespace Aws
