﻿/**
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

#include <aws/service-quotas/ServiceQuotasClient.h>
#include <aws/service-quotas/ServiceQuotasEndpoint.h>
#include <aws/service-quotas/ServiceQuotasErrorMarshaller.h>
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

static const char* SERVICE_NAME = "servicequotas";
static const char* ALLOCATION_TAG = "ServiceQuotasClient";


ServiceQuotasClient::ServiceQuotasClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceQuotasClient::~ServiceQuotasClient()
{
}

void ServiceQuotasClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Service Quotas");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ServiceQuotasEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ServiceQuotasClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateServiceQuotaTemplateOutcome ServiceQuotasClient::AssociateServiceQuotaTemplate(const AssociateServiceQuotaTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateServiceQuotaTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateServiceQuotaTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::AssociateServiceQuotaTemplateAsyncHelper(const AssociateServiceQuotaTemplateRequest& request, const AssociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateServiceQuotaTemplate(request), context);
}

DeleteServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteServiceQuotaIncreaseRequestFromTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceQuotaIncreaseRequestFromTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplateAsyncHelper(const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request, const DeleteServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServiceQuotaIncreaseRequestFromTemplate(request), context);
}

DisassociateServiceQuotaTemplateOutcome ServiceQuotasClient::DisassociateServiceQuotaTemplate(const DisassociateServiceQuotaTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateServiceQuotaTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateServiceQuotaTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::DisassociateServiceQuotaTemplateAsyncHelper(const DisassociateServiceQuotaTemplateRequest& request, const DisassociateServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateServiceQuotaTemplate(request), context);
}

GetAWSDefaultServiceQuotaOutcome ServiceQuotasClient::GetAWSDefaultServiceQuota(const GetAWSDefaultServiceQuotaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAWSDefaultServiceQuotaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAWSDefaultServiceQuotaAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::GetAWSDefaultServiceQuotaAsyncHelper(const GetAWSDefaultServiceQuotaRequest& request, const GetAWSDefaultServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAWSDefaultServiceQuota(request), context);
}

GetAssociationForServiceQuotaTemplateOutcome ServiceQuotasClient::GetAssociationForServiceQuotaTemplate(const GetAssociationForServiceQuotaTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAssociationForServiceQuotaTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetAssociationForServiceQuotaTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::GetAssociationForServiceQuotaTemplateAsyncHelper(const GetAssociationForServiceQuotaTemplateRequest& request, const GetAssociationForServiceQuotaTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssociationForServiceQuotaTemplate(request), context);
}

GetRequestedServiceQuotaChangeOutcome ServiceQuotasClient::GetRequestedServiceQuotaChange(const GetRequestedServiceQuotaChangeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRequestedServiceQuotaChangeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRequestedServiceQuotaChangeAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::GetRequestedServiceQuotaChangeAsyncHelper(const GetRequestedServiceQuotaChangeRequest& request, const GetRequestedServiceQuotaChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRequestedServiceQuotaChange(request), context);
}

GetServiceQuotaOutcome ServiceQuotasClient::GetServiceQuota(const GetServiceQuotaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceQuotaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceQuotaAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::GetServiceQuotaAsyncHelper(const GetServiceQuotaRequest& request, const GetServiceQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceQuota(request), context);
}

GetServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate(const GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetServiceQuotaIncreaseRequestFromTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceQuotaIncreaseRequestFromTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplateAsyncHelper(const GetServiceQuotaIncreaseRequestFromTemplateRequest& request, const GetServiceQuotaIncreaseRequestFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceQuotaIncreaseRequestFromTemplate(request), context);
}

ListAWSDefaultServiceQuotasOutcome ServiceQuotasClient::ListAWSDefaultServiceQuotas(const ListAWSDefaultServiceQuotasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAWSDefaultServiceQuotasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAWSDefaultServiceQuotasAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListAWSDefaultServiceQuotasAsyncHelper(const ListAWSDefaultServiceQuotasRequest& request, const ListAWSDefaultServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAWSDefaultServiceQuotas(request), context);
}

ListRequestedServiceQuotaChangeHistoryOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory(const ListRequestedServiceQuotaChangeHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRequestedServiceQuotaChangeHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListRequestedServiceQuotaChangeHistoryAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryAsyncHelper(const ListRequestedServiceQuotaChangeHistoryRequest& request, const ListRequestedServiceQuotaChangeHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRequestedServiceQuotaChangeHistory(request), context);
}

ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRequestedServiceQuotaChangeHistoryByQuotaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListRequestedServiceQuotaChangeHistoryByQuotaAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuotaAsyncHelper(const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request, const ListRequestedServiceQuotaChangeHistoryByQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRequestedServiceQuotaChangeHistoryByQuota(request), context);
}

ListServiceQuotaIncreaseRequestsInTemplateOutcome ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate(const ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceQuotaIncreaseRequestsInTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListServiceQuotaIncreaseRequestsInTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplateAsyncHelper(const ListServiceQuotaIncreaseRequestsInTemplateRequest& request, const ListServiceQuotaIncreaseRequestsInTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServiceQuotaIncreaseRequestsInTemplate(request), context);
}

ListServiceQuotasOutcome ServiceQuotasClient::ListServiceQuotas(const ListServiceQuotasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServiceQuotasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListServiceQuotasAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListServiceQuotasAsyncHelper(const ListServiceQuotasRequest& request, const ListServiceQuotasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServiceQuotas(request), context);
}

ListServicesOutcome ServiceQuotasClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListServicesAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListServicesAsyncHelper(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServices(request), context);
}

ListTagsForResourceOutcome ServiceQuotasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutServiceQuotaIncreaseRequestIntoTemplateOutcome ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate(const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutServiceQuotaIncreaseRequestIntoTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutServiceQuotaIncreaseRequestIntoTemplateAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplateAsyncHelper(const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request, const PutServiceQuotaIncreaseRequestIntoTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutServiceQuotaIncreaseRequestIntoTemplate(request), context);
}

RequestServiceQuotaIncreaseOutcome ServiceQuotasClient::RequestServiceQuotaIncrease(const RequestServiceQuotaIncreaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RequestServiceQuotaIncreaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->RequestServiceQuotaIncreaseAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::RequestServiceQuotaIncreaseAsyncHelper(const RequestServiceQuotaIncreaseRequest& request, const RequestServiceQuotaIncreaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestServiceQuotaIncrease(request), context);
}

TagResourceOutcome ServiceQuotasClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ServiceQuotasClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ServiceQuotasClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

