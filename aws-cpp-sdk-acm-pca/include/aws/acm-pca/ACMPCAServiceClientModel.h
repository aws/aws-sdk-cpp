/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/acm-pca/ACMPCAErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/acm-pca/ACMPCAEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ACMPCAClient header */
#include <aws/acm-pca/model/CreateCertificateAuthorityResult.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityResult.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/GetCertificateResult.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateResult.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrResult.h>
#include <aws/acm-pca/model/GetPolicyResult.h>
#include <aws/acm-pca/model/IssueCertificateResult.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesResult.h>
#include <aws/acm-pca/model/ListPermissionsResult.h>
#include <aws/acm-pca/model/ListTagsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ACMPCAClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace ACMPCA
  {
    using ACMPCAClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ACMPCAEndpointProviderBase = Aws::ACMPCA::Endpoint::ACMPCAEndpointProviderBase;
    using ACMPCAEndpointProvider = Aws::ACMPCA::Endpoint::ACMPCAEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ACMPCAClient header */
      class CreateCertificateAuthorityRequest;
      class CreateCertificateAuthorityAuditReportRequest;
      class CreatePermissionRequest;
      class DeleteCertificateAuthorityRequest;
      class DeletePermissionRequest;
      class DeletePolicyRequest;
      class DescribeCertificateAuthorityRequest;
      class DescribeCertificateAuthorityAuditReportRequest;
      class GetCertificateRequest;
      class GetCertificateAuthorityCertificateRequest;
      class GetCertificateAuthorityCsrRequest;
      class GetPolicyRequest;
      class ImportCertificateAuthorityCertificateRequest;
      class IssueCertificateRequest;
      class ListCertificateAuthoritiesRequest;
      class ListPermissionsRequest;
      class ListTagsRequest;
      class PutPolicyRequest;
      class RestoreCertificateAuthorityRequest;
      class RevokeCertificateRequest;
      class TagCertificateAuthorityRequest;
      class UntagCertificateAuthorityRequest;
      class UpdateCertificateAuthorityRequest;
      /* End of service model forward declarations required in ACMPCAClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCertificateAuthorityResult, ACMPCAError> CreateCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<CreateCertificateAuthorityAuditReportResult, ACMPCAError> CreateCertificateAuthorityAuditReportOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> CreatePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> DeleteCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> DeletePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificateAuthorityResult, ACMPCAError> DescribeCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificateAuthorityAuditReportResult, ACMPCAError> DescribeCertificateAuthorityAuditReportOutcome;
      typedef Aws::Utils::Outcome<GetCertificateResult, ACMPCAError> GetCertificateOutcome;
      typedef Aws::Utils::Outcome<GetCertificateAuthorityCertificateResult, ACMPCAError> GetCertificateAuthorityCertificateOutcome;
      typedef Aws::Utils::Outcome<GetCertificateAuthorityCsrResult, ACMPCAError> GetCertificateAuthorityCsrOutcome;
      typedef Aws::Utils::Outcome<GetPolicyResult, ACMPCAError> GetPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> ImportCertificateAuthorityCertificateOutcome;
      typedef Aws::Utils::Outcome<IssueCertificateResult, ACMPCAError> IssueCertificateOutcome;
      typedef Aws::Utils::Outcome<ListCertificateAuthoritiesResult, ACMPCAError> ListCertificateAuthoritiesOutcome;
      typedef Aws::Utils::Outcome<ListPermissionsResult, ACMPCAError> ListPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, ACMPCAError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> PutPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> RestoreCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> RevokeCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> TagCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> UntagCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMPCAError> UpdateCertificateAuthorityOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCertificateAuthorityOutcome> CreateCertificateAuthorityOutcomeCallable;
      typedef std::future<CreateCertificateAuthorityAuditReportOutcome> CreateCertificateAuthorityAuditReportOutcomeCallable;
      typedef std::future<CreatePermissionOutcome> CreatePermissionOutcomeCallable;
      typedef std::future<DeleteCertificateAuthorityOutcome> DeleteCertificateAuthorityOutcomeCallable;
      typedef std::future<DeletePermissionOutcome> DeletePermissionOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DescribeCertificateAuthorityOutcome> DescribeCertificateAuthorityOutcomeCallable;
      typedef std::future<DescribeCertificateAuthorityAuditReportOutcome> DescribeCertificateAuthorityAuditReportOutcomeCallable;
      typedef std::future<GetCertificateOutcome> GetCertificateOutcomeCallable;
      typedef std::future<GetCertificateAuthorityCertificateOutcome> GetCertificateAuthorityCertificateOutcomeCallable;
      typedef std::future<GetCertificateAuthorityCsrOutcome> GetCertificateAuthorityCsrOutcomeCallable;
      typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
      typedef std::future<ImportCertificateAuthorityCertificateOutcome> ImportCertificateAuthorityCertificateOutcomeCallable;
      typedef std::future<IssueCertificateOutcome> IssueCertificateOutcomeCallable;
      typedef std::future<ListCertificateAuthoritiesOutcome> ListCertificateAuthoritiesOutcomeCallable;
      typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<PutPolicyOutcome> PutPolicyOutcomeCallable;
      typedef std::future<RestoreCertificateAuthorityOutcome> RestoreCertificateAuthorityOutcomeCallable;
      typedef std::future<RevokeCertificateOutcome> RevokeCertificateOutcomeCallable;
      typedef std::future<TagCertificateAuthorityOutcome> TagCertificateAuthorityOutcomeCallable;
      typedef std::future<UntagCertificateAuthorityOutcome> UntagCertificateAuthorityOutcomeCallable;
      typedef std::future<UpdateCertificateAuthorityOutcome> UpdateCertificateAuthorityOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ACMPCAClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ACMPCAClient*, const Model::CreateCertificateAuthorityRequest&, const Model::CreateCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::CreateCertificateAuthorityAuditReportRequest&, const Model::CreateCertificateAuthorityAuditReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateAuthorityAuditReportResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::CreatePermissionRequest&, const Model::CreatePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DeleteCertificateAuthorityRequest&, const Model::DeleteCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DeletePermissionRequest&, const Model::DeletePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DescribeCertificateAuthorityRequest&, const Model::DescribeCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::DescribeCertificateAuthorityAuditReportRequest&, const Model::DescribeCertificateAuthorityAuditReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateAuthorityAuditReportResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetCertificateRequest&, const Model::GetCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetCertificateAuthorityCertificateRequest&, const Model::GetCertificateAuthorityCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateAuthorityCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetCertificateAuthorityCsrRequest&, const Model::GetCertificateAuthorityCsrOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateAuthorityCsrResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ImportCertificateAuthorityCertificateRequest&, const Model::ImportCertificateAuthorityCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateAuthorityCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::IssueCertificateRequest&, const Model::IssueCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IssueCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ListCertificateAuthoritiesRequest&, const Model::ListCertificateAuthoritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificateAuthoritiesResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::PutPolicyRequest&, const Model::PutPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPolicyResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::RestoreCertificateAuthorityRequest&, const Model::RestoreCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::RevokeCertificateRequest&, const Model::RevokeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::TagCertificateAuthorityRequest&, const Model::TagCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::UntagCertificateAuthorityRequest&, const Model::UntagCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const ACMPCAClient*, const Model::UpdateCertificateAuthorityRequest&, const Model::UpdateCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCertificateAuthorityResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ACMPCA
} // namespace Aws
