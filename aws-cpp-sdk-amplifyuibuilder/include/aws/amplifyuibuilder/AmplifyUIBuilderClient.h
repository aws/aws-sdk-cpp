/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderServiceClientModel.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderLegacyAsyncMacros.h>

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
  class AWS_AMPLIFYUIBUILDER_API AmplifyUIBuilderClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a new component for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;


        /**
         * <p>Creates a new form for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateForm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFormOutcome CreateForm(const Model::CreateFormRequest& request) const;


        /**
         * <p>Creates a theme to apply to the components in an Amplify app.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThemeOutcome CreateTheme(const Model::CreateThemeRequest& request) const;


        /**
         * <p>Deletes a component from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;


        /**
         * <p>Deletes a form from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteForm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFormOutcome DeleteForm(const Model::DeleteFormRequest& request) const;


        /**
         * <p>Deletes a theme from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeOutcome DeleteTheme(const Model::DeleteThemeRequest& request) const;


        /**
         * <p>Exchanges an access code for a token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExchangeCodeForToken">AWS
         * API Reference</a></p>
         */
        virtual Model::ExchangeCodeForTokenOutcome ExchangeCodeForToken(const Model::ExchangeCodeForTokenRequest& request) const;


        /**
         * <p>Exports component configurations to code that is ready to integrate into an
         * Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExportComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportComponentsOutcome ExportComponents(const Model::ExportComponentsRequest& request) const;


        /**
         * <p>Exports form configurations to code that is ready to integrate into an
         * Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExportForms">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportFormsOutcome ExportForms(const Model::ExportFormsRequest& request) const;


        /**
         * <p>Exports theme configurations to code that is ready to integrate into an
         * Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExportThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportThemesOutcome ExportThemes(const Model::ExportThemesRequest& request) const;


        /**
         * <p>Returns an existing component for an Amplify app.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;


        /**
         * <p>Returns an existing form for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetForm">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFormOutcome GetForm(const Model::GetFormRequest& request) const;


        /**
         * <p>Returns existing metadata for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetadataOutcome GetMetadata(const Model::GetMetadataRequest& request) const;


        /**
         * <p>Returns an existing theme for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThemeOutcome GetTheme(const Model::GetThemeRequest& request) const;


        /**
         * <p>Retrieves a list of components for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;


        /**
         * <p>Retrieves a list of forms for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListForms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFormsOutcome ListForms(const Model::ListFormsRequest& request) const;


        /**
         * <p>Retrieves a list of themes for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListThemes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThemesOutcome ListThemes(const Model::ListThemesRequest& request) const;


        /**
         * <p>Stores the metadata information about a feature on a form or
         * view.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/PutMetadataFlag">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetadataFlagOutcome PutMetadataFlag(const Model::PutMetadataFlagRequest& request) const;


        /**
         * <p>Refreshes a previously issued access token that might have
         * expired.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/RefreshToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshTokenOutcome RefreshToken(const Model::RefreshTokenRequest& request) const;


        /**
         * <p>Updates an existing component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;


        /**
         * <p>Updates an existing form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateForm">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFormOutcome UpdateForm(const Model::UpdateFormRequest& request) const;


        /**
         * <p>Updates an existing theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeOutcome UpdateTheme(const Model::UpdateThemeRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AmplifyUIBuilderEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AmplifyUIBuilderClientConfiguration& clientConfiguration);

      AmplifyUIBuilderClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> m_endpointProvider;
  };

} // namespace AmplifyUIBuilder
} // namespace Aws
