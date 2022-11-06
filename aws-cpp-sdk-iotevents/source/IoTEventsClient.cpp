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

#include <aws/iotevents/IoTEventsClient.h>
#include <aws/iotevents/IoTEventsErrorMarshaller.h>
#include <aws/iotevents/IoTEventsEndpointProvider.h>
#include <aws/iotevents/model/CreateAlarmModelRequest.h>
#include <aws/iotevents/model/CreateDetectorModelRequest.h>
#include <aws/iotevents/model/CreateInputRequest.h>
#include <aws/iotevents/model/DeleteAlarmModelRequest.h>
#include <aws/iotevents/model/DeleteDetectorModelRequest.h>
#include <aws/iotevents/model/DeleteInputRequest.h>
#include <aws/iotevents/model/DescribeAlarmModelRequest.h>
#include <aws/iotevents/model/DescribeDetectorModelRequest.h>
#include <aws/iotevents/model/DescribeDetectorModelAnalysisRequest.h>
#include <aws/iotevents/model/DescribeInputRequest.h>
#include <aws/iotevents/model/DescribeLoggingOptionsRequest.h>
#include <aws/iotevents/model/GetDetectorModelAnalysisResultsRequest.h>
#include <aws/iotevents/model/ListAlarmModelVersionsRequest.h>
#include <aws/iotevents/model/ListAlarmModelsRequest.h>
#include <aws/iotevents/model/ListDetectorModelVersionsRequest.h>
#include <aws/iotevents/model/ListDetectorModelsRequest.h>
#include <aws/iotevents/model/ListInputRoutingsRequest.h>
#include <aws/iotevents/model/ListInputsRequest.h>
#include <aws/iotevents/model/ListTagsForResourceRequest.h>
#include <aws/iotevents/model/PutLoggingOptionsRequest.h>
#include <aws/iotevents/model/StartDetectorModelAnalysisRequest.h>
#include <aws/iotevents/model/TagResourceRequest.h>
#include <aws/iotevents/model/UntagResourceRequest.h>
#include <aws/iotevents/model/UpdateAlarmModelRequest.h>
#include <aws/iotevents/model/UpdateDetectorModelRequest.h>
#include <aws/iotevents/model/UpdateInputRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTEvents;
using namespace Aws::IoTEvents::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoTEventsClient::SERVICE_NAME = "iotevents";
const char* IoTEventsClient::ALLOCATION_TAG = "IoTEventsClient";

IoTEventsClient::IoTEventsClient(const IoTEvents::IoTEventsClientConfiguration& clientConfiguration,
                                 std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const AWSCredentials& credentials,
                                 std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider,
                                 const IoTEvents::IoTEventsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<IoTEventsEndpointProviderBase> endpointProvider,
                                 const IoTEvents::IoTEventsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoTEventsClient::IoTEventsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTEventsClient::IoTEventsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTEventsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTEventsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoTEventsClient::~IoTEventsClient()
{
}

std::shared_ptr<IoTEventsEndpointProviderBase>& IoTEventsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTEventsClient::init(const IoTEvents::IoTEventsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT Events");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoTEventsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAlarmModelOutcome IoTEventsClient::CreateAlarmModel(const CreateAlarmModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models");
  return CreateAlarmModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlarmModelOutcomeCallable IoTEventsClient::CreateAlarmModelCallable(const CreateAlarmModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAlarmModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlarmModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::CreateAlarmModelAsync(const CreateAlarmModelRequest& request, const CreateAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAlarmModel(request), context);
    } );
}

CreateDetectorModelOutcome IoTEventsClient::CreateDetectorModel(const CreateDetectorModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models");
  return CreateDetectorModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDetectorModelOutcomeCallable IoTEventsClient::CreateDetectorModelCallable(const CreateDetectorModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDetectorModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDetectorModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::CreateDetectorModelAsync(const CreateDetectorModelRequest& request, const CreateDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDetectorModel(request), context);
    } );
}

CreateInputOutcome IoTEventsClient::CreateInput(const CreateInputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inputs");
  return CreateInputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInputOutcomeCallable IoTEventsClient::CreateInputCallable(const CreateInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::CreateInputAsync(const CreateInputRequest& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInput(request), context);
    } );
}

DeleteAlarmModelOutcome IoTEventsClient::DeleteAlarmModel(const DeleteAlarmModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AlarmModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAlarmModel", "Required field: AlarmModelName, is not set");
    return DeleteAlarmModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AlarmModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  return DeleteAlarmModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlarmModelOutcomeCallable IoTEventsClient::DeleteAlarmModelCallable(const DeleteAlarmModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlarmModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlarmModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DeleteAlarmModelAsync(const DeleteAlarmModelRequest& request, const DeleteAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlarmModel(request), context);
    } );
}

