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

#include <aws/schemas/SchemasClient.h>
#include <aws/schemas/SchemasErrorMarshaller.h>
#include <aws/schemas/SchemasEndpointProvider.h>
#include <aws/schemas/model/CreateDiscovererRequest.h>
#include <aws/schemas/model/CreateRegistryRequest.h>
#include <aws/schemas/model/CreateSchemaRequest.h>
#include <aws/schemas/model/DeleteDiscovererRequest.h>
#include <aws/schemas/model/DeleteRegistryRequest.h>
#include <aws/schemas/model/DeleteResourcePolicyRequest.h>
#include <aws/schemas/model/DeleteSchemaRequest.h>
#include <aws/schemas/model/DeleteSchemaVersionRequest.h>
#include <aws/schemas/model/DescribeCodeBindingRequest.h>
#include <aws/schemas/model/DescribeDiscovererRequest.h>
#include <aws/schemas/model/DescribeRegistryRequest.h>
#include <aws/schemas/model/DescribeSchemaRequest.h>
#include <aws/schemas/model/ExportSchemaRequest.h>
#include <aws/schemas/model/GetCodeBindingSourceRequest.h>
#include <aws/schemas/model/GetDiscoveredSchemaRequest.h>
#include <aws/schemas/model/GetResourcePolicyRequest.h>
#include <aws/schemas/model/ListDiscoverersRequest.h>
#include <aws/schemas/model/ListRegistriesRequest.h>
#include <aws/schemas/model/ListSchemaVersionsRequest.h>
#include <aws/schemas/model/ListSchemasRequest.h>
#include <aws/schemas/model/ListTagsForResourceRequest.h>
#include <aws/schemas/model/PutCodeBindingRequest.h>
#include <aws/schemas/model/PutResourcePolicyRequest.h>
#include <aws/schemas/model/SearchSchemasRequest.h>
#include <aws/schemas/model/StartDiscovererRequest.h>
#include <aws/schemas/model/StopDiscovererRequest.h>
#include <aws/schemas/model/TagResourceRequest.h>
#include <aws/schemas/model/UntagResourceRequest.h>
#include <aws/schemas/model/UpdateDiscovererRequest.h>
#include <aws/schemas/model/UpdateRegistryRequest.h>
#include <aws/schemas/model/UpdateSchemaRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Schemas;
using namespace Aws::Schemas::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SchemasClient::SERVICE_NAME = "schemas";
const char* SchemasClient::ALLOCATION_TAG = "SchemasClient";

SchemasClient::SchemasClient(const Schemas::SchemasClientConfiguration& clientConfiguration,
                             std::shared_ptr<SchemasEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const AWSCredentials& credentials,
                             std::shared_ptr<SchemasEndpointProviderBase> endpointProvider,
                             const Schemas::SchemasClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SchemasEndpointProviderBase> endpointProvider,
                             const Schemas::SchemasClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SchemasClient::SchemasClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SchemasClient::SchemasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SchemasErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SchemasEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SchemasClient::~SchemasClient()
{
}

std::shared_ptr<SchemasEndpointProviderBase>& SchemasClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SchemasClient::init(const Schemas::SchemasClientConfiguration& config)
{
  AWSClient::SetServiceClientName("schemas");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SchemasClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateDiscovererOutcome SchemasClient::CreateDiscoverer(const CreateDiscovererRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers");
  return CreateDiscovererOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiscovererOutcomeCallable SchemasClient::CreateDiscovererCallable(const CreateDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::CreateDiscovererAsync(const CreateDiscovererRequest& request, const CreateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDiscoverer(request), context);
    } );
}

CreateRegistryOutcome SchemasClient::CreateRegistry(const CreateRegistryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRegistry", "Required field: RegistryName, is not set");
    return CreateRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  return CreateRegistryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRegistryOutcomeCallable SchemasClient::CreateRegistryCallable(const CreateRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::CreateRegistryAsync(const CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRegistry(request), context);
    } );
}

CreateSchemaOutcome SchemasClient::CreateSchema(const CreateSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSchema", "Required field: RegistryName, is not set");
    return CreateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSchema", "Required field: SchemaName, is not set");
    return CreateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  return CreateSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSchemaOutcomeCallable SchemasClient::CreateSchemaCallable(const CreateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSchema(request), context);
    } );
}

DeleteDiscovererOutcome SchemasClient::DeleteDiscoverer(const DeleteDiscovererRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDiscoverer", "Required field: DiscovererId, is not set");
    return DeleteDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  return DeleteDiscovererOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDiscovererOutcomeCallable SchemasClient::DeleteDiscovererCallable(const DeleteDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteDiscovererAsync(const DeleteDiscovererRequest& request, const DeleteDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDiscoverer(request), context);
    } );
}

DeleteRegistryOutcome SchemasClient::DeleteRegistry(const DeleteRegistryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRegistry", "Required field: RegistryName, is not set");
    return DeleteRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  return DeleteRegistryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegistryOutcomeCallable SchemasClient::DeleteRegistryCallable(const DeleteRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteRegistryAsync(const DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRegistry(request), context);
    } );
}

