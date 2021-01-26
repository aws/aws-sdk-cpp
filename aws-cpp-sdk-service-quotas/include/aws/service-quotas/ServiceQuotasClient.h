/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
} // namespace Model

  class ServiceQuotasClient;

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

  /**
   * <p>With Service Quotas, you can view and manage your quotas easily as your AWS
   * workloads grow. Quotas, also referred to as limits, are the maximum number of
   * resources that you can create in your AWS account. For more information, see the
   * <a href="https://docs.aws.amazon.com/servicequotas/latest/userguide/">Service
   * Quotas User Guide</a>.</p>
   */
  class AWS_SERVICEQUOTAS_API ServiceQuotasClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceQuotasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ServiceQuotasClient();


        /**
         * <p>Associates your quota request template with your organization. When a new
         * account is created in your organization, the quota increase requests in the
         * template are automatically applied to the account. You can add a quota increase
         * request for any adjustable quota to your template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceQuotaTemplateOutcome AssociateServiceQuotaTemplate(const Model::AssociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Associates your quota request template with your organization. When a new
         * account is created in your organization, the quota increase requests in the
         * template are automatically applied to the account. You can add a quota increase
         * request for any adjustable quota to your template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateServiceQuotaTemplateOutcomeCallable AssociateServiceQuotaTemplateCallable(const Model::AssociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Associates your quota request template with your organization. When a new
         * account is created in your organization, the quota increase requests in the
         * template are automatically applied to the account. You can add a quota increase
         * request for any adjustable quota to your template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateServiceQuotaTemplateAsync(const Model::AssociateServiceQuotaTemplateRequest& request, const AssociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the quota increase request for the specified quota from your quota
         * request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcome DeleteServiceQuotaIncreaseRequestFromTemplate(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Deletes the quota increase request for the specified quota from your quota
         * request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcomeCallable DeleteServiceQuotaIncreaseRequestFromTemplateCallable(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Deletes the quota increase request for the specified quota from your quota
         * request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceQuotaIncreaseRequestFromTemplateAsync(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request, const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables your quota request template. After a template is disabled, the quota
         * increase requests in the template are not applied to new accounts in your
         * organization. Disabling a quota request template does not apply its quota
         * increase requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceQuotaTemplateOutcome DisassociateServiceQuotaTemplate(const Model::DisassociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Disables your quota request template. After a template is disabled, the quota
         * increase requests in the template are not applied to new accounts in your
         * organization. Disabling a quota request template does not apply its quota
         * increase requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateServiceQuotaTemplateOutcomeCallable DisassociateServiceQuotaTemplateCallable(const Model::DisassociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Disables your quota request template. After a template is disabled, the quota
         * increase requests in the template are not applied to new accounts in your
         * organization. Disabling a quota request template does not apply its quota
         * increase requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateServiceQuotaTemplateAsync(const Model::DisassociateServiceQuotaTemplateRequest& request, const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the default value for the specified quota. The default value does
         * not reflect any quota increases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSDefaultServiceQuotaOutcome GetAWSDefaultServiceQuota(const Model::GetAWSDefaultServiceQuotaRequest& request) const;

        /**
         * <p>Retrieves the default value for the specified quota. The default value does
         * not reflect any quota increases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAWSDefaultServiceQuotaOutcomeCallable GetAWSDefaultServiceQuotaCallable(const Model::GetAWSDefaultServiceQuotaRequest& request) const;

        /**
         * <p>Retrieves the default value for the specified quota. The default value does
         * not reflect any quota increases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAWSDefaultServiceQuotaAsync(const Model::GetAWSDefaultServiceQuotaRequest& request, const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of the association for the quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociationForServiceQuotaTemplateOutcome GetAssociationForServiceQuotaTemplate(const Model::GetAssociationForServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Retrieves the status of the association for the quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociationForServiceQuotaTemplateOutcomeCallable GetAssociationForServiceQuotaTemplateCallable(const Model::GetAssociationForServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Retrieves the status of the association for the quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociationForServiceQuotaTemplateAsync(const Model::GetAssociationForServiceQuotaTemplateRequest& request, const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified quota increase
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestedServiceQuotaChangeOutcome GetRequestedServiceQuotaChange(const Model::GetRequestedServiceQuotaChangeRequest& request) const;

        /**
         * <p>Retrieves information about the specified quota increase
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRequestedServiceQuotaChangeOutcomeCallable GetRequestedServiceQuotaChangeCallable(const Model::GetRequestedServiceQuotaChangeRequest& request) const;

        /**
         * <p>Retrieves information about the specified quota increase
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRequestedServiceQuotaChangeAsync(const Model::GetRequestedServiceQuotaChangeRequest& request, const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the applied quota value for the specified quota. For some quotas,
         * only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaOutcome GetServiceQuota(const Model::GetServiceQuotaRequest& request) const;

        /**
         * <p>Retrieves the applied quota value for the specified quota. For some quotas,
         * only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceQuotaOutcomeCallable GetServiceQuotaCallable(const Model::GetServiceQuotaRequest& request) const;

        /**
         * <p>Retrieves the applied quota value for the specified quota. For some quotas,
         * only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceQuotaAsync(const Model::GetServiceQuotaRequest& request, const GetServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified quota increase request in your
         * quota request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcome GetServiceQuotaIncreaseRequestFromTemplate(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Retrieves information about the specified quota increase request in your
         * quota request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcomeCallable GetServiceQuotaIncreaseRequestFromTemplateCallable(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Retrieves information about the specified quota increase request in your
         * quota request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceQuotaIncreaseRequestFromTemplateAsync(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request, const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the default values for the quotas for the specified AWS service. A
         * default value does not reflect any quota increases.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAWSDefaultServiceQuotasOutcome ListAWSDefaultServiceQuotas(const Model::ListAWSDefaultServiceQuotasRequest& request) const;

        /**
         * <p>Lists the default values for the quotas for the specified AWS service. A
         * default value does not reflect any quota increases.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAWSDefaultServiceQuotasOutcomeCallable ListAWSDefaultServiceQuotasCallable(const Model::ListAWSDefaultServiceQuotasRequest& request) const;

        /**
         * <p>Lists the default values for the quotas for the specified AWS service. A
         * default value does not reflect any quota increases.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAWSDefaultServiceQuotasAsync(const Model::ListAWSDefaultServiceQuotasRequest& request, const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the quota increase requests for the specified
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryOutcome ListRequestedServiceQuotaChangeHistory(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) const;

        /**
         * <p>Retrieves the quota increase requests for the specified
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryOutcomeCallable ListRequestedServiceQuotaChangeHistoryCallable(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) const;

        /**
         * <p>Retrieves the quota increase requests for the specified
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRequestedServiceQuotaChangeHistoryAsync(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request, const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the quota increase requests for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ListRequestedServiceQuotaChangeHistoryByQuota(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;

        /**
         * <p>Retrieves the quota increase requests for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcomeCallable ListRequestedServiceQuotaChangeHistoryByQuotaCallable(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;

        /**
         * <p>Retrieves the quota increase requests for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRequestedServiceQuotaChangeHistoryByQuotaAsync(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request, const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the quota increase requests in the specified quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcome ListServiceQuotaIncreaseRequestsInTemplate(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const;

        /**
         * <p>Lists the quota increase requests in the specified quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcomeCallable ListServiceQuotaIncreaseRequestsInTemplateCallable(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const;

        /**
         * <p>Lists the quota increase requests in the specified quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceQuotaIncreaseRequestsInTemplateAsync(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request, const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the applied quota values for the specified AWS service. For some
         * quotas, only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotasOutcome ListServiceQuotas(const Model::ListServiceQuotasRequest& request) const;

        /**
         * <p>Lists the applied quota values for the specified AWS service. For some
         * quotas, only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceQuotasOutcomeCallable ListServiceQuotasCallable(const Model::ListServiceQuotasRequest& request) const;

        /**
         * <p>Lists the applied quota values for the specified AWS service. For some
         * quotas, only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceQuotasAsync(const Model::ListServiceQuotasRequest& request, const ListServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the names and codes for the services integrated with Service
         * Quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the names and codes for the services integrated with Service
         * Quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the names and codes for the services integrated with Service
         * Quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags assigned to the specified applied
         * quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified applied
         * quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified applied
         * quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a quota increase request to your quota request template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome PutServiceQuotaIncreaseRequestIntoTemplate(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;

        /**
         * <p>Adds a quota increase request to your quota request template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable PutServiceQuotaIncreaseRequestIntoTemplateCallable(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;

        /**
         * <p>Adds a quota increase request to your quota request template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutServiceQuotaIncreaseRequestIntoTemplateAsync(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits a quota increase request for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestServiceQuotaIncreaseOutcome RequestServiceQuotaIncrease(const Model::RequestServiceQuotaIncreaseRequest& request) const;

        /**
         * <p>Submits a quota increase request for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestServiceQuotaIncreaseOutcomeCallable RequestServiceQuotaIncreaseCallable(const Model::RequestServiceQuotaIncreaseRequest& request) const;

        /**
         * <p>Submits a quota increase request for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestServiceQuotaIncreaseAsync(const Model::RequestServiceQuotaIncreaseRequest& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to the specified applied quota. You can include one or more tags to
         * add to the quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to the specified applied quota. You can include one or more tags to
         * add to the quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to the specified applied quota. You can include one or more tags to
         * add to the quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the specified applied quota. You can specify one or more
         * tags to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the specified applied quota. You can specify one or more
         * tags to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the specified applied quota. You can specify one or more
         * tags to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateServiceQuotaTemplateAsyncHelper(const Model::AssociateServiceQuotaTemplateRequest& request, const AssociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceQuotaIncreaseRequestFromTemplateAsyncHelper(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request, const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateServiceQuotaTemplateAsyncHelper(const Model::DisassociateServiceQuotaTemplateRequest& request, const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAWSDefaultServiceQuotaAsyncHelper(const Model::GetAWSDefaultServiceQuotaRequest& request, const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssociationForServiceQuotaTemplateAsyncHelper(const Model::GetAssociationForServiceQuotaTemplateRequest& request, const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRequestedServiceQuotaChangeAsyncHelper(const Model::GetRequestedServiceQuotaChangeRequest& request, const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceQuotaAsyncHelper(const Model::GetServiceQuotaRequest& request, const GetServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceQuotaIncreaseRequestFromTemplateAsyncHelper(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request, const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAWSDefaultServiceQuotasAsyncHelper(const Model::ListAWSDefaultServiceQuotasRequest& request, const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRequestedServiceQuotaChangeHistoryAsyncHelper(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request, const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRequestedServiceQuotaChangeHistoryByQuotaAsyncHelper(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request, const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceQuotaIncreaseRequestsInTemplateAsyncHelper(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request, const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServiceQuotasAsyncHelper(const Model::ListServiceQuotasRequest& request, const ListServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutServiceQuotaIncreaseRequestIntoTemplateAsyncHelper(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestServiceQuotaIncreaseAsyncHelper(const Model::RequestServiceQuotaIncreaseRequest& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ServiceQuotas
} // namespace Aws
