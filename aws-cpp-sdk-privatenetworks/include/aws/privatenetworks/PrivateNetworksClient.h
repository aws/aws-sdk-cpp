/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/privatenetworks/PrivateNetworksServiceClientModel.h>

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
  class AWS_PRIVATENETWORKS_API PrivateNetworksClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PrivateNetworksClient>
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

        /**
         * <p>Acknowledges that the specified network order was received.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/AcknowledgeOrderReceipt">AWS
         * API Reference</a></p>
         */
        virtual Model::AcknowledgeOrderReceiptOutcome AcknowledgeOrderReceipt(const Model::AcknowledgeOrderReceiptRequest& request) const;

        /**
         * A Callable wrapper for AcknowledgeOrderReceipt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcknowledgeOrderReceiptOutcomeCallable AcknowledgeOrderReceiptCallable(const Model::AcknowledgeOrderReceiptRequest& request) const;

        /**
         * An Async wrapper for AcknowledgeOrderReceipt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcknowledgeOrderReceiptAsync(const Model::AcknowledgeOrderReceiptRequest& request, const AcknowledgeOrderReceiptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ActivateDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateDeviceIdentifierOutcome ActivateDeviceIdentifier(const Model::ActivateDeviceIdentifierRequest& request) const;

        /**
         * A Callable wrapper for ActivateDeviceIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateDeviceIdentifierOutcomeCallable ActivateDeviceIdentifierCallable(const Model::ActivateDeviceIdentifierRequest& request) const;

        /**
         * An Async wrapper for ActivateDeviceIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateDeviceIdentifierAsync(const Model::ActivateDeviceIdentifierRequest& request, const ActivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ActivateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateNetworkSiteOutcome ActivateNetworkSite(const Model::ActivateNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for ActivateNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateNetworkSiteOutcomeCallable ActivateNetworkSiteCallable(const Model::ActivateNetworkSiteRequest& request) const;

        /**
         * An Async wrapper for ActivateNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateNetworkSiteAsync(const Model::ActivateNetworkSiteRequest& request, const ActivateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ConfigureAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfigureAccessPointOutcomeCallable ConfigureAccessPointCallable(const Model::ConfigureAccessPointRequest& request) const;

        /**
         * An Async wrapper for ConfigureAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfigureAccessPointAsync(const Model::ConfigureAccessPointRequest& request, const ConfigureAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const Model::CreateNetworkRequest& request) const;

        /**
         * An Async wrapper for CreateNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkAsync(const Model::CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/CreateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkSiteOutcome CreateNetworkSite(const Model::CreateNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkSiteOutcomeCallable CreateNetworkSiteCallable(const Model::CreateNetworkSiteRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkSiteAsync(const Model::CreateNetworkSiteRequest& request, const CreateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/DeactivateDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateDeviceIdentifierOutcome DeactivateDeviceIdentifier(const Model::DeactivateDeviceIdentifierRequest& request) const;

        /**
         * A Callable wrapper for DeactivateDeviceIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateDeviceIdentifierOutcomeCallable DeactivateDeviceIdentifierCallable(const Model::DeactivateDeviceIdentifierRequest& request) const;

        /**
         * An Async wrapper for DeactivateDeviceIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateDeviceIdentifierAsync(const Model::DeactivateDeviceIdentifierRequest& request, const DeactivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkOutcomeCallable DeleteNetworkCallable(const Model::DeleteNetworkRequest& request) const;

        /**
         * An Async wrapper for DeleteNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkAsync(const Model::DeleteNetworkRequest& request, const DeleteNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkSiteOutcomeCallable DeleteNetworkSiteCallable(const Model::DeleteNetworkSiteRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkSiteAsync(const Model::DeleteNetworkSiteRequest& request, const DeleteNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified device identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetDeviceIdentifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceIdentifierOutcome GetDeviceIdentifier(const Model::GetDeviceIdentifierRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceIdentifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceIdentifierOutcomeCallable GetDeviceIdentifierCallable(const Model::GetDeviceIdentifierRequest& request) const;

        /**
         * An Async wrapper for GetDeviceIdentifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceIdentifierAsync(const Model::GetDeviceIdentifierRequest& request, const GetDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;

        /**
         * A Callable wrapper for GetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkOutcomeCallable GetNetworkCallable(const Model::GetNetworkRequest& request) const;

        /**
         * An Async wrapper for GetNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkAsync(const Model::GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified network resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetworkResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkResourceOutcome GetNetworkResource(const Model::GetNetworkResourceRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkResourceOutcomeCallable GetNetworkResourceCallable(const Model::GetNetworkResourceRequest& request) const;

        /**
         * An Async wrapper for GetNetworkResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkResourceAsync(const Model::GetNetworkResourceRequest& request, const GetNetworkResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkSiteOutcome GetNetworkSite(const Model::GetNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkSiteOutcomeCallable GetNetworkSiteCallable(const Model::GetNetworkSiteRequest& request) const;

        /**
         * An Async wrapper for GetNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkSiteAsync(const Model::GetNetworkSiteRequest& request, const GetNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/GetOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrderOutcome GetOrder(const Model::GetOrderRequest& request) const;

        /**
         * A Callable wrapper for GetOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOrderOutcomeCallable GetOrderCallable(const Model::GetOrderRequest& request) const;

        /**
         * An Async wrapper for GetOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOrderAsync(const Model::GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListDeviceIdentifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceIdentifiersOutcomeCallable ListDeviceIdentifiersCallable(const Model::ListDeviceIdentifiersRequest& request) const;

        /**
         * An Async wrapper for ListDeviceIdentifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceIdentifiersAsync(const Model::ListDeviceIdentifiersRequest& request, const ListDeviceIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListNetworkResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworkResourcesOutcomeCallable ListNetworkResourcesCallable(const Model::ListNetworkResourcesRequest& request) const;

        /**
         * An Async wrapper for ListNetworkResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworkResourcesAsync(const Model::ListNetworkResourcesRequest& request, const ListNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists network sites. Add filters to your request to return a more specific
         * list of results. Use filters to match the status of the network
         * site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworkSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkSitesOutcome ListNetworkSites(const Model::ListNetworkSitesRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworkSitesOutcomeCallable ListNetworkSitesCallable(const Model::ListNetworkSitesRequest& request) const;

        /**
         * An Async wrapper for ListNetworkSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworkSitesAsync(const Model::ListNetworkSitesRequest& request, const ListNetworkSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists networks. Add filters to your request to return a more specific list of
         * results. Use filters to match the status of the network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request) const;

        /**
         * A Callable wrapper for ListNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworksOutcomeCallable ListNetworksCallable(const Model::ListNetworksRequest& request) const;

        /**
         * An Async wrapper for ListNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworksAsync(const Model::ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListOrders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrdersOutcomeCallable ListOrdersCallable(const Model::ListOrdersRequest& request) const;

        /**
         * An Async wrapper for ListOrders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrdersAsync(const Model::ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified network site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UpdateNetworkSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSiteOutcome UpdateNetworkSite(const Model::UpdateNetworkSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkSiteOutcomeCallable UpdateNetworkSiteCallable(const Model::UpdateNetworkSiteRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkSiteAsync(const Model::UpdateNetworkSiteRequest& request, const UpdateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified network site plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/UpdateNetworkSitePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkSitePlanOutcome UpdateNetworkSitePlan(const Model::UpdateNetworkSitePlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkSitePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkSitePlanOutcomeCallable UpdateNetworkSitePlanCallable(const Model::UpdateNetworkSitePlanRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkSitePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkSitePlanAsync(const Model::UpdateNetworkSitePlanRequest& request, const UpdateNetworkSitePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PrivateNetworksEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PrivateNetworksClient>;
      void init(const PrivateNetworksClientConfiguration& clientConfiguration);

      PrivateNetworksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PrivateNetworksEndpointProviderBase> m_endpointProvider;
  };

} // namespace PrivateNetworks
} // namespace Aws