DeleteResourcePolicyOutcome SchemasClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/policy");
  return DeleteResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable SchemasClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DeleteSchemaOutcome SchemasClient::DeleteSchema(const DeleteSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: RegistryName, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: SchemaName, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  return DeleteSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSchemaOutcomeCallable SchemasClient::DeleteSchemaCallable(const DeleteSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSchema(request), context);
    } );
}

DeleteSchemaVersionOutcome SchemasClient::DeleteSchemaVersion(const DeleteSchemaVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSchemaVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: RegistryName, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: SchemaName, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  if (!request.SchemaVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchemaVersion", "Required field: SchemaVersion, is not set");
    return DeleteSchemaVersionOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSchemaVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaVersion());
  return DeleteSchemaVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSchemaVersionOutcomeCallable SchemasClient::DeleteSchemaVersionCallable(const DeleteSchemaVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchemaVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DeleteSchemaVersionAsync(const DeleteSchemaVersionRequest& request, const DeleteSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSchemaVersion(request), context);
    } );
}

DescribeCodeBindingOutcome SchemasClient::DescribeCodeBinding(const DescribeCodeBindingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCodeBinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LanguageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: Language, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: RegistryName, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeBinding", "Required field: SchemaName, is not set");
    return DescribeCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCodeBinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/language/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLanguage());
  return DescribeCodeBindingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCodeBindingOutcomeCallable SchemasClient::DescribeCodeBindingCallable(const DescribeCodeBindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeBindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeBinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeCodeBindingAsync(const DescribeCodeBindingRequest& request, const DescribeCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCodeBinding(request), context);
    } );
}

DescribeDiscovererOutcome SchemasClient::DescribeDiscoverer(const DescribeDiscovererRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDiscoverer", "Required field: DiscovererId, is not set");
    return DescribeDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  return DescribeDiscovererOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDiscovererOutcomeCallable SchemasClient::DescribeDiscovererCallable(const DescribeDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeDiscovererAsync(const DescribeDiscovererRequest& request, const DescribeDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDiscoverer(request), context);
    } );
}

DescribeRegistryOutcome SchemasClient::DescribeRegistry(const DescribeRegistryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRegistry", "Required field: RegistryName, is not set");
    return DescribeRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  return DescribeRegistryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRegistryOutcomeCallable SchemasClient::DescribeRegistryCallable(const DescribeRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeRegistryAsync(const DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRegistry(request), context);
    } );
}

DescribeSchemaOutcome SchemasClient::DescribeSchema(const DescribeSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchema", "Required field: RegistryName, is not set");
    return DescribeSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchema", "Required field: SchemaName, is not set");
    return DescribeSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  return DescribeSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSchemaOutcomeCallable SchemasClient::DescribeSchemaCallable(const DescribeSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::DescribeSchemaAsync(const DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSchema(request), context);
    } );
}

ExportSchemaOutcome SchemasClient::ExportSchema(const ExportSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportSchema", "Required field: RegistryName, is not set");
    return ExportSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportSchema", "Required field: SchemaName, is not set");
    return ExportSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportSchema", "Required field: Type, is not set");
    return ExportSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/export");
  return ExportSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportSchemaOutcomeCallable SchemasClient::ExportSchemaCallable(const ExportSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ExportSchemaAsync(const ExportSchemaRequest& request, const ExportSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportSchema(request), context);
    } );
}

GetCodeBindingSourceOutcome SchemasClient::GetCodeBindingSource(const GetCodeBindingSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCodeBindingSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LanguageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: Language, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: RegistryName, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeBindingSource", "Required field: SchemaName, is not set");
    return GetCodeBindingSourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCodeBindingSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/language/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLanguage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/source");
  return GetCodeBindingSourceOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetCodeBindingSourceOutcomeCallable SchemasClient::GetCodeBindingSourceCallable(const GetCodeBindingSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCodeBindingSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCodeBindingSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::GetCodeBindingSourceAsync(const GetCodeBindingSourceRequest& request, const GetCodeBindingSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCodeBindingSource(request), context);
    } );
}

GetDiscoveredSchemaOutcome SchemasClient::GetDiscoveredSchema(const GetDiscoveredSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDiscoveredSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDiscoveredSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discover");
  return GetDiscoveredSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiscoveredSchemaOutcomeCallable SchemasClient::GetDiscoveredSchemaCallable(const GetDiscoveredSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiscoveredSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiscoveredSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::GetDiscoveredSchemaAsync(const GetDiscoveredSchemaRequest& request, const GetDiscoveredSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDiscoveredSchema(request), context);
    } );
}

GetResourcePolicyOutcome SchemasClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/policy");
  return GetResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePolicyOutcomeCallable SchemasClient::GetResourcePolicyCallable(const GetResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::GetResourcePolicyAsync(const GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourcePolicy(request), context);
    } );
}

