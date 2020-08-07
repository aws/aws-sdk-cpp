/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/AssociateCustomerGatewayResult.h>
#include <aws/networkmanager/model/AssociateLinkResult.h>
#include <aws/networkmanager/model/CreateDeviceResult.h>
#include <aws/networkmanager/model/CreateGlobalNetworkResult.h>
#include <aws/networkmanager/model/CreateLinkResult.h>
#include <aws/networkmanager/model/CreateSiteResult.h>
#include <aws/networkmanager/model/DeleteDeviceResult.h>
#include <aws/networkmanager/model/DeleteGlobalNetworkResult.h>
#include <aws/networkmanager/model/DeleteLinkResult.h>
#include <aws/networkmanager/model/DeleteSiteResult.h>
#include <aws/networkmanager/model/DeregisterTransitGatewayResult.h>
#include <aws/networkmanager/model/DescribeGlobalNetworksResult.h>
#include <aws/networkmanager/model/DisassociateCustomerGatewayResult.h>
#include <aws/networkmanager/model/DisassociateLinkResult.h>
#include <aws/networkmanager/model/GetCustomerGatewayAssociationsResult.h>
#include <aws/networkmanager/model/GetDevicesResult.h>
#include <aws/networkmanager/model/GetLinkAssociationsResult.h>
#include <aws/networkmanager/model/GetLinksResult.h>
#include <aws/networkmanager/model/GetSitesResult.h>
#include <aws/networkmanager/model/GetTransitGatewayRegistrationsResult.h>
#include <aws/networkmanager/model/ListTagsForResourceResult.h>
#include <aws/networkmanager/model/RegisterTransitGatewayResult.h>
#include <aws/networkmanager/model/TagResourceResult.h>
#include <aws/networkmanager/model/UntagResourceResult.h>
#include <aws/networkmanager/model/UpdateDeviceResult.h>
#include <aws/networkmanager/model/UpdateGlobalNetworkResult.h>
#include <aws/networkmanager/model/UpdateLinkResult.h>
#include <aws/networkmanager/model/UpdateSiteResult.h>
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

namespace NetworkManager
{

namespace Model
{
        class AssociateCustomerGatewayRequest;
        class AssociateLinkRequest;
        class CreateDeviceRequest;
        class CreateGlobalNetworkRequest;
        class CreateLinkRequest;
        class CreateSiteRequest;
        class DeleteDeviceRequest;
        class DeleteGlobalNetworkRequest;
        class DeleteLinkRequest;
        class DeleteSiteRequest;
        class DeregisterTransitGatewayRequest;
        class DescribeGlobalNetworksRequest;
        class DisassociateCustomerGatewayRequest;
        class DisassociateLinkRequest;
        class GetCustomerGatewayAssociationsRequest;
        class GetDevicesRequest;
        class GetLinkAssociationsRequest;
        class GetLinksRequest;
        class GetSitesRequest;
        class GetTransitGatewayRegistrationsRequest;
        class ListTagsForResourceRequest;
        class RegisterTransitGatewayRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDeviceRequest;
        class UpdateGlobalNetworkRequest;
        class UpdateLinkRequest;
        class UpdateSiteRequest;