DeleteDetectorModelOutcome IoTEventsClient::DeleteDetectorModel(const DeleteDetectorModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDetectorModel", "Required field: DetectorModelName, is not set");
    return DeleteDetectorModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  return DeleteDetectorModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorModelOutcomeCallable IoTEventsClient::DeleteDetectorModelCallable(const DeleteDetectorModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetectorModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DeleteDetectorModelAsync(const DeleteDetectorModelRequest& request, const DeleteDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDetectorModel(request), context);
    } );
}

DeleteInputOutcome IoTEventsClient::DeleteInput(const DeleteInputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInput", "Required field: InputName, is not set");
    return DeleteInputOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputName());
  return DeleteInputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInputOutcomeCallable IoTEventsClient::DeleteInputCallable(const DeleteInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DeleteInputAsync(const DeleteInputRequest& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInput(request), context);
    } );
}

DescribeAlarmModelOutcome IoTEventsClient::DescribeAlarmModel(const DescribeAlarmModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AlarmModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAlarmModel", "Required field: AlarmModelName, is not set");
    return DescribeAlarmModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AlarmModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  return DescribeAlarmModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlarmModelOutcomeCallable IoTEventsClient::DescribeAlarmModelCallable(const DescribeAlarmModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarmModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DescribeAlarmModelAsync(const DescribeAlarmModelRequest& request, const DescribeAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlarmModel(request), context);
    } );
}

DescribeDetectorModelOutcome IoTEventsClient::DescribeDetectorModel(const DescribeDetectorModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDetectorModel", "Required field: DetectorModelName, is not set");
    return DescribeDetectorModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  return DescribeDetectorModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDetectorModelOutcomeCallable IoTEventsClient::DescribeDetectorModelCallable(const DescribeDetectorModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDetectorModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDetectorModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DescribeDetectorModelAsync(const DescribeDetectorModelRequest& request, const DescribeDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDetectorModel(request), context);
    } );
}

DescribeDetectorModelAnalysisOutcome IoTEventsClient::DescribeDetectorModelAnalysis(const DescribeDetectorModelAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDetectorModelAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDetectorModelAnalysis", "Required field: AnalysisId, is not set");
    return DescribeDetectorModelAnalysisOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDetectorModelAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysis/detector-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return DescribeDetectorModelAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDetectorModelAnalysisOutcomeCallable IoTEventsClient::DescribeDetectorModelAnalysisCallable(const DescribeDetectorModelAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDetectorModelAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDetectorModelAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DescribeDetectorModelAnalysisAsync(const DescribeDetectorModelAnalysisRequest& request, const DescribeDetectorModelAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDetectorModelAnalysis(request), context);
    } );
}

DescribeInputOutcome IoTEventsClient::DescribeInput(const DescribeInputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInput", "Required field: InputName, is not set");
    return DescribeInputOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputName());
  return DescribeInputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeInputOutcomeCallable IoTEventsClient::DescribeInputCallable(const DescribeInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DescribeInputAsync(const DescribeInputRequest& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInput(request), context);
    } );
}

DescribeLoggingOptionsOutcome IoTEventsClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  return DescribeLoggingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingOptionsOutcomeCallable IoTEventsClient::DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLoggingOptions(request), context);
    } );
}

GetDetectorModelAnalysisResultsOutcome IoTEventsClient::GetDetectorModelAnalysisResults(const GetDetectorModelAnalysisResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDetectorModelAnalysisResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDetectorModelAnalysisResults", "Required field: AnalysisId, is not set");
    return GetDetectorModelAnalysisResultsOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDetectorModelAnalysisResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysis/detector-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  return GetDetectorModelAnalysisResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorModelAnalysisResultsOutcomeCallable IoTEventsClient::GetDetectorModelAnalysisResultsCallable(const GetDetectorModelAnalysisResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorModelAnalysisResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetectorModelAnalysisResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::GetDetectorModelAnalysisResultsAsync(const GetDetectorModelAnalysisResultsRequest& request, const GetDetectorModelAnalysisResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDetectorModelAnalysisResults(request), context);
    } );
}

ListAlarmModelVersionsOutcome IoTEventsClient::ListAlarmModelVersions(const ListAlarmModelVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAlarmModelVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AlarmModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAlarmModelVersions", "Required field: AlarmModelName, is not set");
    return ListAlarmModelVersionsOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AlarmModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAlarmModelVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListAlarmModelVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAlarmModelVersionsOutcomeCallable IoTEventsClient::ListAlarmModelVersionsCallable(const ListAlarmModelVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlarmModelVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlarmModelVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListAlarmModelVersionsAsync(const ListAlarmModelVersionsRequest& request, const ListAlarmModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAlarmModelVersions(request), context);
    } );
}