ListDiscoverersOutcome SchemasClient::ListDiscoverers(const ListDiscoverersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDiscoverers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDiscoverers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers");
  return ListDiscoverersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDiscoverersOutcomeCallable SchemasClient::ListDiscoverersCallable(const ListDiscoverersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDiscoverersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDiscoverers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListDiscoverersAsync(const ListDiscoverersRequest& request, const ListDiscoverersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDiscoverers(request), context);
    } );
}

ListRegistriesOutcome SchemasClient::ListRegistries(const ListRegistriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRegistries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRegistries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries");
  return ListRegistriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRegistriesOutcomeCallable SchemasClient::ListRegistriesCallable(const ListRegistriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRegistriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRegistries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListRegistriesAsync(const ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRegistries(request), context);
    } );
}

ListSchemaVersionsOutcome SchemasClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchemaVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: RegistryName, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemaVersions", "Required field: SchemaName, is not set");
    return ListSchemaVersionsOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchemaVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListSchemaVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSchemaVersionsOutcomeCallable SchemasClient::ListSchemaVersionsCallable(const ListSchemaVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemaVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemaVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListSchemaVersionsAsync(const ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSchemaVersions(request), context);
    } );
}

ListSchemasOutcome SchemasClient::ListSchemas(const ListSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSchemas", "Required field: RegistryName, is not set");
    return ListSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas");
  return ListSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSchemasOutcomeCallable SchemasClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSchemas(request), context);
    } );
}

ListTagsForResourceOutcome SchemasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SchemasClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutCodeBindingOutcome SchemasClient::PutCodeBinding(const PutCodeBindingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutCodeBinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LanguageHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: Language, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Language]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: RegistryName, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutCodeBinding", "Required field: SchemaName, is not set");
    return PutCodeBindingOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutCodeBinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/language/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLanguage());
  return PutCodeBindingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutCodeBindingOutcomeCallable SchemasClient::PutCodeBindingCallable(const PutCodeBindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCodeBindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCodeBinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::PutCodeBindingAsync(const PutCodeBindingRequest& request, const PutCodeBindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutCodeBinding(request), context);
    } );
}

PutResourcePolicyOutcome SchemasClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/policy");
  return PutResourcePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable SchemasClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

SearchSchemasOutcome SchemasClient::SearchSchemas(const SearchSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KeywordsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSchemas", "Required field: Keywords, is not set");
    return SearchSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Keywords]", false));
  }
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSchemas", "Required field: RegistryName, is not set");
    return SearchSchemasOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/search");
  return SearchSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SearchSchemasOutcomeCallable SchemasClient::SearchSchemasCallable(const SearchSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::SearchSchemasAsync(const SearchSchemasRequest& request, const SearchSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchSchemas(request), context);
    } );
}

StartDiscovererOutcome SchemasClient::StartDiscoverer(const StartDiscovererRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDiscoverer", "Required field: DiscovererId, is not set");
    return StartDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartDiscovererOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDiscovererOutcomeCallable SchemasClient::StartDiscovererCallable(const StartDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::StartDiscovererAsync(const StartDiscovererRequest& request, const StartDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDiscoverer(request), context);
    } );
}

StopDiscovererOutcome SchemasClient::StopDiscoverer(const StopDiscovererRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDiscoverer", "Required field: DiscovererId, is not set");
    return StopDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  return StopDiscovererOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDiscovererOutcomeCallable SchemasClient::StopDiscovererCallable(const StopDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::StopDiscovererAsync(const StopDiscovererRequest& request, const StopDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopDiscoverer(request), context);
    } );
}

TagResourceOutcome SchemasClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SchemasClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SchemasClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SchemasClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDiscovererOutcome SchemasClient::UpdateDiscoverer(const UpdateDiscovererRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DiscovererIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDiscoverer", "Required field: DiscovererId, is not set");
    return UpdateDiscovererOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DiscovererId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDiscoverer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/discoverers/id/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDiscovererId());
  return UpdateDiscovererOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDiscovererOutcomeCallable SchemasClient::UpdateDiscovererCallable(const UpdateDiscovererRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDiscovererOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDiscoverer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UpdateDiscovererAsync(const UpdateDiscovererRequest& request, const UpdateDiscovererResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDiscoverer(request), context);
    } );
}

UpdateRegistryOutcome SchemasClient::UpdateRegistry(const UpdateRegistryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRegistry", "Required field: RegistryName, is not set");
    return UpdateRegistryOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  return UpdateRegistryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegistryOutcomeCallable SchemasClient::UpdateRegistryCallable(const UpdateRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UpdateRegistryAsync(const UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRegistry(request), context);
    } );
}

UpdateSchemaOutcome SchemasClient::UpdateSchema(const UpdateSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RegistryNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: RegistryName, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RegistryName]", false));
  }
  if (!request.SchemaNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: SchemaName, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<SchemasErrors>(SchemasErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/registries/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRegistryName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schemas/name/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSchemaName());
  return UpdateSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSchemaOutcomeCallable SchemasClient::UpdateSchemaCallable(const UpdateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SchemasClient::UpdateSchemaAsync(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSchema(request), context);
    } );
}

