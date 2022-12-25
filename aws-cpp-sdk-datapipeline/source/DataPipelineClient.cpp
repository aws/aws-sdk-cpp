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

#include <aws/datapipeline/DataPipelineClient.h>
#include <aws/datapipeline/DataPipelineErrorMarshaller.h>
#include <aws/datapipeline/DataPipelineEndpointProvider.h>
#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/datapipeline/model/AddTagsRequest.h>
#include <aws/datapipeline/model/CreatePipelineRequest.h>
#include <aws/datapipeline/model/DeactivatePipelineRequest.h>
#include <aws/datapipeline/model/DeletePipelineRequest.h>
#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/datapipeline/model/DescribePipelinesRequest.h>
#include <aws/datapipeline/model/EvaluateExpressionRequest.h>
#include <aws/datapipeline/model/GetPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/ListPipelinesRequest.h>
#include <aws/datapipeline/model/PollForTaskRequest.h>
#include <aws/datapipeline/model/PutPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/datapipeline/model/RemoveTagsRequest.h>
#include <aws/datapipeline/model/ReportTaskProgressRequest.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatRequest.h>
#include <aws/datapipeline/model/SetStatusRequest.h>
#include <aws/datapipeline/model/SetTaskStatusRequest.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataPipeline;
using namespace Aws::DataPipeline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* DataPipelineClient::SERVICE_NAME = "datapipeline";
const char* DataPipelineClient::ALLOCATION_TAG = "DataPipelineClient";

DataPipelineClient::DataPipelineClient(const DataPipeline::DataPipelineClientConfiguration& clientConfiguration,
                                       std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const AWSCredentials& credentials,
                                       std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider,
                                       const DataPipeline::DataPipelineClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider,
                                       const DataPipeline::DataPipelineClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DataPipelineClient::DataPipelineClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DataPipelineClient::~DataPipelineClient()
{
}

std::shared_ptr<DataPipelineEndpointProviderBase>& DataPipelineClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DataPipelineClient::init(const DataPipeline::DataPipelineClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Data Pipeline");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DataPipelineClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivatePipelineOutcome DataPipelineClient::ActivatePipeline(const ActivatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ActivatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivatePipelineOutcomeCallable DataPipelineClient::ActivatePipelineCallable(const ActivatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ActivatePipelineAsync(const ActivatePipelineRequest& request, const ActivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ActivatePipeline(request), context);
    } );
}

AddTagsOutcome DataPipelineClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable DataPipelineClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

CreatePipelineOutcome DataPipelineClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable DataPipelineClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePipeline(request), context);
    } );
}

DeactivatePipelineOutcome DataPipelineClient::DeactivatePipeline(const DeactivatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeactivatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivatePipelineOutcomeCallable DataPipelineClient::DeactivatePipelineCallable(const DeactivatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DeactivatePipelineAsync(const DeactivatePipelineRequest& request, const DeactivatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeactivatePipeline(request), context);
    } );
}

DeletePipelineOutcome DataPipelineClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable DataPipelineClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePipeline(request), context);
    } );
}

DescribeObjectsOutcome DataPipelineClient::DescribeObjects(const DescribeObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeObjectsOutcomeCallable DataPipelineClient::DescribeObjectsCallable(const DescribeObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DescribeObjectsAsync(const DescribeObjectsRequest& request, const DescribeObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeObjects(request), context);
    } );
}

DescribePipelinesOutcome DataPipelineClient::DescribePipelines(const DescribePipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelinesOutcomeCallable DataPipelineClient::DescribePipelinesCallable(const DescribePipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::DescribePipelinesAsync(const DescribePipelinesRequest& request, const DescribePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePipelines(request), context);
    } );
}

EvaluateExpressionOutcome DataPipelineClient::EvaluateExpression(const EvaluateExpressionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EvaluateExpression, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EvaluateExpression, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EvaluateExpressionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluateExpressionOutcomeCallable DataPipelineClient::EvaluateExpressionCallable(const EvaluateExpressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EvaluateExpressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EvaluateExpression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::EvaluateExpressionAsync(const EvaluateExpressionRequest& request, const EvaluateExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EvaluateExpression(request), context);
    } );
}

