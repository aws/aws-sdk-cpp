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

#include <aws/connectcases/ConnectCasesClient.h>
#include <aws/connectcases/ConnectCasesErrorMarshaller.h>
#include <aws/connectcases/ConnectCasesEndpointProvider.h>
#include <aws/connectcases/model/BatchGetFieldRequest.h>
#include <aws/connectcases/model/BatchPutFieldOptionsRequest.h>
#include <aws/connectcases/model/CreateCaseRequest.h>
#include <aws/connectcases/model/CreateDomainRequest.h>
#include <aws/connectcases/model/CreateFieldRequest.h>
#include <aws/connectcases/model/CreateLayoutRequest.h>
#include <aws/connectcases/model/CreateRelatedItemRequest.h>
#include <aws/connectcases/model/CreateTemplateRequest.h>
#include <aws/connectcases/model/GetCaseRequest.h>
#include <aws/connectcases/model/GetCaseEventConfigurationRequest.h>
#include <aws/connectcases/model/GetDomainRequest.h>
#include <aws/connectcases/model/GetLayoutRequest.h>
#include <aws/connectcases/model/GetTemplateRequest.h>
#include <aws/connectcases/model/ListCasesForContactRequest.h>
#include <aws/connectcases/model/ListDomainsRequest.h>
#include <aws/connectcases/model/ListFieldOptionsRequest.h>
#include <aws/connectcases/model/ListFieldsRequest.h>
#include <aws/connectcases/model/ListLayoutsRequest.h>
#include <aws/connectcases/model/ListTagsForResourceRequest.h>
#include <aws/connectcases/model/ListTemplatesRequest.h>
#include <aws/connectcases/model/PutCaseEventConfigurationRequest.h>
#include <aws/connectcases/model/SearchCasesRequest.h>
#include <aws/connectcases/model/SearchRelatedItemsRequest.h>
#include <aws/connectcases/model/TagResourceRequest.h>
#include <aws/connectcases/model/UntagResourceRequest.h>
#include <aws/connectcases/model/UpdateCaseRequest.h>
#include <aws/connectcases/model/UpdateFieldRequest.h>
#include <aws/connectcases/model/UpdateLayoutRequest.h>
#include <aws/connectcases/model/UpdateTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectCases;
using namespace Aws::ConnectCases::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ConnectCasesClient::SERVICE_NAME = "cases";
const char* ConnectCasesClient::ALLOCATION_TAG = "ConnectCasesClient";

ConnectCasesClient::ConnectCasesClient(const ConnectCases::ConnectCasesClientConfiguration& clientConfiguration,
                                       std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const AWSCredentials& credentials,
                                       std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider,
                                       const ConnectCases::ConnectCasesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider,
                                       const ConnectCases::ConnectCasesClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ConnectCasesClient::ConnectCasesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ConnectCasesClient::~ConnectCasesClient()
{
}

std::shared_ptr<ConnectCasesEndpointProviderBase>& ConnectCasesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ConnectCasesClient::init(const ConnectCases::ConnectCasesClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ConnectCases");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ConnectCasesClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchGetFieldOutcome ConnectCasesClient::BatchGetField(const BatchGetFieldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetField", "Required field: DomainId, is not set");
    return BatchGetFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fields-batch");
  return BatchGetFieldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetFieldOutcomeCallable ConnectCasesClient::BatchGetFieldCallable(const BatchGetFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::BatchGetFieldAsync(const BatchGetFieldRequest& request, const BatchGetFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetField(request), context);
    } );
}

BatchPutFieldOptionsOutcome ConnectCasesClient::BatchPutFieldOptions(const BatchPutFieldOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchPutFieldOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutFieldOptions", "Required field: DomainId, is not set");
    return BatchPutFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutFieldOptions", "Required field: FieldId, is not set");
    return BatchPutFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FieldId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchPutFieldOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/options");
  return BatchPutFieldOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchPutFieldOptionsOutcomeCallable ConnectCasesClient::BatchPutFieldOptionsCallable(const BatchPutFieldOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutFieldOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutFieldOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::BatchPutFieldOptionsAsync(const BatchPutFieldOptionsRequest& request, const BatchPutFieldOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchPutFieldOptions(request), context);
    } );
}

CreateCaseOutcome ConnectCasesClient::CreateCase(const CreateCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCase", "Required field: DomainId, is not set");
    return CreateCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cases");
  return CreateCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCaseOutcomeCallable ConnectCasesClient::CreateCaseCallable(const CreateCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::CreateCaseAsync(const CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCase(request), context);
    } );
}

CreateDomainOutcome ConnectCasesClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable ConnectCasesClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomain(request), context);
    } );
}

CreateFieldOutcome ConnectCasesClient::CreateField(const CreateFieldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateField", "Required field: DomainId, is not set");
    return CreateFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fields");
  return CreateFieldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFieldOutcomeCallable ConnectCasesClient::CreateFieldCallable(const CreateFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::CreateFieldAsync(const CreateFieldRequest& request, const CreateFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateField(request), context);
    } );
}

