/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateResult.h>
#include <aws/service-quotas/model/RequestServiceQuotaIncreaseResult.h>
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
        class PutServiceQuotaIncreaseRequestIntoTemplateRequest;
        class RequestServiceQuotaIncreaseRequest;

        typedef Aws::Utils::Outcome<AssociateServiceQuotaTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> AssociateServiceQuotaTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceQuotaIncreaseRequestFromTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> DeleteServiceQuotaIncreaseRequestFromTemplateOutcome;
        typedef Aws::Utils::Outcome<DisassociateServiceQuotaTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> DisassociateServiceQuotaTemplateOutcome;
        typedef Aws::Utils::Outcome<GetAWSDefaultServiceQuotaResult, Aws::Client::AWSError<ServiceQuotasErrors>> GetAWSDefaultServiceQuotaOutcome;
        typedef Aws::Utils::Outcome<GetAssociationForServiceQuotaTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> GetAssociationForServiceQuotaTemplateOutcome;
        typedef Aws::Utils::Outcome<GetRequestedServiceQuotaChangeResult, Aws::Client::AWSError<ServiceQuotasErrors>> GetRequestedServiceQuotaChangeOutcome;
        typedef Aws::Utils::Outcome<GetServiceQuotaResult, Aws::Client::AWSError<ServiceQuotasErrors>> GetServiceQuotaOutcome;
        typedef Aws::Utils::Outcome<GetServiceQuotaIncreaseRequestFromTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> GetServiceQuotaIncreaseRequestFromTemplateOutcome;
        typedef Aws::Utils::Outcome<ListAWSDefaultServiceQuotasResult, Aws::Client::AWSError<ServiceQuotasErrors>> ListAWSDefaultServiceQuotasOutcome;
        typedef Aws::Utils::Outcome<ListRequestedServiceQuotaChangeHistoryResult, Aws::Client::AWSError<ServiceQuotasErrors>> ListRequestedServiceQuotaChangeHistoryOutcome;
        typedef Aws::Utils::Outcome<ListRequestedServiceQuotaChangeHistoryByQuotaResult, Aws::Client::AWSError<ServiceQuotasErrors>> ListRequestedServiceQuotaChangeHistoryByQuotaOutcome;
        typedef Aws::Utils::Outcome<ListServiceQuotaIncreaseRequestsInTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> ListServiceQuotaIncreaseRequestsInTemplateOutcome;
        typedef Aws::Utils::Outcome<ListServiceQuotasResult, Aws::Client::AWSError<ServiceQuotasErrors>> ListServiceQuotasOutcome;
        typedef Aws::Utils::Outcome<ListServicesResult, Aws::Client::AWSError<ServiceQuotasErrors>> ListServicesOutcome;
        typedef Aws::Utils::Outcome<PutServiceQuotaIncreaseRequestIntoTemplateResult, Aws::Client::AWSError<ServiceQuotasErrors>> PutServiceQuotaIncreaseRequestIntoTemplateOutcome;
        typedef Aws::Utils::Outcome<RequestServiceQuotaIncreaseResult, Aws::Client::AWSError<ServiceQuotasErrors>> RequestServiceQuotaIncreaseOutcome;

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
        typedef std::future<PutServiceQuotaIncreaseRequestIntoTemplateOutcome> PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable;
        typedef std::future<RequestServiceQuotaIncreaseOutcome> RequestServiceQuotaIncreaseOutcomeCallable;
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
    typedef std::function<void(const ServiceQuotasClient*, const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest&, const Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler;
    typedef std::function<void(const ServiceQuotasClient*, const Model::RequestServiceQuotaIncreaseRequest&, const Model::RequestServiceQuotaIncreaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestServiceQuotaIncreaseResponseReceivedHandler;

  /**
   * <p> Service Quotas is a web service that you can use to manage many of your AWS
   * service quotas. Quotas, also referred to as limits, are the maximum values for a
   * resource, item, or operation. This guide provide descriptions of the Service
   * Quotas actions that you can call from an API. For the Service Quotas user guide,
   * which explains how to use Service Quotas from the console, see <a
   * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">What
   * is Service Quotas</a>. </p> <note> <p>AWS provides SDKs that consist of
   * libraries and sample code for programming languages and platforms (Java, Ruby,
   * .NET, iOS, Android, etc...,). The SDKs provide a convenient way to create
   * programmatic access to Service Quotas and AWS. For information about the AWS
   * SDKs, including how to download and install them, see the <a
   * href="https://docs.aws.amazon.com/aws.amazon.com/tools">Tools for Amazon Web
   * Services</a> page.</p> </note>
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

        inline virtual const char* GetServiceClientName() const override { return "Service Quotas"; }


        /**
         * <p>Associates the Service Quotas template with your organization so that when
         * new accounts are created in your organization, the template submits increase
         * requests for the specified service quotas. Use the Service Quotas template to
         * request an increase for any adjustable quota value. After you define the Service
         * Quotas template, use this operation to associate, or enable, the template.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceQuotaTemplateOutcome AssociateServiceQuotaTemplate(const Model::AssociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Associates the Service Quotas template with your organization so that when
         * new accounts are created in your organization, the template submits increase
         * requests for the specified service quotas. Use the Service Quotas template to
         * request an increase for any adjustable quota value. After you define the Service
         * Quotas template, use this operation to associate, or enable, the template.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateServiceQuotaTemplateOutcomeCallable AssociateServiceQuotaTemplateCallable(const Model::AssociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Associates the Service Quotas template with your organization so that when
         * new accounts are created in your organization, the template submits increase
         * requests for the specified service quotas. Use the Service Quotas template to
         * request an increase for any adjustable quota value. After you define the Service
         * Quotas template, use this operation to associate, or enable, the template.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/AssociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateServiceQuotaTemplateAsync(const Model::AssociateServiceQuotaTemplateRequest& request, const AssociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a service quota increase request from the Service Quotas template.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcome DeleteServiceQuotaIncreaseRequestFromTemplate(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Removes a service quota increase request from the Service Quotas template.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcomeCallable DeleteServiceQuotaIncreaseRequestFromTemplateCallable(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Removes a service quota increase request from the Service Quotas template.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceQuotaIncreaseRequestFromTemplateAsync(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request, const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the Service Quotas template. Once the template is disabled, it does
         * not request quota increases for new accounts in your organization. Disabling the
         * quota template does not apply the quota increase requests from the template.
         * </p> <p> <b>Related operations</b> </p> <ul> <li> <p>To enable the quota
         * template, call <a>AssociateServiceQuotaTemplate</a>. </p> </li> <li> <p>To
         * delete a specific service quota from the template, use
         * <a>DeleteServiceQuotaIncreaseRequestFromTemplate</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceQuotaTemplateOutcome DisassociateServiceQuotaTemplate(const Model::DisassociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Disables the Service Quotas template. Once the template is disabled, it does
         * not request quota increases for new accounts in your organization. Disabling the
         * quota template does not apply the quota increase requests from the template.
         * </p> <p> <b>Related operations</b> </p> <ul> <li> <p>To enable the quota
         * template, call <a>AssociateServiceQuotaTemplate</a>. </p> </li> <li> <p>To
         * delete a specific service quota from the template, use
         * <a>DeleteServiceQuotaIncreaseRequestFromTemplate</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateServiceQuotaTemplateOutcomeCallable DisassociateServiceQuotaTemplateCallable(const Model::DisassociateServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Disables the Service Quotas template. Once the template is disabled, it does
         * not request quota increases for new accounts in your organization. Disabling the
         * quota template does not apply the quota increase requests from the template.
         * </p> <p> <b>Related operations</b> </p> <ul> <li> <p>To enable the quota
         * template, call <a>AssociateServiceQuotaTemplate</a>. </p> </li> <li> <p>To
         * delete a specific service quota from the template, use
         * <a>DeleteServiceQuotaIncreaseRequestFromTemplate</a>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DisassociateServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateServiceQuotaTemplateAsync(const Model::DisassociateServiceQuotaTemplateRequest& request, const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the default service quotas values. The Value returned for each
         * quota is the AWS default value, even if the quotas have been increased..
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSDefaultServiceQuotaOutcome GetAWSDefaultServiceQuota(const Model::GetAWSDefaultServiceQuotaRequest& request) const;

        /**
         * <p>Retrieves the default service quotas values. The Value returned for each
         * quota is the AWS default value, even if the quotas have been increased..
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAWSDefaultServiceQuotaOutcomeCallable GetAWSDefaultServiceQuotaCallable(const Model::GetAWSDefaultServiceQuotaRequest& request) const;

        /**
         * <p>Retrieves the default service quotas values. The Value returned for each
         * quota is the AWS default value, even if the quotas have been increased..
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAWSDefaultServiceQuotaAsync(const Model::GetAWSDefaultServiceQuotaRequest& request, const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>ServiceQuotaTemplateAssociationStatus</code> value from
         * the service. Use this action to determine if the Service Quota template is
         * associated, or enabled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociationForServiceQuotaTemplateOutcome GetAssociationForServiceQuotaTemplate(const Model::GetAssociationForServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Retrieves the <code>ServiceQuotaTemplateAssociationStatus</code> value from
         * the service. Use this action to determine if the Service Quota template is
         * associated, or enabled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociationForServiceQuotaTemplateOutcomeCallable GetAssociationForServiceQuotaTemplateCallable(const Model::GetAssociationForServiceQuotaTemplateRequest& request) const;

        /**
         * <p>Retrieves the <code>ServiceQuotaTemplateAssociationStatus</code> value from
         * the service. Use this action to determine if the Service Quota template is
         * associated, or enabled. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociationForServiceQuotaTemplateAsync(const Model::GetAssociationForServiceQuotaTemplateRequest& request, const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details for a particular increase request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestedServiceQuotaChangeOutcome GetRequestedServiceQuotaChange(const Model::GetRequestedServiceQuotaChangeRequest& request) const;

        /**
         * <p>Retrieves the details for a particular increase request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRequestedServiceQuotaChangeOutcomeCallable GetRequestedServiceQuotaChangeCallable(const Model::GetRequestedServiceQuotaChangeRequest& request) const;

        /**
         * <p>Retrieves the details for a particular increase request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRequestedServiceQuotaChangeAsync(const Model::GetRequestedServiceQuotaChangeRequest& request, const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details for the specified service quota. This operation provides
         * a different Value than the <code>GetAWSDefaultServiceQuota</code> operation.
         * This operation returns the applied value for each quota.
         * <code>GetAWSDefaultServiceQuota</code> returns the default AWS value for each
         * quota. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaOutcome GetServiceQuota(const Model::GetServiceQuotaRequest& request) const;

        /**
         * <p>Returns the details for the specified service quota. This operation provides
         * a different Value than the <code>GetAWSDefaultServiceQuota</code> operation.
         * This operation returns the applied value for each quota.
         * <code>GetAWSDefaultServiceQuota</code> returns the default AWS value for each
         * quota. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceQuotaOutcomeCallable GetServiceQuotaCallable(const Model::GetServiceQuotaRequest& request) const;

        /**
         * <p>Returns the details for the specified service quota. This operation provides
         * a different Value than the <code>GetAWSDefaultServiceQuota</code> operation.
         * This operation returns the applied value for each quota.
         * <code>GetAWSDefaultServiceQuota</code> returns the default AWS value for each
         * quota. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceQuotaAsync(const Model::GetServiceQuotaRequest& request, const GetServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the service quota increase request in your
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcome GetServiceQuotaIncreaseRequestFromTemplate(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Returns the details of the service quota increase request in your
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcomeCallable GetServiceQuotaIncreaseRequestFromTemplateCallable(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;

        /**
         * <p>Returns the details of the service quota increase request in your
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceQuotaIncreaseRequestFromTemplateAsync(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request, const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all default service quotas for the specified AWS service or all AWS
         * services. ListAWSDefaultServiceQuotas is similar to <a>ListServiceQuotas</a>
         * except for the Value object. The Value object returned by
         * <code>ListAWSDefaultServiceQuotas</code> is the default value assigned by AWS.
         * This request returns a list of all service quotas for the specified service. The
         * listing of each you'll see the default values are the values that AWS provides
         * for the quotas. </p> <note> <p>Always check the <code>NextToken</code> response
         * parameter when calling any of the <code>List*</code> operations. These
         * operations can return an unexpected list of results, even when there are more
         * results available. When this happens, the <code>NextToken</code> response
         * parameter contains a value to pass the next call to the same API to request the
         * next part of the list.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAWSDefaultServiceQuotasOutcome ListAWSDefaultServiceQuotas(const Model::ListAWSDefaultServiceQuotasRequest& request) const;

        /**
         * <p>Lists all default service quotas for the specified AWS service or all AWS
         * services. ListAWSDefaultServiceQuotas is similar to <a>ListServiceQuotas</a>
         * except for the Value object. The Value object returned by
         * <code>ListAWSDefaultServiceQuotas</code> is the default value assigned by AWS.
         * This request returns a list of all service quotas for the specified service. The
         * listing of each you'll see the default values are the values that AWS provides
         * for the quotas. </p> <note> <p>Always check the <code>NextToken</code> response
         * parameter when calling any of the <code>List*</code> operations. These
         * operations can return an unexpected list of results, even when there are more
         * results available. When this happens, the <code>NextToken</code> response
         * parameter contains a value to pass the next call to the same API to request the
         * next part of the list.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAWSDefaultServiceQuotasOutcomeCallable ListAWSDefaultServiceQuotasCallable(const Model::ListAWSDefaultServiceQuotasRequest& request) const;

        /**
         * <p>Lists all default service quotas for the specified AWS service or all AWS
         * services. ListAWSDefaultServiceQuotas is similar to <a>ListServiceQuotas</a>
         * except for the Value object. The Value object returned by
         * <code>ListAWSDefaultServiceQuotas</code> is the default value assigned by AWS.
         * This request returns a list of all service quotas for the specified service. The
         * listing of each you'll see the default values are the values that AWS provides
         * for the quotas. </p> <note> <p>Always check the <code>NextToken</code> response
         * parameter when calling any of the <code>List*</code> operations. These
         * operations can return an unexpected list of results, even when there are more
         * results available. When this happens, the <code>NextToken</code> response
         * parameter contains a value to pass the next call to the same API to request the
         * next part of the list.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAWSDefaultServiceQuotasAsync(const Model::ListAWSDefaultServiceQuotasRequest& request, const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a list of the changes to quotas for a service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryOutcome ListRequestedServiceQuotaChangeHistory(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) const;

        /**
         * <p>Requests a list of the changes to quotas for a service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryOutcomeCallable ListRequestedServiceQuotaChangeHistoryCallable(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) const;

        /**
         * <p>Requests a list of the changes to quotas for a service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRequestedServiceQuotaChangeHistoryAsync(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request, const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a list of the changes to specific service quotas. This command
         * provides additional granularity over the
         * <code>ListRequestedServiceQuotaChangeHistory</code> command. Once a quota change
         * request has reached <code>CASE_CLOSED, APPROVED,</code> or <code>DENIED</code>,
         * the history has been kept for 90 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ListRequestedServiceQuotaChangeHistoryByQuota(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;

        /**
         * <p>Requests a list of the changes to specific service quotas. This command
         * provides additional granularity over the
         * <code>ListRequestedServiceQuotaChangeHistory</code> command. Once a quota change
         * request has reached <code>CASE_CLOSED, APPROVED,</code> or <code>DENIED</code>,
         * the history has been kept for 90 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcomeCallable ListRequestedServiceQuotaChangeHistoryByQuotaCallable(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;

        /**
         * <p>Requests a list of the changes to specific service quotas. This command
         * provides additional granularity over the
         * <code>ListRequestedServiceQuotaChangeHistory</code> command. Once a quota change
         * request has reached <code>CASE_CLOSED, APPROVED,</code> or <code>DENIED</code>,
         * the history has been kept for 90 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRequestedServiceQuotaChangeHistoryByQuotaAsync(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request, const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the quota increase requests in the template. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcome ListServiceQuotaIncreaseRequestsInTemplate(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const;

        /**
         * <p>Returns a list of the quota increase requests in the template. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcomeCallable ListServiceQuotaIncreaseRequestsInTemplateCallable(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const;

        /**
         * <p>Returns a list of the quota increase requests in the template. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceQuotaIncreaseRequestsInTemplateAsync(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request, const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all service quotas for the specified AWS service. This request returns
         * a list of the service quotas for the specified service. you'll see the default
         * values are the values that AWS provides for the quotas. </p> <note> <p>Always
         * check the <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can return an unexpected list of
         * results, even when there are more results available. When this happens, the
         * <code>NextToken</code> response parameter contains a value to pass the next call
         * to the same API to request the next part of the list.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotasOutcome ListServiceQuotas(const Model::ListServiceQuotasRequest& request) const;

        /**
         * <p>Lists all service quotas for the specified AWS service. This request returns
         * a list of the service quotas for the specified service. you'll see the default
         * values are the values that AWS provides for the quotas. </p> <note> <p>Always
         * check the <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can return an unexpected list of
         * results, even when there are more results available. When this happens, the
         * <code>NextToken</code> response parameter contains a value to pass the next call
         * to the same API to request the next part of the list.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServiceQuotasOutcomeCallable ListServiceQuotasCallable(const Model::ListServiceQuotasRequest& request) const;

        /**
         * <p>Lists all service quotas for the specified AWS service. This request returns
         * a list of the service quotas for the specified service. you'll see the default
         * values are the values that AWS provides for the quotas. </p> <note> <p>Always
         * check the <code>NextToken</code> response parameter when calling any of the
         * <code>List*</code> operations. These operations can return an unexpected list of
         * results, even when there are more results available. When this happens, the
         * <code>NextToken</code> response parameter contains a value to pass the next call
         * to the same API to request the next part of the list.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServiceQuotasAsync(const Model::ListServiceQuotasRequest& request, const ListServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AWS services available in Service Quotas. Not all AWS services are
         * available in Service Quotas. To list the see the list of the service quotas for
         * a specific service, use <a>ListServiceQuotas</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the AWS services available in Service Quotas. Not all AWS services are
         * available in Service Quotas. To list the see the list of the service quotas for
         * a specific service, use <a>ListServiceQuotas</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * <p>Lists the AWS services available in Service Quotas. Not all AWS services are
         * available in Service Quotas. To list the see the list of the service quotas for
         * a specific service, use <a>ListServiceQuotas</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines and adds a quota to the service quota template. To add a quota to the
         * template, you must provide the <code>ServiceCode</code>, <code>QuotaCode</code>,
         * <code>AwsRegion</code>, and <code>DesiredValue</code>. Once you add a quota to
         * the template, use <a>ListServiceQuotaIncreaseRequestsInTemplate</a> to see the
         * list of quotas in the template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome PutServiceQuotaIncreaseRequestIntoTemplate(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;

        /**
         * <p>Defines and adds a quota to the service quota template. To add a quota to the
         * template, you must provide the <code>ServiceCode</code>, <code>QuotaCode</code>,
         * <code>AwsRegion</code>, and <code>DesiredValue</code>. Once you add a quota to
         * the template, use <a>ListServiceQuotaIncreaseRequestsInTemplate</a> to see the
         * list of quotas in the template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable PutServiceQuotaIncreaseRequestIntoTemplateCallable(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;

        /**
         * <p>Defines and adds a quota to the service quota template. To add a quota to the
         * template, you must provide the <code>ServiceCode</code>, <code>QuotaCode</code>,
         * <code>AwsRegion</code>, and <code>DesiredValue</code>. Once you add a quota to
         * the template, use <a>ListServiceQuotaIncreaseRequestsInTemplate</a> to see the
         * list of quotas in the template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutServiceQuotaIncreaseRequestIntoTemplateAsync(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a service quota increase request. The response to
         * this command provides the details in the <a>RequestedServiceQuotaChange</a>
         * object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestServiceQuotaIncreaseOutcome RequestServiceQuotaIncrease(const Model::RequestServiceQuotaIncreaseRequest& request) const;

        /**
         * <p>Retrieves the details of a service quota increase request. The response to
         * this command provides the details in the <a>RequestedServiceQuotaChange</a>
         * object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestServiceQuotaIncreaseOutcomeCallable RequestServiceQuotaIncreaseCallable(const Model::RequestServiceQuotaIncreaseRequest& request) const;

        /**
         * <p>Retrieves the details of a service quota increase request. The response to
         * this command provides the details in the <a>RequestedServiceQuotaChange</a>
         * object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestServiceQuotaIncreaseAsync(const Model::RequestServiceQuotaIncreaseRequest& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
        void PutServiceQuotaIncreaseRequestIntoTemplateAsyncHelper(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestServiceQuotaIncreaseAsyncHelper(const Model::RequestServiceQuotaIncreaseRequest& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ServiceQuotas
} // namespace Aws
