/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/OutpostsServiceClientModel.h>

namespace Aws
{
namespace Outposts
{
  /**
   * <p>Amazon Web Services Outposts is a fully managed service that extends Amazon
   * Web Services infrastructure, APIs, and tools to customer premises. By providing
   * local access to Amazon Web Services managed infrastructure, Amazon Web Services
   * Outposts enables customers to build and run applications on premises using the
   * same programming interfaces as in Amazon Web Services Regions, while using local
   * compute and storage resources for lower latency and local data processing
   * needs.</p>
   */
  class AWS_OUTPOSTS_API OutpostsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OutpostsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Outposts::OutpostsClientConfiguration& clientConfiguration = Aws::Outposts::OutpostsClientConfiguration(),
                       std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider = Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider = Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Outposts::OutpostsClientConfiguration& clientConfiguration = Aws::Outposts::OutpostsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider = Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Outposts::OutpostsClientConfiguration& clientConfiguration = Aws::Outposts::OutpostsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OutpostsClient();

        /**
         * <p>Cancels the specified order for an Outpost.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates an Outpost.</p> <p>You can specify either an Availability one or an
         * AZ ID.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the specified Outpost.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes the specified site.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets information about the specified catalog item.</p><p><h3>See Also:</h3>  
         * <a
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
         *  <p> Amazon Web Services uses this action to install Outpost servers.</p>
         *  <p> Gets information about the specified connection. </p> <p> Use
         * CloudTrail to monitor this action or Amazon Web Services managed policy for
         * Amazon Web Services Outposts to secure it. For more information, see <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/security-iam-awsmanpol.html">
         * Amazon Web Services managed policies for Amazon Web Services Outposts</a> and <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/logging-using-cloudtrail.html">
         * Logging Amazon Web Services Outposts API calls with Amazon Web Services
         * CloudTrail</a> in the <i>Amazon Web Services Outposts User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionOutcomeCallable GetConnectionCallable(const Model::GetConnectionRequest& request) const;

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionAsync(const Model::GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified order.</p><p><h3>See Also:</h3>   <a
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
         * <p>Gets information about the specified Outpost site.</p><p><h3>See Also:</h3>  
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
         * <p> Gets the site address of the specified site. </p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the hardware assets for the specified Outpost.</p> <p>Use filters to
         * return specific results. If you specify multiple filters, the results include
         * only the resources that match all of the specified filters. For a filter where
         * you can specify multiple values, the results include items that match any of the
         * values that you specify for the filter.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the items in the catalog.</p> <p>Use filters to return specific
         * results. If you specify multiple filters, the results include only the resources
         * that match all of the specified filters. For a filter where you can specify
         * multiple values, the results include items that match any of the values that you
         * specify for the filter.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the Outpost orders for your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Lists the Outposts for your Amazon Web Services account.</p> <p>Use filters
         * to return specific results. If you specify multiple filters, the results include
         * only the resources that match all of the specified filters. For a filter where
         * you can specify multiple values, the results include items that match any of the
         * values that you specify for the filter.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the Outpost sites for your Amazon Web Services account. Use filters to
         * return specific results.</p> <p>Use filters to return specific results. If you
         * specify multiple filters, the results include only the resources that match all
         * of the specified filters. For a filter where you can specify multiple values,
         * the results include items that match any of the values that you specify for the
         * filter.</p><p><h3>See Also:</h3>   <a
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
         *  <p> Amazon Web Services uses this action to install Outpost servers.</p>
         *  <p> Starts the connection required for Outpost server installation. </p>
         * <p> Use CloudTrail to monitor this action or Amazon Web Services managed policy
         * for Amazon Web Services Outposts to secure it. For more information, see <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/security-iam-awsmanpol.html">
         * Amazon Web Services managed policies for Amazon Web Services Outposts</a> and <a
         * href="https://docs.aws.amazon.com/outposts/latest/userguide/logging-using-cloudtrail.html">
         * Logging Amazon Web Services Outposts API calls with Amazon Web Services
         * CloudTrail</a> in the <i>Amazon Web Services Outposts User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/StartConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConnectionOutcome StartConnection(const Model::StartConnectionRequest& request) const;

        /**
         * A Callable wrapper for StartConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartConnectionOutcomeCallable StartConnectionCallable(const Model::StartConnectionRequest& request) const;

        /**
         * An Async wrapper for StartConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartConnectionAsync(const Model::StartConnectionRequest& request, const StartConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Updates the specified site.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates the address of the specified site.</p> <p>You can't update a site
         * address if there is an order in progress. You must wait for the order to
         * complete or cancel the order.</p> <p>You can update the operating address before
         * you place an order at the site, or after all Outposts that belong to the site
         * have been deactivated.</p><p><h3>See Also:</h3>   <a
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
      std::shared_ptr<OutpostsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OutpostsClient>;
      void init(const OutpostsClientConfiguration& clientConfiguration);

      OutpostsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OutpostsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Outposts
} // namespace Aws
