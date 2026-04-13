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
#include <aws/interconnect/InterconnectEndpointProvider.h>
#include <aws/interconnect/InterconnectErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in InterconnectClient header */
#include <aws/interconnect/model/AcceptConnectionProposalResult.h>
#include <aws/interconnect/model/CreateConnectionResult.h>
#include <aws/interconnect/model/DeleteConnectionResult.h>
#include <aws/interconnect/model/DescribeConnectionProposalResult.h>
#include <aws/interconnect/model/GetConnectionResult.h>
#include <aws/interconnect/model/GetEnvironmentResult.h>
#include <aws/interconnect/model/ListAttachPointsResult.h>
#include <aws/interconnect/model/ListConnectionsRequest.h>
#include <aws/interconnect/model/ListConnectionsResult.h>
#include <aws/interconnect/model/ListEnvironmentsRequest.h>
#include <aws/interconnect/model/ListEnvironmentsResult.h>
#include <aws/interconnect/model/ListTagsForResourceResult.h>
#include <aws/interconnect/model/TagResourceResult.h>
#include <aws/interconnect/model/UntagResourceResult.h>
#include <aws/interconnect/model/UpdateConnectionResult.h>
/* End of service model headers required in InterconnectClient header */

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

namespace Interconnect {
using InterconnectClientConfiguration = Aws::Client::GenericClientConfiguration;
using InterconnectEndpointProviderBase = Aws::Interconnect::Endpoint::InterconnectEndpointProviderBase;
using InterconnectEndpointProvider = Aws::Interconnect::Endpoint::InterconnectEndpointProvider;

namespace Model {
/* Service model forward declarations required in InterconnectClient header */
class AcceptConnectionProposalRequest;
class CreateConnectionRequest;
class DeleteConnectionRequest;
class DescribeConnectionProposalRequest;
class GetConnectionRequest;
class GetEnvironmentRequest;
class ListAttachPointsRequest;
class ListConnectionsRequest;
class ListEnvironmentsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateConnectionRequest;
/* End of service model forward declarations required in InterconnectClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AcceptConnectionProposalResult, InterconnectError> AcceptConnectionProposalOutcome;
typedef Aws::Utils::Outcome<CreateConnectionResult, InterconnectError> CreateConnectionOutcome;
typedef Aws::Utils::Outcome<DeleteConnectionResult, InterconnectError> DeleteConnectionOutcome;
typedef Aws::Utils::Outcome<DescribeConnectionProposalResult, InterconnectError> DescribeConnectionProposalOutcome;
typedef Aws::Utils::Outcome<GetConnectionResult, InterconnectError> GetConnectionOutcome;
typedef Aws::Utils::Outcome<GetEnvironmentResult, InterconnectError> GetEnvironmentOutcome;
typedef Aws::Utils::Outcome<ListAttachPointsResult, InterconnectError> ListAttachPointsOutcome;
typedef Aws::Utils::Outcome<ListConnectionsResult, InterconnectError> ListConnectionsOutcome;
typedef Aws::Utils::Outcome<ListEnvironmentsResult, InterconnectError> ListEnvironmentsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, InterconnectError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, InterconnectError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, InterconnectError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateConnectionResult, InterconnectError> UpdateConnectionOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AcceptConnectionProposalOutcome> AcceptConnectionProposalOutcomeCallable;
typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
typedef std::future<DescribeConnectionProposalOutcome> DescribeConnectionProposalOutcomeCallable;
typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
typedef std::future<ListAttachPointsOutcome> ListAttachPointsOutcomeCallable;
typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class InterconnectClient;

/* Service model async handlers definitions */
typedef std::function<void(const InterconnectClient*, const Model::AcceptConnectionProposalRequest&,
                           const Model::AcceptConnectionProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptConnectionProposalResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateConnectionResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteConnectionResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::DescribeConnectionProposalRequest&,
                           const Model::DescribeConnectionProposalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeConnectionProposalResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConnectionResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEnvironmentResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::ListAttachPointsRequest&, const Model::ListAttachPointsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAttachPointsResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConnectionsResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEnvironmentsResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const InterconnectClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateConnectionResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Interconnect
}  // namespace Aws
