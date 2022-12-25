/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/service-quotas/ServiceQuotasClient.h>
#include <aws/service-quotas/ServiceQuotasErrorMarshaller.h>
#include <aws/service-quotas/ServiceQuotasEndpointProvider.h>
#include <aws/service-quotas/model/AssociateServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/DeleteServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/service-quotas/model/DisassociateServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/GetAWSDefaultServiceQuotaRequest.h>
#include <aws/service-quotas/model/GetAssociationForServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/GetRequestedServiceQuotaChangeRequest.h>
#include <aws/service-quotas/model/GetServiceQuotaRequest.h>
#include <aws/service-quotas/model/GetServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaRequest.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplateRequest.h>
#include <aws/service-quotas/model/ListServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListServicesRequest.h>
#include <aws/service-quotas/model/ListTagsForResourceRequest.h>
#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateRequest.h>
#include <aws/service-quotas/model/RequestServiceQuotaIncreaseRequest.h>
#include <aws/service-quotas/model/TagResourceRequest.h>
#include <aws/service-quotas/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceQuotas;
using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ServiceQuotasClient::SERVICE_NAME = "servicequotas";
const char* ServiceQuotasClient::ALLOCATION_TAG = "ServiceQuotasClient";

ServiceQuotasClient::ServiceQuotasClient(const ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider,
                                         const ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider,
                                         const ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ServiceQuotasClient::ServiceQuotasClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ServiceQuotasClient::~ServiceQuotasClient()
{
}

std::shared_ptr<ServiceQuotasEndpointProviderBase>& ServiceQuotasClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ServiceQuotasClient::init(const ServiceQuotas::ServiceQuotasClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Service Quotas");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ServiceQuotasClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateServiceQuotaTemplateOutcome ServiceQuotasClient::AssociateServiceQuotaTemplate(const AssociateServiceQuotaTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateServiceQuotaTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateServiceQuotaTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateServiceQuotaTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateServiceQuotaTemplateOutcomeCallable ServiceQuotasClient::AssociateServiceQuotaTemplateCallable(const AssociateServiceQuotaTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateServiceQuotaTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateServiceQuotaTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::AssociateServiceQuotaTemplateAsync(const AssociateServiceQuotaTemplateRequest& request, const AssociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateServiceQuotaTemplate(request), context);
    } );
}

DeleteServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServiceQuotaIncreaseRequestFromTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServiceQuotaIncreaseRequestFromTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteServiceQuotaIncreaseRequestFromTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceQuotaIncreaseRequestFromTemplateOutcomeCallable ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplateCallable(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceQuotaIncreaseRequestFromTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceQuotaIncreaseRequestFromTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplateAsync(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request, const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteServiceQuotaIncreaseRequestFromTemplate(request), context);
    } );
}

DisassociateServiceQuotaTemplateOutcome ServiceQuotasClient::DisassociateServiceQuotaTemplate(const DisassociateServiceQuotaTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateServiceQuotaTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateServiceQuotaTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateServiceQuotaTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateServiceQuotaTemplateOutcomeCallable ServiceQuotasClient::DisassociateServiceQuotaTemplateCallable(const DisassociateServiceQuotaTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateServiceQuotaTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateServiceQuotaTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::DisassociateServiceQuotaTemplateAsync(const DisassociateServiceQuotaTemplateRequest& request, const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateServiceQuotaTemplate(request), context);
    } );
}

GetAWSDefaultServiceQuotaOutcome ServiceQuotasClient::GetAWSDefaultServiceQuota(const GetAWSDefaultServiceQuotaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAWSDefaultServiceQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAWSDefaultServiceQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAWSDefaultServiceQuotaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAWSDefaultServiceQuotaOutcomeCallable ServiceQuotasClient::GetAWSDefaultServiceQuotaCallable(const GetAWSDefaultServiceQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAWSDefaultServiceQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAWSDefaultServiceQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::GetAWSDefaultServiceQuotaAsync(const GetAWSDefaultServiceQuotaRequest& request, const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAWSDefaultServiceQuota(request), context);
    } );
}

GetAssociationForServiceQuotaTemplateOutcome ServiceQuotasClient::GetAssociationForServiceQuotaTemplate(const GetAssociationForServiceQuotaTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociationForServiceQuotaTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociationForServiceQuotaTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAssociationForServiceQuotaTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAssociationForServiceQuotaTemplateOutcomeCallable ServiceQuotasClient::GetAssociationForServiceQuotaTemplateCallable(const GetAssociationForServiceQuotaTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssociationForServiceQuotaTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssociationForServiceQuotaTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::GetAssociationForServiceQuotaTemplateAsync(const GetAssociationForServiceQuotaTemplateRequest& request, const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssociationForServiceQuotaTemplate(request), context);
    } );
}

GetRequestedServiceQuotaChangeOutcome ServiceQuotasClient::GetRequestedServiceQuotaChange(const GetRequestedServiceQuotaChangeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRequestedServiceQuotaChange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRequestedServiceQuotaChange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRequestedServiceQuotaChangeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRequestedServiceQuotaChangeOutcomeCallable ServiceQuotasClient::GetRequestedServiceQuotaChangeCallable(const GetRequestedServiceQuotaChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRequestedServiceQuotaChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRequestedServiceQuotaChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::GetRequestedServiceQuotaChangeAsync(const GetRequestedServiceQuotaChangeRequest& request, const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRequestedServiceQuotaChange(request), context);
    } );
}

