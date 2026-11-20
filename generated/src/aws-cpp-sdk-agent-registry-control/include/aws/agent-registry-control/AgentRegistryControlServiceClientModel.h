/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/agent-registry-control/AgentRegistryControlEndpointProvider.h>
#include <aws/agent-registry-control/AgentRegistryControlErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in AgentRegistryControlClient header */
#include <aws/agent-registry-control/model/AssociatePublisherResult.h>
#include <aws/agent-registry-control/model/CreatePublisherResult.h>
#include <aws/agent-registry-control/model/CreateRegistryRecordResult.h>
#include <aws/agent-registry-control/model/CreateRegistryResult.h>
#include <aws/agent-registry-control/model/DeleteRegistryRecordResult.h>
#include <aws/agent-registry-control/model/DeleteRegistryResult.h>
#include <aws/agent-registry-control/model/GetPublisherResult.h>
#include <aws/agent-registry-control/model/GetRegistryRecordResult.h>
#include <aws/agent-registry-control/model/GetRegistryResult.h>
#include <aws/agent-registry-control/model/ListPublisherAssociationsRequest.h>
#include <aws/agent-registry-control/model/ListPublisherAssociationsResult.h>
#include <aws/agent-registry-control/model/ListPublishersRequest.h>
#include <aws/agent-registry-control/model/ListPublishersResult.h>
#include <aws/agent-registry-control/model/ListRegistriesRequest.h>
#include <aws/agent-registry-control/model/ListRegistriesResult.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsResult.h>
#include <aws/agent-registry-control/model/ListTagsForResourceResult.h>
#include <aws/agent-registry-control/model/SubmitRegistryRecordForApprovalResult.h>
#include <aws/agent-registry-control/model/TagResourceResult.h>
#include <aws/agent-registry-control/model/UntagResourceResult.h>
#include <aws/agent-registry-control/model/UpdatePublisherAssociationApprovalStatusResult.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordResult.h>
#include <aws/agent-registry-control/model/UpdateRegistryRecordStatusResult.h>
#include <aws/agent-registry-control/model/UpdateRegistryResult.h>
#include <aws/agent-registry-control/model/ValidatePublisherResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AgentRegistryControlClient header */

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

