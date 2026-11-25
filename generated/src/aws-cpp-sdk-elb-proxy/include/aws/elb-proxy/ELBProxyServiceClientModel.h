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
#include <aws/elb-proxy/ELBProxyEndpointProvider.h>
#include <aws/elb-proxy/ELBProxyErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ELBProxyClient header */
#include <aws/elb-proxy/model/AssociateCertificateResult.h>
#include <aws/elb-proxy/model/CreateProxyResult.h>
#include <aws/elb-proxy/model/DeleteProxyResult.h>
#include <aws/elb-proxy/model/DisassociateCertificateResult.h>
#include <aws/elb-proxy/model/GetProxyAttributesResult.h>
#include <aws/elb-proxy/model/GetProxyConfigurationContentsResult.h>
#include <aws/elb-proxy/model/GetProxyResult.h>
#include <aws/elb-proxy/model/GetProxyUpdateResult.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsResult.h>
#include <aws/elb-proxy/model/ListProxiesRequest.h>
#include <aws/elb-proxy/model/ListProxiesResult.h>
#include <aws/elb-proxy/model/ListProxyUpdatesResult.h>
#include <aws/elb-proxy/model/ListProxyVersionsResult.h>
#include <aws/elb-proxy/model/ListTagsForResourceResult.h>
#include <aws/elb-proxy/model/TagResourceResult.h>
#include <aws/elb-proxy/model/UntagResourceResult.h>
#include <aws/elb-proxy/model/UpdateProxyAttributesResult.h>
#include <aws/elb-proxy/model/UpdateProxyConfigurationResult.h>
#include <aws/elb-proxy/model/UpdateProxyNetworkConfigurationResult.h>
/* End of service model headers required in ELBProxyClient header */

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