CreateLayoutOutcome ConnectCasesClient::CreateLayout(const CreateLayoutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLayout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLayout", "Required field: DomainId, is not set");
    return CreateLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLayout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/layouts");
  return CreateLayoutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLayoutOutcomeCallable ConnectCasesClient::CreateLayoutCallable(const CreateLayoutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLayoutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLayout(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::CreateLayoutAsync(const CreateLayoutRequest& request, const CreateLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLayout(request), context);
    } );
}

CreateRelatedItemOutcome ConnectCasesClient::CreateRelatedItem(const CreateRelatedItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelatedItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRelatedItem", "Required field: CaseId, is not set");
    return CreateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRelatedItem", "Required field: DomainId, is not set");
    return CreateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelatedItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/related-items/");
  return CreateRelatedItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelatedItemOutcomeCallable ConnectCasesClient::CreateRelatedItemCallable(const CreateRelatedItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRelatedItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRelatedItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::CreateRelatedItemAsync(const CreateRelatedItemRequest& request, const CreateRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRelatedItem(request), context);
    } );
}

CreateTemplateOutcome ConnectCasesClient::CreateTemplate(const CreateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: DomainId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  return CreateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateOutcomeCallable ConnectCasesClient::CreateTemplateCallable(const CreateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::CreateTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTemplate(request), context);
    } );
}

GetCaseOutcome ConnectCasesClient::GetCase(const GetCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCase", "Required field: CaseId, is not set");
    return GetCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCase", "Required field: DomainId, is not set");
    return GetCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  return GetCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCaseOutcomeCallable ConnectCasesClient::GetCaseCallable(const GetCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::GetCaseAsync(const GetCaseRequest& request, const GetCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCase(request), context);
    } );
}

GetCaseEventConfigurationOutcome ConnectCasesClient::GetCaseEventConfiguration(const GetCaseEventConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCaseEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCaseEventConfiguration", "Required field: DomainId, is not set");
    return GetCaseEventConfigurationOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCaseEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/case-event-configuration");
  return GetCaseEventConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCaseEventConfigurationOutcomeCallable ConnectCasesClient::GetCaseEventConfigurationCallable(const GetCaseEventConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCaseEventConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCaseEventConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::GetCaseEventConfigurationAsync(const GetCaseEventConfigurationRequest& request, const GetCaseEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCaseEventConfiguration(request), context);
    } );
}

GetDomainOutcome ConnectCasesClient::GetDomain(const GetDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainId, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  return GetDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainOutcomeCallable ConnectCasesClient::GetDomainCallable(const GetDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::GetDomainAsync(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomain(request), context);
    } );
}

GetLayoutOutcome ConnectCasesClient::GetLayout(const GetLayoutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLayout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayout", "Required field: DomainId, is not set");
    return GetLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.LayoutIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayout", "Required field: LayoutId, is not set");
    return GetLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayoutId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLayout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutId());
  return GetLayoutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLayoutOutcomeCallable ConnectCasesClient::GetLayoutCallable(const GetLayoutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLayoutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLayout(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::GetLayoutAsync(const GetLayoutRequest& request, const GetLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLayout(request), context);
    } );
}

GetTemplateOutcome ConnectCasesClient::GetTemplate(const GetTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: DomainId, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: TemplateId, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return GetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateOutcomeCallable ConnectCasesClient::GetTemplateCallable(const GetTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::GetTemplateAsync(const GetTemplateRequest& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemplate(request), context);
    } );
}

ListCasesForContactOutcome ConnectCasesClient::ListCasesForContact(const ListCasesForContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCasesForContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCasesForContact", "Required field: DomainId, is not set");
    return ListCasesForContactOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCasesForContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-cases-for-contact");
  return ListCasesForContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCasesForContactOutcomeCallable ConnectCasesClient::ListCasesForContactCallable(const ListCasesForContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCasesForContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCasesForContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListCasesForContactAsync(const ListCasesForContactRequest& request, const ListCasesForContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCasesForContact(request), context);
    } );
}

ListDomainsOutcome ConnectCasesClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains-list");
  return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable ConnectCasesClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomains(request), context);
    } );
}

ListFieldOptionsOutcome ConnectCasesClient::ListFieldOptions(const ListFieldOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFieldOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFieldOptions", "Required field: DomainId, is not set");
    return ListFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFieldOptions", "Required field: FieldId, is not set");
    return ListFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FieldId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFieldOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/options-list");
  return ListFieldOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFieldOptionsOutcomeCallable ConnectCasesClient::ListFieldOptionsCallable(const ListFieldOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListFieldOptionsAsync(const ListFieldOptionsRequest& request, const ListFieldOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFieldOptions(request), context);
    } );
}

