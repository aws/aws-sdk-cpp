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

#include <aws/iotfleetwise/IoTFleetWiseClient.h>
#include <aws/iotfleetwise/IoTFleetWiseErrorMarshaller.h>
#include <aws/iotfleetwise/IoTFleetWiseEndpointProvider.h>
#include <aws/iotfleetwise/model/AssociateVehicleFleetRequest.h>
#include <aws/iotfleetwise/model/BatchCreateVehicleRequest.h>
#include <aws/iotfleetwise/model/BatchUpdateVehicleRequest.h>
#include <aws/iotfleetwise/model/CreateCampaignRequest.h>
#include <aws/iotfleetwise/model/CreateDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/CreateFleetRequest.h>
#include <aws/iotfleetwise/model/CreateModelManifestRequest.h>
#include <aws/iotfleetwise/model/CreateSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/CreateVehicleRequest.h>
#include <aws/iotfleetwise/model/DeleteCampaignRequest.h>
#include <aws/iotfleetwise/model/DeleteDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/DeleteFleetRequest.h>
#include <aws/iotfleetwise/model/DeleteModelManifestRequest.h>
#include <aws/iotfleetwise/model/DeleteSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/DeleteVehicleRequest.h>
#include <aws/iotfleetwise/model/DisassociateVehicleFleetRequest.h>
#include <aws/iotfleetwise/model/GetCampaignRequest.h>
#include <aws/iotfleetwise/model/GetDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/GetFleetRequest.h>
#include <aws/iotfleetwise/model/GetLoggingOptionsRequest.h>
#include <aws/iotfleetwise/model/GetModelManifestRequest.h>
#include <aws/iotfleetwise/model/GetRegisterAccountStatusRequest.h>
#include <aws/iotfleetwise/model/GetSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/GetVehicleRequest.h>
#include <aws/iotfleetwise/model/GetVehicleStatusRequest.h>
#include <aws/iotfleetwise/model/ImportDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/ImportSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/ListCampaignsRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestNetworkInterfacesRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestSignalsRequest.h>
#include <aws/iotfleetwise/model/ListDecoderManifestsRequest.h>
#include <aws/iotfleetwise/model/ListFleetsRequest.h>
#include <aws/iotfleetwise/model/ListFleetsForVehicleRequest.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesRequest.h>
#include <aws/iotfleetwise/model/ListModelManifestsRequest.h>
#include <aws/iotfleetwise/model/ListSignalCatalogNodesRequest.h>
#include <aws/iotfleetwise/model/ListSignalCatalogsRequest.h>
#include <aws/iotfleetwise/model/ListTagsForResourceRequest.h>
#include <aws/iotfleetwise/model/ListVehiclesRequest.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetRequest.h>
#include <aws/iotfleetwise/model/PutLoggingOptionsRequest.h>
#include <aws/iotfleetwise/model/RegisterAccountRequest.h>
#include <aws/iotfleetwise/model/TagResourceRequest.h>
#include <aws/iotfleetwise/model/UntagResourceRequest.h>
#include <aws/iotfleetwise/model/UpdateCampaignRequest.h>
#include <aws/iotfleetwise/model/UpdateDecoderManifestRequest.h>
#include <aws/iotfleetwise/model/UpdateFleetRequest.h>
#include <aws/iotfleetwise/model/UpdateModelManifestRequest.h>
#include <aws/iotfleetwise/model/UpdateSignalCatalogRequest.h>
#include <aws/iotfleetwise/model/UpdateVehicleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTFleetWise;
using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoTFleetWiseClient::SERVICE_NAME = "iotfleetwise";
const char* IoTFleetWiseClient::ALLOCATION_TAG = "IoTFleetWiseClient";

IoTFleetWiseClient::IoTFleetWiseClient(const IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration,
                                       std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const AWSCredentials& credentials,
                                       std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider,
                                       const IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<IoTFleetWiseEndpointProviderBase> endpointProvider,
                                       const IoTFleetWise::IoTFleetWiseClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoTFleetWiseClient::IoTFleetWiseClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTFleetWiseClient::IoTFleetWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTFleetWiseErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTFleetWiseEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoTFleetWiseClient::~IoTFleetWiseClient()
{
}

std::shared_ptr<IoTFleetWiseEndpointProviderBase>& IoTFleetWiseClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTFleetWiseClient::init(const IoTFleetWise::IoTFleetWiseClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoTFleetWise");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoTFleetWiseClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateVehicleFleetOutcome IoTFleetWiseClient::AssociateVehicleFleet(const AssociateVehicleFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateVehicleFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateVehicleFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateVehicleFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateVehicleFleetOutcomeCallable IoTFleetWiseClient::AssociateVehicleFleetCallable(const AssociateVehicleFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateVehicleFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateVehicleFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::AssociateVehicleFleetAsync(const AssociateVehicleFleetRequest& request, const AssociateVehicleFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateVehicleFleet(request), context);
    } );
}