GetServiceQuotaOutcome ServiceQuotasClient::GetServiceQuota(const GetServiceQuotaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetServiceQuotaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceQuotaOutcomeCallable ServiceQuotasClient::GetServiceQuotaCallable(const GetServiceQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::GetServiceQuotaAsync(const GetServiceQuotaRequest& request, const GetServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceQuota(request), context);
    } );
}

GetServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate(const GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServiceQuotaIncreaseRequestFromTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServiceQuotaIncreaseRequestFromTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetServiceQuotaIncreaseRequestFromTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceQuotaIncreaseRequestFromTemplateOutcomeCallable ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplateCallable(const GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceQuotaIncreaseRequestFromTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceQuotaIncreaseRequestFromTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplateAsync(const GetServiceQuotaIncreaseRequestFromTemplateRequest& request, const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServiceQuotaIncreaseRequestFromTemplate(request), context);
    } );
}

ListAWSDefaultServiceQuotasOutcome ServiceQuotasClient::ListAWSDefaultServiceQuotas(const ListAWSDefaultServiceQuotasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAWSDefaultServiceQuotas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAWSDefaultServiceQuotas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAWSDefaultServiceQuotasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAWSDefaultServiceQuotasOutcomeCallable ServiceQuotasClient::ListAWSDefaultServiceQuotasCallable(const ListAWSDefaultServiceQuotasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAWSDefaultServiceQuotasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAWSDefaultServiceQuotas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListAWSDefaultServiceQuotasAsync(const ListAWSDefaultServiceQuotasRequest& request, const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAWSDefaultServiceQuotas(request), context);
    } );
}

ListRequestedServiceQuotaChangeHistoryOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory(const ListRequestedServiceQuotaChangeHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRequestedServiceQuotaChangeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRequestedServiceQuotaChangeHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRequestedServiceQuotaChangeHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRequestedServiceQuotaChangeHistoryOutcomeCallable ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryCallable(const ListRequestedServiceQuotaChangeHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRequestedServiceQuotaChangeHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRequestedServiceQuotaChangeHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryAsync(const ListRequestedServiceQuotaChangeHistoryRequest& request, const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRequestedServiceQuotaChangeHistory(request), context);
    } );
}

ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRequestedServiceQuotaChangeHistoryByQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRequestedServiceQuotaChangeHistoryByQuota, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRequestedServiceQuotaChangeHistoryByQuotaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRequestedServiceQuotaChangeHistoryByQuotaOutcomeCallable ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuotaCallable(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRequestedServiceQuotaChangeHistoryByQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRequestedServiceQuotaChangeHistoryByQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuotaAsync(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request, const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRequestedServiceQuotaChangeHistoryByQuota(request), context);
    } );
}

ListServiceQuotaIncreaseRequestsInTemplateOutcome ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate(const ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceQuotaIncreaseRequestsInTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceQuotaIncreaseRequestsInTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListServiceQuotaIncreaseRequestsInTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceQuotaIncreaseRequestsInTemplateOutcomeCallable ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplateCallable(const ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceQuotaIncreaseRequestsInTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceQuotaIncreaseRequestsInTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplateAsync(const ListServiceQuotaIncreaseRequestsInTemplateRequest& request, const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceQuotaIncreaseRequestsInTemplate(request), context);
    } );
}

ListServiceQuotasOutcome ServiceQuotasClient::ListServiceQuotas(const ListServiceQuotasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServiceQuotas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServiceQuotas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListServiceQuotasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServiceQuotasOutcomeCallable ServiceQuotasClient::ListServiceQuotasCallable(const ListServiceQuotasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServiceQuotasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServiceQuotas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListServiceQuotasAsync(const ListServiceQuotasRequest& request, const ListServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServiceQuotas(request), context);
    } );
}

ListServicesOutcome ServiceQuotasClient::ListServices(const ListServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable ServiceQuotasClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServices(request), context);
    } );
}

ListTagsForResourceOutcome ServiceQuotasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ServiceQuotasClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutServiceQuotaIncreaseRequestIntoTemplateOutcome ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate(const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutServiceQuotaIncreaseRequestIntoTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutServiceQuotaIncreaseRequestIntoTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutServiceQuotaIncreaseRequestIntoTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutServiceQuotaIncreaseRequestIntoTemplateOutcomeCallable ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplateCallable(const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutServiceQuotaIncreaseRequestIntoTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutServiceQuotaIncreaseRequestIntoTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplateAsync(const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutServiceQuotaIncreaseRequestIntoTemplate(request), context);
    } );
}

RequestServiceQuotaIncreaseOutcome ServiceQuotasClient::RequestServiceQuotaIncrease(const RequestServiceQuotaIncreaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RequestServiceQuotaIncrease, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RequestServiceQuotaIncrease, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RequestServiceQuotaIncreaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RequestServiceQuotaIncreaseOutcomeCallable ServiceQuotasClient::RequestServiceQuotaIncreaseCallable(const RequestServiceQuotaIncreaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestServiceQuotaIncreaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestServiceQuotaIncrease(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::RequestServiceQuotaIncreaseAsync(const RequestServiceQuotaIncreaseRequest& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RequestServiceQuotaIncrease(request), context);
    } );
}

TagResourceOutcome ServiceQuotasClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ServiceQuotasClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ServiceQuotasClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ServiceQuotasClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceQuotasClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

