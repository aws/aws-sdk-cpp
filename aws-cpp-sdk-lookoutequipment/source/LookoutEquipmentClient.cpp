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

#include <aws/lookoutequipment/LookoutEquipmentClient.h>
#include <aws/lookoutequipment/LookoutEquipmentEndpoint.h>
#include <aws/lookoutequipment/LookoutEquipmentErrorMarshaller.h>
#include <aws/lookoutequipment/model/CreateDatasetRequest.h>
#include <aws/lookoutequipment/model/CreateInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/CreateLabelRequest.h>
#include <aws/lookoutequipment/model/CreateLabelGroupRequest.h>
#include <aws/lookoutequipment/model/CreateModelRequest.h>
#include <aws/lookoutequipment/model/DeleteDatasetRequest.h>
#include <aws/lookoutequipment/model/DeleteInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/DeleteLabelRequest.h>
#include <aws/lookoutequipment/model/DeleteLabelGroupRequest.h>
#include <aws/lookoutequipment/model/DeleteModelRequest.h>
#include <aws/lookoutequipment/model/DescribeDataIngestionJobRequest.h>
#include <aws/lookoutequipment/model/DescribeDatasetRequest.h>
#include <aws/lookoutequipment/model/DescribeInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/DescribeLabelRequest.h>
#include <aws/lookoutequipment/model/DescribeLabelGroupRequest.h>
#include <aws/lookoutequipment/model/DescribeModelRequest.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsRequest.h>
#include <aws/lookoutequipment/model/ListDatasetsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceEventsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersRequest.h>
#include <aws/lookoutequipment/model/ListLabelGroupsRequest.h>
#include <aws/lookoutequipment/model/ListLabelsRequest.h>
#include <aws/lookoutequipment/model/ListModelsRequest.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsRequest.h>
#include <aws/lookoutequipment/model/ListTagsForResourceRequest.h>
#include <aws/lookoutequipment/model/StartDataIngestionJobRequest.h>
#include <aws/lookoutequipment/model/StartInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/StopInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/TagResourceRequest.h>
#include <aws/lookoutequipment/model/UntagResourceRequest.h>
#include <aws/lookoutequipment/model/UpdateInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/UpdateLabelGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LookoutEquipment;
using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* LookoutEquipmentClient::SERVICE_NAME = "lookoutequipment";
const char* LookoutEquipmentClient::ALLOCATION_TAG = "LookoutEquipmentClient";

LookoutEquipmentClient::LookoutEquipmentClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutEquipmentClient::LookoutEquipmentClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutEquipmentClient::LookoutEquipmentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutEquipmentClient::~LookoutEquipmentClient()
{
}

void LookoutEquipmentClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("LookoutEquipment");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LookoutEquipmentEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LookoutEquipmentClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateDatasetOutcome LookoutEquipmentClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable LookoutEquipmentClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataset(request), context);
    } );
}

CreateInferenceSchedulerOutcome LookoutEquipmentClient::CreateInferenceScheduler(const CreateInferenceSchedulerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateInferenceSchedulerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInferenceSchedulerOutcomeCallable LookoutEquipmentClient::CreateInferenceSchedulerCallable(const CreateInferenceSchedulerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInferenceSchedulerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInferenceScheduler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::CreateInferenceSchedulerAsync(const CreateInferenceSchedulerRequest& request, const CreateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInferenceScheduler(request), context);
    } );
}

CreateLabelOutcome LookoutEquipmentClient::CreateLabel(const CreateLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLabelOutcomeCallable LookoutEquipmentClient::CreateLabelCallable(const CreateLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::CreateLabelAsync(const CreateLabelRequest& request, const CreateLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLabel(request), context);
    } );
}

CreateLabelGroupOutcome LookoutEquipmentClient::CreateLabelGroup(const CreateLabelGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLabelGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLabelGroupOutcomeCallable LookoutEquipmentClient::CreateLabelGroupCallable(const CreateLabelGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLabelGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLabelGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::CreateLabelGroupAsync(const CreateLabelGroupRequest& request, const CreateLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLabelGroup(request), context);
    } );
}

CreateModelOutcome LookoutEquipmentClient::CreateModel(const CreateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable LookoutEquipmentClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModel(request), context);
    } );
}

DeleteDatasetOutcome LookoutEquipmentClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable LookoutEquipmentClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataset(request), context);
    } );
}

