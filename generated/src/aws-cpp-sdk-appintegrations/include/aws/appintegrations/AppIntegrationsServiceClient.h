/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>

namespace Aws
{
namespace AppIntegrationsService
{
  /**
   * <p>The Amazon AppIntegrations service enables you to configure and reuse
   * connections to external applications.</p> <p>For information about how you can
   * use external applications with Amazon Connect, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up
   * pre-built integrations</a> and <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-wisdom.html">Deliver
   * information to agents using Amazon Connect Wisdom</a> in the <i>Amazon Connect
   * Administrator Guide</i>.</p>
   */
  class AWS_APPINTEGRATIONSSERVICE_API AppIntegrationsServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppIntegrationsServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppIntegrationsServiceClientConfiguration ClientConfigurationType;
      typedef AppIntegrationsServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration = Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration(),
                                     std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration = Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppIntegrationsServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration = Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppIntegrationsServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppIntegrationsServiceClient();

        /**
         * <p>This API is in preview release and subject to change.</p> <p>Creates and
         * persists an Application resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates and persists a DataIntegration resource.</p>  <p>You cannot
         * create a DataIntegration association for a DataIntegration that has been
         * previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <code>CreateDataIntegration</code> API.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataIntegrationOutcome CreateDataIntegration(const Model::CreateDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for CreateDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataIntegrationRequestT = Model::CreateDataIntegrationRequest>
        Model::CreateDataIntegrationOutcomeCallable CreateDataIntegrationCallable(const CreateDataIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::CreateDataIntegration, request);
        }

        /**
         * An Async wrapper for CreateDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataIntegrationRequestT = Model::CreateDataIntegrationRequest>
        void CreateDataIntegrationAsync(const CreateDataIntegrationRequestT& request, const CreateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::CreateDataIntegration, request, handler, context);
        }

        /**
         * <p>Creates an EventIntegration, given a specified name, description, and a
         * reference to an Amazon EventBridge bus in your account and a partner event
         * source that pushes events to that bus. No objects are created in the your
         * account, only metadata that is persisted on the EventIntegration control
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/CreateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventIntegrationOutcome CreateEventIntegration(const Model::CreateEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for CreateEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventIntegrationRequestT = Model::CreateEventIntegrationRequest>
        Model::CreateEventIntegrationOutcomeCallable CreateEventIntegrationCallable(const CreateEventIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::CreateEventIntegration, request);
        }

        /**
         * An Async wrapper for CreateEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventIntegrationRequestT = Model::CreateEventIntegrationRequest>
        void CreateEventIntegrationAsync(const CreateEventIntegrationRequestT& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::CreateEventIntegration, request, handler, context);
        }

        /**
         * <p>Deletes the Application. Only Applications that don't have any Application
         * Associations can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes the DataIntegration. Only DataIntegrations that don't have any
         * DataIntegrationAssociations can be deleted. Deleting a DataIntegration also
         * deletes the underlying Amazon AppFlow flow and service linked role. </p> 
         * <p>You cannot create a DataIntegration association for a DataIntegration that
         * has been previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataIntegrationOutcome DeleteDataIntegration(const Model::DeleteDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataIntegrationRequestT = Model::DeleteDataIntegrationRequest>
        Model::DeleteDataIntegrationOutcomeCallable DeleteDataIntegrationCallable(const DeleteDataIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::DeleteDataIntegration, request);
        }

        /**
         * An Async wrapper for DeleteDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataIntegrationRequestT = Model::DeleteDataIntegrationRequest>
        void DeleteDataIntegrationAsync(const DeleteDataIntegrationRequestT& request, const DeleteDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::DeleteDataIntegration, request, handler, context);
        }

        /**
         * <p>Deletes the specified existing event integration. If the event integration is
         * associated with clients, the request is rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventIntegrationOutcome DeleteEventIntegration(const Model::DeleteEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventIntegrationRequestT = Model::DeleteEventIntegrationRequest>
        Model::DeleteEventIntegrationOutcomeCallable DeleteEventIntegrationCallable(const DeleteEventIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::DeleteEventIntegration, request);
        }

        /**
         * An Async wrapper for DeleteEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventIntegrationRequestT = Model::DeleteEventIntegrationRequest>
        void DeleteEventIntegrationAsync(const DeleteEventIntegrationRequestT& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::DeleteEventIntegration, request, handler, context);
        }

        /**
         * <p>This API is in preview release and subject to change.</p> <p>Get an
         * Application resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Returns information about the DataIntegration.</p>  <p>You cannot
         * create a DataIntegration association for a DataIntegration that has been
         * previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataIntegrationOutcome GetDataIntegration(const Model::GetDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataIntegrationRequestT = Model::GetDataIntegrationRequest>
        Model::GetDataIntegrationOutcomeCallable GetDataIntegrationCallable(const GetDataIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::GetDataIntegration, request);
        }

        /**
         * An Async wrapper for GetDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataIntegrationRequestT = Model::GetDataIntegrationRequest>
        void GetDataIntegrationAsync(const GetDataIntegrationRequestT& request, const GetDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::GetDataIntegration, request, handler, context);
        }

        /**
         * <p>Returns information about the event integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventIntegrationOutcome GetEventIntegration(const Model::GetEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for GetEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventIntegrationRequestT = Model::GetEventIntegrationRequest>
        Model::GetEventIntegrationOutcomeCallable GetEventIntegrationCallable(const GetEventIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::GetEventIntegration, request);
        }

        /**
         * An Async wrapper for GetEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventIntegrationRequestT = Model::GetEventIntegrationRequest>
        void GetEventIntegrationAsync(const GetEventIntegrationRequestT& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::GetEventIntegration, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of application associations for an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListApplicationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationAssociationsOutcome ListApplicationAssociations(const Model::ListApplicationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationAssociationsRequestT = Model::ListApplicationAssociationsRequest>
        Model::ListApplicationAssociationsOutcomeCallable ListApplicationAssociationsCallable(const ListApplicationAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListApplicationAssociations, request);
        }

        /**
         * An Async wrapper for ListApplicationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationAssociationsRequestT = Model::ListApplicationAssociationsRequest>
        void ListApplicationAssociationsAsync(const ListApplicationAssociationsRequestT& request, const ListApplicationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListApplicationAssociations, request, handler, context);
        }

        /**
         * <p>This API is in preview release and subject to change.</p> <p>Lists
         * applications in the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of DataIntegration associations in the account.</p>
         *  <p>You cannot create a DataIntegration association for a DataIntegration
         * that has been previously associated. Use a different DataIntegration, or
         * recreate the DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListDataIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationAssociationsOutcome ListDataIntegrationAssociations(const Model::ListDataIntegrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataIntegrationAssociationsRequestT = Model::ListDataIntegrationAssociationsRequest>
        Model::ListDataIntegrationAssociationsOutcomeCallable ListDataIntegrationAssociationsCallable(const ListDataIntegrationAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListDataIntegrationAssociations, request);
        }

        /**
         * An Async wrapper for ListDataIntegrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataIntegrationAssociationsRequestT = Model::ListDataIntegrationAssociationsRequest>
        void ListDataIntegrationAssociationsAsync(const ListDataIntegrationAssociationsRequestT& request, const ListDataIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListDataIntegrationAssociations, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of DataIntegrations in the account.</p> 
         * <p>You cannot create a DataIntegration association for a DataIntegration that
         * has been previously associated. Use a different DataIntegration, or recreate the
         * DataIntegration using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListDataIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataIntegrationsOutcome ListDataIntegrations(const Model::ListDataIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListDataIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataIntegrationsRequestT = Model::ListDataIntegrationsRequest>
        Model::ListDataIntegrationsOutcomeCallable ListDataIntegrationsCallable(const ListDataIntegrationsRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListDataIntegrations, request);
        }

        /**
         * An Async wrapper for ListDataIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataIntegrationsRequestT = Model::ListDataIntegrationsRequest>
        void ListDataIntegrationsAsync(const ListDataIntegrationsRequestT& request, const ListDataIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListDataIntegrations, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of event integration associations in the account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationAssociationsOutcome ListEventIntegrationAssociations(const Model::ListEventIntegrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListEventIntegrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventIntegrationAssociationsRequestT = Model::ListEventIntegrationAssociationsRequest>
        Model::ListEventIntegrationAssociationsOutcomeCallable ListEventIntegrationAssociationsCallable(const ListEventIntegrationAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListEventIntegrationAssociations, request);
        }

        /**
         * An Async wrapper for ListEventIntegrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventIntegrationAssociationsRequestT = Model::ListEventIntegrationAssociationsRequest>
        void ListEventIntegrationAssociationsAsync(const ListEventIntegrationAssociationsRequestT& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListEventIntegrationAssociations, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of event integrations in the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationsOutcome ListEventIntegrations(const Model::ListEventIntegrationsRequest& request) const;

        /**
         * A Callable wrapper for ListEventIntegrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventIntegrationsRequestT = Model::ListEventIntegrationsRequest>
        Model::ListEventIntegrationsOutcomeCallable ListEventIntegrationsCallable(const ListEventIntegrationsRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListEventIntegrations, request);
        }

        /**
         * An Async wrapper for ListEventIntegrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventIntegrationsRequestT = Model::ListEventIntegrationsRequest>
        void ListEventIntegrationsAsync(const ListEventIntegrationsRequestT& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListEventIntegrations, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::UntagResource, request, handler, context);
        }

        /**
         * <p>This API is in preview release and subject to change.</p> <p>Updates and
         * persists an Application resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Updates the description of a DataIntegration.</p>  <p>You cannot create
         * a DataIntegration association for a DataIntegration that has been previously
         * associated. Use a different DataIntegration, or recreate the DataIntegration
         * using the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateDataIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataIntegrationOutcome UpdateDataIntegration(const Model::UpdateDataIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataIntegrationRequestT = Model::UpdateDataIntegrationRequest>
        Model::UpdateDataIntegrationOutcomeCallable UpdateDataIntegrationCallable(const UpdateDataIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::UpdateDataIntegration, request);
        }

        /**
         * An Async wrapper for UpdateDataIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataIntegrationRequestT = Model::UpdateDataIntegrationRequest>
        void UpdateDataIntegrationAsync(const UpdateDataIntegrationRequestT& request, const UpdateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::UpdateDataIntegration, request, handler, context);
        }

        /**
         * <p>Updates the description of an event integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventIntegrationOutcome UpdateEventIntegration(const Model::UpdateEventIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventIntegrationRequestT = Model::UpdateEventIntegrationRequest>
        Model::UpdateEventIntegrationOutcomeCallable UpdateEventIntegrationCallable(const UpdateEventIntegrationRequestT& request) const
        {
            return SubmitCallable(&AppIntegrationsServiceClient::UpdateEventIntegration, request);
        }

        /**
         * An Async wrapper for UpdateEventIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventIntegrationRequestT = Model::UpdateEventIntegrationRequest>
        void UpdateEventIntegrationAsync(const UpdateEventIntegrationRequestT& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppIntegrationsServiceClient::UpdateEventIntegration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppIntegrationsServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppIntegrationsServiceClient>;
      void init(const AppIntegrationsServiceClientConfiguration& clientConfiguration);

      AppIntegrationsServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppIntegrationsService
} // namespace Aws
