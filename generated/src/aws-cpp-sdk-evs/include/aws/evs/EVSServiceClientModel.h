/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVSEndpointProvider.h>
#include <aws/evs/EVSErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in EVSClient header */
#include <aws/evs/model/AssociateEipToVlanResult.h>
#include <aws/evs/model/CreateEntitlementResult.h>
#include <aws/evs/model/CreateEnvironmentConnectorResult.h>
#include <aws/evs/model/CreateEnvironmentHostResult.h>
#include <aws/evs/model/CreateEnvironmentResult.h>
#include <aws/evs/model/DeleteEntitlementResult.h>
#include <aws/evs/model/DeleteEnvironmentConnectorResult.h>
#include <aws/evs/model/DeleteEnvironmentHostResult.h>
#include <aws/evs/model/DeleteEnvironmentResult.h>
#include <aws/evs/model/DisassociateEipFromVlanResult.h>
#include <aws/evs/model/GetEnvironmentResult.h>
#include <aws/evs/model/GetVersionsRequest.h>
#include <aws/evs/model/GetVersionsResult.h>
#include <aws/evs/model/ListEnvironmentConnectorsResult.h>
#include <aws/evs/model/ListEnvironmentHostsResult.h>
#include <aws/evs/model/ListEnvironmentVlansResult.h>
#include <aws/evs/model/ListEnvironmentsRequest.h>
#include <aws/evs/model/ListEnvironmentsResult.h>
#include <aws/evs/model/ListTagsForResourceResult.h>
#include <aws/evs/model/ListVmEntitlementsResult.h>
#include <aws/evs/model/TagResourceResult.h>
#include <aws/evs/model/UntagResourceResult.h>
#include <aws/evs/model/UpdateEnvironmentConnectorResult.h>
/* End of service model headers required in EVSClient header */

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

