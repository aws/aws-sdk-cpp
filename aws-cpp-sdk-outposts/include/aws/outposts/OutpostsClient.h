/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/CancelOrderResult.h>
#include <aws/outposts/model/CreateOrderResult.h>
#include <aws/outposts/model/CreateOutpostResult.h>
#include <aws/outposts/model/CreateSiteResult.h>
#include <aws/outposts/model/DeleteOutpostResult.h>
#include <aws/outposts/model/DeleteSiteResult.h>
#include <aws/outposts/model/GetCatalogItemResult.h>
#include <aws/outposts/model/GetOrderResult.h>
#include <aws/outposts/model/GetOutpostResult.h>
#include <aws/outposts/model/GetOutpostInstanceTypesResult.h>
#include <aws/outposts/model/GetSiteResult.h>
#include <aws/outposts/model/GetSiteAddressResult.h>
#include <aws/outposts/model/ListAssetsResult.h>
#include <aws/outposts/model/ListCatalogItemsResult.h>
#include <aws/outposts/model/ListOrdersResult.h>
#include <aws/outposts/model/ListOutpostsResult.h>
#include <aws/outposts/model/ListSitesResult.h>
#include <aws/outposts/model/ListTagsForResourceResult.h>
#include <aws/outposts/model/TagResourceResult.h>
#include <aws/outposts/model/UntagResourceResult.h>
#include <aws/outposts/model/UpdateOutpostResult.h>
#include <aws/outposts/model/UpdateSiteResult.h>
#include <aws/outposts/model/UpdateSiteAddressResult.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesResult.h>
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

namespace Outposts
{

namespace Model
{
        class CancelOrderRequest;
        class CreateOrderRequest;
        class CreateOutpostRequest;
        class CreateSiteRequest;
        class DeleteOutpostRequest;
        class DeleteSiteRequest;
        class GetCatalogItemRequest;
        class GetOrderRequest;
        class GetOutpostRequest;
        class GetOutpostInstanceTypesRequest;
        class GetSiteRequest;
        class GetSiteAddressRequest;
        class ListAssetsRequest;
        class ListCatalogItemsRequest;
        class ListOrdersRequest;
        class ListOutpostsRequest;
        class ListSitesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateOutpostRequest;
        class UpdateSiteRequest;
        class UpdateSiteAddressRequest;
        class UpdateSiteRackPhysicalPropertiesRequest;

        typedef Aws::Utils::Outcome<CancelOrderResult, OutpostsError> CancelOrderOutcome;
        typedef Aws::Utils::Outcome<CreateOrderResult, OutpostsError> CreateOrderOutcome;
        typedef Aws::Utils::Outcome<CreateOutpostResult, OutpostsError> CreateOutpostOutcome;
        typedef Aws::Utils::Outcome<CreateSiteResult, OutpostsError> CreateSiteOutcome;
        typedef Aws::Utils::Outcome<DeleteOutpostResult, OutpostsError> DeleteOutpostOutcome;
        typedef Aws::Utils::Outcome<DeleteSiteResult, OutpostsError> DeleteSiteOutcome;
        typedef Aws::Utils::Outcome<GetCatalogItemResult, OutpostsError> GetCatalogItemOutcome;
        typedef Aws::Utils::Outcome<GetOrderResult, OutpostsError> GetOrderOutcome;
        typedef Aws::Utils::Outcome<GetOutpostResult, OutpostsError> GetOutpostOutcome;
        typedef Aws::Utils::Outcome<GetOutpostInstanceTypesResult, OutpostsError> GetOutpostInstanceTypesOutcome;
        typedef Aws::Utils::Outcome<GetSiteResult, OutpostsError> GetSiteOutcome;
        typedef Aws::Utils::Outcome<GetSiteAddressResult, OutpostsError> GetSiteAddressOutcome;
        typedef Aws::Utils::Outcome<ListAssetsResult, OutpostsError> ListAssetsOutcome;
        typedef Aws::Utils::Outcome<ListCatalogItemsResult, OutpostsError> ListCatalogItemsOutcome;
        typedef Aws::Utils::Outcome<ListOrdersResult, OutpostsError> ListOrdersOutcome;
        typedef Aws::Utils::Outcome<ListOutpostsResult, OutpostsError> ListOutpostsOutcome;
        typedef Aws::Utils::Outcome<ListSitesResult, OutpostsError> ListSitesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, OutpostsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, OutpostsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, OutpostsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateOutpostResult, OutpostsError> UpdateOutpostOutcome;
        typedef Aws::Utils::Outcome<UpdateSiteResult, OutpostsError> UpdateSiteOutcome;
        typedef Aws::Utils::Outcome<UpdateSiteAddressResult, OutpostsError> UpdateSiteAddressOutcome;
        typedef Aws::Utils::Outcome<UpdateSiteRackPhysicalPropertiesResult, OutpostsError> UpdateSiteRackPhysicalPropertiesOutcome;

