/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/privatenetworks/model/AcknowledgeOrderReceiptResult.h>
#include <aws/privatenetworks/model/ActivateDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/ActivateNetworkSiteResult.h>
#include <aws/privatenetworks/model/ConfigureAccessPointResult.h>
#include <aws/privatenetworks/model/CreateNetworkResult.h>
#include <aws/privatenetworks/model/CreateNetworkSiteResult.h>
#include <aws/privatenetworks/model/DeactivateDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/DeleteNetworkResult.h>
#include <aws/privatenetworks/model/DeleteNetworkSiteResult.h>
#include <aws/privatenetworks/model/GetDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/GetNetworkResult.h>
#include <aws/privatenetworks/model/GetNetworkResourceResult.h>
#include <aws/privatenetworks/model/GetNetworkSiteResult.h>
#include <aws/privatenetworks/model/GetOrderResult.h>
#include <aws/privatenetworks/model/ListDeviceIdentifiersResult.h>
#include <aws/privatenetworks/model/ListNetworkResourcesResult.h>
#include <aws/privatenetworks/model/ListNetworkSitesResult.h>
#include <aws/privatenetworks/model/ListNetworksResult.h>
#include <aws/privatenetworks/model/ListOrdersResult.h>
#include <aws/privatenetworks/model/ListTagsForResourceResult.h>
#include <aws/privatenetworks/model/PingResult.h>
#include <aws/privatenetworks/model/TagResourceResult.h>
#include <aws/privatenetworks/model/UntagResourceResult.h>
#include <aws/privatenetworks/model/UpdateNetworkSiteResult.h>
#include <aws/privatenetworks/model/UpdateNetworkSitePlanResult.h>
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

namespace PrivateNetworks
{

namespace Model
{
        class AcknowledgeOrderReceiptRequest;
        class ActivateDeviceIdentifierRequest;
        class ActivateNetworkSiteRequest;
        class ConfigureAccessPointRequest;
        class CreateNetworkRequest;
        class CreateNetworkSiteRequest;
        class DeactivateDeviceIdentifierRequest;
        class DeleteNetworkRequest;
        class DeleteNetworkSiteRequest;
        class GetDeviceIdentifierRequest;
        class GetNetworkRequest;
        class GetNetworkResourceRequest;
        class GetNetworkSiteRequest;
        class GetOrderRequest;
        class ListDeviceIdentifiersRequest;
        class ListNetworkResourcesRequest;
        class ListNetworkSitesRequest;
        class ListNetworksRequest;
        class ListOrdersRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateNetworkSiteRequest;
        class UpdateNetworkSitePlanRequest;

        typedef Aws::Utils::Outcome<AcknowledgeOrderReceiptResult, PrivateNetworksError> AcknowledgeOrderReceiptOutcome;
        typedef Aws::Utils::Outcome<ActivateDeviceIdentifierResult, PrivateNetworksError> ActivateDeviceIdentifierOutcome;
        typedef Aws::Utils::Outcome<ActivateNetworkSiteResult, PrivateNetworksError> ActivateNetworkSiteOutcome;
        typedef Aws::Utils::Outcome<ConfigureAccessPointResult, PrivateNetworksError> ConfigureAccessPointOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkResult, PrivateNetworksError> CreateNetworkOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkSiteResult, PrivateNetworksError> CreateNetworkSiteOutcome;
        typedef Aws::Utils::Outcome<DeactivateDeviceIdentifierResult, PrivateNetworksError> DeactivateDeviceIdentifierOutcome;
        typedef Aws::Utils::Outcome<DeleteNetworkResult, PrivateNetworksError> DeleteNetworkOutcome;
        typedef Aws::Utils::Outcome<DeleteNetworkSiteResult, PrivateNetworksError> DeleteNetworkSiteOutcome;
        typedef Aws::Utils::Outcome<GetDeviceIdentifierResult, PrivateNetworksError> GetDeviceIdentifierOutcome;
        typedef Aws::Utils::Outcome<GetNetworkResult, PrivateNetworksError> GetNetworkOutcome;
        typedef Aws::Utils::Outcome<GetNetworkResourceResult, PrivateNetworksError> GetNetworkResourceOutcome;
        typedef Aws::Utils::Outcome<GetNetworkSiteResult, PrivateNetworksError> GetNetworkSiteOutcome;
        typedef Aws::Utils::Outcome<GetOrderResult, PrivateNetworksError> GetOrderOutcome;
        typedef Aws::Utils::Outcome<ListDeviceIdentifiersResult, PrivateNetworksError> ListDeviceIdentifiersOutcome;
        typedef Aws::Utils::Outcome<ListNetworkResourcesResult, PrivateNetworksError> ListNetworkResourcesOutcome;
        typedef Aws::Utils::Outcome<ListNetworkSitesResult, PrivateNetworksError> ListNetworkSitesOutcome;
        typedef Aws::Utils::Outcome<ListNetworksResult, PrivateNetworksError> ListNetworksOutcome;
        typedef Aws::Utils::Outcome<ListOrdersResult, PrivateNetworksError> ListOrdersOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, PrivateNetworksError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PingResult, PrivateNetworksError> PingOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, PrivateNetworksError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, PrivateNetworksError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateNetworkSiteResult, PrivateNetworksError> UpdateNetworkSiteOutcome;
        typedef Aws::Utils::Outcome<UpdateNetworkSitePlanResult, PrivateNetworksError> UpdateNetworkSitePlanOutcome;