GetPipelineDefinitionOutcome DataPipelineClient::GetPipelineDefinition(const GetPipelineDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPipelineDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPipelineDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPipelineDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineDefinitionOutcomeCallable DataPipelineClient::GetPipelineDefinitionCallable(const GetPipelineDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPipelineDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPipelineDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::GetPipelineDefinitionAsync(const GetPipelineDefinitionRequest& request, const GetPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPipelineDefinition(request), context);
    } );
}

ListPipelinesOutcome DataPipelineClient::ListPipelines(const ListPipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable DataPipelineClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPipelines(request), context);
    } );
}

PollForTaskOutcome DataPipelineClient::PollForTask(const PollForTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PollForTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PollForTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PollForTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PollForTaskOutcomeCallable DataPipelineClient::PollForTaskCallable(const PollForTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PollForTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PollForTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::PollForTaskAsync(const PollForTaskRequest& request, const PollForTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PollForTask(request), context);
    } );
}

PutPipelineDefinitionOutcome DataPipelineClient::PutPipelineDefinition(const PutPipelineDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPipelineDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPipelineDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutPipelineDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPipelineDefinitionOutcomeCallable DataPipelineClient::PutPipelineDefinitionCallable(const PutPipelineDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPipelineDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPipelineDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::PutPipelineDefinitionAsync(const PutPipelineDefinitionRequest& request, const PutPipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPipelineDefinition(request), context);
    } );
}

QueryObjectsOutcome DataPipelineClient::QueryObjects(const QueryObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return QueryObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryObjectsOutcomeCallable DataPipelineClient::QueryObjectsCallable(const QueryObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::QueryObjectsAsync(const QueryObjectsRequest& request, const QueryObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, QueryObjects(request), context);
    } );
}

RemoveTagsOutcome DataPipelineClient::RemoveTags(const RemoveTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RemoveTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsOutcomeCallable DataPipelineClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveTags(request), context);
    } );
}

ReportTaskProgressOutcome DataPipelineClient::ReportTaskProgress(const ReportTaskProgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReportTaskProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReportTaskProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReportTaskProgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReportTaskProgressOutcomeCallable DataPipelineClient::ReportTaskProgressCallable(const ReportTaskProgressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReportTaskProgressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReportTaskProgress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ReportTaskProgressAsync(const ReportTaskProgressRequest& request, const ReportTaskProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReportTaskProgress(request), context);
    } );
}

ReportTaskRunnerHeartbeatOutcome DataPipelineClient::ReportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReportTaskRunnerHeartbeat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReportTaskRunnerHeartbeat, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReportTaskRunnerHeartbeatOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReportTaskRunnerHeartbeatOutcomeCallable DataPipelineClient::ReportTaskRunnerHeartbeatCallable(const ReportTaskRunnerHeartbeatRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReportTaskRunnerHeartbeatOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReportTaskRunnerHeartbeat(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ReportTaskRunnerHeartbeatAsync(const ReportTaskRunnerHeartbeatRequest& request, const ReportTaskRunnerHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReportTaskRunnerHeartbeat(request), context);
    } );
}

SetStatusOutcome DataPipelineClient::SetStatus(const SetStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetStatusOutcomeCallable DataPipelineClient::SetStatusCallable(const SetStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::SetStatusAsync(const SetStatusRequest& request, const SetStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetStatus(request), context);
    } );
}

SetTaskStatusOutcome DataPipelineClient::SetTaskStatus(const SetTaskStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetTaskStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetTaskStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetTaskStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetTaskStatusOutcomeCallable DataPipelineClient::SetTaskStatusCallable(const SetTaskStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetTaskStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetTaskStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::SetTaskStatusAsync(const SetTaskStatusRequest& request, const SetTaskStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetTaskStatus(request), context);
    } );
}

ValidatePipelineDefinitionOutcome DataPipelineClient::ValidatePipelineDefinition(const ValidatePipelineDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidatePipelineDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidatePipelineDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ValidatePipelineDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidatePipelineDefinitionOutcomeCallable DataPipelineClient::ValidatePipelineDefinitionCallable(const ValidatePipelineDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidatePipelineDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidatePipelineDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataPipelineClient::ValidatePipelineDefinitionAsync(const ValidatePipelineDefinitionRequest& request, const ValidatePipelineDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidatePipelineDefinition(request), context);
    } );
}

