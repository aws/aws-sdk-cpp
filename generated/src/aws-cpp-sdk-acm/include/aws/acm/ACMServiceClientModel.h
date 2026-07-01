/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/acm/ACMEndpointProvider.h>
#include <aws/acm/ACMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ACMClient header */
#include <aws/acm/model/CreateAcmeDomainValidationResult.h>
#include <aws/acm/model/CreateAcmeEndpointResult.h>
#include <aws/acm/model/CreateAcmeExternalAccountBindingResult.h>
#include <aws/acm/model/DescribeAcmeAccountResult.h>
#include <aws/acm/model/DescribeAcmeDomainValidationResult.h>
#include <aws/acm/model/DescribeAcmeEndpointResult.h>
#include <aws/acm/model/DescribeAcmeExternalAccountBindingResult.h>
#include <aws/acm/model/DescribeCertificateResult.h>
#include <aws/acm/model/ExportCertificateResult.h>
#include <aws/acm/model/GetAccountConfigurationRequest.h>
#include <aws/acm/model/GetAccountConfigurationResult.h>
#include <aws/acm/model/GetAcmeExternalAccountBindingCredentialsResult.h>
#include <aws/acm/model/GetCertificateResult.h>
#include <aws/acm/model/ImportCertificateResult.h>
#include <aws/acm/model/ListAcmeAccountsResult.h>
#include <aws/acm/model/ListAcmeDomainValidationsResult.h>
#include <aws/acm/model/ListAcmeEndpointsRequest.h>
#include <aws/acm/model/ListAcmeEndpointsResult.h>
#include <aws/acm/model/ListAcmeExternalAccountBindingsResult.h>
#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/acm/model/ListCertificatesResult.h>
#include <aws/acm/model/ListTagsForCertificateResult.h>
#include <aws/acm/model/ListTagsForResourceResult.h>
#include <aws/acm/model/RequestCertificateResult.h>
#include <aws/acm/model/RevokeCertificateResult.h>
#include <aws/acm/model/SearchCertificatesRequest.h>
#include <aws/acm/model/SearchCertificatesResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ACMClient header */

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