BatchCreateVehicleOutcome IoTFleetWiseClient::BatchCreateVehicle(const BatchCreateVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchCreateVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateVehicleOutcomeCallable IoTFleetWiseClient::BatchCreateVehicleCallable(const BatchCreateVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::BatchCreateVehicleAsync(const BatchCreateVehicleRequest& request, const BatchCreateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateVehicle(request), context);
    } );
}

BatchUpdateVehicleOutcome IoTFleetWiseClient::BatchUpdateVehicle(const BatchUpdateVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchUpdateVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateVehicleOutcomeCallable IoTFleetWiseClient::BatchUpdateVehicleCallable(const BatchUpdateVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::BatchUpdateVehicleAsync(const BatchUpdateVehicleRequest& request, const BatchUpdateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUpdateVehicle(request), context);
    } );
}

CreateCampaignOutcome IoTFleetWiseClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCampaignOutcomeCallable IoTFleetWiseClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCampaign(request), context);
    } );
}

CreateDecoderManifestOutcome IoTFleetWiseClient::CreateDecoderManifest(const CreateDecoderManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDecoderManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDecoderManifestOutcomeCallable IoTFleetWiseClient::CreateDecoderManifestCallable(const CreateDecoderManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDecoderManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDecoderManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::CreateDecoderManifestAsync(const CreateDecoderManifestRequest& request, const CreateDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDecoderManifest(request), context);
    } );
}

CreateFleetOutcome IoTFleetWiseClient::CreateFleet(const CreateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetOutcomeCallable IoTFleetWiseClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFleet(request), context);
    } );
}

CreateModelManifestOutcome IoTFleetWiseClient::CreateModelManifest(const CreateModelManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelManifestOutcomeCallable IoTFleetWiseClient::CreateModelManifestCallable(const CreateModelManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::CreateModelManifestAsync(const CreateModelManifestRequest& request, const CreateModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelManifest(request), context);
    } );
}

CreateSignalCatalogOutcome IoTFleetWiseClient::CreateSignalCatalog(const CreateSignalCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSignalCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSignalCatalogOutcomeCallable IoTFleetWiseClient::CreateSignalCatalogCallable(const CreateSignalCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSignalCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSignalCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::CreateSignalCatalogAsync(const CreateSignalCatalogRequest& request, const CreateSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSignalCatalog(request), context);
    } );
}

CreateVehicleOutcome IoTFleetWiseClient::CreateVehicle(const CreateVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVehicleOutcomeCallable IoTFleetWiseClient::CreateVehicleCallable(const CreateVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::CreateVehicleAsync(const CreateVehicleRequest& request, const CreateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVehicle(request), context);
    } );
}

DeleteCampaignOutcome IoTFleetWiseClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCampaignOutcomeCallable IoTFleetWiseClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCampaign(request), context);
    } );
}

DeleteDecoderManifestOutcome IoTFleetWiseClient::DeleteDecoderManifest(const DeleteDecoderManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDecoderManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDecoderManifestOutcomeCallable IoTFleetWiseClient::DeleteDecoderManifestCallable(const DeleteDecoderManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDecoderManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDecoderManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DeleteDecoderManifestAsync(const DeleteDecoderManifestRequest& request, const DeleteDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDecoderManifest(request), context);
    } );
}

DeleteFleetOutcome IoTFleetWiseClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetOutcomeCallable IoTFleetWiseClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFleet(request), context);
    } );
}

DeleteModelManifestOutcome IoTFleetWiseClient::DeleteModelManifest(const DeleteModelManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelManifestOutcomeCallable IoTFleetWiseClient::DeleteModelManifestCallable(const DeleteModelManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DeleteModelManifestAsync(const DeleteModelManifestRequest& request, const DeleteModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelManifest(request), context);
    } );
}

DeleteSignalCatalogOutcome IoTFleetWiseClient::DeleteSignalCatalog(const DeleteSignalCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSignalCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSignalCatalogOutcomeCallable IoTFleetWiseClient::DeleteSignalCatalogCallable(const DeleteSignalCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSignalCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSignalCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DeleteSignalCatalogAsync(const DeleteSignalCatalogRequest& request, const DeleteSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSignalCatalog(request), context);
    } );
}