        typedef Aws::Utils::Outcome<AssociateCustomerGatewayResult, NetworkManagerError> AssociateCustomerGatewayOutcome;
        typedef Aws::Utils::Outcome<AssociateLinkResult, NetworkManagerError> AssociateLinkOutcome;
        typedef Aws::Utils::Outcome<CreateDeviceResult, NetworkManagerError> CreateDeviceOutcome;
        typedef Aws::Utils::Outcome<CreateGlobalNetworkResult, NetworkManagerError> CreateGlobalNetworkOutcome;
        typedef Aws::Utils::Outcome<CreateLinkResult, NetworkManagerError> CreateLinkOutcome;
        typedef Aws::Utils::Outcome<CreateSiteResult, NetworkManagerError> CreateSiteOutcome;
        typedef Aws::Utils::Outcome<DeleteDeviceResult, NetworkManagerError> DeleteDeviceOutcome;
        typedef Aws::Utils::Outcome<DeleteGlobalNetworkResult, NetworkManagerError> DeleteGlobalNetworkOutcome;
        typedef Aws::Utils::Outcome<DeleteLinkResult, NetworkManagerError> DeleteLinkOutcome;
        typedef Aws::Utils::Outcome<DeleteSiteResult, NetworkManagerError> DeleteSiteOutcome;
        typedef Aws::Utils::Outcome<DeregisterTransitGatewayResult, NetworkManagerError> DeregisterTransitGatewayOutcome;
        typedef Aws::Utils::Outcome<DescribeGlobalNetworksResult, NetworkManagerError> DescribeGlobalNetworksOutcome;
        typedef Aws::Utils::Outcome<DisassociateCustomerGatewayResult, NetworkManagerError> DisassociateCustomerGatewayOutcome;
        typedef Aws::Utils::Outcome<DisassociateLinkResult, NetworkManagerError> DisassociateLinkOutcome;
        typedef Aws::Utils::Outcome<GetCustomerGatewayAssociationsResult, NetworkManagerError> GetCustomerGatewayAssociationsOutcome;
        typedef Aws::Utils::Outcome<GetDevicesResult, NetworkManagerError> GetDevicesOutcome;
        typedef Aws::Utils::Outcome<GetLinkAssociationsResult, NetworkManagerError> GetLinkAssociationsOutcome;
        typedef Aws::Utils::Outcome<GetLinksResult, NetworkManagerError> GetLinksOutcome;
        typedef Aws::Utils::Outcome<GetSitesResult, NetworkManagerError> GetSitesOutcome;
        typedef Aws::Utils::Outcome<GetTransitGatewayRegistrationsResult, NetworkManagerError> GetTransitGatewayRegistrationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkManagerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RegisterTransitGatewayResult, NetworkManagerError> RegisterTransitGatewayOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, NetworkManagerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, NetworkManagerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceResult, NetworkManagerError> UpdateDeviceOutcome;
        typedef Aws::Utils::Outcome<UpdateGlobalNetworkResult, NetworkManagerError> UpdateGlobalNetworkOutcome;
        typedef Aws::Utils::Outcome<UpdateLinkResult, NetworkManagerError> UpdateLinkOutcome;
        typedef Aws::Utils::Outcome<UpdateSiteResult, NetworkManagerError> UpdateSiteOutcome;

        typedef std::future<AssociateCustomerGatewayOutcome> AssociateCustomerGatewayOutcomeCallable;
        typedef std::future<AssociateLinkOutcome> AssociateLinkOutcomeCallable;
        typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
        typedef std::future<CreateGlobalNetworkOutcome> CreateGlobalNetworkOutcomeCallable;
        typedef std::future<CreateLinkOutcome> CreateLinkOutcomeCallable;
        typedef std::future<CreateSiteOutcome> CreateSiteOutcomeCallable;
        typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
        typedef std::future<DeleteGlobalNetworkOutcome> DeleteGlobalNetworkOutcomeCallable;
        typedef std::future<DeleteLinkOutcome> DeleteLinkOutcomeCallable;
        typedef std::future<DeleteSiteOutcome> DeleteSiteOutcomeCallable;
        typedef std::future<DeregisterTransitGatewayOutcome> DeregisterTransitGatewayOutcomeCallable;
        typedef std::future<DescribeGlobalNetworksOutcome> DescribeGlobalNetworksOutcomeCallable;
        typedef std::future<DisassociateCustomerGatewayOutcome> DisassociateCustomerGatewayOutcomeCallable;
        typedef std::future<DisassociateLinkOutcome> DisassociateLinkOutcomeCallable;
        typedef std::future<GetCustomerGatewayAssociationsOutcome> GetCustomerGatewayAssociationsOutcomeCallable;
        typedef std::future<GetDevicesOutcome> GetDevicesOutcomeCallable;
        typedef std::future<GetLinkAssociationsOutcome> GetLinkAssociationsOutcomeCallable;
        typedef std::future<GetLinksOutcome> GetLinksOutcomeCallable;
        typedef std::future<GetSitesOutcome> GetSitesOutcomeCallable;
        typedef std::future<GetTransitGatewayRegistrationsOutcome> GetTransitGatewayRegistrationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RegisterTransitGatewayOutcome> RegisterTransitGatewayOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
        typedef std::future<UpdateGlobalNetworkOutcome> UpdateGlobalNetworkOutcomeCallable;
        typedef std::future<UpdateLinkOutcome> UpdateLinkOutcomeCallable;
        typedef std::future<UpdateSiteOutcome> UpdateSiteOutcomeCallable;
} // namespace Model