ListFieldsOutcome ConnectCasesClient::ListFields(const ListFieldsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFields, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFields", "Required field: DomainId, is not set");
    return ListFieldsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFields, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fields-list");
  return ListFieldsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFieldsOutcomeCallable ConnectCasesClient::ListFieldsCallable(const ListFieldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFields(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListFieldsAsync(const ListFieldsRequest& request, const ListFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFields(request), context);
    } );
}

ListLayoutsOutcome ConnectCasesClient::ListLayouts(const ListLayoutsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLayouts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLayouts", "Required field: DomainId, is not set");
    return ListLayoutsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLayouts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/layouts-list");
  return ListLayoutsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLayoutsOutcomeCallable ConnectCasesClient::ListLayoutsCallable(const ListLayoutsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLayoutsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLayouts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListLayoutsAsync(const ListLayoutsRequest& request, const ListLayoutsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLayouts(request), context);
    } );
}

ListTagsForResourceOutcome ConnectCasesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ConnectCasesClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTemplatesOutcome ConnectCasesClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: DomainId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates-list");
  return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcomeCallable ConnectCasesClient::ListTemplatesCallable(const ListTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::ListTemplatesAsync(const ListTemplatesRequest& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTemplates(request), context);
    } );
}

PutCaseEventConfigurationOutcome ConnectCasesClient::PutCaseEventConfiguration(const PutCaseEventConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutCaseEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCaseEventConfiguration", "Required field: DomainId, is not set");
    return PutCaseEventConfigurationOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutCaseEventConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/case-event-configuration");
  return PutCaseEventConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutCaseEventConfigurationOutcomeCallable ConnectCasesClient::PutCaseEventConfigurationCallable(const PutCaseEventConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCaseEventConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCaseEventConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::PutCaseEventConfigurationAsync(const PutCaseEventConfigurationRequest& request, const PutCaseEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutCaseEventConfiguration(request), context);
    } );
}

SearchCasesOutcome ConnectCasesClient::SearchCases(const SearchCasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchCases", "Required field: DomainId, is not set");
    return SearchCasesOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchCases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cases-search");
  return SearchCasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchCasesOutcomeCallable ConnectCasesClient::SearchCasesCallable(const SearchCasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchCasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchCases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::SearchCasesAsync(const SearchCasesRequest& request, const SearchCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchCases(request), context);
    } );
}

SearchRelatedItemsOutcome ConnectCasesClient::SearchRelatedItems(const SearchRelatedItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchRelatedItems", "Required field: CaseId, is not set");
    return SearchRelatedItemsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchRelatedItems", "Required field: DomainId, is not set");
    return SearchRelatedItemsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchRelatedItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/related-items-search");
  return SearchRelatedItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchRelatedItemsOutcomeCallable ConnectCasesClient::SearchRelatedItemsCallable(const SearchRelatedItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchRelatedItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchRelatedItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::SearchRelatedItemsAsync(const SearchRelatedItemsRequest& request, const SearchRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchRelatedItems(request), context);
    } );
}

TagResourceOutcome ConnectCasesClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ConnectCasesClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ConnectCasesClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ConnectCasesClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateCaseOutcome ConnectCasesClient::UpdateCase(const UpdateCaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCase", "Required field: CaseId, is not set");
    return UpdateCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CaseId]", false));
  }
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCase", "Required field: DomainId, is not set");
    return UpdateCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  return UpdateCaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCaseOutcomeCallable ConnectCasesClient::UpdateCaseCallable(const UpdateCaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::UpdateCaseAsync(const UpdateCaseRequest& request, const UpdateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCase(request), context);
    } );
}

UpdateFieldOutcome ConnectCasesClient::UpdateField(const UpdateFieldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateField", "Required field: DomainId, is not set");
    return UpdateFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateField", "Required field: FieldId, is not set");
    return UpdateFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FieldId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateField, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
  return UpdateFieldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFieldOutcomeCallable ConnectCasesClient::UpdateFieldCallable(const UpdateFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::UpdateFieldAsync(const UpdateFieldRequest& request, const UpdateFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateField(request), context);
    } );
}

UpdateLayoutOutcome ConnectCasesClient::UpdateLayout(const UpdateLayoutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLayout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLayout", "Required field: DomainId, is not set");
    return UpdateLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.LayoutIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLayout", "Required field: LayoutId, is not set");
    return UpdateLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayoutId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLayout, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutId());
  return UpdateLayoutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateLayoutOutcomeCallable ConnectCasesClient::UpdateLayoutCallable(const UpdateLayoutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLayoutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLayout(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::UpdateLayoutAsync(const UpdateLayoutRequest& request, const UpdateLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLayout(request), context);
    } );
}

UpdateTemplateOutcome ConnectCasesClient::UpdateTemplate(const UpdateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: DomainId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return UpdateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateOutcomeCallable ConnectCasesClient::UpdateTemplateCallable(const UpdateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectCasesClient::UpdateTemplateAsync(const UpdateTemplateRequest& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTemplate(request), context);
    } );
}

