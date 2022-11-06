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

#include <aws/appintegrations/AppIntegrationsServiceClient.h>
#include <aws/appintegrations/AppIntegrationsServiceErrorMarshaller.h>
#include <aws/appintegrations/AppIntegrationsServiceEndpointProvider.h>
#include <aws/appintegrations/model/CreateDataIntegrationRequest.h>
#include <aws/appintegrations/model/CreateEventIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteDataIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteEventIntegrationRequest.h>
#include <aws/appintegrations/model/GetDataIntegrationRequest.h>
#include <aws/appintegrations/model/GetEventIntegrationRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationsRequest.h>
#include <aws/appintegrations/model/ListTagsForResourceRequest.h>
#include <aws/appintegrations/model/TagResourceRequest.h>
#include <aws/appintegrations/model/UntagResourceRequest.h>
#include <aws/appintegrations/model/UpdateDataIntegrationRequest.h>
#include <aws/appintegrations/model/UpdateEventIntegrationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppIntegrationsService;
using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppIntegrationsServiceClient::SERVICE_NAME = "app-integrations";
const char* AppIntegrationsServiceClient::ALLOCATION_TAG = "AppIntegrationsServiceClient";

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration,
                                                           std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const AWSCredentials& credentials,
                                                           std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider,
                                                           const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider,
                                                           const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppIntegrationsServiceClient::AppIntegrationsServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppIntegrationsServiceClient::~AppIntegrationsServiceClient()
{
}

std::shared_ptr<AppIntegrationsServiceEndpointProviderBase>& AppIntegrationsServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppIntegrationsServiceClient::init(const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppIntegrations");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppIntegrationsServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateDataIntegrationOutcome AppIntegrationsServiceClient::CreateDataIntegration(const CreateDataIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations");
  return CreateDataIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataIntegrationOutcomeCallable AppIntegrationsServiceClient::CreateDataIntegrationCallable(const CreateDataIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::CreateDataIntegrationAsync(const CreateDataIntegrationRequest& request, const CreateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataIntegration(request), context);
    } );
}

CreateEventIntegrationOutcome AppIntegrationsServiceClient::CreateEventIntegration(const CreateEventIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations");
  return CreateEventIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventIntegrationOutcomeCallable AppIntegrationsServiceClient::CreateEventIntegrationCallable(const CreateEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::CreateEventIntegrationAsync(const CreateEventIntegrationRequest& request, const CreateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEventIntegration(request), context);
    } );
}

DeleteDataIntegrationOutcome AppIntegrationsServiceClient::DeleteDataIntegration(const DeleteDataIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataIntegrationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataIntegration", "Required field: DataIntegrationIdentifier, is not set");
    return DeleteDataIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataIntegrationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationIdentifier());
  return DeleteDataIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataIntegrationOutcomeCallable AppIntegrationsServiceClient::DeleteDataIntegrationCallable(const DeleteDataIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::DeleteDataIntegrationAsync(const DeleteDataIntegrationRequest& request, const DeleteDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataIntegration(request), context);
    } );
}

DeleteEventIntegrationOutcome AppIntegrationsServiceClient::DeleteEventIntegration(const DeleteEventIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventIntegration", "Required field: Name, is not set");
    return DeleteEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteEventIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventIntegrationOutcomeCallable AppIntegrationsServiceClient::DeleteEventIntegrationCallable(const DeleteEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::DeleteEventIntegrationAsync(const DeleteEventIntegrationRequest& request, const DeleteEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventIntegration(request), context);
    } );
}

GetDataIntegrationOutcome AppIntegrationsServiceClient::GetDataIntegration(const GetDataIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataIntegration", "Required field: Identifier, is not set");
    return GetDataIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  return GetDataIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataIntegrationOutcomeCallable AppIntegrationsServiceClient::GetDataIntegrationCallable(const GetDataIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::GetDataIntegrationAsync(const GetDataIntegrationRequest& request, const GetDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDataIntegration(request), context);
    } );
}