DeleteVehicleOutcome IoTFleetWiseClient::DeleteVehicle(const DeleteVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVehicleOutcomeCallable IoTFleetWiseClient::DeleteVehicleCallable(const DeleteVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DeleteVehicleAsync(const DeleteVehicleRequest& request, const DeleteVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVehicle(request), context);
    } );
}

DisassociateVehicleFleetOutcome IoTFleetWiseClient::DisassociateVehicleFleet(const DisassociateVehicleFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateVehicleFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateVehicleFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateVehicleFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateVehicleFleetOutcomeCallable IoTFleetWiseClient::DisassociateVehicleFleetCallable(const DisassociateVehicleFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateVehicleFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateVehicleFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::DisassociateVehicleFleetAsync(const DisassociateVehicleFleetRequest& request, const DisassociateVehicleFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateVehicleFleet(request), context);
    } );
}

GetCampaignOutcome IoTFleetWiseClient::GetCampaign(const GetCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCampaignOutcomeCallable IoTFleetWiseClient::GetCampaignCallable(const GetCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetCampaignAsync(const GetCampaignRequest& request, const GetCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCampaign(request), context);
    } );
}

GetDecoderManifestOutcome IoTFleetWiseClient::GetDecoderManifest(const GetDecoderManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDecoderManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDecoderManifestOutcomeCallable IoTFleetWiseClient::GetDecoderManifestCallable(const GetDecoderManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDecoderManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDecoderManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetDecoderManifestAsync(const GetDecoderManifestRequest& request, const GetDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDecoderManifest(request), context);
    } );
}

GetFleetOutcome IoTFleetWiseClient::GetFleet(const GetFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFleetOutcomeCallable IoTFleetWiseClient::GetFleetCallable(const GetFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetFleetAsync(const GetFleetRequest& request, const GetFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFleet(request), context);
    } );
}

GetLoggingOptionsOutcome IoTFleetWiseClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoggingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoggingOptionsOutcomeCallable IoTFleetWiseClient::GetLoggingOptionsCallable(const GetLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetLoggingOptionsAsync(const GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoggingOptions(request), context);
    } );
}

GetModelManifestOutcome IoTFleetWiseClient::GetModelManifest(const GetModelManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetModelManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelManifestOutcomeCallable IoTFleetWiseClient::GetModelManifestCallable(const GetModelManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetModelManifestAsync(const GetModelManifestRequest& request, const GetModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetModelManifest(request), context);
    } );
}

GetRegisterAccountStatusOutcome IoTFleetWiseClient::GetRegisterAccountStatus(const GetRegisterAccountStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegisterAccountStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegisterAccountStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegisterAccountStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegisterAccountStatusOutcomeCallable IoTFleetWiseClient::GetRegisterAccountStatusCallable(const GetRegisterAccountStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegisterAccountStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegisterAccountStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetRegisterAccountStatusAsync(const GetRegisterAccountStatusRequest& request, const GetRegisterAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegisterAccountStatus(request), context);
    } );
}

GetSignalCatalogOutcome IoTFleetWiseClient::GetSignalCatalog(const GetSignalCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSignalCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSignalCatalogOutcomeCallable IoTFleetWiseClient::GetSignalCatalogCallable(const GetSignalCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSignalCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSignalCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetSignalCatalogAsync(const GetSignalCatalogRequest& request, const GetSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSignalCatalog(request), context);
    } );
}

GetVehicleOutcome IoTFleetWiseClient::GetVehicle(const GetVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVehicleOutcomeCallable IoTFleetWiseClient::GetVehicleCallable(const GetVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetVehicleAsync(const GetVehicleRequest& request, const GetVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVehicle(request), context);
    } );
}

GetVehicleStatusOutcome IoTFleetWiseClient::GetVehicleStatus(const GetVehicleStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVehicleStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVehicleStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVehicleStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVehicleStatusOutcomeCallable IoTFleetWiseClient::GetVehicleStatusCallable(const GetVehicleStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVehicleStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVehicleStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::GetVehicleStatusAsync(const GetVehicleStatusRequest& request, const GetVehicleStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVehicleStatus(request), context);
    } );
}

ImportDecoderManifestOutcome IoTFleetWiseClient::ImportDecoderManifest(const ImportDecoderManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportDecoderManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportDecoderManifestOutcomeCallable IoTFleetWiseClient::ImportDecoderManifestCallable(const ImportDecoderManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportDecoderManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportDecoderManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ImportDecoderManifestAsync(const ImportDecoderManifestRequest& request, const ImportDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportDecoderManifest(request), context);
    } );
}