ListAlarmModelsOutcome IoTEventsClient::ListAlarmModels(const ListAlarmModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAlarmModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAlarmModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models");
  return ListAlarmModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAlarmModelsOutcomeCallable IoTEventsClient::ListAlarmModelsCallable(const ListAlarmModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlarmModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlarmModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListAlarmModelsAsync(const ListAlarmModelsRequest& request, const ListAlarmModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAlarmModels(request), context);
    } );
}

ListDetectorModelVersionsOutcome IoTEventsClient::ListDetectorModelVersions(const ListDetectorModelVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDetectorModelVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDetectorModelVersions", "Required field: DetectorModelName, is not set");
    return ListDetectorModelVersionsOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDetectorModelVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListDetectorModelVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDetectorModelVersionsOutcomeCallable IoTEventsClient::ListDetectorModelVersionsCallable(const ListDetectorModelVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectorModelVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectorModelVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListDetectorModelVersionsAsync(const ListDetectorModelVersionsRequest& request, const ListDetectorModelVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDetectorModelVersions(request), context);
    } );
}

ListDetectorModelsOutcome IoTEventsClient::ListDetectorModels(const ListDetectorModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDetectorModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDetectorModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models");
  return ListDetectorModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDetectorModelsOutcomeCallable IoTEventsClient::ListDetectorModelsCallable(const ListDetectorModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectorModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectorModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListDetectorModelsAsync(const ListDetectorModelsRequest& request, const ListDetectorModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDetectorModels(request), context);
    } );
}

ListInputRoutingsOutcome IoTEventsClient::ListInputRoutings(const ListInputRoutingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInputRoutings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInputRoutings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/input-routings");
  return ListInputRoutingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInputRoutingsOutcomeCallable IoTEventsClient::ListInputRoutingsCallable(const ListInputRoutingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputRoutingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputRoutings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListInputRoutingsAsync(const ListInputRoutingsRequest& request, const ListInputRoutingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInputRoutings(request), context);
    } );
}

ListInputsOutcome IoTEventsClient::ListInputs(const ListInputsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inputs");
  return ListInputsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInputsOutcomeCallable IoTEventsClient::ListInputsCallable(const ListInputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListInputsAsync(const ListInputsRequest& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInputs(request), context);
    } );
}

ListTagsForResourceOutcome IoTEventsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTEventsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutLoggingOptionsOutcome IoTEventsClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  return PutLoggingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingOptionsOutcomeCallable IoTEventsClient::PutLoggingOptionsCallable(const PutLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::PutLoggingOptionsAsync(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLoggingOptions(request), context);
    } );
}

StartDetectorModelAnalysisOutcome IoTEventsClient::StartDetectorModelAnalysis(const StartDetectorModelAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDetectorModelAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDetectorModelAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analysis/detector-models/");
  return StartDetectorModelAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDetectorModelAnalysisOutcomeCallable IoTEventsClient::StartDetectorModelAnalysisCallable(const StartDetectorModelAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDetectorModelAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDetectorModelAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::StartDetectorModelAnalysisAsync(const StartDetectorModelAnalysisRequest& request, const StartDetectorModelAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDetectorModelAnalysis(request), context);
    } );
}

TagResourceOutcome IoTEventsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTEventsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome IoTEventsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTEventsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAlarmModelOutcome IoTEventsClient::UpdateAlarmModel(const UpdateAlarmModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AlarmModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAlarmModel", "Required field: AlarmModelName, is not set");
    return UpdateAlarmModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AlarmModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAlarmModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alarm-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAlarmModelName());
  return UpdateAlarmModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAlarmModelOutcomeCallable IoTEventsClient::UpdateAlarmModelCallable(const UpdateAlarmModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAlarmModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAlarmModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::UpdateAlarmModelAsync(const UpdateAlarmModelRequest& request, const UpdateAlarmModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAlarmModel(request), context);
    } );
}

UpdateDetectorModelOutcome IoTEventsClient::UpdateDetectorModel(const UpdateDetectorModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDetectorModel", "Required field: DetectorModelName, is not set");
    return UpdateDetectorModelOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorModelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDetectorModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector-models/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorModelName());
  return UpdateDetectorModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorModelOutcomeCallable IoTEventsClient::UpdateDetectorModelCallable(const UpdateDetectorModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetectorModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::UpdateDetectorModelAsync(const UpdateDetectorModelRequest& request, const UpdateDetectorModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDetectorModel(request), context);
    } );
}

UpdateInputOutcome IoTEventsClient::UpdateInput(const UpdateInputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInput", "Required field: InputName, is not set");
    return UpdateInputOutcome(Aws::Client::AWSError<IoTEventsErrors>(IoTEventsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/inputs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputName());
  return UpdateInputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateInputOutcomeCallable IoTEventsClient::UpdateInputCallable(const UpdateInputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTEventsClient::UpdateInputAsync(const UpdateInputRequest& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInput(request), context);
    } );
}