GetEventIntegrationOutcome AppIntegrationsServiceClient::GetEventIntegration(const GetEventIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventIntegration", "Required field: Name, is not set");
    return GetEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetEventIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventIntegrationOutcomeCallable AppIntegrationsServiceClient::GetEventIntegrationCallable(const GetEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::GetEventIntegrationAsync(const GetEventIntegrationRequest& request, const GetEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventIntegration(request), context);
    } );
}

ListDataIntegrationAssociationsOutcome AppIntegrationsServiceClient::ListDataIntegrationAssociations(const ListDataIntegrationAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataIntegrationAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataIntegrationIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataIntegrationAssociations", "Required field: DataIntegrationIdentifier, is not set");
    return ListDataIntegrationAssociationsOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataIntegrationIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataIntegrationAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  return ListDataIntegrationAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataIntegrationAssociationsOutcomeCallable AppIntegrationsServiceClient::ListDataIntegrationAssociationsCallable(const ListDataIntegrationAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataIntegrationAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataIntegrationAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListDataIntegrationAssociationsAsync(const ListDataIntegrationAssociationsRequest& request, const ListDataIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataIntegrationAssociations(request), context);
    } );
}

ListDataIntegrationsOutcome AppIntegrationsServiceClient::ListDataIntegrations(const ListDataIntegrationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations");
  return ListDataIntegrationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataIntegrationsOutcomeCallable AppIntegrationsServiceClient::ListDataIntegrationsCallable(const ListDataIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListDataIntegrationsAsync(const ListDataIntegrationsRequest& request, const ListDataIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataIntegrations(request), context);
    } );
}

ListEventIntegrationAssociationsOutcome AppIntegrationsServiceClient::ListEventIntegrationAssociations(const ListEventIntegrationAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventIntegrationAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EventIntegrationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEventIntegrationAssociations", "Required field: EventIntegrationName, is not set");
    return ListEventIntegrationAssociationsOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventIntegrationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventIntegrationAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventIntegrationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  return ListEventIntegrationAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventIntegrationAssociationsOutcomeCallable AppIntegrationsServiceClient::ListEventIntegrationAssociationsCallable(const ListEventIntegrationAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventIntegrationAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventIntegrationAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListEventIntegrationAssociationsAsync(const ListEventIntegrationAssociationsRequest& request, const ListEventIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventIntegrationAssociations(request), context);
    } );
}

ListEventIntegrationsOutcome AppIntegrationsServiceClient::ListEventIntegrations(const ListEventIntegrationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventIntegrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations");
  return ListEventIntegrationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventIntegrationsOutcomeCallable AppIntegrationsServiceClient::ListEventIntegrationsCallable(const ListEventIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListEventIntegrationsAsync(const ListEventIntegrationsRequest& request, const ListEventIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventIntegrations(request), context);
    } );
}

ListTagsForResourceOutcome AppIntegrationsServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppIntegrationsServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

TagResourceOutcome AppIntegrationsServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppIntegrationsServiceClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AppIntegrationsServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppIntegrationsServiceClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDataIntegrationOutcome AppIntegrationsServiceClient::UpdateDataIntegration(const UpdateDataIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataIntegration", "Required field: Identifier, is not set");
    return UpdateDataIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  return UpdateDataIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataIntegrationOutcomeCallable AppIntegrationsServiceClient::UpdateDataIntegrationCallable(const UpdateDataIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::UpdateDataIntegrationAsync(const UpdateDataIntegrationRequest& request, const UpdateDataIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDataIntegration(request), context);
    } );
}

UpdateEventIntegrationOutcome AppIntegrationsServiceClient::UpdateEventIntegration(const UpdateEventIntegrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEventIntegration", "Required field: Name, is not set");
    return UpdateEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEventIntegration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateEventIntegrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventIntegrationOutcomeCallable AppIntegrationsServiceClient::UpdateEventIntegrationCallable(const UpdateEventIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppIntegrationsServiceClient::UpdateEventIntegrationAsync(const UpdateEventIntegrationRequest& request, const UpdateEventIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEventIntegration(request), context);
    } );
}