ImportSignalCatalogOutcome IoTFleetWiseClient::ImportSignalCatalog(const ImportSignalCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportSignalCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportSignalCatalogOutcomeCallable IoTFleetWiseClient::ImportSignalCatalogCallable(const ImportSignalCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportSignalCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportSignalCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ImportSignalCatalogAsync(const ImportSignalCatalogRequest& request, const ImportSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportSignalCatalog(request), context);
    } );
}

ListCampaignsOutcome IoTFleetWiseClient::ListCampaigns(const ListCampaignsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCampaignsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCampaignsOutcomeCallable IoTFleetWiseClient::ListCampaignsCallable(const ListCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListCampaignsAsync(const ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCampaigns(request), context);
    } );
}

ListDecoderManifestNetworkInterfacesOutcome IoTFleetWiseClient::ListDecoderManifestNetworkInterfaces(const ListDecoderManifestNetworkInterfacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDecoderManifestNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDecoderManifestNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDecoderManifestNetworkInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDecoderManifestNetworkInterfacesOutcomeCallable IoTFleetWiseClient::ListDecoderManifestNetworkInterfacesCallable(const ListDecoderManifestNetworkInterfacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDecoderManifestNetworkInterfacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDecoderManifestNetworkInterfaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListDecoderManifestNetworkInterfacesAsync(const ListDecoderManifestNetworkInterfacesRequest& request, const ListDecoderManifestNetworkInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDecoderManifestNetworkInterfaces(request), context);
    } );
}

ListDecoderManifestSignalsOutcome IoTFleetWiseClient::ListDecoderManifestSignals(const ListDecoderManifestSignalsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDecoderManifestSignals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDecoderManifestSignals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDecoderManifestSignalsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDecoderManifestSignalsOutcomeCallable IoTFleetWiseClient::ListDecoderManifestSignalsCallable(const ListDecoderManifestSignalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDecoderManifestSignalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDecoderManifestSignals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListDecoderManifestSignalsAsync(const ListDecoderManifestSignalsRequest& request, const ListDecoderManifestSignalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDecoderManifestSignals(request), context);
    } );
}

ListDecoderManifestsOutcome IoTFleetWiseClient::ListDecoderManifests(const ListDecoderManifestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDecoderManifests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDecoderManifests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDecoderManifestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDecoderManifestsOutcomeCallable IoTFleetWiseClient::ListDecoderManifestsCallable(const ListDecoderManifestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDecoderManifestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDecoderManifests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListDecoderManifestsAsync(const ListDecoderManifestsRequest& request, const ListDecoderManifestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDecoderManifests(request), context);
    } );
}

ListFleetsOutcome IoTFleetWiseClient::ListFleets(const ListFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFleetsOutcomeCallable IoTFleetWiseClient::ListFleetsCallable(const ListFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFleets(request), context);
    } );
}

ListFleetsForVehicleOutcome IoTFleetWiseClient::ListFleetsForVehicle(const ListFleetsForVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFleetsForVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFleetsForVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFleetsForVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFleetsForVehicleOutcomeCallable IoTFleetWiseClient::ListFleetsForVehicleCallable(const ListFleetsForVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetsForVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleetsForVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListFleetsForVehicleAsync(const ListFleetsForVehicleRequest& request, const ListFleetsForVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFleetsForVehicle(request), context);
    } );
}

ListModelManifestNodesOutcome IoTFleetWiseClient::ListModelManifestNodes(const ListModelManifestNodesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelManifestNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelManifestNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelManifestNodesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelManifestNodesOutcomeCallable IoTFleetWiseClient::ListModelManifestNodesCallable(const ListModelManifestNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelManifestNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelManifestNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListModelManifestNodesAsync(const ListModelManifestNodesRequest& request, const ListModelManifestNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelManifestNodes(request), context);
    } );
}

ListModelManifestsOutcome IoTFleetWiseClient::ListModelManifests(const ListModelManifestsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelManifests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelManifests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelManifestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelManifestsOutcomeCallable IoTFleetWiseClient::ListModelManifestsCallable(const ListModelManifestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelManifestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelManifests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListModelManifestsAsync(const ListModelManifestsRequest& request, const ListModelManifestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelManifests(request), context);
    } );
}

ListSignalCatalogNodesOutcome IoTFleetWiseClient::ListSignalCatalogNodes(const ListSignalCatalogNodesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSignalCatalogNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSignalCatalogNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSignalCatalogNodesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSignalCatalogNodesOutcomeCallable IoTFleetWiseClient::ListSignalCatalogNodesCallable(const ListSignalCatalogNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSignalCatalogNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSignalCatalogNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListSignalCatalogNodesAsync(const ListSignalCatalogNodesRequest& request, const ListSignalCatalogNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSignalCatalogNodes(request), context);
    } );
}

