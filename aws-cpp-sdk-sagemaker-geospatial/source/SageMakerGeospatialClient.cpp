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

#include <aws/sagemaker-geospatial/SageMakerGeospatialClient.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialErrorMarshaller.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialEndpointProvider.h>
#include <aws/sagemaker-geospatial/model/DeleteEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/DeleteVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/ExportEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/ExportVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/GetEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/GetRasterDataCollectionRequest.h>
#include <aws/sagemaker-geospatial/model/GetTileRequest.h>
#include <aws/sagemaker-geospatial/model/GetVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsRequest.h>
#include <aws/sagemaker-geospatial/model/ListRasterDataCollectionsRequest.h>
#include <aws/sagemaker-geospatial/model/ListTagsForResourceRequest.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsRequest.h>
#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionRequest.h>
#include <aws/sagemaker-geospatial/model/StartEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/StartVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/StopEarthObservationJobRequest.h>
#include <aws/sagemaker-geospatial/model/StopVectorEnrichmentJobRequest.h>
#include <aws/sagemaker-geospatial/model/TagResourceRequest.h>
#include <aws/sagemaker-geospatial/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerGeospatial;
using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SageMakerGeospatialClient::SERVICE_NAME = "sagemaker-geospatial";
const char* SageMakerGeospatialClient::ALLOCATION_TAG = "SageMakerGeospatialClient";

SageMakerGeospatialClient::SageMakerGeospatialClient(const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider,
                                                     const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider,
                                                     const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SageMakerGeospatialClient::SageMakerGeospatialClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerGeospatialClient::SageMakerGeospatialClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerGeospatialErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerGeospatialEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SageMakerGeospatialClient::~SageMakerGeospatialClient()
{
}

std::shared_ptr<SageMakerGeospatialEndpointProviderBase>& SageMakerGeospatialClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SageMakerGeospatialClient::init(const SageMakerGeospatial::SageMakerGeospatialClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker Geospatial");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SageMakerGeospatialClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteEarthObservationJobOutcome SageMakerGeospatialClient::DeleteEarthObservationJob(const DeleteEarthObservationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEarthObservationJob", "Required field: Arn, is not set");
    return DeleteEarthObservationJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return DeleteEarthObservationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEarthObservationJobOutcomeCallable SageMakerGeospatialClient::DeleteEarthObservationJobCallable(const DeleteEarthObservationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEarthObservationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEarthObservationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::DeleteEarthObservationJobAsync(const DeleteEarthObservationJobRequest& request, const DeleteEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEarthObservationJob(request), context);
    } );
}

DeleteVectorEnrichmentJobOutcome SageMakerGeospatialClient::DeleteVectorEnrichmentJob(const DeleteVectorEnrichmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVectorEnrichmentJob", "Required field: Arn, is not set");
    return DeleteVectorEnrichmentJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return DeleteVectorEnrichmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVectorEnrichmentJobOutcomeCallable SageMakerGeospatialClient::DeleteVectorEnrichmentJobCallable(const DeleteVectorEnrichmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVectorEnrichmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVectorEnrichmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::DeleteVectorEnrichmentJobAsync(const DeleteVectorEnrichmentJobRequest& request, const DeleteVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVectorEnrichmentJob(request), context);
    } );
}

ExportEarthObservationJobOutcome SageMakerGeospatialClient::ExportEarthObservationJob(const ExportEarthObservationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/export-earth-observation-job");
  return ExportEarthObservationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportEarthObservationJobOutcomeCallable SageMakerGeospatialClient::ExportEarthObservationJobCallable(const ExportEarthObservationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportEarthObservationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportEarthObservationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::ExportEarthObservationJobAsync(const ExportEarthObservationJobRequest& request, const ExportEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportEarthObservationJob(request), context);
    } );
}

