/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/privatenetworks/PrivateNetworksServiceClientModel.h>
#include <aws/privatenetworks/PrivateNetworksLegacyAsyncMacros.h>

namespace Aws
{
namespace PrivateNetworks
{
  /**
   * <p>Amazon Web Services Private 5G is a managed service that makes it easy to
   * deploy, operate, and scale your own private mobile network at your on-premises
   * location. Private 5G provides the pre-configured hardware and software for
   * mobile networks, helps automate setup, and scales capacity on demand to support
   * additional devices as needed.</p>
   */
  class AWS_PRIVATENETWORKS_API PrivateNetworksClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::PrivateNetworks::PrivateNetworksClientConfiguration& clientConfiguration = Aws::PrivateNetworks::PrivateNetworksClientConfiguration(),
                              std::shared_ptr<PrivateNetworksEndpointProviderBase> endpointProvider = Aws::MakeShared<PrivateNetworksEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<PrivateNetworksEndpointProviderBase> endpointProvider = Aws::MakeShared<PrivateNetworksEndpointProvider>(ALLOCATION_TAG),
                              const Aws::PrivateNetworks::PrivateNetworksClientConfiguration& clientConfiguration = Aws::PrivateNetworks::PrivateNetworksClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrivateNetworksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<PrivateNetworksEndpointProviderBase> endpointProvider = Aws::MakeShared<PrivateNetworksEndpointProvider>(ALLOCATION_TAG),
                              const Aws::PrivateNetworks::PrivateNetworksClientConfiguration& clientConfiguration = Aws::PrivateNetworks::PrivateNetworksClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrivateNetworksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PrivateNetworksClient();


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
         * <p>Acknowledges that the specified network order was received.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/AcknowledgeOrderReceipt">AWS
         * API Reference</a></p>
         */
        virtual Model::AcknowledgeOrderReceiptOutcome AcknowledgeOrderReceipt(const Model::AcknowledgeOrderReceiptRequest& request) const;


        /**
         * <p>Activates the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ActivateDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateDeviceIdentifierOutcome ActivateDeviceIdentifier(const Model::ActivateDeviceIdentifierRequest& request) const;


        /**
         * <p>Activates the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ActivateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateNetworkSiteOutcome ActivateNetworkSite(const Model::ActivateNetworkSiteRequest& request) const;


        /**
         * <p>Configures the specified network resource. </p> <p> Use this action to
         * specify the geographic position of the hardware. You must provide Certified
         * Professional Installer (CPI) credentials in the request so that we can obtain
         * spectrum grants. For more information, see <a
         * href="https://docs.aws.amazon.com/private-networks/latest/userguide/radio-units.html">Radio
         * units</a> in the <i>Amazon Web Services Private 5G User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ConfigureAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureAccessPointOutcome ConfigureAccessPoint(const Model::ConfigureAccessPointRequest& request) const;


        /**
         * <p>Creates a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;


        /**
         * <p>Creates a network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CreateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkSiteOutcome CreateNetworkSite(const Model::CreateNetworkSiteRequest& request) const;


        /**
         * <p>Deactivates the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeactivateDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateDeviceIdentifierOutcome DeactivateDeviceIdentifier(const Model::DeactivateDeviceIdentifierRequest& request) const;


        /**
         * <p>Deletes the specified network. You must delete network sites before you
         * delete the network. For more information, see <a
         * href="https://docs.aws.amazon.com/private-networks/latest/APIReference/API_DeleteNetworkSite.html">DeleteNetworkSite</a>
         * in the <i>API Reference for Amazon Web Services Private 5G</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeleteNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkOutcome DeleteNetwork(const Model::DeleteNetworkRequest& request) const;


        /**
         * <p>Deletes the specified network site. Return the hardware after you delete the
         * network site. You are responsible for minimum charges. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/private-networks/latest/userguide/hardware-maintenance.html">Hardware
         * returns</a> in the <i>Amazon Web Services Private 5G User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeleteNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkSiteOutcome DeleteNetworkSite(const Model::DeleteNetworkSiteRequest& request) const;


        /**
         * <p>Gets the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceIdentifierOutcome GetDeviceIdentifier(const Model::GetDeviceIdentifierRequest& request) const;


        /**
         * <p>Gets the specified network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;


        /**
         * <p>Gets the specified network resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetworkResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceOutcome GetNetworkResource(const Model::GetNetworkResourceRequest& request) const;


        /**
         * <p>Gets the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkSiteOutcome GetNetworkSite(const Model::GetNetworkSiteRequest& request) const;


        /**
         * <p>Gets the specified order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrderOutcome GetOrder(const Model::GetOrderRequest& request) const;


        /**
         * <p>Lists device identifiers. Add filters to your request to return a more
         * specific list of results. Use filters to match the Amazon Resource Name (ARN) of
         * an order, the status of device identifiers, or the ARN of the traffic group.</p>
         * <pre><code> &lt;p&gt;If you specify multiple filters, filters are joined with an
         * OR, and the request </code></pre> <p>returns results that match all of the
         * specified filters.</p></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListDeviceIdentifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceIdentifiersOutcome ListDeviceIdentifiers(const Model::ListDeviceIdentifiersRequest& request) const;


        /**
         * <p>Lists network resources. Add filters to your request to return a more
         * specific list of results. Use filters to match the Amazon Resource Name (ARN) of
         * an order or the status of network resources.</p> <p>If you specify multiple
         * filters, filters are joined with an OR, and the request returns results that
         * match all of the specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworkResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkResourcesOutcome ListNetworkResources(const Model::ListNetworkResourcesRequest& request) const;


        /**
         * <p>Lists network sites. Add filters to your request to return a more specific
         * list of results. Use filters to match the status of the network
         * site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworkSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkSitesOutcome ListNetworkSites(const Model::ListNetworkSitesRequest& request) const;


        /**
         * <p>Lists networks. Add filters to your request to return a more specific list of
         * results. Use filters to match the status of the network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;


        /**
         * <p>Lists orders. Add filters to your request to return a more specific list of
         * results. Use filters to match the Amazon Resource Name (ARN) of the network site
         * or the status of the order.</p> <p>If you specify multiple filters, filters are
         * joined with an OR, and the request returns results that match all of the
         * specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrdersOutcome ListOrders(const Model::ListOrdersRequest& request) const;


        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Checks the health of the service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Ping">AWS
         * API Reference</a></p>
         */
        virtual Model::PingOutcome Ping() const;

        /**
         * A Callable wrapper for Ping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PingOutcomeCallable PingCallable() const;

        /**
         * An Async wrapper for Ping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PingAsync(const PingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p> Adds tags to the specified resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UpdateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSiteOutcome UpdateNetworkSite(const Model::UpdateNetworkSiteRequest& request) const;


        /**
         * <p>Updates the specified network site plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UpdateNetworkSitePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSitePlanOutcome UpdateNetworkSitePlan(const Model::UpdateNetworkSitePlanRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PrivateNetworksEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const PrivateNetworksClientConfiguration& clientConfiguration);

      PrivateNetworksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PrivateNetworksEndpointProviderBase> m_endpointProvider;
  };

} // namespace PrivateNetworks
} // namespace Aws
