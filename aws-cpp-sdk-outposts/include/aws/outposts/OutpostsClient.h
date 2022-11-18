/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/OutpostsServiceClientModel.h>
#include <aws/outposts/OutpostsLegacyAsyncMacros.h>

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
  class AWS_OUTPOSTS_API OutpostsClient : public Aws::Client::AWSJsonClient
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
         * <p>Cancels the specified order for an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CancelOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelOrderOutcome CancelOrder(const Model::CancelOrderRequest& request) const;


        /**
         * <p>Creates an order for an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrderOutcome CreateOrder(const Model::CreateOrderRequest& request) const;


        /**
         * <p>Creates an Outpost.</p> <p>You can specify either an Availability one or an
         * AZ ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutpostOutcome CreateOutpost(const Model::CreateOutpostRequest& request) const;


        /**
         * <p> Creates a site for an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSiteOutcome CreateSite(const Model::CreateSiteRequest& request) const;


        /**
         * <p>Deletes the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DeleteOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutpostOutcome DeleteOutpost(const Model::DeleteOutpostRequest& request) const;


        /**
         * <p>Deletes the specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DeleteSite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSiteOutcome DeleteSite(const Model::DeleteSiteRequest& request) const;


        /**
         * <p>Gets information about the specified catalog item.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetCatalogItem">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogItemOutcome GetCatalogItem(const Model::GetCatalogItemRequest& request) const;


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
         * <p>Gets information about the specified order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrderOutcome GetOrder(const Model::GetOrderRequest& request) const;


        /**
         * <p>Gets information about the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostOutcome GetOutpost(const Model::GetOutpostRequest& request) const;


        /**
         * <p>Gets the instance types for the specified Outpost.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpostInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostInstanceTypesOutcome GetOutpostInstanceTypes(const Model::GetOutpostInstanceTypesRequest& request) const;


        /**
         * <p>Gets information about the specified Outpost site.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetSite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteOutcome GetSite(const Model::GetSiteRequest& request) const;


        /**
         * <p> Gets the site address of the specified site. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetSiteAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSiteAddressOutcome GetSiteAddress(const Model::GetSiteAddressRequest& request) const;


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
         * <p>Lists the Outpost orders for your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrdersOutcome ListOrders(const Model::ListOrdersRequest& request) const;


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
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Adds tags to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Updates an Outpost. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOutpostOutcome UpdateOutpost(const Model::UpdateOutpostRequest& request) const;


        /**
         * <p>Updates the specified site.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/UpdateSite">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSiteOutcome UpdateSite(const Model::UpdateSiteRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OutpostsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const OutpostsClientConfiguration& clientConfiguration);

      OutpostsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OutpostsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Outposts
} // namespace Aws
