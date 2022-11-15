/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/service-quotas/ServiceQuotasErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/service-quotas/ServiceQuotasEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ServiceQuotasClient header */
#include <aws/service-quotas/model/AssociateServiceQuotaTemplateResult.h>
#include <aws/service-quotas/model/DeleteServiceQuotaIncreaseRequestFromTemplateResult.h>
#include <aws/service-quotas/model/DisassociateServiceQuotaTemplateResult.h>
#include <aws/service-quotas/model/GetAWSDefaultServiceQuotaResult.h>
#include <aws/service-quotas/model/GetAssociationForServiceQuotaTemplateResult.h>
#include <aws/service-quotas/model/GetRequestedServiceQuotaChangeResult.h>
#include <aws/service-quotas/model/GetServiceQuotaResult.h>
#include <aws/service-quotas/model/GetServiceQuotaIncreaseRequestFromTemplateResult.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasResult.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryResult.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaResult.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplateResult.h>
#include <aws/service-quotas/model/ListServiceQuotasResult.h>
#include <aws/service-quotas/model/ListServicesResult.h>
#include <aws/service-quotas/model/ListTagsForResourceResult.h>
#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateResult.h>
#include <aws/service-quotas/model/RequestServiceQuotaIncreaseResult.h>
#include <aws/service-quotas/model/TagResourceResult.h>
#include <aws/service-quotas/model/UntagResourceResult.h>
/* End of service model headers required in ServiceQuotasClient header */

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

  namespace ServiceQuotas
  {
    using ServiceQuotasClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ServiceQuotasEndpointProviderBase = Aws::ServiceQuotas::Endpoint::ServiceQuotasEndpointProviderBase;
    using ServiceQuotasEndpointProvider = Aws::ServiceQuotas::Endpoint::ServiceQuotasEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ServiceQuotasClient header */
      class AssociateServiceQuotaTemplateRequest;
      class DeleteServiceQuotaIncreaseRequestFromTemplateRequest;
      class DisassociateServiceQuotaTemplateRequest;
      class GetAWSDefaultServiceQuotaRequest;
      class GetAssociationForServiceQuotaTemplateRequest;
      class GetRequestedServiceQuotaChangeRequest;
      class GetServiceQuotaRequest;
      class GetServiceQuotaIncreaseRequestFromTemplateRequest;
      class ListAWSDefaultServiceQuotasRequest;
      class ListRequestedServiceQuotaChangeHistoryRequest;
      class ListRequestedServiceQuotaChangeHistoryByQuotaRequest;
      class ListServiceQuotaIncreaseRequestsInTemplateRequest;
      class ListServiceQuotasRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class PutServiceQuotaIncreaseRequestIntoTemplateRequest;
      class RequestServiceQuotaIncreaseRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in ServiceQuotasClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateServiceQuotaTemplateResult, ServiceQuotasError> AssociateServiceQuotaTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceQuotaIncreaseRequestFromTemplateResult, ServiceQuotasError> DeleteServiceQuotaIncreaseRequestFromTemplateOutcome;
      typedef Aws::Utils::Outcome<DisassociateServiceQuotaTemplateResult, ServiceQuotasError> DisassociateServiceQuotaTemplateOutcome;
      typedef Aws::Utils::Outcome<GetAWSDefaultServiceQuotaResult, ServiceQuotasError> GetAWSDefaultServiceQuotaOutcome;
      typedef Aws::Utils::Outcome<GetAssociationForServiceQuotaTemplateResult, ServiceQuotasError> GetAssociationForServiceQuotaTemplateOutcome;
      typedef Aws::Utils::Outcome<GetRequestedServiceQuotaChangeResult, ServiceQuotasError> GetRequestedServiceQuotaChangeOutcome;
      typedef Aws::Utils::Outcome<GetServiceQuotaResult, ServiceQuotasError> GetServiceQuotaOutcome;
      typedef Aws::Utils::Outcome<GetServiceQuotaIncreaseRequestFromTemplateResult, ServiceQuotasError> GetServiceQuotaIncreaseRequestFromTemplateOutcome;
      typedef Aws::Utils::Outcome<ListAWSDefaultServiceQuotasResult, ServiceQuotasError> ListAWSDefaultServiceQuotasOutcome;
      typedef Aws::Utils::Outcome<ListRequestedServiceQuotaChangeHistoryResult, ServiceQuotasError> ListRequestedServiceQuotaChangeHistoryOutcome;
      typedef Aws::Utils::Outcome<ListRequestedServiceQuotaChangeHistoryByQuotaResult, ServiceQuotasError> ListRequestedServiceQuotaChangeHistoryByQuotaOutcome;
      typedef Aws::Utils::Outcome<ListServiceQuotaIncreaseRequestsInTemplateResult, ServiceQuotasError> ListServiceQuotaIncreaseRequestsInTemplateOutcome;
      typedef Aws::Utils::Outcome<ListServiceQuotasResult, ServiceQuotasError> ListServiceQuotasOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, ServiceQuotasError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ServiceQuotasError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutServiceQuotaIncreaseRequestIntoTemplateResult, ServiceQuotasError> PutServiceQuotaIncreaseRequestIntoTemplateOutcome;
      typedef Aws::Utils::Outcome<RequestServiceQuotaIncreaseResult, ServiceQuotasError> RequestServiceQuotaIncreaseOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ServiceQuotasError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ServiceQuotasError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateServiceQuotaTemplateOutcome> AssociateServiceQuotaTemplateOutcomeCallable;
      typedef std::future<DeleteServiceQuotaIncreaseRequestFromTemplateOutcome> DeleteServiceQuotaIncreaseRequestFromTemplateOutcomeCallable;
      typedef std::future<DisassociateServiceQuotaTemplateOutcome> DisassociateServiceQuotaTemplateOutcomeCallable;
      typedef std::future<GetAWSDefaultServiceQuotaOutcome> GetAWSDefaultServiceQuotaOutcomeCallable;
      typedef std::future<GetAssociationForServiceQuotaTemplateOutcome> GetAssociationForServiceQuotaTemplateOutcomeCallable;
      typedef std::future<GetRequestedServiceQuotaChangeOutcome> GetRequestedServiceQuotaChangeOutcomeCallable;
      typedef std::future<GetServiceQuotaOutcome> GetServiceQuotaOutcomeCallable;
      typedef std::future<GetServiceQuotaIncreaseRequestFromTemplateOutcome> GetServiceQuotaIncreaseRequestFromTemplateOutcomeCallable;
      typedef std::future<ListAWSDefaultServiceQuotasOutcome> ListAWSDefaultServiceQuotasOutcomeCallable;
      typedef std::future<ListRequestedServiceQuotaChangeHistoryOutcome> ListRequestedServiceQuotaChangeHistoryOutcomeCallable;
      typedef std::future<ListRequestedServiceQuotaChangeHistoryByQuotaOutcome> ListRequestedServiceQuotaChangeHistoryByQuotaOutcomeCallable;
      typedef std::future<ListServiceQuotaIncreaseRequestsInTemplateOutcome> ListServiceQuotaIncreaseRequestsInTemplateOutcomeCallable;
      typedef std::future<ListServiceQuotasOutcome> ListServiceQuotasOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutServiceQuotaIncreaseRequestIntoTemplateOutcome> PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable;
      typedef std::future<RequestServiceQuotaIncreaseOutcome> RequestServiceQuotaIncreaseOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ServiceQuotasClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ServiceQuotasClient*, const Model::AssociateServiceQuotaTemplateRequest&, const Model::AssociateServiceQuotaTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateServiceQuotaTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest&, const Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::DisassociateServiceQuotaTemplateRequest&, const Model::DisassociateServiceQuotaTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateServiceQuotaTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::GetAWSDefaultServiceQuotaRequest&, const Model::GetAWSDefaultServiceQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAWSDefaultServiceQuotaResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::GetAssociationForServiceQuotaTemplateRequest&, const Model::GetAssociationForServiceQuotaTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssociationForServiceQuotaTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::GetRequestedServiceQuotaChangeRequest&, const Model::GetRequestedServiceQuotaChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRequestedServiceQuotaChangeResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::GetServiceQuotaRequest&, const Model::GetServiceQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceQuotaResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest&, const Model::GetServiceQuotaIncreaseRequestFromTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListAWSDefaultServiceQuotasRequest&, const Model::ListAWSDefaultServiceQuotasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAWSDefaultServiceQuotasResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListRequestedServiceQuotaChangeHistoryRequest&, const Model::ListRequestedServiceQuotaChangeHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest&, const Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest&, const Model::ListServiceQuotaIncreaseRequestsInTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListServiceQuotasRequest&, const Model::ListServiceQuotasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceQuotasResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest&, const Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::RequestServiceQuotaIncreaseRequest&, const Model::RequestServiceQuotaIncreaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestServiceQuotaIncreaseResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ServiceQuotas
} // namespace Aws