  class NetworkManagerClient;

    typedef std::function<void(const NetworkManagerClient*, const Model::AssociateCustomerGatewayRequest&, const Model::AssociateCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::AssociateLinkRequest&, const Model::AssociateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateDeviceRequest&, const Model::CreateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateGlobalNetworkRequest&, const Model::CreateGlobalNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateLinkRequest&, const Model::CreateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateSiteRequest&, const Model::CreateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSiteResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteDeviceRequest&, const Model::DeleteDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteGlobalNetworkRequest&, const Model::DeleteGlobalNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlobalNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteLinkRequest&, const Model::DeleteLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteSiteRequest&, const Model::DeleteSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSiteResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeregisterTransitGatewayRequest&, const Model::DeregisterTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DescribeGlobalNetworksRequest&, const Model::DescribeGlobalNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalNetworksResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DisassociateCustomerGatewayRequest&, const Model::DisassociateCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DisassociateLinkRequest&, const Model::DisassociateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetCustomerGatewayAssociationsRequest&, const Model::GetCustomerGatewayAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomerGatewayAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetDevicesRequest&, const Model::GetDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicesResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetLinkAssociationsRequest&, const Model::GetLinkAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetLinksRequest&, const Model::GetLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinksResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetSitesRequest&, const Model::GetSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSitesResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetTransitGatewayRegistrationsRequest&, const Model::GetTransitGatewayRegistrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayRegistrationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::RegisterTransitGatewayRequest&, const Model::RegisterTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateDeviceRequest&, const Model::UpdateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateGlobalNetworkRequest&, const Model::UpdateGlobalNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateLinkRequest&, const Model::UpdateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateSiteRequest&, const Model::UpdateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteResponseReceivedHandler;

  /**
   * <p>Transit Gateway Network Manager (Network Manager) enables you to create a
   * global network, in which you can monitor your AWS and on-premises networks that
   * are built around transit gateways.</p>
   */
  class AWS_NETWORKMANAGER_API NetworkManagerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkManagerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~NetworkManagerClient();


        /**
         * <p>Associates a customer gateway with a device and optionally, with a link. If
         * you specify a link, it must be associated with the specified device. </p> <p>You
         * can only associate customer gateways that are connected to a VPN attachment on a
         * transit gateway. The transit gateway must be registered in your global network.
         * When you register a transit gateway, customer gateways that are connected to the
         * transit gateway are automatically included in the global network. To list
         * customer gateways that are connected to a transit gateway, use the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeVpnConnections.html">DescribeVpnConnections</a>
         * EC2 API and filter by <code>transit-gateway-id</code>.</p> <p>You cannot
         * associate a customer gateway with more than one device and link. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCustomerGatewayOutcome AssociateCustomerGateway(const Model::AssociateCustomerGatewayRequest& request) const;

        /**
         * <p>Associates a customer gateway with a device and optionally, with a link. If
         * you specify a link, it must be associated with the specified device. </p> <p>You
         * can only associate customer gateways that are connected to a VPN attachment on a
         * transit gateway. The transit gateway must be registered in your global network.
         * When you register a transit gateway, customer gateways that are connected to the
         * transit gateway are automatically included in the global network. To list
         * customer gateways that are connected to a transit gateway, use the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeVpnConnections.html">DescribeVpnConnections</a>
         * EC2 API and filter by <code>transit-gateway-id</code>.</p> <p>You cannot
         * associate a customer gateway with more than one device and link. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateCustomerGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateCustomerGatewayOutcomeCallable AssociateCustomerGatewayCallable(const Model::AssociateCustomerGatewayRequest& request) const;

        /**
         * <p>Associates a customer gateway with a device and optionally, with a link. If
         * you specify a link, it must be associated with the specified device. </p> <p>You
         * can only associate customer gateways that are connected to a VPN attachment on a
         * transit gateway. The transit gateway must be registered in your global network.
         * When you register a transit gateway, customer gateways that are connected to the
         * transit gateway are automatically included in the global network. To list
         * customer gateways that are connected to a transit gateway, use the <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeVpnConnections.html">DescribeVpnConnections</a>
         * EC2 API and filter by <code>transit-gateway-id</code>.</p> <p>You cannot
         * associate a customer gateway with more than one device and link. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateCustomerGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateCustomerGatewayAsync(const Model::AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a link to a device. A device can be associated to multiple links
         * and a link can be associated to multiple devices. The device and link must be in
         * the same global network and the same site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLinkOutcome AssociateLink(const Model::AssociateLinkRequest& request) const;

        /**
         * <p>Associates a link to a device. A device can be associated to multiple links
         * and a link can be associated to multiple devices. The device and link must be in
         * the same global network and the same site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLinkOutcomeCallable AssociateLinkCallable(const Model::AssociateLinkRequest& request) const;

        /**
         * <p>Associates a link to a device. A device can be associated to multiple links
         * and a link can be associated to multiple devices. The device and link must be in
         * the same global network and the same site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AssociateLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLinkAsync(const Model::AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new device in a global network. If you specify both a site ID and a
         * location, the location of the site is used for visualization in the Network
         * Manager console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest& request) const;

        /**
         * <p>Creates a new device in a global network. If you specify both a site ID and a
         * location, the location of the site is used for visualization in the Network
         * Manager console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request) const;

        /**
         * <p>Creates a new device in a global network. If you specify both a site ID and a
         * location, the location of the site is used for visualization in the Network
         * Manager console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalNetworkOutcome CreateGlobalNetwork(const Model::CreateGlobalNetworkRequest& request) const;

        /**
         * <p>Creates a new, empty global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateGlobalNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGlobalNetworkOutcomeCallable CreateGlobalNetworkCallable(const Model::CreateGlobalNetworkRequest& request) const;

        /**
         * <p>Creates a new, empty global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateGlobalNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGlobalNetworkAsync(const Model::CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new link for a specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLinkOutcome CreateLink(const Model::CreateLinkRequest& request) const;

        /**
         * <p>Creates a new link for a specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLinkOutcomeCallable CreateLinkCallable(const Model::CreateLinkRequest& request) const;

        /**
         * <p>Creates a new link for a specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLinkAsync(const Model::CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new site in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * <p>Creates a new site in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSiteOutcomeCallable CreateSiteCallable(const Model::CreateSiteRequest& request) const;

        /**
         * <p>Creates a new site in a global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CreateSite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSiteAsync(const Model::CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing device. You must first disassociate the device from any
         * links and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * <p>Deletes an existing device. You must first disassociate the device from any
         * links and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;

        /**
         * <p>Deletes an existing device. You must first disassociate the device from any
         * links and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing global network. You must first delete all global network
         * objects (devices, links, and sites) and deregister all transit
         * gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalNetworkOutcome DeleteGlobalNetwork(const Model::DeleteGlobalNetworkRequest& request) const;

        /**
         * <p>Deletes an existing global network. You must first delete all global network
         * objects (devices, links, and sites) and deregister all transit
         * gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteGlobalNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGlobalNetworkOutcomeCallable DeleteGlobalNetworkCallable(const Model::DeleteGlobalNetworkRequest& request) const;

        /**
         * <p>Deletes an existing global network. You must first delete all global network
         * objects (devices, links, and sites) and deregister all transit
         * gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteGlobalNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGlobalNetworkAsync(const Model::DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing link. You must first disassociate the link from any
         * devices and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLinkOutcome DeleteLink(const Model::DeleteLinkRequest& request) const;

        /**
         * <p>Deletes an existing link. You must first disassociate the link from any
         * devices and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLinkOutcomeCallable DeleteLinkCallable(const Model::DeleteLinkRequest& request) const;

        /**
         * <p>Deletes an existing link. You must first disassociate the link from any
         * devices and customer gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLinkAsync(const Model::DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing site. The site cannot be associated with any device or
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * <p>Deletes an existing site. The site cannot be associated with any device or
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteSite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const Model::DeleteSiteRequest& request) const;

        /**
         * <p>Deletes an existing site. The site cannot be associated with any device or
         * link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeleteSite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSiteAsync(const Model::DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a transit gateway from your global network. This action does not
         * delete your transit gateway, or modify any of its attachments. This action
         * removes any customer gateway associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeregisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTransitGatewayOutcome DeregisterTransitGateway(const Model::DeregisterTransitGatewayRequest& request) const;

        /**
         * <p>Deregisters a transit gateway from your global network. This action does not
         * delete your transit gateway, or modify any of its attachments. This action
         * removes any customer gateway associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeregisterTransitGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTransitGatewayOutcomeCallable DeregisterTransitGatewayCallable(const Model::DeregisterTransitGatewayRequest& request) const;

        /**
         * <p>Deregisters a transit gateway from your global network. This action does not
         * delete your transit gateway, or modify any of its attachments. This action
         * removes any customer gateway associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DeregisterTransitGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTransitGatewayAsync(const Model::DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more global networks. By default, all global networks are
         * described. To describe the objects in your global network, you must use the
         * appropriate <code>Get*</code> action. For example, to list the transit gateways
         * in your global network, use <a>GetTransitGatewayRegistrations</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DescribeGlobalNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalNetworksOutcome DescribeGlobalNetworks(const Model::DescribeGlobalNetworksRequest& request) const;

        /**
         * <p>Describes one or more global networks. By default, all global networks are
         * described. To describe the objects in your global network, you must use the
         * appropriate <code>Get*</code> action. For example, to list the transit gateways
         * in your global network, use <a>GetTransitGatewayRegistrations</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DescribeGlobalNetworks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGlobalNetworksOutcomeCallable DescribeGlobalNetworksCallable(const Model::DescribeGlobalNetworksRequest& request) const;

        /**
         * <p>Describes one or more global networks. By default, all global networks are
         * described. To describe the objects in your global network, you must use the
         * appropriate <code>Get*</code> action. For example, to list the transit gateways
         * in your global network, use <a>GetTransitGatewayRegistrations</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DescribeGlobalNetworks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGlobalNetworksAsync(const Model::DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a customer gateway from a device and a link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateCustomerGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCustomerGatewayOutcome DisassociateCustomerGateway(const Model::DisassociateCustomerGatewayRequest& request) const;

        /**
         * <p>Disassociates a customer gateway from a device and a link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateCustomerGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateCustomerGatewayOutcomeCallable DisassociateCustomerGatewayCallable(const Model::DisassociateCustomerGatewayRequest& request) const;

        /**
         * <p>Disassociates a customer gateway from a device and a link.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateCustomerGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateCustomerGatewayAsync(const Model::DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an existing device from a link. You must first disassociate any
         * customer gateways that are associated with the link.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLinkOutcome DisassociateLink(const Model::DisassociateLinkRequest& request) const;

        /**
         * <p>Disassociates an existing device from a link. You must first disassociate any
         * customer gateways that are associated with the link.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLinkOutcomeCallable DisassociateLinkCallable(const Model::DisassociateLinkRequest& request) const;

        /**
         * <p>Disassociates an existing device from a link. You must first disassociate any
         * customer gateways that are associated with the link.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/DisassociateLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLinkAsync(const Model::DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the association information for customer gateways that are associated
         * with devices and links in your global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCustomerGatewayAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomerGatewayAssociationsOutcome GetCustomerGatewayAssociations(const Model::GetCustomerGatewayAssociationsRequest& request) const;

        /**
         * <p>Gets the association information for customer gateways that are associated
         * with devices and links in your global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCustomerGatewayAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCustomerGatewayAssociationsOutcomeCallable GetCustomerGatewayAssociationsCallable(const Model::GetCustomerGatewayAssociationsRequest& request) const;

        /**
         * <p>Gets the association information for customer gateways that are associated
         * with devices and links in your global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetCustomerGatewayAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomerGatewayAssociationsAsync(const Model::GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more of your devices in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicesOutcome GetDevices(const Model::GetDevicesRequest& request) const;

        /**
         * <p>Gets information about one or more of your devices in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicesOutcomeCallable GetDevicesCallable(const Model::GetDevicesRequest& request) const;

        /**
         * <p>Gets information about one or more of your devices in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicesAsync(const Model::GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the link associations for a device or a link. Either the device ID or
         * the link ID must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinkAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkAssociationsOutcome GetLinkAssociations(const Model::GetLinkAssociationsRequest& request) const;

        /**
         * <p>Gets the link associations for a device or a link. Either the device ID or
         * the link ID must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinkAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLinkAssociationsOutcomeCallable GetLinkAssociationsCallable(const Model::GetLinkAssociationsRequest& request) const;

        /**
         * <p>Gets the link associations for a device or a link. Either the device ID or
         * the link ID must be specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinkAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLinkAssociationsAsync(const Model::GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more links in a specified global network.</p>
         * <p>If you specify the site ID, you cannot specify the type or provider in the
         * same request. You can specify the type and provider in the same
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinksOutcome GetLinks(const Model::GetLinksRequest& request) const;

        /**
         * <p>Gets information about one or more links in a specified global network.</p>
         * <p>If you specify the site ID, you cannot specify the type or provider in the
         * same request. You can specify the type and provider in the same
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLinksOutcomeCallable GetLinksCallable(const Model::GetLinksRequest& request) const;

        /**
         * <p>Gets information about one or more links in a specified global network.</p>
         * <p>If you specify the site ID, you cannot specify the type or provider in the
         * same request. You can specify the type and provider in the same
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetLinks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLinksAsync(const Model::GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more of your sites in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSites">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSitesOutcome GetSites(const Model::GetSitesRequest& request) const;

        /**
         * <p>Gets information about one or more of your sites in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSites">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSitesOutcomeCallable GetSitesCallable(const Model::GetSitesRequest& request) const;

        /**
         * <p>Gets information about one or more of your sites in a global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetSites">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSitesAsync(const Model::GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the transit gateway registrations in a specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTransitGatewayRegistrationsOutcome GetTransitGatewayRegistrations(const Model::GetTransitGatewayRegistrationsRequest& request) const;

        /**
         * <p>Gets information about the transit gateway registrations in a specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRegistrations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTransitGatewayRegistrationsOutcomeCallable GetTransitGatewayRegistrationsCallable(const Model::GetTransitGatewayRegistrationsRequest& request) const;

        /**
         * <p>Gets information about the transit gateway registrations in a specified
         * global network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/GetTransitGatewayRegistrations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTransitGatewayRegistrationsAsync(const Model::GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags for a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a transit gateway in your global network. The transit gateway can
         * be in any AWS Region, but it must be owned by the same AWS account that owns the
         * global network. You cannot register a transit gateway in more than one global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RegisterTransitGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTransitGatewayOutcome RegisterTransitGateway(const Model::RegisterTransitGatewayRequest& request) const;

        /**
         * <p>Registers a transit gateway in your global network. The transit gateway can
         * be in any AWS Region, but it must be owned by the same AWS account that owns the
         * global network. You cannot register a transit gateway in more than one global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RegisterTransitGateway">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTransitGatewayOutcomeCallable RegisterTransitGatewayCallable(const Model::RegisterTransitGatewayRequest& request) const;

        /**
         * <p>Registers a transit gateway in your global network. The transit gateway can
         * be in any AWS Region, but it must be owned by the same AWS account that owns the
         * global network. You cannot register a transit gateway in more than one global
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RegisterTransitGateway">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTransitGatewayAsync(const Model::RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for an existing device. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest& request) const;

        /**
         * <p>Updates the details for an existing device. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request) const;

        /**
         * <p>Updates the details for an existing device. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing global network. To remove information for any of the
         * parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateGlobalNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalNetworkOutcome UpdateGlobalNetwork(const Model::UpdateGlobalNetworkRequest& request) const;

        /**
         * <p>Updates an existing global network. To remove information for any of the
         * parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateGlobalNetwork">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalNetworkOutcomeCallable UpdateGlobalNetworkCallable(const Model::UpdateGlobalNetworkRequest& request) const;

        /**
         * <p>Updates an existing global network. To remove information for any of the
         * parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateGlobalNetwork">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalNetworkAsync(const Model::UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for an existing link. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLinkOutcome UpdateLink(const Model::UpdateLinkRequest& request) const;

        /**
         * <p>Updates the details for an existing link. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLinkOutcomeCallable UpdateLinkCallable(const Model::UpdateLinkRequest& request) const;

        /**
         * <p>Updates the details for an existing link. To remove information for any of
         * the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLinkAsync(const Model::UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the information for an existing site. To remove information for any
         * of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * <p>Updates the information for an existing site. To remove information for any
         * of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateSite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const Model::UpdateSiteRequest& request) const;

        /**
         * <p>Updates the information for an existing site. To remove information for any
         * of the parameters, specify an empty string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/UpdateSite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSiteAsync(const Model::UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateCustomerGatewayAsyncHelper(const Model::AssociateCustomerGatewayRequest& request, const AssociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateLinkAsyncHelper(const Model::AssociateLinkRequest& request, const AssociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeviceAsyncHelper(const Model::CreateDeviceRequest& request, const CreateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGlobalNetworkAsyncHelper(const Model::CreateGlobalNetworkRequest& request, const CreateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLinkAsyncHelper(const Model::CreateLinkRequest& request, const CreateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSiteAsyncHelper(const Model::CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeviceAsyncHelper(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGlobalNetworkAsyncHelper(const Model::DeleteGlobalNetworkRequest& request, const DeleteGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLinkAsyncHelper(const Model::DeleteLinkRequest& request, const DeleteLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSiteAsyncHelper(const Model::DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTransitGatewayAsyncHelper(const Model::DeregisterTransitGatewayRequest& request, const DeregisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGlobalNetworksAsyncHelper(const Model::DescribeGlobalNetworksRequest& request, const DescribeGlobalNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateCustomerGatewayAsyncHelper(const Model::DisassociateCustomerGatewayRequest& request, const DisassociateCustomerGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLinkAsyncHelper(const Model::DisassociateLinkRequest& request, const DisassociateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCustomerGatewayAssociationsAsyncHelper(const Model::GetCustomerGatewayAssociationsRequest& request, const GetCustomerGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicesAsyncHelper(const Model::GetDevicesRequest& request, const GetDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLinkAssociationsAsyncHelper(const Model::GetLinkAssociationsRequest& request, const GetLinkAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLinksAsyncHelper(const Model::GetLinksRequest& request, const GetLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSitesAsyncHelper(const Model::GetSitesRequest& request, const GetSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTransitGatewayRegistrationsAsyncHelper(const Model::GetTransitGatewayRegistrationsRequest& request, const GetTransitGatewayRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTransitGatewayAsyncHelper(const Model::RegisterTransitGatewayRequest& request, const RegisterTransitGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceAsyncHelper(const Model::UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGlobalNetworkAsyncHelper(const Model::UpdateGlobalNetworkRequest& request, const UpdateGlobalNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLinkAsyncHelper(const Model::UpdateLinkRequest& request, const UpdateLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSiteAsyncHelper(const Model::UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace NetworkManager
} // namespace Aws