namespace ACM {
using ACMClientConfiguration = Aws::Client::GenericClientConfiguration;
using ACMEndpointProviderBase = Aws::ACM::Endpoint::ACMEndpointProviderBase;
using ACMEndpointProvider = Aws::ACM::Endpoint::ACMEndpointProvider;

namespace Model {
/* Service model forward declarations required in ACMClient header */
class AddTagsToCertificateRequest;
class CreateAcmeDomainValidationRequest;
class CreateAcmeEndpointRequest;
class CreateAcmeExternalAccountBindingRequest;
class DeleteAcmeDomainValidationRequest;
class DeleteAcmeEndpointRequest;
class DeleteAcmeExternalAccountBindingRequest;
class DeleteCertificateRequest;
class DescribeAcmeAccountRequest;
class DescribeAcmeDomainValidationRequest;
class DescribeAcmeEndpointRequest;
class DescribeAcmeExternalAccountBindingRequest;
class DescribeCertificateRequest;
class ExportCertificateRequest;
class GetAccountConfigurationRequest;
class GetAcmeExternalAccountBindingCredentialsRequest;
class GetCertificateRequest;
class ImportCertificateRequest;
class ListAcmeAccountsRequest;
class ListAcmeDomainValidationsRequest;
class ListAcmeEndpointsRequest;
class ListAcmeExternalAccountBindingsRequest;
class ListCertificatesRequest;
class ListTagsForCertificateRequest;
class ListTagsForResourceRequest;
class PutAccountConfigurationRequest;
class RemoveTagsFromCertificateRequest;
class RenewCertificateRequest;
class RequestCertificateRequest;
class ResendValidationEmailRequest;
class RevokeAcmeAccountRequest;
class RevokeAcmeExternalAccountBindingRequest;
class RevokeCertificateRequest;
class SearchCertificatesRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAcmeDomainValidationRequest;
class UpdateAcmeEndpointRequest;
class UpdateCertificateOptionsRequest;
/* End of service model forward declarations required in ACMClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> AddTagsToCertificateOutcome;
typedef Aws::Utils::Outcome<CreateAcmeDomainValidationResult, ACMError> CreateAcmeDomainValidationOutcome;
typedef Aws::Utils::Outcome<CreateAcmeEndpointResult, ACMError> CreateAcmeEndpointOutcome;
typedef Aws::Utils::Outcome<CreateAcmeExternalAccountBindingResult, ACMError> CreateAcmeExternalAccountBindingOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> DeleteAcmeDomainValidationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> DeleteAcmeEndpointOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> DeleteAcmeExternalAccountBindingOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> DeleteCertificateOutcome;
typedef Aws::Utils::Outcome<DescribeAcmeAccountResult, ACMError> DescribeAcmeAccountOutcome;
typedef Aws::Utils::Outcome<DescribeAcmeDomainValidationResult, ACMError> DescribeAcmeDomainValidationOutcome;
typedef Aws::Utils::Outcome<DescribeAcmeEndpointResult, ACMError> DescribeAcmeEndpointOutcome;
typedef Aws::Utils::Outcome<DescribeAcmeExternalAccountBindingResult, ACMError> DescribeAcmeExternalAccountBindingOutcome;
typedef Aws::Utils::Outcome<DescribeCertificateResult, ACMError> DescribeCertificateOutcome;
typedef Aws::Utils::Outcome<ExportCertificateResult, ACMError> ExportCertificateOutcome;
typedef Aws::Utils::Outcome<GetAccountConfigurationResult, ACMError> GetAccountConfigurationOutcome;
typedef Aws::Utils::Outcome<GetAcmeExternalAccountBindingCredentialsResult, ACMError> GetAcmeExternalAccountBindingCredentialsOutcome;
typedef Aws::Utils::Outcome<GetCertificateResult, ACMError> GetCertificateOutcome;
typedef Aws::Utils::Outcome<ImportCertificateResult, ACMError> ImportCertificateOutcome;
typedef Aws::Utils::Outcome<ListAcmeAccountsResult, ACMError> ListAcmeAccountsOutcome;
typedef Aws::Utils::Outcome<ListAcmeDomainValidationsResult, ACMError> ListAcmeDomainValidationsOutcome;
typedef Aws::Utils::Outcome<ListAcmeEndpointsResult, ACMError> ListAcmeEndpointsOutcome;
typedef Aws::Utils::Outcome<ListAcmeExternalAccountBindingsResult, ACMError> ListAcmeExternalAccountBindingsOutcome;
typedef Aws::Utils::Outcome<ListCertificatesResult, ACMError> ListCertificatesOutcome;
typedef Aws::Utils::Outcome<ListTagsForCertificateResult, ACMError> ListTagsForCertificateOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ACMError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> PutAccountConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> RemoveTagsFromCertificateOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> RenewCertificateOutcome;
typedef Aws::Utils::Outcome<RequestCertificateResult, ACMError> RequestCertificateOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> ResendValidationEmailOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> RevokeAcmeAccountOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> RevokeAcmeExternalAccountBindingOutcome;
typedef Aws::Utils::Outcome<RevokeCertificateResult, ACMError> RevokeCertificateOutcome;
typedef Aws::Utils::Outcome<SearchCertificatesResult, ACMError> SearchCertificatesOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> UpdateAcmeDomainValidationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> UpdateAcmeEndpointOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> UpdateCertificateOptionsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AddTagsToCertificateOutcome> AddTagsToCertificateOutcomeCallable;
typedef std::future<CreateAcmeDomainValidationOutcome> CreateAcmeDomainValidationOutcomeCallable;
typedef std::future<CreateAcmeEndpointOutcome> CreateAcmeEndpointOutcomeCallable;
typedef std::future<CreateAcmeExternalAccountBindingOutcome> CreateAcmeExternalAccountBindingOutcomeCallable;
typedef std::future<DeleteAcmeDomainValidationOutcome> DeleteAcmeDomainValidationOutcomeCallable;
typedef std::future<DeleteAcmeEndpointOutcome> DeleteAcmeEndpointOutcomeCallable;
typedef std::future<DeleteAcmeExternalAccountBindingOutcome> DeleteAcmeExternalAccountBindingOutcomeCallable;
typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
typedef std::future<DescribeAcmeAccountOutcome> DescribeAcmeAccountOutcomeCallable;
typedef std::future<DescribeAcmeDomainValidationOutcome> DescribeAcmeDomainValidationOutcomeCallable;
typedef std::future<DescribeAcmeEndpointOutcome> DescribeAcmeEndpointOutcomeCallable;
typedef std::future<DescribeAcmeExternalAccountBindingOutcome> DescribeAcmeExternalAccountBindingOutcomeCallable;
typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
typedef std::future<ExportCertificateOutcome> ExportCertificateOutcomeCallable;
typedef std::future<GetAccountConfigurationOutcome> GetAccountConfigurationOutcomeCallable;
typedef std::future<GetAcmeExternalAccountBindingCredentialsOutcome> GetAcmeExternalAccountBindingCredentialsOutcomeCallable;
typedef std::future<GetCertificateOutcome> GetCertificateOutcomeCallable;
typedef std::future<ImportCertificateOutcome> ImportCertificateOutcomeCallable;
typedef std::future<ListAcmeAccountsOutcome> ListAcmeAccountsOutcomeCallable;
typedef std::future<ListAcmeDomainValidationsOutcome> ListAcmeDomainValidationsOutcomeCallable;
typedef std::future<ListAcmeEndpointsOutcome> ListAcmeEndpointsOutcomeCallable;
typedef std::future<ListAcmeExternalAccountBindingsOutcome> ListAcmeExternalAccountBindingsOutcomeCallable;
typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
typedef std::future<ListTagsForCertificateOutcome> ListTagsForCertificateOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutAccountConfigurationOutcome> PutAccountConfigurationOutcomeCallable;
typedef std::future<RemoveTagsFromCertificateOutcome> RemoveTagsFromCertificateOutcomeCallable;
typedef std::future<RenewCertificateOutcome> RenewCertificateOutcomeCallable;
typedef std::future<RequestCertificateOutcome> RequestCertificateOutcomeCallable;
typedef std::future<ResendValidationEmailOutcome> ResendValidationEmailOutcomeCallable;
typedef std::future<RevokeAcmeAccountOutcome> RevokeAcmeAccountOutcomeCallable;
typedef std::future<RevokeAcmeExternalAccountBindingOutcome> RevokeAcmeExternalAccountBindingOutcomeCallable;
typedef std::future<RevokeCertificateOutcome> RevokeCertificateOutcomeCallable;
typedef std::future<SearchCertificatesOutcome> SearchCertificatesOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAcmeDomainValidationOutcome> UpdateAcmeDomainValidationOutcomeCallable;
typedef std::future<UpdateAcmeEndpointOutcome> UpdateAcmeEndpointOutcomeCallable;
typedef std::future<UpdateCertificateOptionsOutcome> UpdateCertificateOptionsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ACMClient;

/* Service model async handlers definitions */
typedef std::function<void(const ACMClient*, const Model::AddTagsToCertificateRequest&, const Model::AddTagsToCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AddTagsToCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::CreateAcmeDomainValidationRequest&,
                           const Model::CreateAcmeDomainValidationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAcmeDomainValidationResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::CreateAcmeEndpointRequest&, const Model::CreateAcmeEndpointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAcmeEndpointResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::CreateAcmeExternalAccountBindingRequest&,
                           const Model::CreateAcmeExternalAccountBindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAcmeExternalAccountBindingResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DeleteAcmeDomainValidationRequest&,
                           const Model::DeleteAcmeDomainValidationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAcmeDomainValidationResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DeleteAcmeEndpointRequest&, const Model::DeleteAcmeEndpointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAcmeEndpointResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DeleteAcmeExternalAccountBindingRequest&,
                           const Model::DeleteAcmeExternalAccountBindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAcmeExternalAccountBindingResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DescribeAcmeAccountRequest&, const Model::DescribeAcmeAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAcmeAccountResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DescribeAcmeDomainValidationRequest&,
                           const Model::DescribeAcmeDomainValidationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAcmeDomainValidationResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DescribeAcmeEndpointRequest&, const Model::DescribeAcmeEndpointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAcmeEndpointResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DescribeAcmeExternalAccountBindingRequest&,
                           const Model::DescribeAcmeExternalAccountBindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeAcmeExternalAccountBindingResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DescribeCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ExportCertificateRequest&, const Model::ExportCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExportCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::GetAccountConfigurationRequest&, const Model::GetAccountConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccountConfigurationResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::GetAcmeExternalAccountBindingCredentialsRequest&,
                           const Model::GetAcmeExternalAccountBindingCredentialsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAcmeExternalAccountBindingCredentialsResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::GetCertificateRequest&, const Model::GetCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ImportCertificateRequest&, const Model::ImportCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ImportCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListAcmeAccountsRequest&, const Model::ListAcmeAccountsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAcmeAccountsResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListAcmeDomainValidationsRequest&, const Model::ListAcmeDomainValidationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAcmeDomainValidationsResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListAcmeEndpointsRequest&, const Model::ListAcmeEndpointsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAcmeEndpointsResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListAcmeExternalAccountBindingsRequest&,
                           const Model::ListAcmeExternalAccountBindingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAcmeExternalAccountBindingsResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCertificatesResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListTagsForCertificateRequest&, const Model::ListTagsForCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::PutAccountConfigurationRequest&, const Model::PutAccountConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutAccountConfigurationResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::RemoveTagsFromCertificateRequest&, const Model::RemoveTagsFromCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RemoveTagsFromCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::RenewCertificateRequest&, const Model::RenewCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RenewCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::RequestCertificateRequest&, const Model::RequestCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RequestCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::ResendValidationEmailRequest&, const Model::ResendValidationEmailOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResendValidationEmailResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::RevokeAcmeAccountRequest&, const Model::RevokeAcmeAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RevokeAcmeAccountResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::RevokeAcmeExternalAccountBindingRequest&,
                           const Model::RevokeAcmeExternalAccountBindingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RevokeAcmeExternalAccountBindingResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::RevokeCertificateRequest&, const Model::RevokeCertificateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RevokeCertificateResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::SearchCertificatesRequest&, const Model::SearchCertificatesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchCertificatesResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::UpdateAcmeDomainValidationRequest&,
                           const Model::UpdateAcmeDomainValidationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAcmeDomainValidationResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::UpdateAcmeEndpointRequest&, const Model::UpdateAcmeEndpointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAcmeEndpointResponseReceivedHandler;
typedef std::function<void(const ACMClient*, const Model::UpdateCertificateOptionsRequest&, const Model::UpdateCertificateOptionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCertificateOptionsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ACM
}  // namespace Aws