DeleteInferenceSchedulerOutcome LookoutEquipmentClient::DeleteInferenceScheduler(const DeleteInferenceSchedulerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInferenceSchedulerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInferenceSchedulerOutcomeCallable LookoutEquipmentClient::DeleteInferenceSchedulerCallable(const DeleteInferenceSchedulerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInferenceSchedulerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInferenceScheduler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DeleteInferenceSchedulerAsync(const DeleteInferenceSchedulerRequest& request, const DeleteInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInferenceScheduler(request), context);
    } );
}

DeleteLabelOutcome LookoutEquipmentClient::DeleteLabel(const DeleteLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLabelOutcomeCallable LookoutEquipmentClient::DeleteLabelCallable(const DeleteLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DeleteLabelAsync(const DeleteLabelRequest& request, const DeleteLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLabel(request), context);
    } );
}

DeleteLabelGroupOutcome LookoutEquipmentClient::DeleteLabelGroup(const DeleteLabelGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLabelGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLabelGroupOutcomeCallable LookoutEquipmentClient::DeleteLabelGroupCallable(const DeleteLabelGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLabelGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLabelGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DeleteLabelGroupAsync(const DeleteLabelGroupRequest& request, const DeleteLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLabelGroup(request), context);
    } );
}

DeleteModelOutcome LookoutEquipmentClient::DeleteModel(const DeleteModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable LookoutEquipmentClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModel(request), context);
    } );
}

DescribeDataIngestionJobOutcome LookoutEquipmentClient::DescribeDataIngestionJob(const DescribeDataIngestionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataIngestionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataIngestionJobOutcomeCallable LookoutEquipmentClient::DescribeDataIngestionJobCallable(const DescribeDataIngestionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataIngestionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataIngestionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DescribeDataIngestionJobAsync(const DescribeDataIngestionJobRequest& request, const DescribeDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataIngestionJob(request), context);
    } );
}

DescribeDatasetOutcome LookoutEquipmentClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable LookoutEquipmentClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataset(request), context);
    } );
}

DescribeInferenceSchedulerOutcome LookoutEquipmentClient::DescribeInferenceScheduler(const DescribeInferenceSchedulerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInferenceSchedulerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInferenceSchedulerOutcomeCallable LookoutEquipmentClient::DescribeInferenceSchedulerCallable(const DescribeInferenceSchedulerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInferenceSchedulerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInferenceScheduler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DescribeInferenceSchedulerAsync(const DescribeInferenceSchedulerRequest& request, const DescribeInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInferenceScheduler(request), context);
    } );
}

DescribeLabelOutcome LookoutEquipmentClient::DescribeLabel(const DescribeLabelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLabelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLabelOutcomeCallable LookoutEquipmentClient::DescribeLabelCallable(const DescribeLabelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLabelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLabel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DescribeLabelAsync(const DescribeLabelRequest& request, const DescribeLabelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLabel(request), context);
    } );
}

DescribeLabelGroupOutcome LookoutEquipmentClient::DescribeLabelGroup(const DescribeLabelGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLabelGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLabelGroupOutcomeCallable LookoutEquipmentClient::DescribeLabelGroupCallable(const DescribeLabelGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLabelGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLabelGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DescribeLabelGroupAsync(const DescribeLabelGroupRequest& request, const DescribeLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLabelGroup(request), context);
    } );
}

DescribeModelOutcome LookoutEquipmentClient::DescribeModel(const DescribeModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelOutcomeCallable LookoutEquipmentClient::DescribeModelCallable(const DescribeModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModel(request), context);
    } );
}

ListDataIngestionJobsOutcome LookoutEquipmentClient::ListDataIngestionJobs(const ListDataIngestionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDataIngestionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataIngestionJobsOutcomeCallable LookoutEquipmentClient::ListDataIngestionJobsCallable(const ListDataIngestionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataIngestionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataIngestionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListDataIngestionJobsAsync(const ListDataIngestionJobsRequest& request, const ListDataIngestionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataIngestionJobs(request), context);
    } );
}

ListDatasetsOutcome LookoutEquipmentClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDatasetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable LookoutEquipmentClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasets(request), context);
    } );
}

ListInferenceEventsOutcome LookoutEquipmentClient::ListInferenceEvents(const ListInferenceEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInferenceEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceEventsOutcomeCallable LookoutEquipmentClient::ListInferenceEventsCallable(const ListInferenceEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListInferenceEventsAsync(const ListInferenceEventsRequest& request, const ListInferenceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInferenceEvents(request), context);
    } );
}

ListInferenceExecutionsOutcome LookoutEquipmentClient::ListInferenceExecutions(const ListInferenceExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInferenceExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceExecutionsOutcomeCallable LookoutEquipmentClient::ListInferenceExecutionsCallable(const ListInferenceExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListInferenceExecutionsAsync(const ListInferenceExecutionsRequest& request, const ListInferenceExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInferenceExecutions(request), context);
    } );
}

