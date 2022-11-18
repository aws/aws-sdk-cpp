/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/service-quotas/ServiceQuotasServiceClientModel.h>
#include <aws/service-quotas/ServiceQuotasLegacyAsyncMacros.h>

namespace Aws
{
namespace ServiceQuotas
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration(),
                            std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceQuotasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration = Aws::ServiceQuotas::ServiceQuotasClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceQuotasClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceQuotasClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServiceQuotasClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Deletes the quota increase request for the specified quota from your quota
         * request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/DeleteServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceQuotaIncreaseRequestFromTemplateOutcome DeleteServiceQuotaIncreaseRequestFromTemplate(const Model::DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const;


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
         * <p>Retrieves the default value for the specified quota. The default value does
         * not reflect any quota increases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAWSDefaultServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSDefaultServiceQuotaOutcome GetAWSDefaultServiceQuota(const Model::GetAWSDefaultServiceQuotaRequest& request) const;


        /**
         * <p>Retrieves the status of the association for the quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetAssociationForServiceQuotaTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociationForServiceQuotaTemplateOutcome GetAssociationForServiceQuotaTemplate(const Model::GetAssociationForServiceQuotaTemplateRequest& request) const;


        /**
         * <p>Retrieves information about the specified quota increase
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetRequestedServiceQuotaChange">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRequestedServiceQuotaChangeOutcome GetRequestedServiceQuotaChange(const Model::GetRequestedServiceQuotaChangeRequest& request) const;


        /**
         * <p>Retrieves the applied quota value for the specified quota. For some quotas,
         * only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaOutcome GetServiceQuota(const Model::GetServiceQuotaRequest& request) const;


        /**
         * <p>Retrieves information about the specified quota increase request in your
         * quota request template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/GetServiceQuotaIncreaseRequestFromTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceQuotaIncreaseRequestFromTemplateOutcome GetServiceQuotaIncreaseRequestFromTemplate(const Model::GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const;


        /**
         * <p>Lists the default values for the quotas for the specified AWS service. A
         * default value does not reflect any quota increases.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListAWSDefaultServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAWSDefaultServiceQuotasOutcome ListAWSDefaultServiceQuotas(const Model::ListAWSDefaultServiceQuotasRequest& request) const;


        /**
         * <p>Retrieves the quota increase requests for the specified
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryOutcome ListRequestedServiceQuotaChangeHistory(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) const;


        /**
         * <p>Retrieves the quota increase requests for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListRequestedServiceQuotaChangeHistoryByQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ListRequestedServiceQuotaChangeHistoryByQuota(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const;


        /**
         * <p>Lists the quota increase requests in the specified quota request
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotaIncreaseRequestsInTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotaIncreaseRequestsInTemplateOutcome ListServiceQuotaIncreaseRequestsInTemplate(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const;


        /**
         * <p>Lists the applied quota values for the specified AWS service. For some
         * quotas, only the default values are available. If the applied quota value is not
         * available for a quota, the quota is not retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServiceQuotas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceQuotasOutcome ListServiceQuotas(const Model::ListServiceQuotasRequest& request) const;


        /**
         * <p>Lists the names and codes for the services integrated with Service
         * Quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;


        /**
         * <p>Returns a list of the tags assigned to the specified applied
         * quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Adds a quota increase request to your quota request template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/PutServiceQuotaIncreaseRequestIntoTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::PutServiceQuotaIncreaseRequestIntoTemplateOutcome PutServiceQuotaIncreaseRequestIntoTemplate(const Model::PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const;


        /**
         * <p>Submits a quota increase request for the specified quota.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/RequestServiceQuotaIncrease">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestServiceQuotaIncreaseOutcome RequestServiceQuotaIncrease(const Model::RequestServiceQuotaIncreaseRequest& request) const;


        /**
         * <p>Adds tags to the specified applied quota. You can include one or more tags to
         * add to the quota.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from the specified applied quota. You can specify one or more
         * tags to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceQuotasEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ServiceQuotasClientConfiguration& clientConfiguration);

      ServiceQuotasClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceQuotasEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceQuotas
} // namespace Aws