ExportVectorEnrichmentJobOutcome SageMakerGeospatialClient::ExportVectorEnrichmentJob(const ExportVectorEnrichmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/export-vector-enrichment-jobs");
  return ExportVectorEnrichmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportVectorEnrichmentJobOutcomeCallable SageMakerGeospatialClient::ExportVectorEnrichmentJobCallable(const ExportVectorEnrichmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportVectorEnrichmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportVectorEnrichmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::ExportVectorEnrichmentJobAsync(const ExportVectorEnrichmentJobRequest& request, const ExportVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportVectorEnrichmentJob(request), context);
    } );
}

GetEarthObservationJobOutcome SageMakerGeospatialClient::GetEarthObservationJob(const GetEarthObservationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEarthObservationJob", "Required field: Arn, is not set");
    return GetEarthObservationJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return GetEarthObservationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEarthObservationJobOutcomeCallable SageMakerGeospatialClient::GetEarthObservationJobCallable(const GetEarthObservationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEarthObservationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEarthObservationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::GetEarthObservationJobAsync(const GetEarthObservationJobRequest& request, const GetEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEarthObservationJob(request), context);
    } );
}

GetRasterDataCollectionOutcome SageMakerGeospatialClient::GetRasterDataCollection(const GetRasterDataCollectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRasterDataCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRasterDataCollection", "Required field: Arn, is not set");
    return GetRasterDataCollectionOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRasterDataCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/raster-data-collection/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return GetRasterDataCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRasterDataCollectionOutcomeCallable SageMakerGeospatialClient::GetRasterDataCollectionCallable(const GetRasterDataCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRasterDataCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRasterDataCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::GetRasterDataCollectionAsync(const GetRasterDataCollectionRequest& request, const GetRasterDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRasterDataCollection(request), context);
    } );
}

GetTileOutcome SageMakerGeospatialClient::GetTile(const GetTileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Arn, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.ImageAssetsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: ImageAssets, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageAssets]", false));
  }
  if (!request.TargetHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Target, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Target]", false));
  }
  if (!request.XHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: X, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [X]", false));
  }
  if (!request.YHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Y, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Y]", false));
  }
  if (!request.ZHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Z, is not set");
    return GetTileOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Z]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZ());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetX());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetY());
  return GetTileOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetTileOutcomeCallable SageMakerGeospatialClient::GetTileCallable(const GetTileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::GetTileAsync(const GetTileRequest& request, const GetTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTile(request), context);
    } );
}

GetVectorEnrichmentJobOutcome SageMakerGeospatialClient::GetVectorEnrichmentJob(const GetVectorEnrichmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVectorEnrichmentJob", "Required field: Arn, is not set");
    return GetVectorEnrichmentJobOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return GetVectorEnrichmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVectorEnrichmentJobOutcomeCallable SageMakerGeospatialClient::GetVectorEnrichmentJobCallable(const GetVectorEnrichmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVectorEnrichmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVectorEnrichmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::GetVectorEnrichmentJobAsync(const GetVectorEnrichmentJobRequest& request, const GetVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVectorEnrichmentJob(request), context);
    } );
}

ListEarthObservationJobsOutcome SageMakerGeospatialClient::ListEarthObservationJobs(const ListEarthObservationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEarthObservationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEarthObservationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-earth-observation-jobs");
  return ListEarthObservationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEarthObservationJobsOutcomeCallable SageMakerGeospatialClient::ListEarthObservationJobsCallable(const ListEarthObservationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEarthObservationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEarthObservationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::ListEarthObservationJobsAsync(const ListEarthObservationJobsRequest& request, const ListEarthObservationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEarthObservationJobs(request), context);
    } );
}

ListRasterDataCollectionsOutcome SageMakerGeospatialClient::ListRasterDataCollections(const ListRasterDataCollectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRasterDataCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRasterDataCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/raster-data-collections");
  return ListRasterDataCollectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRasterDataCollectionsOutcomeCallable SageMakerGeospatialClient::ListRasterDataCollectionsCallable(const ListRasterDataCollectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRasterDataCollectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRasterDataCollections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::ListRasterDataCollectionsAsync(const ListRasterDataCollectionsRequest& request, const ListRasterDataCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRasterDataCollections(request), context);
    } );
}