        typedef std::future<AcknowledgeOrderReceiptOutcome> AcknowledgeOrderReceiptOutcomeCallable;
        typedef std::future<ActivateDeviceIdentifierOutcome> ActivateDeviceIdentifierOutcomeCallable;
        typedef std::future<ActivateNetworkSiteOutcome> ActivateNetworkSiteOutcomeCallable;
        typedef std::future<ConfigureAccessPointOutcome> ConfigureAccessPointOutcomeCallable;
        typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
        typedef std::future<CreateNetworkSiteOutcome> CreateNetworkSiteOutcomeCallable;
        typedef std::future<DeactivateDeviceIdentifierOutcome> DeactivateDeviceIdentifierOutcomeCallable;
        typedef std::future<DeleteNetworkOutcome> DeleteNetworkOutcomeCallable;
        typedef std::future<DeleteNetworkSiteOutcome> DeleteNetworkSiteOutcomeCallable;
        typedef std::future<GetDeviceIdentifierOutcome> GetDeviceIdentifierOutcomeCallable;
        typedef std::future<GetNetworkOutcome> GetNetworkOutcomeCallable;
        typedef std::future<GetNetworkResourceOutcome> GetNetworkResourceOutcomeCallable;
        typedef std::future<GetNetworkSiteOutcome> GetNetworkSiteOutcomeCallable;
        typedef std::future<GetOrderOutcome> GetOrderOutcomeCallable;
        typedef std::future<ListDeviceIdentifiersOutcome> ListDeviceIdentifiersOutcomeCallable;
        typedef std::future<ListNetworkResourcesOutcome> ListNetworkResourcesOutcomeCallable;
        typedef std::future<ListNetworkSitesOutcome> ListNetworkSitesOutcomeCallable;
        typedef std::future<ListNetworksOutcome> ListNetworksOutcomeCallable;
        typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PingOutcome> PingOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateNetworkSiteOutcome> UpdateNetworkSiteOutcomeCallable;
        typedef std::future<UpdateNetworkSitePlanOutcome> UpdateNetworkSitePlanOutcomeCallable;
} // namespace Model

  class PrivateNetworksClient;

    typedef std::function<void(const PrivateNetworksClient*, const Model::AcknowledgeOrderReceiptRequest&, const Model::AcknowledgeOrderReceiptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeOrderReceiptResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ActivateDeviceIdentifierRequest&, const Model::ActivateDeviceIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateDeviceIdentifierResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ActivateNetworkSiteRequest&, const Model::ActivateNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ConfigureAccessPointRequest&, const Model::ConfigureAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureAccessPointResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::CreateNetworkRequest&, const Model::CreateNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::CreateNetworkSiteRequest&, const Model::CreateNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::DeactivateDeviceIdentifierRequest&, const Model::DeactivateDeviceIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateDeviceIdentifierResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::DeleteNetworkRequest&, const Model::DeleteNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::DeleteNetworkSiteRequest&, const Model::DeleteNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetDeviceIdentifierRequest&, const Model::GetDeviceIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceIdentifierResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetNetworkRequest&, const Model::GetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetNetworkResourceRequest&, const Model::GetNetworkResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetNetworkSiteRequest&, const Model::GetNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetOrderRequest&, const Model::GetOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrderResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListDeviceIdentifiersRequest&, const Model::ListDeviceIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceIdentifiersResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListNetworkResourcesRequest&, const Model::ListNetworkResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkResourcesResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListNetworkSitesRequest&, const Model::ListNetworkSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkSitesResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListNetworksRequest&, const Model::ListNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworksResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListOrdersRequest&, const Model::ListOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrdersResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::PingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PingResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::UpdateNetworkSiteRequest&, const Model::UpdateNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::UpdateNetworkSitePlanRequest&, const Model::UpdateNetworkSitePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkSitePlanResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PrivateNetworksClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PrivateNetworksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcknowledgeOrderReceiptAsyncHelper(const Model::AcknowledgeOrderReceiptRequest& request, const AcknowledgeOrderReceiptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ActivateDeviceIdentifierAsyncHelper(const Model::ActivateDeviceIdentifierRequest& request, const ActivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ActivateNetworkSiteAsyncHelper(const Model::ActivateNetworkSiteRequest& request, const ActivateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ConfigureAccessPointAsyncHelper(const Model::ConfigureAccessPointRequest& request, const ConfigureAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkAsyncHelper(const Model::CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkSiteAsyncHelper(const Model::CreateNetworkSiteRequest& request, const CreateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivateDeviceIdentifierAsyncHelper(const Model::DeactivateDeviceIdentifierRequest& request, const DeactivateDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkAsyncHelper(const Model::DeleteNetworkRequest& request, const DeleteNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkSiteAsyncHelper(const Model::DeleteNetworkSiteRequest& request, const DeleteNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceIdentifierAsyncHelper(const Model::GetDeviceIdentifierRequest& request, const GetDeviceIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkAsyncHelper(const Model::GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkResourceAsyncHelper(const Model::GetNetworkResourceRequest& request, const GetNetworkResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkSiteAsyncHelper(const Model::GetNetworkSiteRequest& request, const GetNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOrderAsyncHelper(const Model::GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceIdentifiersAsyncHelper(const Model::ListDeviceIdentifiersRequest& request, const ListDeviceIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworkResourcesAsyncHelper(const Model::ListNetworkResourcesRequest& request, const ListNetworkResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworkSitesAsyncHelper(const Model::ListNetworkSitesRequest& request, const ListNetworkSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworksAsyncHelper(const Model::ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrdersAsyncHelper(const Model::ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PingAsyncHelper(const PingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNetworkSiteAsyncHelper(const Model::UpdateNetworkSiteRequest& request, const UpdateNetworkSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNetworkSitePlanAsyncHelper(const Model::UpdateNetworkSitePlanRequest& request, const UpdateNetworkSitePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PrivateNetworks
} // namespace Aws
