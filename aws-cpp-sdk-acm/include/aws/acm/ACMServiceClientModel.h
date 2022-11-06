/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/acm/ACMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/acm/ACMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ACMClient header */
#include <aws/acm/model/DescribeCertificateResult.h>
#include <aws/acm/model/ExportCertificateResult.h>
#include <aws/acm/model/GetAccountConfigurationResult.h>
#include <aws/acm/model/GetCertificateResult.h>
#include <aws/acm/model/ImportCertificateResult.h>
#include <aws/acm/model/ListCertificatesResult.h>
#include <aws/acm/model/ListTagsForCertificateResult.h>
#include <aws/acm/model/RequestCertificateResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ACMClient header */

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

  namespace ACM
  {
    using ACMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ACMEndpointProviderBase = Aws::ACM::Endpoint::ACMEndpointProviderBase;
    using ACMEndpointProvider = Aws::ACM::Endpoint::ACMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ACMClient header */
      class AddTagsToCertificateRequest;
      class DeleteCertificateRequest;
      class DescribeCertificateRequest;
      class ExportCertificateRequest;
      class GetCertificateRequest;
      class ImportCertificateRequest;
      class ListCertificatesRequest;
      class ListTagsForCertificateRequest;
      class PutAccountConfigurationRequest;
      class RemoveTagsFromCertificateRequest;
      class RenewCertificateRequest;
      class RequestCertificateRequest;
      class ResendValidationEmailRequest;
      class UpdateCertificateOptionsRequest;
      /* End of service model forward declarations required in ACMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> AddTagsToCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> DeleteCertificateOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificateResult, ACMError> DescribeCertificateOutcome;
      typedef Aws::Utils::Outcome<ExportCertificateResult, ACMError> ExportCertificateOutcome;
      typedef Aws::Utils::Outcome<GetAccountConfigurationResult, ACMError> GetAccountConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetCertificateResult, ACMError> GetCertificateOutcome;
      typedef Aws::Utils::Outcome<ImportCertificateResult, ACMError> ImportCertificateOutcome;
      typedef Aws::Utils::Outcome<ListCertificatesResult, ACMError> ListCertificatesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForCertificateResult, ACMError> ListTagsForCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> PutAccountConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> RemoveTagsFromCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> RenewCertificateOutcome;
      typedef Aws::Utils::Outcome<RequestCertificateResult, ACMError> RequestCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> ResendValidationEmailOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ACMError> UpdateCertificateOptionsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsToCertificateOutcome> AddTagsToCertificateOutcomeCallable;
      typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
      typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
      typedef std::future<ExportCertificateOutcome> ExportCertificateOutcomeCallable;
      typedef std::future<GetAccountConfigurationOutcome> GetAccountConfigurationOutcomeCallable;
      typedef std::future<GetCertificateOutcome> GetCertificateOutcomeCallable;
      typedef std::future<ImportCertificateOutcome> ImportCertificateOutcomeCallable;
      typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
      typedef std::future<ListTagsForCertificateOutcome> ListTagsForCertificateOutcomeCallable;
      typedef std::future<PutAccountConfigurationOutcome> PutAccountConfigurationOutcomeCallable;
      typedef std::future<RemoveTagsFromCertificateOutcome> RemoveTagsFromCertificateOutcomeCallable;
      typedef std::future<RenewCertificateOutcome> RenewCertificateOutcomeCallable;
      typedef std::future<RequestCertificateOutcome> RequestCertificateOutcomeCallable;
      typedef std::future<ResendValidationEmailOutcome> ResendValidationEmailOutcomeCallable;
      typedef std::future<UpdateCertificateOptionsOutcome> UpdateCertificateOptionsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ACMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ACMClient*, const Model::AddTagsToCertificateRequest&, const Model::AddTagsToCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ExportCertificateRequest&, const Model::ExportCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::GetAccountConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountConfigurationResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::GetCertificateRequest&, const Model::GetCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ImportCertificateRequest&, const Model::ImportCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ListTagsForCertificateRequest&, const Model::ListTagsForCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::PutAccountConfigurationRequest&, const Model::PutAccountConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountConfigurationResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::RemoveTagsFromCertificateRequest&, const Model::RemoveTagsFromCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::RenewCertificateRequest&, const Model::RenewCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenewCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::RequestCertificateRequest&, const Model::RequestCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ResendValidationEmailRequest&, const Model::ResendValidationEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendValidationEmailResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::UpdateCertificateOptionsRequest&, const Model::UpdateCertificateOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCertificateOptionsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ACM
} // namespace Aws
