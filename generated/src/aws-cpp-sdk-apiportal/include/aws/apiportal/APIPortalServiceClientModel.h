/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apiportal/APIPortalEndpointProvider.h>
#include <aws/apiportal/APIPortalErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in APIPortalClient header */
#include <aws/apiportal/model/AssociateManagedApisResult.h>
#include <aws/apiportal/model/CreateManagedApiResult.h>
#include <aws/apiportal/model/CreatePortalResult.h>
#include <aws/apiportal/model/CreateProductApiPageResult.h>
#include <aws/apiportal/model/CreateProductPageResult.h>
#include <aws/apiportal/model/CreateProductResult.h>
#include <aws/apiportal/model/DeleteDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/DeleteManagedApiResult.h>
#include <aws/apiportal/model/DeleteOrganizationDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/DisassociateManagedApisResult.h>
#include <aws/apiportal/model/GetApiInventoryItemResult.h>
#include <aws/apiportal/model/GetDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/GetDiscoveryConfigurationResult.h>
#include <aws/apiportal/model/GetManagedApiResult.h>
#include <aws/apiportal/model/GetOrganizationDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/GetOrganizationDiscoveryConfigurationResult.h>
#include <aws/apiportal/model/GetPortalResult.h>
#include <aws/apiportal/model/GetProductApiPageResult.h>
#include <aws/apiportal/model/GetProductPageResult.h>
#include <aws/apiportal/model/GetProductResult.h>
#include <aws/apiportal/model/GetProductSharingPolicyResult.h>
#include <aws/apiportal/model/ListApiInventoryItemsRequest.h>
#include <aws/apiportal/model/ListApiInventoryItemsResult.h>
#include <aws/apiportal/model/ListDiscoveryStatusesRequest.h>
#include <aws/apiportal/model/ListDiscoveryStatusesResult.h>
#include <aws/apiportal/model/ListManagedApiEventsResult.h>
#include <aws/apiportal/model/ListManagedApisRequest.h>
#include <aws/apiportal/model/ListManagedApisResult.h>
#include <aws/apiportal/model/ListPortalsRequest.h>
#include <aws/apiportal/model/ListPortalsResult.h>
#include <aws/apiportal/model/ListProductApiPagesResult.h>
#include <aws/apiportal/model/ListProductPagesResult.h>
#include <aws/apiportal/model/ListProductsRequest.h>
#include <aws/apiportal/model/ListProductsResult.h>
#include <aws/apiportal/model/ListTagsForResourceResult.h>
#include <aws/apiportal/model/PutDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/PutDiscoveryConfigurationResult.h>
#include <aws/apiportal/model/PutOrganizationDiscoveryConfigurationRequest.h>
#include <aws/apiportal/model/PutOrganizationDiscoveryConfigurationResult.h>
#include <aws/apiportal/model/TagResourceResult.h>
#include <aws/apiportal/model/UntagResourceResult.h>
#include <aws/apiportal/model/UpdatePortalResult.h>
#include <aws/apiportal/model/UpdateProductApiPageResult.h>
#include <aws/apiportal/model/UpdateProductPageResult.h>
#include <aws/apiportal/model/UpdateProductResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in APIPortalClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace APIPortal {
using APIPortalClientConfiguration = Aws::Client::GenericClientConfiguration;
using APIPortalEndpointProviderBase = Aws::APIPortal::Endpoint::APIPortalEndpointProviderBase;
using APIPortalEndpointProvider = Aws::APIPortal::Endpoint::APIPortalEndpointProvider;

