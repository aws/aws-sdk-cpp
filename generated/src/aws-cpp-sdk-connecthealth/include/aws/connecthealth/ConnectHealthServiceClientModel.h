/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connecthealth/ConnectHealthEndpointProvider.h>
#include <aws/connecthealth/ConnectHealthErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ConnectHealthClient header */
#include <aws/connecthealth/model/ActivateSubscriptionResult.h>
#include <aws/connecthealth/model/CreateDomainResult.h>
#include <aws/connecthealth/model/CreateSubscriptionResult.h>
#include <aws/connecthealth/model/DeactivateSubscriptionResult.h>
#include <aws/connecthealth/model/DeleteDomainResult.h>
#include <aws/connecthealth/model/GetDomainResult.h>
#include <aws/connecthealth/model/GetMedicalScribeListeningSessionResult.h>
#include <aws/connecthealth/model/GetPatientInsightsJobResult.h>
#include <aws/connecthealth/model/GetSubscriptionResult.h>
#include <aws/connecthealth/model/ListDomainsRequest.h>
#include <aws/connecthealth/model/ListDomainsResult.h>
#include <aws/connecthealth/model/ListSubscriptionsResult.h>
#include <aws/connecthealth/model/ListTagsForResourceResult.h>
#include <aws/connecthealth/model/StartPatientInsightsJobResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ConnectHealthClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Event {
class EventEncoderStream;
}  // namespace Event

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

namespace ConnectHealth {
using ConnectHealthClientConfiguration = Aws::Client::GenericClientConfiguration;
using ConnectHealthEndpointProviderBase = Aws::ConnectHealth::Endpoint::ConnectHealthEndpointProviderBase;
using ConnectHealthEndpointProvider = Aws::ConnectHealth::Endpoint::ConnectHealthEndpointProvider;

namespace Model {
/* Service model forward declarations required in ConnectHealthClient header */
class ActivateSubscriptionRequest;
class CreateDomainRequest;
class CreateSubscriptionRequest;
class DeactivateSubscriptionRequest;
class DeleteDomainRequest;
class GetDomainRequest;
class GetMedicalScribeListeningSessionRequest;
class GetPatientInsightsJobRequest;
class GetSubscriptionRequest;
class ListDomainsRequest;
class ListSubscriptionsRequest;
class ListTagsForResourceRequest;
class StartMedicalScribeListeningSessionRequest;
class MedicalScribeInputStream;
class StartPatientInsightsJobRequest;
class TagResourceRequest;
class UntagResourceRequest;
/* End of service model forward declarations required in ConnectHealthClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ActivateSubscriptionResult, ConnectHealthError> ActivateSubscriptionOutcome;
typedef Aws::Utils::Outcome<CreateDomainResult, ConnectHealthError> CreateDomainOutcome;
typedef Aws::Utils::Outcome<CreateSubscriptionResult, ConnectHealthError> CreateSubscriptionOutcome;
typedef Aws::Utils::Outcome<DeactivateSubscriptionResult, ConnectHealthError> DeactivateSubscriptionOutcome;
typedef Aws::Utils::Outcome<DeleteDomainResult, ConnectHealthError> DeleteDomainOutcome;
typedef Aws::Utils::Outcome<GetDomainResult, ConnectHealthError> GetDomainOutcome;
typedef Aws::Utils::Outcome<GetMedicalScribeListeningSessionResult, ConnectHealthError> GetMedicalScribeListeningSessionOutcome;
typedef Aws::Utils::Outcome<GetPatientInsightsJobResult, ConnectHealthError> GetPatientInsightsJobOutcome;
typedef Aws::Utils::Outcome<GetSubscriptionResult, ConnectHealthError> GetSubscriptionOutcome;
typedef Aws::Utils::Outcome<ListDomainsResult, ConnectHealthError> ListDomainsOutcome;
typedef Aws::Utils::Outcome<ListSubscriptionsResult, ConnectHealthError> ListSubscriptionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectHealthError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ConnectHealthError> StartMedicalScribeListeningSessionOutcome;
typedef Aws::Utils::Outcome<StartPatientInsightsJobResult, ConnectHealthError> StartPatientInsightsJobOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ConnectHealthError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ConnectHealthError> UntagResourceOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ActivateSubscriptionOutcome> ActivateSubscriptionOutcomeCallable;
typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
typedef std::future<DeactivateSubscriptionOutcome> DeactivateSubscriptionOutcomeCallable;
typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
typedef std::future<GetMedicalScribeListeningSessionOutcome> GetMedicalScribeListeningSessionOutcomeCallable;
typedef std::future<GetPatientInsightsJobOutcome> GetPatientInsightsJobOutcomeCallable;
typedef std::future<GetSubscriptionOutcome> GetSubscriptionOutcomeCallable;
typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
typedef std::future<ListSubscriptionsOutcome> ListSubscriptionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<StartMedicalScribeListeningSessionOutcome> StartMedicalScribeListeningSessionOutcomeCallable;
typedef std::future<StartPatientInsightsJobOutcome> StartPatientInsightsJobOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ConnectHealthClient;

/* Service model async handlers definitions */
typedef std::function<void(const ConnectHealthClient*, const Model::ActivateSubscriptionRequest&, const Model::ActivateSubscriptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ActivateSubscriptionResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDomainResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::CreateSubscriptionRequest&, const Model::CreateSubscriptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSubscriptionResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::DeactivateSubscriptionRequest&,
                           const Model::DeactivateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeactivateSubscriptionResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDomainResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDomainResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::GetMedicalScribeListeningSessionRequest&,
                           const Model::GetMedicalScribeListeningSessionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMedicalScribeListeningSessionResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::GetPatientInsightsJobRequest&,
                           const Model::GetPatientInsightsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPatientInsightsJobResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::GetSubscriptionRequest&, const Model::GetSubscriptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSubscriptionResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDomainsResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::ListSubscriptionsRequest&, const Model::ListSubscriptionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSubscriptionsResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(Model::MedicalScribeInputStream&)> StartMedicalScribeListeningSessionStreamReadyHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::StartMedicalScribeListeningSessionRequest&,
                           const Model::StartMedicalScribeListeningSessionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartMedicalScribeListeningSessionResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::StartPatientInsightsJobRequest&,
                           const Model::StartPatientInsightsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartPatientInsightsJobResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ConnectHealthClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ConnectHealth
}  // namespace Aws
