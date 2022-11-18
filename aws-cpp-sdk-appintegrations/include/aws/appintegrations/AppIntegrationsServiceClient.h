/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>
#include <aws/appintegrations/AppIntegrationsServiceLegacyAsyncMacros.h>

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
  class AWS_APPINTEGRATIONSSERVICE_API AppIntegrationsServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration = Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration(),
                                     std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppIntegrationsServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG),
                                     const Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration = Aws::AppIntegrationsService::AppIntegrationsServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppIntegrationsServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Deletes the specified existing event integration. If the event integration is
         * associated with clients, the request is rejected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/DeleteEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventIntegrationOutcome DeleteEventIntegration(const Model::DeleteEventIntegrationRequest& request) const;


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
         * <p>Returns information about the event integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/GetEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventIntegrationOutcome GetEventIntegration(const Model::GetEventIntegrationRequest& request) const;


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
         * <p>Returns a paginated list of event integration associations in the account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationAssociationsOutcome ListEventIntegrationAssociations(const Model::ListEventIntegrationAssociationsRequest& request) const;


        /**
         * <p>Returns a paginated list of event integrations in the account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListEventIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventIntegrationsOutcome ListEventIntegrations(const Model::ListEventIntegrationsRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Updates the description of an event integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/UpdateEventIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventIntegrationOutcome UpdateEventIntegration(const Model::UpdateEventIntegrationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppIntegrationsServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AppIntegrationsServiceClientConfiguration& clientConfiguration);

      AppIntegrationsServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppIntegrationsService
} // namespace Aws