ListInferenceSchedulersOutcome LookoutEquipmentClient::ListInferenceSchedulers(const ListInferenceSchedulersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInferenceSchedulersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceSchedulersOutcomeCallable LookoutEquipmentClient::ListInferenceSchedulersCallable(const ListInferenceSchedulersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceSchedulersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceSchedulers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListInferenceSchedulersAsync(const ListInferenceSchedulersRequest& request, const ListInferenceSchedulersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInferenceSchedulers(request), context);
    } );
}

ListLabelGroupsOutcome LookoutEquipmentClient::ListLabelGroups(const ListLabelGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLabelGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLabelGroupsOutcomeCallable LookoutEquipmentClient::ListLabelGroupsCallable(const ListLabelGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListLabelGroupsAsync(const ListLabelGroupsRequest& request, const ListLabelGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLabelGroups(request), context);
    } );
}

ListLabelsOutcome LookoutEquipmentClient::ListLabels(const ListLabelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLabelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLabelsOutcomeCallable LookoutEquipmentClient::ListLabelsCallable(const ListLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListLabelsAsync(const ListLabelsRequest& request, const ListLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLabels(request), context);
    } );
}

ListModelsOutcome LookoutEquipmentClient::ListModels(const ListModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelsOutcomeCallable LookoutEquipmentClient::ListModelsCallable(const ListModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModels(request), context);
    } );
}

ListSensorStatisticsOutcome LookoutEquipmentClient::ListSensorStatistics(const ListSensorStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSensorStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSensorStatisticsOutcomeCallable LookoutEquipmentClient::ListSensorStatisticsCallable(const ListSensorStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSensorStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSensorStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListSensorStatisticsAsync(const ListSensorStatisticsRequest& request, const ListSensorStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSensorStatistics(request), context);
    } );
}

ListTagsForResourceOutcome LookoutEquipmentClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LookoutEquipmentClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartDataIngestionJobOutcome LookoutEquipmentClient::StartDataIngestionJob(const StartDataIngestionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDataIngestionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDataIngestionJobOutcomeCallable LookoutEquipmentClient::StartDataIngestionJobCallable(const StartDataIngestionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDataIngestionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDataIngestionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::StartDataIngestionJobAsync(const StartDataIngestionJobRequest& request, const StartDataIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDataIngestionJob(request), context);
    } );
}

StartInferenceSchedulerOutcome LookoutEquipmentClient::StartInferenceScheduler(const StartInferenceSchedulerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartInferenceSchedulerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInferenceSchedulerOutcomeCallable LookoutEquipmentClient::StartInferenceSchedulerCallable(const StartInferenceSchedulerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInferenceSchedulerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInferenceScheduler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::StartInferenceSchedulerAsync(const StartInferenceSchedulerRequest& request, const StartInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartInferenceScheduler(request), context);
    } );
}

StopInferenceSchedulerOutcome LookoutEquipmentClient::StopInferenceScheduler(const StopInferenceSchedulerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopInferenceSchedulerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInferenceSchedulerOutcomeCallable LookoutEquipmentClient::StopInferenceSchedulerCallable(const StopInferenceSchedulerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInferenceSchedulerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInferenceScheduler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::StopInferenceSchedulerAsync(const StopInferenceSchedulerRequest& request, const StopInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopInferenceScheduler(request), context);
    } );
}

TagResourceOutcome LookoutEquipmentClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LookoutEquipmentClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome LookoutEquipmentClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LookoutEquipmentClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateInferenceSchedulerOutcome LookoutEquipmentClient::UpdateInferenceScheduler(const UpdateInferenceSchedulerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateInferenceSchedulerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInferenceSchedulerOutcomeCallable LookoutEquipmentClient::UpdateInferenceSchedulerCallable(const UpdateInferenceSchedulerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInferenceSchedulerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInferenceScheduler(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::UpdateInferenceSchedulerAsync(const UpdateInferenceSchedulerRequest& request, const UpdateInferenceSchedulerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInferenceScheduler(request), context);
    } );
}

UpdateLabelGroupOutcome LookoutEquipmentClient::UpdateLabelGroup(const UpdateLabelGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLabelGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLabelGroupOutcomeCallable LookoutEquipmentClient::UpdateLabelGroupCallable(const UpdateLabelGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLabelGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLabelGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutEquipmentClient::UpdateLabelGroupAsync(const UpdateLabelGroupRequest& request, const UpdateLabelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLabelGroup(request), context);
    } );
}