ListTagsForResourceOutcome SageMakerGeospatialClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable SageMakerGeospatialClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListVectorEnrichmentJobsOutcome SageMakerGeospatialClient::ListVectorEnrichmentJobs(const ListVectorEnrichmentJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVectorEnrichmentJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVectorEnrichmentJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-vector-enrichment-jobs");
  return ListVectorEnrichmentJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVectorEnrichmentJobsOutcomeCallable SageMakerGeospatialClient::ListVectorEnrichmentJobsCallable(const ListVectorEnrichmentJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVectorEnrichmentJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVectorEnrichmentJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::ListVectorEnrichmentJobsAsync(const ListVectorEnrichmentJobsRequest& request, const ListVectorEnrichmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVectorEnrichmentJobs(request), context);
    } );
}

SearchRasterDataCollectionOutcome SageMakerGeospatialClient::SearchRasterDataCollection(const SearchRasterDataCollectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchRasterDataCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchRasterDataCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search-raster-data-collection");
  return SearchRasterDataCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchRasterDataCollectionOutcomeCallable SageMakerGeospatialClient::SearchRasterDataCollectionCallable(const SearchRasterDataCollectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchRasterDataCollectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchRasterDataCollection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::SearchRasterDataCollectionAsync(const SearchRasterDataCollectionRequest& request, const SearchRasterDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchRasterDataCollection(request), context);
    } );
}

StartEarthObservationJobOutcome SageMakerGeospatialClient::StartEarthObservationJob(const StartEarthObservationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs");
  return StartEarthObservationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEarthObservationJobOutcomeCallable SageMakerGeospatialClient::StartEarthObservationJobCallable(const StartEarthObservationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEarthObservationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEarthObservationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::StartEarthObservationJobAsync(const StartEarthObservationJobRequest& request, const StartEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartEarthObservationJob(request), context);
    } );
}

StartVectorEnrichmentJobOutcome SageMakerGeospatialClient::StartVectorEnrichmentJob(const StartVectorEnrichmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs");
  return StartVectorEnrichmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartVectorEnrichmentJobOutcomeCallable SageMakerGeospatialClient::StartVectorEnrichmentJobCallable(const StartVectorEnrichmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartVectorEnrichmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartVectorEnrichmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::StartVectorEnrichmentJobAsync(const StartVectorEnrichmentJobRequest& request, const StartVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartVectorEnrichmentJob(request), context);
    } );
}

StopEarthObservationJobOutcome SageMakerGeospatialClient::StopEarthObservationJob(const StopEarthObservationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopEarthObservationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/earth-observation-jobs/stop");
  return StopEarthObservationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEarthObservationJobOutcomeCallable SageMakerGeospatialClient::StopEarthObservationJobCallable(const StopEarthObservationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEarthObservationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEarthObservationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::StopEarthObservationJobAsync(const StopEarthObservationJobRequest& request, const StopEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopEarthObservationJob(request), context);
    } );
}

StopVectorEnrichmentJobOutcome SageMakerGeospatialClient::StopVectorEnrichmentJob(const StopVectorEnrichmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopVectorEnrichmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vector-enrichment-jobs/stop");
  return StopVectorEnrichmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopVectorEnrichmentJobOutcomeCallable SageMakerGeospatialClient::StopVectorEnrichmentJobCallable(const StopVectorEnrichmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopVectorEnrichmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopVectorEnrichmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::StopVectorEnrichmentJobAsync(const StopVectorEnrichmentJobRequest& request, const StopVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopVectorEnrichmentJob(request), context);
    } );
}

TagResourceOutcome SageMakerGeospatialClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable SageMakerGeospatialClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome SageMakerGeospatialClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SageMakerGeospatialErrors>(SageMakerGeospatialErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable SageMakerGeospatialClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerGeospatialClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

