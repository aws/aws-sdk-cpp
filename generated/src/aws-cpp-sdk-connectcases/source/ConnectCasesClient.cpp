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

CreateDomainOutcome ConnectCasesClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

ListDomainsOutcome ConnectCasesClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains-list");
  return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

