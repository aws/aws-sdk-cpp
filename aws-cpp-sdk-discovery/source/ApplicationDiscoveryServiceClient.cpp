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

#include <aws/discovery/ApplicationDiscoveryServiceClient.h>
#include <aws/discovery/ApplicationDiscoveryServiceEndpoint.h>
#include <aws/discovery/ApplicationDiscoveryServiceErrorMarshaller.h>
#include <aws/discovery/model/AssociateConfigurationItemsToApplicationRequest.h>
#include <aws/discovery/model/BatchDeleteImportDataRequest.h>
#include <aws/discovery/model/CreateApplicationRequest.h>
#include <aws/discovery/model/CreateTagsRequest.h>
#include <aws/discovery/model/DeleteApplicationsRequest.h>
#include <aws/discovery/model/DeleteTagsRequest.h>
#include <aws/discovery/model/DescribeAgentsRequest.h>
#include <aws/discovery/model/DescribeConfigurationsRequest.h>
#include <aws/discovery/model/DescribeContinuousExportsRequest.h>
#include <aws/discovery/model/DescribeExportTasksRequest.h>
#include <aws/discovery/model/DescribeImportTasksRequest.h>
#include <aws/discovery/model/DescribeTagsRequest.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationRequest.h>
#include <aws/discovery/model/GetDiscoverySummaryRequest.h>
#include <aws/discovery/model/ListConfigurationsRequest.h>
#include <aws/discovery/model/ListServerNeighborsRequest.h>
#include <aws/discovery/model/StartContinuousExportRequest.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsRequest.h>
#include <aws/discovery/model/StartExportTaskRequest.h>
#include <aws/discovery/model/StartImportTaskRequest.h>
#include <aws/discovery/model/StopContinuousExportRequest.h>
#include <aws/discovery/model/StopDataCollectionByAgentIdsRequest.h>
#include <aws/discovery/model/UpdateApplicationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationDiscoveryService;
using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "discovery";
static const char* ALLOCATION_TAG = "ApplicationDiscoveryServiceClient";


ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationDiscoveryServiceClient::~ApplicationDiscoveryServiceClient()
{
}

void ApplicationDiscoveryServiceClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Application Discovery Service");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ApplicationDiscoveryServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ApplicationDiscoveryServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateConfigurationItemsToApplicationOutcome ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplication(const AssociateConfigurationItemsToApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateConfigurationItemsToApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateConfigurationItemsToApplicationOutcomeCallable ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplicationCallable(const AssociateConfigurationItemsToApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateConfigurationItemsToApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateConfigurationItemsToApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplicationAsync(const AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateConfigurationItemsToApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplicationAsyncHelper(const AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateConfigurationItemsToApplication(request), context);
}