namespace EVS {
using EVSClientConfiguration = Aws::Client::GenericClientConfiguration;
using EVSEndpointProviderBase = Aws::EVS::Endpoint::EVSEndpointProviderBase;
using EVSEndpointProvider = Aws::EVS::Endpoint::EVSEndpointProvider;

namespace Model {
/* Service model forward declarations required in EVSClient header */
class AssociateEipToVlanRequest;
class CreateEntitlementRequest;
class CreateEnvironmentRequest;
class CreateEnvironmentConnectorRequest;
class CreateEnvironmentHostRequest;
class DeleteEntitlementRequest;
class DeleteEnvironmentRequest;
class DeleteEnvironmentConnectorRequest;
class DeleteEnvironmentHostRequest;
class DisassociateEipFromVlanRequest;
class GetEnvironmentRequest;
class GetVersionsRequest;
class ListEnvironmentConnectorsRequest;
class ListEnvironmentHostsRequest;
class ListEnvironmentVlansRequest;
class ListEnvironmentsRequest;
class ListTagsForResourceRequest;
class ListVmEntitlementsRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateEnvironmentConnectorRequest;
/* End of service model forward declarations required in EVSClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateEipToVlanResult, EVSError> AssociateEipToVlanOutcome;
typedef Aws::Utils::Outcome<CreateEntitlementResult, EVSError> CreateEntitlementOutcome;
typedef Aws::Utils::Outcome<CreateEnvironmentResult, EVSError> CreateEnvironmentOutcome;
typedef Aws::Utils::Outcome<CreateEnvironmentConnectorResult, EVSError> CreateEnvironmentConnectorOutcome;
typedef Aws::Utils::Outcome<CreateEnvironmentHostResult, EVSError> CreateEnvironmentHostOutcome;
typedef Aws::Utils::Outcome<DeleteEntitlementResult, EVSError> DeleteEntitlementOutcome;
typedef Aws::Utils::Outcome<DeleteEnvironmentResult, EVSError> DeleteEnvironmentOutcome;
typedef Aws::Utils::Outcome<DeleteEnvironmentConnectorResult, EVSError> DeleteEnvironmentConnectorOutcome;
typedef Aws::Utils::Outcome<DeleteEnvironmentHostResult, EVSError> DeleteEnvironmentHostOutcome;
typedef Aws::Utils::Outcome<DisassociateEipFromVlanResult, EVSError> DisassociateEipFromVlanOutcome;
typedef Aws::Utils::Outcome<GetEnvironmentResult, EVSError> GetEnvironmentOutcome;
typedef Aws::Utils::Outcome<GetVersionsResult, EVSError> GetVersionsOutcome;
typedef Aws::Utils::Outcome<ListEnvironmentConnectorsResult, EVSError> ListEnvironmentConnectorsOutcome;
typedef Aws::Utils::Outcome<ListEnvironmentHostsResult, EVSError> ListEnvironmentHostsOutcome;
typedef Aws::Utils::Outcome<ListEnvironmentVlansResult, EVSError> ListEnvironmentVlansOutcome;
typedef Aws::Utils::Outcome<ListEnvironmentsResult, EVSError> ListEnvironmentsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, EVSError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListVmEntitlementsResult, EVSError> ListVmEntitlementsOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, EVSError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, EVSError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateEnvironmentConnectorResult, EVSError> UpdateEnvironmentConnectorOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateEipToVlanOutcome> AssociateEipToVlanOutcomeCallable;
typedef std::future<CreateEntitlementOutcome> CreateEntitlementOutcomeCallable;
typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
typedef std::future<CreateEnvironmentConnectorOutcome> CreateEnvironmentConnectorOutcomeCallable;
typedef std::future<CreateEnvironmentHostOutcome> CreateEnvironmentHostOutcomeCallable;
typedef std::future<DeleteEntitlementOutcome> DeleteEntitlementOutcomeCallable;
typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
typedef std::future<DeleteEnvironmentConnectorOutcome> DeleteEnvironmentConnectorOutcomeCallable;
typedef std::future<DeleteEnvironmentHostOutcome> DeleteEnvironmentHostOutcomeCallable;
typedef std::future<DisassociateEipFromVlanOutcome> DisassociateEipFromVlanOutcomeCallable;
typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
typedef std::future<GetVersionsOutcome> GetVersionsOutcomeCallable;
typedef std::future<ListEnvironmentConnectorsOutcome> ListEnvironmentConnectorsOutcomeCallable;
typedef std::future<ListEnvironmentHostsOutcome> ListEnvironmentHostsOutcomeCallable;
typedef std::future<ListEnvironmentVlansOutcome> ListEnvironmentVlansOutcomeCallable;
typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListVmEntitlementsOutcome> ListVmEntitlementsOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateEnvironmentConnectorOutcome> UpdateEnvironmentConnectorOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class EVSClient;

/* Service model async handlers definitions */
typedef std::function<void(const EVSClient*, const Model::AssociateEipToVlanRequest&, const Model::AssociateEipToVlanOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateEipToVlanResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::CreateEntitlementRequest&, const Model::CreateEntitlementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEntitlementResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEnvironmentResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::CreateEnvironmentConnectorRequest&,
                           const Model::CreateEnvironmentConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEnvironmentConnectorResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::CreateEnvironmentHostRequest&, const Model::CreateEnvironmentHostOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEnvironmentHostResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::DeleteEntitlementRequest&, const Model::DeleteEntitlementOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEntitlementResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEnvironmentResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::DeleteEnvironmentConnectorRequest&,
                           const Model::DeleteEnvironmentConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEnvironmentConnectorResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::DeleteEnvironmentHostRequest&, const Model::DeleteEnvironmentHostOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEnvironmentHostResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::DisassociateEipFromVlanRequest&, const Model::DisassociateEipFromVlanOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateEipFromVlanResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEnvironmentResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::GetVersionsRequest&, const Model::GetVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetVersionsResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::ListEnvironmentConnectorsRequest&, const Model::ListEnvironmentConnectorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEnvironmentConnectorsResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::ListEnvironmentHostsRequest&, const Model::ListEnvironmentHostsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEnvironmentHostsResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::ListEnvironmentVlansRequest&, const Model::ListEnvironmentVlansOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEnvironmentVlansResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEnvironmentsResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::ListVmEntitlementsRequest&, const Model::ListVmEntitlementsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListVmEntitlementsResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const EVSClient*, const Model::UpdateEnvironmentConnectorRequest&,
                           const Model::UpdateEnvironmentConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateEnvironmentConnectorResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace EVS
}  // namespace Aws