namespace AgentRegistryControl {
using AgentRegistryControlClientConfiguration = Aws::Client::GenericClientConfiguration;
using AgentRegistryControlEndpointProviderBase = Aws::AgentRegistryControl::Endpoint::AgentRegistryControlEndpointProviderBase;
using AgentRegistryControlEndpointProvider = Aws::AgentRegistryControl::Endpoint::AgentRegistryControlEndpointProvider;

namespace Model {
/* Service model forward declarations required in AgentRegistryControlClient header */
class AssociatePublisherRequest;
class CreatePublisherRequest;
class CreateRegistryRequest;
class CreateRegistryRecordRequest;
class DeletePublisherRequest;
class DeleteRegistryRequest;
class DeleteRegistryRecordRequest;
class DisassociatePublisherRequest;
class GetPublisherRequest;
class GetRegistryRequest;
class GetRegistryRecordRequest;
class ListPublisherAssociationsRequest;
class ListPublishersRequest;
class ListRegistriesRequest;
class ListRegistryRecordsRequest;
class ListTagsForResourceRequest;
class SubmitRegistryRecordForApprovalRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdatePublisherAssociationApprovalStatusRequest;
class UpdateRegistryRequest;
class UpdateRegistryRecordRequest;
class UpdateRegistryRecordStatusRequest;
class ValidatePublisherRequest;
/* End of service model forward declarations required in AgentRegistryControlClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociatePublisherResult, AgentRegistryControlError> AssociatePublisherOutcome;
typedef Aws::Utils::Outcome<CreatePublisherResult, AgentRegistryControlError> CreatePublisherOutcome;
typedef Aws::Utils::Outcome<CreateRegistryResult, AgentRegistryControlError> CreateRegistryOutcome;
typedef Aws::Utils::Outcome<CreateRegistryRecordResult, AgentRegistryControlError> CreateRegistryRecordOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, AgentRegistryControlError> DeletePublisherOutcome;
typedef Aws::Utils::Outcome<DeleteRegistryResult, AgentRegistryControlError> DeleteRegistryOutcome;
typedef Aws::Utils::Outcome<DeleteRegistryRecordResult, AgentRegistryControlError> DeleteRegistryRecordOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, AgentRegistryControlError> DisassociatePublisherOutcome;
typedef Aws::Utils::Outcome<GetPublisherResult, AgentRegistryControlError> GetPublisherOutcome;
typedef Aws::Utils::Outcome<GetRegistryResult, AgentRegistryControlError> GetRegistryOutcome;
typedef Aws::Utils::Outcome<GetRegistryRecordResult, AgentRegistryControlError> GetRegistryRecordOutcome;
typedef Aws::Utils::Outcome<ListPublisherAssociationsResult, AgentRegistryControlError> ListPublisherAssociationsOutcome;
typedef Aws::Utils::Outcome<ListPublishersResult, AgentRegistryControlError> ListPublishersOutcome;
typedef Aws::Utils::Outcome<ListRegistriesResult, AgentRegistryControlError> ListRegistriesOutcome;
typedef Aws::Utils::Outcome<ListRegistryRecordsResult, AgentRegistryControlError> ListRegistryRecordsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, AgentRegistryControlError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<SubmitRegistryRecordForApprovalResult, AgentRegistryControlError> SubmitRegistryRecordForApprovalOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, AgentRegistryControlError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, AgentRegistryControlError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdatePublisherAssociationApprovalStatusResult, AgentRegistryControlError>
    UpdatePublisherAssociationApprovalStatusOutcome;
typedef Aws::Utils::Outcome<UpdateRegistryResult, AgentRegistryControlError> UpdateRegistryOutcome;
typedef Aws::Utils::Outcome<UpdateRegistryRecordResult, AgentRegistryControlError> UpdateRegistryRecordOutcome;
typedef Aws::Utils::Outcome<UpdateRegistryRecordStatusResult, AgentRegistryControlError> UpdateRegistryRecordStatusOutcome;
typedef Aws::Utils::Outcome<ValidatePublisherResult, AgentRegistryControlError> ValidatePublisherOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociatePublisherOutcome> AssociatePublisherOutcomeCallable;
typedef std::future<CreatePublisherOutcome> CreatePublisherOutcomeCallable;
typedef std::future<CreateRegistryOutcome> CreateRegistryOutcomeCallable;
typedef std::future<CreateRegistryRecordOutcome> CreateRegistryRecordOutcomeCallable;
typedef std::future<DeletePublisherOutcome> DeletePublisherOutcomeCallable;
typedef std::future<DeleteRegistryOutcome> DeleteRegistryOutcomeCallable;
typedef std::future<DeleteRegistryRecordOutcome> DeleteRegistryRecordOutcomeCallable;
typedef std::future<DisassociatePublisherOutcome> DisassociatePublisherOutcomeCallable;
typedef std::future<GetPublisherOutcome> GetPublisherOutcomeCallable;
typedef std::future<GetRegistryOutcome> GetRegistryOutcomeCallable;
typedef std::future<GetRegistryRecordOutcome> GetRegistryRecordOutcomeCallable;
typedef std::future<ListPublisherAssociationsOutcome> ListPublisherAssociationsOutcomeCallable;
typedef std::future<ListPublishersOutcome> ListPublishersOutcomeCallable;
typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
typedef std::future<ListRegistryRecordsOutcome> ListRegistryRecordsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<SubmitRegistryRecordForApprovalOutcome> SubmitRegistryRecordForApprovalOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdatePublisherAssociationApprovalStatusOutcome> UpdatePublisherAssociationApprovalStatusOutcomeCallable;
typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
typedef std::future<UpdateRegistryRecordOutcome> UpdateRegistryRecordOutcomeCallable;
typedef std::future<UpdateRegistryRecordStatusOutcome> UpdateRegistryRecordStatusOutcomeCallable;
typedef std::future<ValidatePublisherOutcome> ValidatePublisherOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class AgentRegistryControlClient;

/* Service model async handlers definitions */
typedef std::function<void(const AgentRegistryControlClient*, const Model::AssociatePublisherRequest&,
                           const Model::AssociatePublisherOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociatePublisherResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::CreatePublisherRequest&, const Model::CreatePublisherOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePublisherResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::CreateRegistryRequest&, const Model::CreateRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRegistryResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::CreateRegistryRecordRequest&,
                           const Model::CreateRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRegistryRecordResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::DeletePublisherRequest&, const Model::DeletePublisherOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePublisherResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::DeleteRegistryRequest&, const Model::DeleteRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRegistryResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::DeleteRegistryRecordRequest&,
                           const Model::DeleteRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRegistryRecordResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::DisassociatePublisherRequest&,
                           const Model::DisassociatePublisherOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociatePublisherResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::GetPublisherRequest&, const Model::GetPublisherOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPublisherResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::GetRegistryRequest&, const Model::GetRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRegistryResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::GetRegistryRecordRequest&,
                           const Model::GetRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRegistryRecordResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::ListPublisherAssociationsRequest&,
                           const Model::ListPublisherAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPublisherAssociationsResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::ListPublishersRequest&, const Model::ListPublishersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPublishersResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRegistriesResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::ListRegistryRecordsRequest&,
                           const Model::ListRegistryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRegistryRecordsResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::SubmitRegistryRecordForApprovalRequest&,
                           const Model::SubmitRegistryRecordForApprovalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SubmitRegistryRecordForApprovalResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::UpdatePublisherAssociationApprovalStatusRequest&,
                           const Model::UpdatePublisherAssociationApprovalStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePublisherAssociationApprovalStatusResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistryResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::UpdateRegistryRecordRequest&,
                           const Model::UpdateRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistryRecordResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::UpdateRegistryRecordStatusRequest&,
                           const Model::UpdateRegistryRecordStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistryRecordStatusResponseReceivedHandler;
typedef std::function<void(const AgentRegistryControlClient*, const Model::ValidatePublisherRequest&,
                           const Model::ValidatePublisherOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ValidatePublisherResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace AgentRegistryControl
}  // namespace Aws
