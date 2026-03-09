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
#include <aws/elementalinference/ElementalInferenceEndpointProvider.h>
#include <aws/elementalinference/ElementalInferenceErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ElementalInferenceClient header */
#include <aws/core/NoResult.h>
#include <aws/elementalinference/model/AssociateFeedResult.h>
#include <aws/elementalinference/model/CreateFeedResult.h>
#include <aws/elementalinference/model/DeleteFeedResult.h>
#include <aws/elementalinference/model/DisassociateFeedResult.h>
#include <aws/elementalinference/model/GetFeedResult.h>
#include <aws/elementalinference/model/ListFeedsRequest.h>
#include <aws/elementalinference/model/ListFeedsResult.h>
#include <aws/elementalinference/model/ListTagsForResourceResult.h>
#include <aws/elementalinference/model/UpdateFeedResult.h>
/* End of service model headers required in ElementalInferenceClient header */

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

namespace ElementalInference {
using ElementalInferenceClientConfiguration = Aws::Client::GenericClientConfiguration;
using ElementalInferenceEndpointProviderBase = Aws::ElementalInference::Endpoint::ElementalInferenceEndpointProviderBase;
using ElementalInferenceEndpointProvider = Aws::ElementalInference::Endpoint::ElementalInferenceEndpointProvider;

namespace Model {
/* Service model forward declarations required in ElementalInferenceClient header */
class AssociateFeedRequest;
class CreateFeedRequest;
class DeleteFeedRequest;
class DisassociateFeedRequest;
class GetFeedRequest;
class ListFeedsRequest;
class ListTagsForResourceRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateFeedRequest;
/* End of service model forward declarations required in ElementalInferenceClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateFeedResult, ElementalInferenceError> AssociateFeedOutcome;
typedef Aws::Utils::Outcome<CreateFeedResult, ElementalInferenceError> CreateFeedOutcome;
typedef Aws::Utils::Outcome<DeleteFeedResult, ElementalInferenceError> DeleteFeedOutcome;
typedef Aws::Utils::Outcome<DisassociateFeedResult, ElementalInferenceError> DisassociateFeedOutcome;
typedef Aws::Utils::Outcome<GetFeedResult, ElementalInferenceError> GetFeedOutcome;
typedef Aws::Utils::Outcome<ListFeedsResult, ElementalInferenceError> ListFeedsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ElementalInferenceError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ElementalInferenceError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ElementalInferenceError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateFeedResult, ElementalInferenceError> UpdateFeedOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateFeedOutcome> AssociateFeedOutcomeCallable;
typedef std::future<CreateFeedOutcome> CreateFeedOutcomeCallable;
typedef std::future<DeleteFeedOutcome> DeleteFeedOutcomeCallable;
typedef std::future<DisassociateFeedOutcome> DisassociateFeedOutcomeCallable;
typedef std::future<GetFeedOutcome> GetFeedOutcomeCallable;
typedef std::future<ListFeedsOutcome> ListFeedsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateFeedOutcome> UpdateFeedOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ElementalInferenceClient;

/* Service model async handlers definitions */
typedef std::function<void(const ElementalInferenceClient*, const Model::AssociateFeedRequest&, const Model::AssociateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateFeedRequest&, const Model::CreateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteFeedRequest&, const Model::DeleteFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DisassociateFeedRequest&, const Model::DisassociateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetFeedRequest&, const Model::GetFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListFeedsRequest&, const Model::ListFeedsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFeedsResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UpdateFeedRequest&, const Model::UpdateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFeedResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ElementalInference
}  // namespace Aws
