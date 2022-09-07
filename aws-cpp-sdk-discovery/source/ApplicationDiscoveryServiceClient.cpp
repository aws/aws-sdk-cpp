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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const AWSCredentials& credentials,
                                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationDiscoveryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationDiscoveryServiceClient::ApplicationDiscoveryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  AWSClient::SetServiceClientName("Application Discovery Service");
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

void ApplicationDiscoveryServiceClientAssociateConfigurationItemsToApplicationAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateConfigurationItemsToApplication(request), context);
}

void ApplicationDiscoveryServiceClient::AssociateConfigurationItemsToApplicationAsync(const AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientAssociateConfigurationItemsToApplicationAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientBatchDeleteImportDataAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const BatchDeleteImportDataRequest& request, const BatchDeleteImportDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDeleteImportData(request), context);
}

void ApplicationDiscoveryServiceClient::BatchDeleteImportDataAsync(const BatchDeleteImportDataRequest& request, const BatchDeleteImportDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientBatchDeleteImportDataAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientCreateApplicationAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void ApplicationDiscoveryServiceClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientCreateTagsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTags(request), context);
}

void ApplicationDiscoveryServiceClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientCreateTagsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDeleteApplicationsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplications(request), context);
}

void ApplicationDiscoveryServiceClient::DeleteApplicationsAsync(const DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDeleteApplicationsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDeleteTagsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTags(request), context);
}

void ApplicationDiscoveryServiceClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDeleteTagsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDescribeAgentsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAgents(request), context);
}

void ApplicationDiscoveryServiceClient::DescribeAgentsAsync(const DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDescribeAgentsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDescribeConfigurationsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConfigurations(request), context);
}

void ApplicationDiscoveryServiceClient::DescribeConfigurationsAsync(const DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDescribeConfigurationsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDescribeContinuousExportsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DescribeContinuousExportsRequest& request, const DescribeContinuousExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContinuousExports(request), context);
}

void ApplicationDiscoveryServiceClient::DescribeContinuousExportsAsync(const DescribeContinuousExportsRequest& request, const DescribeContinuousExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDescribeContinuousExportsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDescribeExportTasksAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExportTasks(request), context);
}

void ApplicationDiscoveryServiceClient::DescribeExportTasksAsync(const DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDescribeExportTasksAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDescribeImportTasksAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DescribeImportTasksRequest& request, const DescribeImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImportTasks(request), context);
}

void ApplicationDiscoveryServiceClient::DescribeImportTasksAsync(const DescribeImportTasksRequest& request, const DescribeImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDescribeImportTasksAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDescribeTagsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTags(request), context);
}

void ApplicationDiscoveryServiceClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDescribeTagsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientDisassociateConfigurationItemsFromApplicationAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateConfigurationItemsFromApplication(request), context);
}

void ApplicationDiscoveryServiceClient::DisassociateConfigurationItemsFromApplicationAsync(const DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientDisassociateConfigurationItemsFromApplicationAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientGetDiscoverySummaryAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDiscoverySummary(request), context);
}

void ApplicationDiscoveryServiceClient::GetDiscoverySummaryAsync(const GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientGetDiscoverySummaryAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientListConfigurationsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurations(request), context);
}

void ApplicationDiscoveryServiceClient::ListConfigurationsAsync(const ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientListConfigurationsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientListServerNeighborsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServerNeighbors(request), context);
}

void ApplicationDiscoveryServiceClient::ListServerNeighborsAsync(const ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientListServerNeighborsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientStartContinuousExportAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const StartContinuousExportRequest& request, const StartContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartContinuousExport(request), context);
}

void ApplicationDiscoveryServiceClient::StartContinuousExportAsync(const StartContinuousExportRequest& request, const StartContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientStartContinuousExportAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientStartDataCollectionByAgentIdsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDataCollectionByAgentIds(request), context);
}

void ApplicationDiscoveryServiceClient::StartDataCollectionByAgentIdsAsync(const StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientStartDataCollectionByAgentIdsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientStartExportTaskAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartExportTask(request), context);
}

void ApplicationDiscoveryServiceClient::StartExportTaskAsync(const StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientStartExportTaskAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientStartImportTaskAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const StartImportTaskRequest& request, const StartImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartImportTask(request), context);
}

void ApplicationDiscoveryServiceClient::StartImportTaskAsync(const StartImportTaskRequest& request, const StartImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientStartImportTaskAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientStopContinuousExportAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const StopContinuousExportRequest& request, const StopContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopContinuousExport(request), context);
}

void ApplicationDiscoveryServiceClient::StopContinuousExportAsync(const StopContinuousExportRequest& request, const StopContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientStopContinuousExportAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientStopDataCollectionByAgentIdsAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDataCollectionByAgentIds(request), context);
}

void ApplicationDiscoveryServiceClient::StopDataCollectionByAgentIdsAsync(const StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientStopDataCollectionByAgentIdsAsyncHelper( this, request, handler, context ); } );
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

void ApplicationDiscoveryServiceClientUpdateApplicationAsyncHelper(ApplicationDiscoveryServiceClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void ApplicationDiscoveryServiceClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationDiscoveryServiceClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