namespace Model {
/* Service model forward declarations required in APIPortalClient header */
class AssociateManagedApisRequest;
class CreateManagedApiRequest;
class CreatePortalRequest;
class CreatePortalPreviewRequest;
class CreateProductRequest;
class CreateProductApiPageRequest;
class CreateProductPageRequest;
class DeleteDiscoveryConfigurationRequest;
class DeleteManagedApiRequest;
class DeleteOrganizationDiscoveryConfigurationRequest;
class DeletePortalRequest;
class DeleteProductRequest;
class DeleteProductApiPageRequest;
class DeleteProductPageRequest;
class DeleteProductSharingPolicyRequest;
class DisassociateManagedApisRequest;
class GetApiInventoryItemRequest;
class GetDiscoveryConfigurationRequest;
class GetManagedApiRequest;
class GetOrganizationDiscoveryConfigurationRequest;
class GetPortalRequest;
class GetProductRequest;
class GetProductApiPageRequest;
class GetProductPageRequest;
class GetProductSharingPolicyRequest;
class ListApiInventoryItemsRequest;
class ListDiscoveryStatusesRequest;
class ListManagedApiEventsRequest;
class ListManagedApisRequest;
class ListPortalsRequest;
class ListProductApiPagesRequest;
class ListProductPagesRequest;
class ListProductsRequest;
class ListTagsForResourceRequest;
class PutDiscoveryConfigurationRequest;
class PutOrganizationDiscoveryConfigurationRequest;
class PutProductSharingPolicyRequest;
class StartDiscoveryRequest;
class StopDiscoveryRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdatePortalRequest;
class UpdatePortalPublishStatusRequest;
class UpdateProductRequest;
class UpdateProductApiPageRequest;
class UpdateProductPageRequest;
/* End of service model forward declarations required in APIPortalClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateManagedApisResult, APIPortalError> AssociateManagedApisOutcome;
typedef Aws::Utils::Outcome<CreateManagedApiResult, APIPortalError> CreateManagedApiOutcome;
typedef Aws::Utils::Outcome<CreatePortalResult, APIPortalError> CreatePortalOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> CreatePortalPreviewOutcome;
typedef Aws::Utils::Outcome<CreateProductResult, APIPortalError> CreateProductOutcome;
typedef Aws::Utils::Outcome<CreateProductApiPageResult, APIPortalError> CreateProductApiPageOutcome;
typedef Aws::Utils::Outcome<CreateProductPageResult, APIPortalError> CreateProductPageOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeleteDiscoveryConfigurationOutcome;
typedef Aws::Utils::Outcome<DeleteManagedApiResult, APIPortalError> DeleteManagedApiOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeleteOrganizationDiscoveryConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeletePortalOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeleteProductOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeleteProductApiPageOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeleteProductPageOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> DeleteProductSharingPolicyOutcome;
typedef Aws::Utils::Outcome<DisassociateManagedApisResult, APIPortalError> DisassociateManagedApisOutcome;
typedef Aws::Utils::Outcome<GetApiInventoryItemResult, APIPortalError> GetApiInventoryItemOutcome;
typedef Aws::Utils::Outcome<GetDiscoveryConfigurationResult, APIPortalError> GetDiscoveryConfigurationOutcome;
typedef Aws::Utils::Outcome<GetManagedApiResult, APIPortalError> GetManagedApiOutcome;
typedef Aws::Utils::Outcome<GetOrganizationDiscoveryConfigurationResult, APIPortalError> GetOrganizationDiscoveryConfigurationOutcome;
typedef Aws::Utils::Outcome<GetPortalResult, APIPortalError> GetPortalOutcome;
typedef Aws::Utils::Outcome<GetProductResult, APIPortalError> GetProductOutcome;
typedef Aws::Utils::Outcome<GetProductApiPageResult, APIPortalError> GetProductApiPageOutcome;
typedef Aws::Utils::Outcome<GetProductPageResult, APIPortalError> GetProductPageOutcome;
typedef Aws::Utils::Outcome<GetProductSharingPolicyResult, APIPortalError> GetProductSharingPolicyOutcome;
typedef Aws::Utils::Outcome<ListApiInventoryItemsResult, APIPortalError> ListApiInventoryItemsOutcome;
typedef Aws::Utils::Outcome<ListDiscoveryStatusesResult, APIPortalError> ListDiscoveryStatusesOutcome;
typedef Aws::Utils::Outcome<ListManagedApiEventsResult, APIPortalError> ListManagedApiEventsOutcome;
typedef Aws::Utils::Outcome<ListManagedApisResult, APIPortalError> ListManagedApisOutcome;
typedef Aws::Utils::Outcome<ListPortalsResult, APIPortalError> ListPortalsOutcome;
typedef Aws::Utils::Outcome<ListProductApiPagesResult, APIPortalError> ListProductApiPagesOutcome;
typedef Aws::Utils::Outcome<ListProductPagesResult, APIPortalError> ListProductPagesOutcome;
typedef Aws::Utils::Outcome<ListProductsResult, APIPortalError> ListProductsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, APIPortalError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutDiscoveryConfigurationResult, APIPortalError> PutDiscoveryConfigurationOutcome;
typedef Aws::Utils::Outcome<PutOrganizationDiscoveryConfigurationResult, APIPortalError> PutOrganizationDiscoveryConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> PutProductSharingPolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> StartDiscoveryOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> StopDiscoveryOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, APIPortalError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, APIPortalError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdatePortalResult, APIPortalError> UpdatePortalOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, APIPortalError> UpdatePortalPublishStatusOutcome;
typedef Aws::Utils::Outcome<UpdateProductResult, APIPortalError> UpdateProductOutcome;
typedef Aws::Utils::Outcome<UpdateProductApiPageResult, APIPortalError> UpdateProductApiPageOutcome;
typedef Aws::Utils::Outcome<UpdateProductPageResult, APIPortalError> UpdateProductPageOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateManagedApisOutcome> AssociateManagedApisOutcomeCallable;
typedef std::future<CreateManagedApiOutcome> CreateManagedApiOutcomeCallable;
typedef std::future<CreatePortalOutcome> CreatePortalOutcomeCallable;
typedef std::future<CreatePortalPreviewOutcome> CreatePortalPreviewOutcomeCallable;
typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
typedef std::future<CreateProductApiPageOutcome> CreateProductApiPageOutcomeCallable;
typedef std::future<CreateProductPageOutcome> CreateProductPageOutcomeCallable;
typedef std::future<DeleteDiscoveryConfigurationOutcome> DeleteDiscoveryConfigurationOutcomeCallable;
typedef std::future<DeleteManagedApiOutcome> DeleteManagedApiOutcomeCallable;
typedef std::future<DeleteOrganizationDiscoveryConfigurationOutcome> DeleteOrganizationDiscoveryConfigurationOutcomeCallable;
typedef std::future<DeletePortalOutcome> DeletePortalOutcomeCallable;
typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
typedef std::future<DeleteProductApiPageOutcome> DeleteProductApiPageOutcomeCallable;
typedef std::future<DeleteProductPageOutcome> DeleteProductPageOutcomeCallable;
typedef std::future<DeleteProductSharingPolicyOutcome> DeleteProductSharingPolicyOutcomeCallable;
typedef std::future<DisassociateManagedApisOutcome> DisassociateManagedApisOutcomeCallable;
typedef std::future<GetApiInventoryItemOutcome> GetApiInventoryItemOutcomeCallable;
typedef std::future<GetDiscoveryConfigurationOutcome> GetDiscoveryConfigurationOutcomeCallable;
typedef std::future<GetManagedApiOutcome> GetManagedApiOutcomeCallable;
typedef std::future<GetOrganizationDiscoveryConfigurationOutcome> GetOrganizationDiscoveryConfigurationOutcomeCallable;
typedef std::future<GetPortalOutcome> GetPortalOutcomeCallable;
typedef std::future<GetProductOutcome> GetProductOutcomeCallable;
typedef std::future<GetProductApiPageOutcome> GetProductApiPageOutcomeCallable;
typedef std::future<GetProductPageOutcome> GetProductPageOutcomeCallable;
typedef std::future<GetProductSharingPolicyOutcome> GetProductSharingPolicyOutcomeCallable;
typedef std::future<ListApiInventoryItemsOutcome> ListApiInventoryItemsOutcomeCallable;
typedef std::future<ListDiscoveryStatusesOutcome> ListDiscoveryStatusesOutcomeCallable;
typedef std::future<ListManagedApiEventsOutcome> ListManagedApiEventsOutcomeCallable;
typedef std::future<ListManagedApisOutcome> ListManagedApisOutcomeCallable;
typedef std::future<ListPortalsOutcome> ListPortalsOutcomeCallable;
typedef std::future<ListProductApiPagesOutcome> ListProductApiPagesOutcomeCallable;
typedef std::future<ListProductPagesOutcome> ListProductPagesOutcomeCallable;
typedef std::future<ListProductsOutcome> ListProductsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutDiscoveryConfigurationOutcome> PutDiscoveryConfigurationOutcomeCallable;
typedef std::future<PutOrganizationDiscoveryConfigurationOutcome> PutOrganizationDiscoveryConfigurationOutcomeCallable;
typedef std::future<PutProductSharingPolicyOutcome> PutProductSharingPolicyOutcomeCallable;
typedef std::future<StartDiscoveryOutcome> StartDiscoveryOutcomeCallable;
typedef std::future<StopDiscoveryOutcome> StopDiscoveryOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdatePortalOutcome> UpdatePortalOutcomeCallable;
typedef std::future<UpdatePortalPublishStatusOutcome> UpdatePortalPublishStatusOutcomeCallable;
typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
typedef std::future<UpdateProductApiPageOutcome> UpdateProductApiPageOutcomeCallable;
typedef std::future<UpdateProductPageOutcome> UpdateProductPageOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class APIPortalClient;

/* Service model async handlers definitions */
typedef std::function<void(const APIPortalClient*, const Model::AssociateManagedApisRequest&, const Model::AssociateManagedApisOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateManagedApisResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::CreateManagedApiRequest&, const Model::CreateManagedApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateManagedApiResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::CreatePortalRequest&, const Model::CreatePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePortalResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::CreatePortalPreviewRequest&, const Model::CreatePortalPreviewOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePortalPreviewResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::CreateProductRequest&, const Model::CreateProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProductResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::CreateProductApiPageRequest&, const Model::CreateProductApiPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProductApiPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::CreateProductPageRequest&, const Model::CreateProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProductPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteDiscoveryConfigurationRequest&,
                           const Model::DeleteDiscoveryConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDiscoveryConfigurationResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteManagedApiRequest&, const Model::DeleteManagedApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteManagedApiResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteOrganizationDiscoveryConfigurationRequest&,
                           const Model::DeleteOrganizationDiscoveryConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteOrganizationDiscoveryConfigurationResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeletePortalRequest&, const Model::DeletePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePortalResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteProductRequest&, const Model::DeleteProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProductResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteProductApiPageRequest&, const Model::DeleteProductApiPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProductApiPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteProductPageRequest&, const Model::DeleteProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProductPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DeleteProductSharingPolicyRequest&,
                           const Model::DeleteProductSharingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProductSharingPolicyResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::DisassociateManagedApisRequest&,
                           const Model::DisassociateManagedApisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateManagedApisResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetApiInventoryItemRequest&, const Model::GetApiInventoryItemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApiInventoryItemResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetDiscoveryConfigurationRequest&,
                           const Model::GetDiscoveryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDiscoveryConfigurationResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetManagedApiRequest&, const Model::GetManagedApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetManagedApiResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetOrganizationDiscoveryConfigurationRequest&,
                           const Model::GetOrganizationDiscoveryConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOrganizationDiscoveryConfigurationResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetPortalRequest&, const Model::GetPortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPortalResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetProductRequest&, const Model::GetProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetProductApiPageRequest&, const Model::GetProductApiPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductApiPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetProductPageRequest&, const Model::GetProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::GetProductSharingPolicyRequest&,
                           const Model::GetProductSharingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductSharingPolicyResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListApiInventoryItemsRequest&, const Model::ListApiInventoryItemsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListApiInventoryItemsResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListDiscoveryStatusesRequest&, const Model::ListDiscoveryStatusesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDiscoveryStatusesResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListManagedApiEventsRequest&, const Model::ListManagedApiEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListManagedApiEventsResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListManagedApisRequest&, const Model::ListManagedApisOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListManagedApisResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListPortalsRequest&, const Model::ListPortalsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPortalsResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListProductApiPagesRequest&, const Model::ListProductApiPagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProductApiPagesResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListProductPagesRequest&, const Model::ListProductPagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProductPagesResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListProductsRequest&, const Model::ListProductsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProductsResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::PutDiscoveryConfigurationRequest&,
                           const Model::PutDiscoveryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutDiscoveryConfigurationResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::PutOrganizationDiscoveryConfigurationRequest&,
                           const Model::PutOrganizationDiscoveryConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutOrganizationDiscoveryConfigurationResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::PutProductSharingPolicyRequest&,
                           const Model::PutProductSharingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutProductSharingPolicyResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::StartDiscoveryRequest&, const Model::StartDiscoveryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartDiscoveryResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::StopDiscoveryRequest&, const Model::StopDiscoveryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopDiscoveryResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::UpdatePortalRequest&, const Model::UpdatePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePortalResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::UpdatePortalPublishStatusRequest&,
                           const Model::UpdatePortalPublishStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePortalPublishStatusResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::UpdateProductRequest&, const Model::UpdateProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProductResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::UpdateProductApiPageRequest&, const Model::UpdateProductApiPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProductApiPageResponseReceivedHandler;
typedef std::function<void(const APIPortalClient*, const Model::UpdateProductPageRequest&, const Model::UpdateProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProductPageResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace APIPortal
}  // namespace Aws