        typedef std::future<CancelOrderOutcome> CancelOrderOutcomeCallable;
        typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
        typedef std::future<CreateOutpostOutcome> CreateOutpostOutcomeCallable;
        typedef std::future<CreateSiteOutcome> CreateSiteOutcomeCallable;
        typedef std::future<DeleteOutpostOutcome> DeleteOutpostOutcomeCallable;
        typedef std::future<DeleteSiteOutcome> DeleteSiteOutcomeCallable;
        typedef std::future<GetCatalogItemOutcome> GetCatalogItemOutcomeCallable;
        typedef std::future<GetOrderOutcome> GetOrderOutcomeCallable;
        typedef std::future<GetOutpostOutcome> GetOutpostOutcomeCallable;
        typedef std::future<GetOutpostInstanceTypesOutcome> GetOutpostInstanceTypesOutcomeCallable;
        typedef std::future<GetSiteOutcome> GetSiteOutcomeCallable;
        typedef std::future<GetSiteAddressOutcome> GetSiteAddressOutcomeCallable;
        typedef std::future<ListAssetsOutcome> ListAssetsOutcomeCallable;
        typedef std::future<ListCatalogItemsOutcome> ListCatalogItemsOutcomeCallable;
        typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
        typedef std::future<ListOutpostsOutcome> ListOutpostsOutcomeCallable;
        typedef std::future<ListSitesOutcome> ListSitesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateOutpostOutcome> UpdateOutpostOutcomeCallable;
        typedef std::future<UpdateSiteOutcome> UpdateSiteOutcomeCallable;
        typedef std::future<UpdateSiteAddressOutcome> UpdateSiteAddressOutcomeCallable;
        typedef std::future<UpdateSiteRackPhysicalPropertiesOutcome> UpdateSiteRackPhysicalPropertiesOutcomeCallable;
} // namespace Model

  class OutpostsClient;