namespace ELBProxy {
using ELBProxyClientConfiguration = Aws::Client::GenericClientConfiguration;
using ELBProxyEndpointProviderBase = Aws::ELBProxy::Endpoint::ELBProxyEndpointProviderBase;
using ELBProxyEndpointProvider = Aws::ELBProxy::Endpoint::ELBProxyEndpointProvider;

namespace Model {
/* Service model forward declarations required in ELBProxyClient header */
class AssociateCertificateRequest;
class CreateProxyRequest;
class DeleteProxyRequest;
class DisassociateCertificateRequest;
class GetProxyRequest;
class GetProxyAttributesRequest;
class GetProxyConfigurationContentsRequest;
class GetProxyUpdateRequest;
class ListCertificateAssociationsRequest;
class ListProxiesRequest;
class ListProxyUpdatesRequest;
class ListProxyVersionsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateProxyAttributesRequest;
class UpdateProxyConfigurationRequest;
class UpdateProxyNetworkConfigurationRequest;
/* End of service model forward declarations required in ELBProxyClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateCertificateResult, ELBProxyError> AssociateCertificateOutcome;
typedef Aws::Utils::Outcome<CreateProxyResult, ELBProxyError> CreateProxyOutcome;
typedef Aws::Utils::Outcome<DeleteProxyResult, ELBProxyError> DeleteProxyOutcome;
typedef Aws::Utils::Outcome<DisassociateCertificateResult, ELBProxyError> DisassociateCertificateOutcome;
typedef Aws::Utils::Outcome<GetProxyResult, ELBProxyError> GetProxyOutcome;
typedef Aws::Utils::Outcome<GetProxyAttributesResult, ELBProxyError> GetProxyAttributesOutcome;
typedef Aws::Utils::Outcome<GetProxyConfigurationContentsResult, ELBProxyError> GetProxyConfigurationContentsOutcome;
typedef Aws::Utils::Outcome<GetProxyUpdateResult, ELBProxyError> GetProxyUpdateOutcome;
typedef Aws::Utils::Outcome<ListCertificateAssociationsResult, ELBProxyError> ListCertificateAssociationsOutcome;
typedef Aws::Utils::Outcome<ListProxiesResult, ELBProxyError> ListProxiesOutcome;
typedef Aws::Utils::Outcome<ListProxyUpdatesResult, ELBProxyError> ListProxyUpdatesOutcome;
typedef Aws::Utils::Outcome<ListProxyVersionsResult, ELBProxyError> ListProxyVersionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ELBProxyError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, ELBProxyError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, ELBProxyError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateProxyAttributesResult, ELBProxyError> UpdateProxyAttributesOutcome;
typedef Aws::Utils::Outcome<UpdateProxyConfigurationResult, ELBProxyError> UpdateProxyConfigurationOutcome;
typedef Aws::Utils::Outcome<UpdateProxyNetworkConfigurationResult, ELBProxyError> UpdateProxyNetworkConfigurationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateCertificateOutcome> AssociateCertificateOutcomeCallable;
typedef std::future<CreateProxyOutcome> CreateProxyOutcomeCallable;
typedef std::future<DeleteProxyOutcome> DeleteProxyOutcomeCallable;
typedef std::future<DisassociateCertificateOutcome> DisassociateCertificateOutcomeCallable;
typedef std::future<GetProxyOutcome> GetProxyOutcomeCallable;
typedef std::future<GetProxyAttributesOutcome> GetProxyAttributesOutcomeCallable;
typedef std::future<GetProxyConfigurationContentsOutcome> GetProxyConfigurationContentsOutcomeCallable;
typedef std::future<GetProxyUpdateOutcome> GetProxyUpdateOutcomeCallable;
typedef std::future<ListCertificateAssociationsOutcome> ListCertificateAssociationsOutcomeCallable;
typedef std::future<ListProxiesOutcome> ListProxiesOutcomeCallable;
typedef std::future<ListProxyUpdatesOutcome> ListProxyUpdatesOutcomeCallable;
typedef std::future<ListProxyVersionsOutcome> ListProxyVersionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateProxyAttributesOutcome> UpdateProxyAttributesOutcomeCallable;
typedef std::future<UpdateProxyConfigurationOutcome> UpdateProxyConfigurationOutcomeCallable;
typedef std::future<UpdateProxyNetworkConfigurationOutcome> UpdateProxyNetworkConfigurationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ELBProxyClient;

/* Service model async handlers definitions */
typedef std::function<void(const ELBProxyClient*, const Model::AssociateCertificateRequest&, const Model::AssociateCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateCertificateResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::CreateProxyRequest&, const Model::CreateProxyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProxyResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::DeleteProxyRequest&, const Model::DeleteProxyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProxyResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::DisassociateCertificateRequest&,
                           const Model::DisassociateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateCertificateResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::GetProxyRequest&, const Model::GetProxyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProxyResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::GetProxyAttributesRequest&, const Model::GetProxyAttributesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProxyAttributesResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::GetProxyConfigurationContentsRequest&,
                           const Model::GetProxyConfigurationContentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProxyConfigurationContentsResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::GetProxyUpdateRequest&, const Model::GetProxyUpdateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProxyUpdateResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::ListCertificateAssociationsRequest&,
                           const Model::ListCertificateAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCertificateAssociationsResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::ListProxiesRequest&, const Model::ListProxiesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProxiesResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::ListProxyUpdatesRequest&, const Model::ListProxyUpdatesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProxyUpdatesResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::ListProxyVersionsRequest&, const Model::ListProxyVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProxyVersionsResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::UpdateProxyAttributesRequest&, const Model::UpdateProxyAttributesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProxyAttributesResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::UpdateProxyConfigurationRequest&,
                           const Model::UpdateProxyConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProxyConfigurationResponseReceivedHandler;
typedef std::function<void(const ELBProxyClient*, const Model::UpdateProxyNetworkConfigurationRequest&,
                           const Model::UpdateProxyNetworkConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProxyNetworkConfigurationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ELBProxy
}  // namespace Aws