BatchDeleteImportDataOutcome ApplicationDiscoveryServiceClient::BatchDeleteImportData(const BatchDeleteImportDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDeleteImportDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteImportDataOutcomeCallable ApplicationDiscoveryServiceClient::BatchDeleteImportDataCallable(const BatchDeleteImportDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteImportDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteImportData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::BatchDeleteImportDataAsync(const BatchDeleteImportDataRequest& request, const BatchDeleteImportDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteImportDataAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::BatchDeleteImportDataAsyncHelper(const BatchDeleteImportDataRequest& request, const BatchDeleteImportDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteImportData(request), context);
}

CreateApplicationOutcome ApplicationDiscoveryServiceClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable ApplicationDiscoveryServiceClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateTagsOutcome ApplicationDiscoveryServiceClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagsOutcomeCallable ApplicationDiscoveryServiceClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

DeleteApplicationsOutcome ApplicationDiscoveryServiceClient::DeleteApplications(const DeleteApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationsOutcomeCallable ApplicationDiscoveryServiceClient::DeleteApplicationsCallable(const DeleteApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DeleteApplicationsAsync(const DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DeleteApplicationsAsyncHelper(const DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplications(request), context);
}

DeleteTagsOutcome ApplicationDiscoveryServiceClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcomeCallable ApplicationDiscoveryServiceClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DescribeAgentsOutcome ApplicationDiscoveryServiceClient::DescribeAgents(const DescribeAgentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAgentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgentsOutcomeCallable ApplicationDiscoveryServiceClient::DescribeAgentsCallable(const DescribeAgentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DescribeAgentsAsync(const DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAgentsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DescribeAgentsAsyncHelper(const DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAgents(request), context);
}

DescribeConfigurationsOutcome ApplicationDiscoveryServiceClient::DescribeConfigurations(const DescribeConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationsOutcomeCallable ApplicationDiscoveryServiceClient::DescribeConfigurationsCallable(const DescribeConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DescribeConfigurationsAsync(const DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConfigurationsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DescribeConfigurationsAsyncHelper(const DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConfigurations(request), context);
}

DescribeContinuousExportsOutcome ApplicationDiscoveryServiceClient::DescribeContinuousExports(const DescribeContinuousExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeContinuousExportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContinuousExportsOutcomeCallable ApplicationDiscoveryServiceClient::DescribeContinuousExportsCallable(const DescribeContinuousExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContinuousExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContinuousExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DescribeContinuousExportsAsync(const DescribeContinuousExportsRequest& request, const DescribeContinuousExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContinuousExportsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DescribeContinuousExportsAsyncHelper(const DescribeContinuousExportsRequest& request, const DescribeContinuousExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContinuousExports(request), context);
}

DescribeExportTasksOutcome ApplicationDiscoveryServiceClient::DescribeExportTasks(const DescribeExportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExportTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExportTasksOutcomeCallable ApplicationDiscoveryServiceClient::DescribeExportTasksCallable(const DescribeExportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExportTasksAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DescribeExportTasksAsyncHelper(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExportTasks(request), context);
}

DescribeImportTasksOutcome ApplicationDiscoveryServiceClient::DescribeImportTasks(const DescribeImportTasksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImportTasksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImportTasksOutcomeCallable ApplicationDiscoveryServiceClient::DescribeImportTasksCallable(const DescribeImportTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImportTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DescribeImportTasksAsync(const DescribeImportTasksRequest& request, const DescribeImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeImportTasksAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DescribeImportTasksAsyncHelper(const DescribeImportTasksRequest& request, const DescribeImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeImportTasks(request), context);
}

DescribeTagsOutcome ApplicationDiscoveryServiceClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTagsOutcomeCallable ApplicationDiscoveryServiceClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DisassociateConfigurationItemsFromApplicationOutcome ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplication(const DisassociateConfigurationItemsFromApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateConfigurationItemsFromApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateConfigurationItemsFromApplicationOutcomeCallable ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplicationCallable(const DisassociateConfigurationItemsFromApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateConfigurationItemsFromApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateConfigurationItemsFromApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplicationAsync(const DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateConfigurationItemsFromApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplicationAsyncHelper(const DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateConfigurationItemsFromApplication(request), context);
}

GetDiscoverySummaryOutcome ApplicationDiscoveryServiceClient::GetDiscoverySummary(const GetDiscoverySummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDiscoverySummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiscoverySummaryOutcomeCallable ApplicationDiscoveryServiceClient::GetDiscoverySummaryCallable(const GetDiscoverySummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiscoverySummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiscoverySummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::GetDiscoverySummaryAsync(const GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDiscoverySummaryAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::GetDiscoverySummaryAsyncHelper(const GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDiscoverySummary(request), context);
}

ListConfigurationsOutcome ApplicationDiscoveryServiceClient::ListConfigurations(const ListConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationsOutcomeCallable ApplicationDiscoveryServiceClient::ListConfigurationsCallable(const ListConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::ListConfigurationsAsync(const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConfigurationsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::ListConfigurationsAsyncHelper(const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConfigurations(request), context);
}

ListServerNeighborsOutcome ApplicationDiscoveryServiceClient::ListServerNeighbors(const ListServerNeighborsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListServerNeighborsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServerNeighborsOutcomeCallable ApplicationDiscoveryServiceClient::ListServerNeighborsCallable(const ListServerNeighborsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServerNeighborsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServerNeighbors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::ListServerNeighborsAsync(const ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServerNeighborsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::ListServerNeighborsAsyncHelper(const ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServerNeighbors(request), context);
}

StartContinuousExportOutcome ApplicationDiscoveryServiceClient::StartContinuousExport(const StartContinuousExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartContinuousExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContinuousExportOutcomeCallable ApplicationDiscoveryServiceClient::StartContinuousExportCallable(const StartContinuousExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartContinuousExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartContinuousExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::StartContinuousExportAsync(const StartContinuousExportRequest& request, const StartContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartContinuousExportAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::StartContinuousExportAsyncHelper(const StartContinuousExportRequest& request, const StartContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartContinuousExport(request), context);
}

StartDataCollectionByAgentIdsOutcome ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIds(const StartDataCollectionByAgentIdsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDataCollectionByAgentIdsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDataCollectionByAgentIdsOutcomeCallable ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIdsCallable(const StartDataCollectionByAgentIdsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDataCollectionByAgentIdsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDataCollectionByAgentIds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIdsAsync(const StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDataCollectionByAgentIdsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIdsAsyncHelper(const StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDataCollectionByAgentIds(request), context);
}

StartExportTaskOutcome ApplicationDiscoveryServiceClient::StartExportTask(const StartExportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartExportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExportTaskOutcomeCallable ApplicationDiscoveryServiceClient::StartExportTaskCallable(const StartExportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::StartExportTaskAsync(const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartExportTaskAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::StartExportTaskAsyncHelper(const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartExportTask(request), context);
}

StartImportTaskOutcome ApplicationDiscoveryServiceClient::StartImportTask(const StartImportTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartImportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImportTaskOutcomeCallable ApplicationDiscoveryServiceClient::StartImportTaskCallable(const StartImportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::StartImportTaskAsync(const StartImportTaskRequest& request, const StartImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartImportTaskAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::StartImportTaskAsyncHelper(const StartImportTaskRequest& request, const StartImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartImportTask(request), context);
}

StopContinuousExportOutcome ApplicationDiscoveryServiceClient::StopContinuousExport(const StopContinuousExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopContinuousExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopContinuousExportOutcomeCallable ApplicationDiscoveryServiceClient::StopContinuousExportCallable(const StopContinuousExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopContinuousExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopContinuousExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::StopContinuousExportAsync(const StopContinuousExportRequest& request, const StopContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopContinuousExportAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::StopContinuousExportAsyncHelper(const StopContinuousExportRequest& request, const StopContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopContinuousExport(request), context);
}

StopDataCollectionByAgentIdsOutcome ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIds(const StopDataCollectionByAgentIdsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDataCollectionByAgentIdsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDataCollectionByAgentIdsOutcomeCallable ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIdsCallable(const StopDataCollectionByAgentIdsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDataCollectionByAgentIdsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDataCollectionByAgentIds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIdsAsync(const StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopDataCollectionByAgentIdsAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIdsAsyncHelper(const StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDataCollectionByAgentIds(request), context);
}

UpdateApplicationOutcome ApplicationDiscoveryServiceClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable ApplicationDiscoveryServiceClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationDiscoveryServiceClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationDiscoveryServiceClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