ListSignalCatalogsOutcome IoTFleetWiseClient::ListSignalCatalogs(const ListSignalCatalogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSignalCatalogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSignalCatalogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSignalCatalogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSignalCatalogsOutcomeCallable IoTFleetWiseClient::ListSignalCatalogsCallable(const ListSignalCatalogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSignalCatalogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSignalCatalogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListSignalCatalogsAsync(const ListSignalCatalogsRequest& request, const ListSignalCatalogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSignalCatalogs(request), context);
    } );
}

ListTagsForResourceOutcome IoTFleetWiseClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTFleetWiseClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListVehiclesOutcome IoTFleetWiseClient::ListVehicles(const ListVehiclesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVehicles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVehicles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVehiclesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVehiclesOutcomeCallable IoTFleetWiseClient::ListVehiclesCallable(const ListVehiclesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVehiclesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVehicles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListVehiclesAsync(const ListVehiclesRequest& request, const ListVehiclesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVehicles(request), context);
    } );
}

ListVehiclesInFleetOutcome IoTFleetWiseClient::ListVehiclesInFleet(const ListVehiclesInFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVehiclesInFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVehiclesInFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVehiclesInFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVehiclesInFleetOutcomeCallable IoTFleetWiseClient::ListVehiclesInFleetCallable(const ListVehiclesInFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVehiclesInFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVehiclesInFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::ListVehiclesInFleetAsync(const ListVehiclesInFleetRequest& request, const ListVehiclesInFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVehiclesInFleet(request), context);
    } );
}

PutLoggingOptionsOutcome IoTFleetWiseClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutLoggingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingOptionsOutcomeCallable IoTFleetWiseClient::PutLoggingOptionsCallable(const PutLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::PutLoggingOptionsAsync(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLoggingOptions(request), context);
    } );
}

RegisterAccountOutcome IoTFleetWiseClient::RegisterAccount(const RegisterAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterAccountOutcomeCallable IoTFleetWiseClient::RegisterAccountCallable(const RegisterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::RegisterAccountAsync(const RegisterAccountRequest& request, const RegisterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterAccount(request), context);
    } );
}

TagResourceOutcome IoTFleetWiseClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTFleetWiseClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome IoTFleetWiseClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTFleetWiseClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateCampaignOutcome IoTFleetWiseClient::UpdateCampaign(const UpdateCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignOutcomeCallable IoTFleetWiseClient::UpdateCampaignCallable(const UpdateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UpdateCampaignAsync(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCampaign(request), context);
    } );
}

UpdateDecoderManifestOutcome IoTFleetWiseClient::UpdateDecoderManifest(const UpdateDecoderManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDecoderManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDecoderManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDecoderManifestOutcomeCallable IoTFleetWiseClient::UpdateDecoderManifestCallable(const UpdateDecoderManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDecoderManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDecoderManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UpdateDecoderManifestAsync(const UpdateDecoderManifestRequest& request, const UpdateDecoderManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDecoderManifest(request), context);
    } );
}

UpdateFleetOutcome IoTFleetWiseClient::UpdateFleet(const UpdateFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetOutcomeCallable IoTFleetWiseClient::UpdateFleetCallable(const UpdateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UpdateFleetAsync(const UpdateFleetRequest& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFleet(request), context);
    } );
}

UpdateModelManifestOutcome IoTFleetWiseClient::UpdateModelManifest(const UpdateModelManifestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModelManifest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateModelManifestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelManifestOutcomeCallable IoTFleetWiseClient::UpdateModelManifestCallable(const UpdateModelManifestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelManifestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelManifest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UpdateModelManifestAsync(const UpdateModelManifestRequest& request, const UpdateModelManifestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateModelManifest(request), context);
    } );
}

UpdateSignalCatalogOutcome IoTFleetWiseClient::UpdateSignalCatalog(const UpdateSignalCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSignalCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSignalCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSignalCatalogOutcomeCallable IoTFleetWiseClient::UpdateSignalCatalogCallable(const UpdateSignalCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSignalCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSignalCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UpdateSignalCatalogAsync(const UpdateSignalCatalogRequest& request, const UpdateSignalCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSignalCatalog(request), context);
    } );
}

UpdateVehicleOutcome IoTFleetWiseClient::UpdateVehicle(const UpdateVehicleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVehicle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVehicleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVehicleOutcomeCallable IoTFleetWiseClient::UpdateVehicleCallable(const UpdateVehicleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVehicleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVehicle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTFleetWiseClient::UpdateVehicleAsync(const UpdateVehicleRequest& request, const UpdateVehicleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVehicle(request), context);
    } );
}