    typedef std::function<void(const OutpostsClient*, const Model::CancelOrderRequest&, const Model::CancelOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelOrderResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::CreateOrderRequest&, const Model::CreateOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrderResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::CreateOutpostRequest&, const Model::CreateOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::CreateSiteRequest&, const Model::CreateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::DeleteOutpostRequest&, const Model::DeleteOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::DeleteSiteRequest&, const Model::DeleteSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetCatalogItemRequest&, const Model::GetCatalogItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCatalogItemResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOrderRequest&, const Model::GetOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrderResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOutpostRequest&, const Model::GetOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOutpostInstanceTypesRequest&, const Model::GetOutpostInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutpostInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetSiteRequest&, const Model::GetSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetSiteAddressRequest&, const Model::GetSiteAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSiteAddressResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListAssetsRequest&, const Model::ListAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListCatalogItemsRequest&, const Model::ListCatalogItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCatalogItemsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListOrdersRequest&, const Model::ListOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrdersResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListOutpostsRequest&, const Model::ListOutpostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutpostsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListSitesRequest&, const Model::ListSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSitesResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateOutpostRequest&, const Model::UpdateOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateSiteRequest&, const Model::UpdateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateSiteAddressRequest&, const Model::UpdateSiteAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteAddressResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateSiteRackPhysicalPropertiesRequest&, const Model::UpdateSiteRackPhysicalPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteRackPhysicalPropertiesResponseReceivedHandler;

  /**
   * <p>Amazon Web Services Outposts is a fully managed service that extends Amazon
   * Web Services infrastructure, APIs, and tools to customer premises. By providing
   * local access to Amazon Web Services managed infrastructure, Amazon Web Services
   * Outposts enables customers to build and run applications on premises using the
   * same programming interfaces as in Amazon Web Services Regions, while using local
   * compute and storage resources for lower latency and local data processing
   * needs.</p>
   */
  class AWS_OUTPOSTS_API OutpostsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~OutpostsClient();


        /**
         * <p> Cancels an order for an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CancelOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelOrderOutcome CancelOrder(const Model::CancelOrderRequest& request) const;

        /**
         * A Callable wrapper for CancelOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelOrderOutcomeCallable CancelOrderCallable(const Model::CancelOrderRequest& request) const;

        /**
         * An Async wrapper for CancelOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelOrderAsync(const Model::CancelOrderRequest& request, const CancelOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an order for an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrderOutcome CreateOrder(const Model::CreateOrderRequest& request) const;

        /**
         * A Callable wrapper for CreateOrder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOrderOutcomeCallable CreateOrderCallable(const Model::CreateOrderRequest& request) const;

        /**
         * An Async wrapper for CreateOrder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Outpost.</p> <p>You can specify <code>AvailabilityZone</code> or
         * <code>AvailabilityZoneId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutpostOutcome CreateOutpost(const Model::CreateOutpostRequest& request) const;

        /**
         * A Callable wrapper for CreateOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOutpostOutcomeCallable CreateOutpostCallable(const Model::CreateOutpostRequest& request) const;

        /**
         * An Async wrapper for CreateOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOutpostAsync(const Model::CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a site for an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;

        /**
         * A Callable wrapper for CreateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSiteOutcomeCallable CreateSiteCallable(const Model::CreateSiteRequest& request) const;

        /**
         * An Async wrapper for CreateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSiteAsync(const Model::CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DeleteOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutpostOutcome DeleteOutpost(const Model::DeleteOutpostRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOutpostOutcomeCallable DeleteOutpostCallable(const Model::DeleteOutpostRequest& request) const;

        /**
         * An Async wrapper for DeleteOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOutpostAsync(const Model::DeleteOutpostRequest& request, const DeleteOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;

        /**
         * A Callable wrapper for DeleteSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSiteOutcomeCallable DeleteSiteCallable(const Model::DeleteSiteRequest& request) const;

        /**
         * An Async wrapper for DeleteSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSiteAsync(const Model::DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a catalog item.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetCatalogItem">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogItemOutcome GetCatalogItem(const Model::GetCatalogItemRequest& request) const;

        /**
         * A Callable wrapper for GetCatalogItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCatalogItemOutcomeCallable GetCatalogItemCallable(const Model::GetCatalogItemRequest& request) const;

        /**
         * An Async wrapper for GetCatalogItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCatalogItemAsync(const Model::GetCatalogItemRequest& request, const GetCatalogItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOrder">AWS
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
         * <p>Gets information about the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostOutcome GetOutpost(const Model::GetOutpostRequest& request) const;

        /**
         * A Callable wrapper for GetOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOutpostOutcomeCallable GetOutpostCallable(const Model::GetOutpostRequest& request) const;

        /**
         * An Async wrapper for GetOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOutpostAsync(const Model::GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the instance types for the specified Outpost.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpostInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostInstanceTypesOutcome GetOutpostInstanceTypes(const Model::GetOutpostInstanceTypesRequest& request) const;

        /**
         * A Callable wrapper for GetOutpostInstanceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOutpostInstanceTypesOutcomeCallable GetOutpostInstanceTypesCallable(const Model::GetOutpostInstanceTypesRequest& request) const;

        /**
         * An Async wrapper for GetOutpostInstanceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOutpostInstanceTypesAsync(const Model::GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets information about the specified Outpost site. </p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteOutcome GetSite(const Model::GetSiteRequest& request) const;

        /**
         * A Callable wrapper for GetSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSiteOutcomeCallable GetSiteCallable(const Model::GetSiteRequest& request) const;

        /**
         * An Async wrapper for GetSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSiteAsync(const Model::GetSiteRequest& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets the site address. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetSiteAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteAddressOutcome GetSiteAddress(const Model::GetSiteAddressRequest& request) const;

        /**
         * A Callable wrapper for GetSiteAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSiteAddressOutcomeCallable GetSiteAddressCallable(const Model::GetSiteAddressRequest& request) const;

        /**
         * An Async wrapper for GetSiteAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSiteAddressAsync(const Model::GetSiteAddressRequest& request, const GetSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists the hardware assets in an Outpost. If you are using Dedicated Hosts on
         * Amazon Web Services Outposts, you can filter your request by host ID to return a
         * list of hardware assets that allocate resources for Dedicated Hosts.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssetsOutcomeCallable ListAssetsCallable(const Model::ListAssetsRequest& request) const;

        /**
         * An Async wrapper for ListAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssetsAsync(const Model::ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the items in the catalog. Add filters to your request to return a more
         * specific list of results. Use filters to match an item class, storage option, or
         * EC2 family. </p> <p>If you specify multiple filters, the filters are joined with
         * an <code>AND</code>, and the request returns only results that match all of the
         * specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListCatalogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCatalogItemsOutcome ListCatalogItems(const Model::ListCatalogItemsRequest& request) const;

        /**
         * A Callable wrapper for ListCatalogItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCatalogItemsOutcomeCallable ListCatalogItemsCallable(const Model::ListCatalogItemsRequest& request) const;

        /**
         * An Async wrapper for ListCatalogItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCatalogItemsAsync(const Model::ListCatalogItemsRequest& request, const ListCatalogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Outpost orders for your Amazon Web Services account. You can filter
         * your request by Outpost to return a more specific list of results.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOrders">AWS
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
         * <p>Lists the Outposts for your Amazon Web Services account. Add filters to your
         * request to return a more specific list of results. Use filters to match an
         * Outpost lifecycle status, Availability Zone (<code>us-east-1a</code>), and AZ ID
         * (<code>use1-az1</code>). </p> <p>If you specify multiple filters, the filters
         * are joined with an <code>AND</code>, and the request returns only results that
         * match all of the specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOutposts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutpostsOutcome ListOutposts(const Model::ListOutpostsRequest& request) const;

        /**
         * A Callable wrapper for ListOutposts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOutpostsOutcomeCallable ListOutpostsCallable(const Model::ListOutpostsRequest& request) const;

        /**
         * An Async wrapper for ListOutposts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOutpostsAsync(const Model::ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Outpost sites for your Amazon Web Services account. Add operating
         * address filters to your request to return a more specific list of results. Use
         * filters to match site city, country code, or state/region of the operating
         * address. </p> <p>If you specify multiple filters, the filters are joined with an
         * <code>AND</code>, and the request returns only results that match all of the
         * specified filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSitesOutcome ListSites(const Model::ListSitesRequest& request) const;

        /**
         * A Callable wrapper for ListSites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSitesOutcomeCallable ListSitesCallable(const Model::ListSitesRequest& request) const;

        /**
         * An Async wrapper for ListSites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSitesAsync(const Model::ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListTagsForResource">AWS
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
         * <p>Adds tags to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/TagResource">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UntagResource">AWS
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
         * <p> Updates an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOutpostOutcome UpdateOutpost(const Model::UpdateOutpostRequest& request) const;

        /**
         * A Callable wrapper for UpdateOutpost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOutpostOutcomeCallable UpdateOutpostCallable(const Model::UpdateOutpostRequest& request) const;

        /**
         * An Async wrapper for UpdateOutpost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOutpostAsync(const Model::UpdateOutpostRequest& request, const UpdateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the site. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;

        /**
         * A Callable wrapper for UpdateSite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSiteOutcomeCallable UpdateSiteCallable(const Model::UpdateSiteRequest& request) const;

        /**
         * An Async wrapper for UpdateSite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSiteAsync(const Model::UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the site address. </p> <p> To update a site address with an order
         * <code>IN_PROGRESS</code>, you must wait for the order to complete or cancel the
         * order. </p> <p>You can update the operating address before you place an order at
         * the site, or after all Outposts that belong to the site have been deactivated.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSiteAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteAddressOutcome UpdateSiteAddress(const Model::UpdateSiteAddressRequest& request) const;

        /**
         * A Callable wrapper for UpdateSiteAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSiteAddressOutcomeCallable UpdateSiteAddressCallable(const Model::UpdateSiteAddressRequest& request) const;

        /**
         * An Async wrapper for UpdateSiteAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSiteAddressAsync(const Model::UpdateSiteAddressRequest& request, const UpdateSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update the physical and logistical details for a rack at a site. For more
         * information about hardware requirements for racks, see <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/outposts-requirements.html#checklist">Network
         * readiness checklist</a> in the Amazon Web Services Outposts User Guide. </p>
         * <p>To update a rack at a site with an order of <code>IN_PROGRESS</code>, you
         * must wait for the order to complete or cancel the order.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSiteRackPhysicalProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteRackPhysicalPropertiesOutcome UpdateSiteRackPhysicalProperties(const Model::UpdateSiteRackPhysicalPropertiesRequest& request) const;

        /**
         * A Callable wrapper for UpdateSiteRackPhysicalProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSiteRackPhysicalPropertiesOutcomeCallable UpdateSiteRackPhysicalPropertiesCallable(const Model::UpdateSiteRackPhysicalPropertiesRequest& request) const;

        /**
         * An Async wrapper for UpdateSiteRackPhysicalProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSiteRackPhysicalPropertiesAsync(const Model::UpdateSiteRackPhysicalPropertiesRequest& request, const UpdateSiteRackPhysicalPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelOrderAsyncHelper(const Model::CancelOrderRequest& request, const CancelOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOrderAsyncHelper(const Model::CreateOrderRequest& request, const CreateOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOutpostAsyncHelper(const Model::CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSiteAsyncHelper(const Model::CreateSiteRequest& request, const CreateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOutpostAsyncHelper(const Model::DeleteOutpostRequest& request, const DeleteOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSiteAsyncHelper(const Model::DeleteSiteRequest& request, const DeleteSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCatalogItemAsyncHelper(const Model::GetCatalogItemRequest& request, const GetCatalogItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOrderAsyncHelper(const Model::GetOrderRequest& request, const GetOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOutpostAsyncHelper(const Model::GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOutpostInstanceTypesAsyncHelper(const Model::GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSiteAsyncHelper(const Model::GetSiteRequest& request, const GetSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSiteAddressAsyncHelper(const Model::GetSiteAddressRequest& request, const GetSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssetsAsyncHelper(const Model::ListAssetsRequest& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCatalogItemsAsyncHelper(const Model::ListCatalogItemsRequest& request, const ListCatalogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrdersAsyncHelper(const Model::ListOrdersRequest& request, const ListOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOutpostsAsyncHelper(const Model::ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSitesAsyncHelper(const Model::ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOutpostAsyncHelper(const Model::UpdateOutpostRequest& request, const UpdateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSiteAsyncHelper(const Model::UpdateSiteRequest& request, const UpdateSiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSiteAddressAsyncHelper(const Model::UpdateSiteAddressRequest& request, const UpdateSiteAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSiteRackPhysicalPropertiesAsyncHelper(const Model::UpdateSiteRackPhysicalPropertiesRequest& request, const UpdateSiteRackPhysicalPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Outposts
} // namespace Aws
