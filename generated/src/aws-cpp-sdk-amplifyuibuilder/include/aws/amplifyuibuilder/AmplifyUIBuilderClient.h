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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AmplifyUIBuilderClientConfiguration ClientConfigurationType;
      typedef AmplifyUIBuilderEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration = Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration(),
                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AmplifyUIBuilderClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration = Aws::AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AmplifyUIBuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename CreateComponentRequestT = Model::CreateComponentRequest>
        Model::CreateComponentOutcomeCallable CreateComponentCallable(const CreateComponentRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::CreateComponent, request);
        }

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComponentRequestT = Model::CreateComponentRequest>
        void CreateComponentAsync(const CreateComponentRequestT& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::CreateComponent, request, handler, context);
        }

        /**
         * <p>Creates a new form for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CreateForm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFormOutcome CreateForm(const Model::CreateFormRequest& request) const;

        /**
         * A Callable wrapper for CreateForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFormRequestT = Model::CreateFormRequest>
        Model::CreateFormOutcomeCallable CreateFormCallable(const CreateFormRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::CreateForm, request);
        }

        /**
         * An Async wrapper for CreateForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFormRequestT = Model::CreateFormRequest>
        void CreateFormAsync(const CreateFormRequestT& request, const CreateFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::CreateForm, request, handler, context);
        }

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
        template<typename CreateThemeRequestT = Model::CreateThemeRequest>
        Model::CreateThemeOutcomeCallable CreateThemeCallable(const CreateThemeRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::CreateTheme, request);
        }

        /**
         * An Async wrapper for CreateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThemeRequestT = Model::CreateThemeRequest>
        void CreateThemeAsync(const CreateThemeRequestT& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::CreateTheme, request, handler, context);
        }

        /**
         * <p>Deletes a component from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const DeleteComponentRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::DeleteComponent, request);
        }

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        void DeleteComponentAsync(const DeleteComponentRequestT& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::DeleteComponent, request, handler, context);
        }

        /**
         * <p>Deletes a form from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteForm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFormOutcome DeleteForm(const Model::DeleteFormRequest& request) const;

        /**
         * A Callable wrapper for DeleteForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFormRequestT = Model::DeleteFormRequest>
        Model::DeleteFormOutcomeCallable DeleteFormCallable(const DeleteFormRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::DeleteForm, request);
        }

        /**
         * An Async wrapper for DeleteForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFormRequestT = Model::DeleteFormRequest>
        void DeleteFormAsync(const DeleteFormRequestT& request, const DeleteFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::DeleteForm, request, handler, context);
        }

        /**
         * <p>Deletes a theme from an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/DeleteTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThemeOutcome DeleteTheme(const Model::DeleteThemeRequest& request) const;

        /**
         * A Callable wrapper for DeleteTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteThemeRequestT = Model::DeleteThemeRequest>
        Model::DeleteThemeOutcomeCallable DeleteThemeCallable(const DeleteThemeRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::DeleteTheme, request);
        }

        /**
         * An Async wrapper for DeleteTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThemeRequestT = Model::DeleteThemeRequest>
        void DeleteThemeAsync(const DeleteThemeRequestT& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::DeleteTheme, request, handler, context);
        }

        /**
         *  <p>This is for internal use.</p>  <p>Amplify uses this action to
         * exchange an access code for a token.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ExchangeCodeForToken">AWS
         * API Reference</a></p>
         */
        virtual Model::ExchangeCodeForTokenOutcome ExchangeCodeForToken(const Model::ExchangeCodeForTokenRequest& request) const;

        /**
         * A Callable wrapper for ExchangeCodeForToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExchangeCodeForTokenRequestT = Model::ExchangeCodeForTokenRequest>
        Model::ExchangeCodeForTokenOutcomeCallable ExchangeCodeForTokenCallable(const ExchangeCodeForTokenRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ExchangeCodeForToken, request);
        }

        /**
         * An Async wrapper for ExchangeCodeForToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExchangeCodeForTokenRequestT = Model::ExchangeCodeForTokenRequest>
        void ExchangeCodeForTokenAsync(const ExchangeCodeForTokenRequestT& request, const ExchangeCodeForTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ExchangeCodeForToken, request, handler, context);
        }

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
        template<typename ExportComponentsRequestT = Model::ExportComponentsRequest>
        Model::ExportComponentsOutcomeCallable ExportComponentsCallable(const ExportComponentsRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ExportComponents, request);
        }

        /**
         * An Async wrapper for ExportComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportComponentsRequestT = Model::ExportComponentsRequest>
        void ExportComponentsAsync(const ExportComponentsRequestT& request, const ExportComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ExportComponents, request, handler, context);
        }

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
        template<typename ExportFormsRequestT = Model::ExportFormsRequest>
        Model::ExportFormsOutcomeCallable ExportFormsCallable(const ExportFormsRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ExportForms, request);
        }

        /**
         * An Async wrapper for ExportForms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportFormsRequestT = Model::ExportFormsRequest>
        void ExportFormsAsync(const ExportFormsRequestT& request, const ExportFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ExportForms, request, handler, context);
        }

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
        template<typename ExportThemesRequestT = Model::ExportThemesRequest>
        Model::ExportThemesOutcomeCallable ExportThemesCallable(const ExportThemesRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ExportThemes, request);
        }

        /**
         * An Async wrapper for ExportThemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportThemesRequestT = Model::ExportThemesRequest>
        void ExportThemesAsync(const ExportThemesRequestT& request, const ExportThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ExportThemes, request, handler, context);
        }

        /**
         * <p>Returns an existing code generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetCodegenJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCodegenJobOutcome GetCodegenJob(const Model::GetCodegenJobRequest& request) const;

        /**
         * A Callable wrapper for GetCodegenJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCodegenJobRequestT = Model::GetCodegenJobRequest>
        Model::GetCodegenJobOutcomeCallable GetCodegenJobCallable(const GetCodegenJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::GetCodegenJob, request);
        }

        /**
         * An Async wrapper for GetCodegenJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCodegenJobRequestT = Model::GetCodegenJobRequest>
        void GetCodegenJobAsync(const GetCodegenJobRequestT& request, const GetCodegenJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::GetCodegenJob, request, handler, context);
        }

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
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        Model::GetComponentOutcomeCallable GetComponentCallable(const GetComponentRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::GetComponent, request);
        }

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        void GetComponentAsync(const GetComponentRequestT& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::GetComponent, request, handler, context);
        }

        /**
         * <p>Returns an existing form for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetForm">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFormOutcome GetForm(const Model::GetFormRequest& request) const;

        /**
         * A Callable wrapper for GetForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFormRequestT = Model::GetFormRequest>
        Model::GetFormOutcomeCallable GetFormCallable(const GetFormRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::GetForm, request);
        }

        /**
         * An Async wrapper for GetForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFormRequestT = Model::GetFormRequest>
        void GetFormAsync(const GetFormRequestT& request, const GetFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::GetForm, request, handler, context);
        }

        /**
         * <p>Returns existing metadata for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetadataOutcome GetMetadata(const Model::GetMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetadataRequestT = Model::GetMetadataRequest>
        Model::GetMetadataOutcomeCallable GetMetadataCallable(const GetMetadataRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::GetMetadata, request);
        }

        /**
         * An Async wrapper for GetMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetadataRequestT = Model::GetMetadataRequest>
        void GetMetadataAsync(const GetMetadataRequestT& request, const GetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::GetMetadata, request, handler, context);
        }

        /**
         * <p>Returns an existing theme for an Amplify app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/GetTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::GetThemeOutcome GetTheme(const Model::GetThemeRequest& request) const;

        /**
         * A Callable wrapper for GetTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetThemeRequestT = Model::GetThemeRequest>
        Model::GetThemeOutcomeCallable GetThemeCallable(const GetThemeRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::GetTheme, request);
        }

        /**
         * An Async wrapper for GetTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetThemeRequestT = Model::GetThemeRequest>
        void GetThemeAsync(const GetThemeRequestT& request, const GetThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::GetTheme, request, handler, context);
        }

        /**
         * <p>Retrieves a list of code generation jobs for a specified Amplify app and
         * backend environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListCodegenJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodegenJobsOutcome ListCodegenJobs(const Model::ListCodegenJobsRequest& request) const;

        /**
         * A Callable wrapper for ListCodegenJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCodegenJobsRequestT = Model::ListCodegenJobsRequest>
        Model::ListCodegenJobsOutcomeCallable ListCodegenJobsCallable(const ListCodegenJobsRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ListCodegenJobs, request);
        }

        /**
         * An Async wrapper for ListCodegenJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCodegenJobsRequestT = Model::ListCodegenJobsRequest>
        void ListCodegenJobsAsync(const ListCodegenJobsRequestT& request, const ListCodegenJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ListCodegenJobs, request, handler, context);
        }

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
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        Model::ListComponentsOutcomeCallable ListComponentsCallable(const ListComponentsRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ListComponents, request);
        }

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        void ListComponentsAsync(const ListComponentsRequestT& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ListComponents, request, handler, context);
        }

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
        template<typename ListFormsRequestT = Model::ListFormsRequest>
        Model::ListFormsOutcomeCallable ListFormsCallable(const ListFormsRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ListForms, request);
        }

        /**
         * An Async wrapper for ListForms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFormsRequestT = Model::ListFormsRequest>
        void ListFormsAsync(const ListFormsRequestT& request, const ListFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ListForms, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a specified Amazon Resource Name
         * (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListThemesRequestT = Model::ListThemesRequest>
        Model::ListThemesOutcomeCallable ListThemesCallable(const ListThemesRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::ListThemes, request);
        }

        /**
         * An Async wrapper for ListThemes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThemesRequestT = Model::ListThemesRequest>
        void ListThemesAsync(const ListThemesRequestT& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::ListThemes, request, handler, context);
        }

        /**
         * <p>Stores the metadata information about a feature on a form.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/PutMetadataFlag">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetadataFlagOutcome PutMetadataFlag(const Model::PutMetadataFlagRequest& request) const;

        /**
         * A Callable wrapper for PutMetadataFlag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMetadataFlagRequestT = Model::PutMetadataFlagRequest>
        Model::PutMetadataFlagOutcomeCallable PutMetadataFlagCallable(const PutMetadataFlagRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::PutMetadataFlag, request);
        }

        /**
         * An Async wrapper for PutMetadataFlag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMetadataFlagRequestT = Model::PutMetadataFlagRequest>
        void PutMetadataFlagAsync(const PutMetadataFlagRequestT& request, const PutMetadataFlagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::PutMetadataFlag, request, handler, context);
        }

        /**
         *  <p>This is for internal use.</p>  <p>Amplify uses this action to
         * refresh a previously issued access token that might have expired.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/RefreshToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshTokenOutcome RefreshToken(const Model::RefreshTokenRequest& request) const;

        /**
         * A Callable wrapper for RefreshToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RefreshTokenRequestT = Model::RefreshTokenRequest>
        Model::RefreshTokenOutcomeCallable RefreshTokenCallable(const RefreshTokenRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::RefreshToken, request);
        }

        /**
         * An Async wrapper for RefreshToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RefreshTokenRequestT = Model::RefreshTokenRequest>
        void RefreshTokenAsync(const RefreshTokenRequestT& request, const RefreshTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::RefreshToken, request, handler, context);
        }

        /**
         * <p>Starts a code generation job for a specified Amplify app and backend
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/StartCodegenJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCodegenJobOutcome StartCodegenJob(const Model::StartCodegenJobRequest& request) const;

        /**
         * A Callable wrapper for StartCodegenJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCodegenJobRequestT = Model::StartCodegenJobRequest>
        Model::StartCodegenJobOutcomeCallable StartCodegenJobCallable(const StartCodegenJobRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::StartCodegenJob, request);
        }

        /**
         * An Async wrapper for StartCodegenJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCodegenJobRequestT = Model::StartCodegenJobRequest>
        void StartCodegenJobAsync(const StartCodegenJobRequestT& request, const StartCodegenJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::StartCodegenJob, request, handler, context);
        }

        /**
         * <p>Tags the resource with a tag key and value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource with a specified Amazon Resource Name (ARN).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateComponentRequestT = Model::UpdateComponentRequest>
        Model::UpdateComponentOutcomeCallable UpdateComponentCallable(const UpdateComponentRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::UpdateComponent, request);
        }

        /**
         * An Async wrapper for UpdateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateComponentRequestT = Model::UpdateComponentRequest>
        void UpdateComponentAsync(const UpdateComponentRequestT& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::UpdateComponent, request, handler, context);
        }

        /**
         * <p>Updates an existing form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateForm">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFormOutcome UpdateForm(const Model::UpdateFormRequest& request) const;

        /**
         * A Callable wrapper for UpdateForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFormRequestT = Model::UpdateFormRequest>
        Model::UpdateFormOutcomeCallable UpdateFormCallable(const UpdateFormRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::UpdateForm, request);
        }

        /**
         * An Async wrapper for UpdateForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFormRequestT = Model::UpdateFormRequest>
        void UpdateFormAsync(const UpdateFormRequestT& request, const UpdateFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::UpdateForm, request, handler, context);
        }

        /**
         * <p>Updates an existing theme.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/UpdateTheme">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThemeOutcome UpdateTheme(const Model::UpdateThemeRequest& request) const;

        /**
         * A Callable wrapper for UpdateTheme that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateThemeRequestT = Model::UpdateThemeRequest>
        Model::UpdateThemeOutcomeCallable UpdateThemeCallable(const UpdateThemeRequestT& request) const
        {
            return SubmitCallable(&AmplifyUIBuilderClient::UpdateTheme, request);
        }

        /**
         * An Async wrapper for UpdateTheme that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThemeRequestT = Model::UpdateThemeRequest>
        void UpdateThemeAsync(const UpdateThemeRequestT& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AmplifyUIBuilderClient::UpdateTheme, request, handler, context);
        }


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
