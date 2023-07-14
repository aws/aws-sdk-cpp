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

#include <aws/lakeformation/LakeFormationClient.h>
#include <aws/lakeformation/LakeFormationEndpoint.h>
#include <aws/lakeformation/LakeFormationErrorMarshaller.h>
#include <aws/lakeformation/model/AddLFTagsToResourceRequest.h>
#include <aws/lakeformation/model/BatchGrantPermissionsRequest.h>
#include <aws/lakeformation/model/BatchRevokePermissionsRequest.h>
#include <aws/lakeformation/model/CancelTransactionRequest.h>
#include <aws/lakeformation/model/CommitTransactionRequest.h>
#include <aws/lakeformation/model/CreateDataCellsFilterRequest.h>
#include <aws/lakeformation/model/CreateLFTagRequest.h>
#include <aws/lakeformation/model/DeleteDataCellsFilterRequest.h>
#include <aws/lakeformation/model/DeleteLFTagRequest.h>
#include <aws/lakeformation/model/DeleteObjectsOnCancelRequest.h>
#include <aws/lakeformation/model/DeregisterResourceRequest.h>
#include <aws/lakeformation/model/DescribeResourceRequest.h>
#include <aws/lakeformation/model/DescribeTransactionRequest.h>
#include <aws/lakeformation/model/ExtendTransactionRequest.h>
#include <aws/lakeformation/model/GetDataLakeSettingsRequest.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathRequest.h>
#include <aws/lakeformation/model/GetLFTagRequest.h>
#include <aws/lakeformation/model/GetQueryStateRequest.h>
#include <aws/lakeformation/model/GetQueryStatisticsRequest.h>
#include <aws/lakeformation/model/GetResourceLFTagsRequest.h>
#include <aws/lakeformation/model/GetTableObjectsRequest.h>
#include <aws/lakeformation/model/GetTemporaryGluePartitionCredentialsRequest.h>
#include <aws/lakeformation/model/GetTemporaryGlueTableCredentialsRequest.h>
#include <aws/lakeformation/model/GetWorkUnitResultsRequest.h>
#include <aws/lakeformation/model/GetWorkUnitsRequest.h>
#include <aws/lakeformation/model/GrantPermissionsRequest.h>
#include <aws/lakeformation/model/ListDataCellsFilterRequest.h>
#include <aws/lakeformation/model/ListLFTagsRequest.h>
#include <aws/lakeformation/model/ListPermissionsRequest.h>
#include <aws/lakeformation/model/ListResourcesRequest.h>
#include <aws/lakeformation/model/ListTableStorageOptimizersRequest.h>
#include <aws/lakeformation/model/ListTransactionsRequest.h>
#include <aws/lakeformation/model/PutDataLakeSettingsRequest.h>
#include <aws/lakeformation/model/RegisterResourceRequest.h>
#include <aws/lakeformation/model/RemoveLFTagsFromResourceRequest.h>
#include <aws/lakeformation/model/RevokePermissionsRequest.h>
#include <aws/lakeformation/model/SearchDatabasesByLFTagsRequest.h>
#include <aws/lakeformation/model/SearchTablesByLFTagsRequest.h>
#include <aws/lakeformation/model/StartQueryPlanningRequest.h>
#include <aws/lakeformation/model/StartTransactionRequest.h>
#include <aws/lakeformation/model/UpdateLFTagRequest.h>
#include <aws/lakeformation/model/UpdateResourceRequest.h>
#include <aws/lakeformation/model/UpdateTableObjectsRequest.h>
#include <aws/lakeformation/model/UpdateTableStorageOptimizerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LakeFormation;
using namespace Aws::LakeFormation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lakeformation";
static const char* ALLOCATION_TAG = "LakeFormationClient";


LakeFormationClient::LakeFormationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LakeFormationClient::~LakeFormationClient()
{
}

void LakeFormationClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("LakeFormation");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = LakeFormationEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void LakeFormationClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

AddLFTagsToResourceOutcome LakeFormationClient::AddLFTagsToResource(const AddLFTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/AddLFTagsToResource");
  return AddLFTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddLFTagsToResourceOutcomeCallable LakeFormationClient::AddLFTagsToResourceCallable(const AddLFTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddLFTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddLFTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::AddLFTagsToResourceAsync(const AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddLFTagsToResourceAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::AddLFTagsToResourceAsyncHelper(const AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddLFTagsToResource(request), context);
}

BatchGrantPermissionsOutcome LakeFormationClient::BatchGrantPermissions(const BatchGrantPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/BatchGrantPermissions");
  return BatchGrantPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGrantPermissionsOutcomeCallable LakeFormationClient::BatchGrantPermissionsCallable(const BatchGrantPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGrantPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGrantPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::BatchGrantPermissionsAsync(const BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGrantPermissionsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::BatchGrantPermissionsAsyncHelper(const BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGrantPermissions(request), context);
}

BatchRevokePermissionsOutcome LakeFormationClient::BatchRevokePermissions(const BatchRevokePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/BatchRevokePermissions");
  return BatchRevokePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchRevokePermissionsOutcomeCallable LakeFormationClient::BatchRevokePermissionsCallable(const BatchRevokePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchRevokePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchRevokePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::BatchRevokePermissionsAsync(const BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchRevokePermissionsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::BatchRevokePermissionsAsyncHelper(const BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchRevokePermissions(request), context);
}

CancelTransactionOutcome LakeFormationClient::CancelTransaction(const CancelTransactionRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/CancelTransaction");
  return CancelTransactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelTransactionOutcomeCallable LakeFormationClient::CancelTransactionCallable(const CancelTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CancelTransactionAsync(const CancelTransactionRequest& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelTransactionAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::CancelTransactionAsyncHelper(const CancelTransactionRequest& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelTransaction(request), context);
}

CommitTransactionOutcome LakeFormationClient::CommitTransaction(const CommitTransactionRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/CommitTransaction");
  return CommitTransactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CommitTransactionOutcomeCallable LakeFormationClient::CommitTransactionCallable(const CommitTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CommitTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CommitTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CommitTransactionAsync(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CommitTransactionAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::CommitTransactionAsyncHelper(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CommitTransaction(request), context);
}

CreateDataCellsFilterOutcome LakeFormationClient::CreateDataCellsFilter(const CreateDataCellsFilterRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/CreateDataCellsFilter");
  return CreateDataCellsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataCellsFilterOutcomeCallable LakeFormationClient::CreateDataCellsFilterCallable(const CreateDataCellsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataCellsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataCellsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CreateDataCellsFilterAsync(const CreateDataCellsFilterRequest& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataCellsFilterAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::CreateDataCellsFilterAsyncHelper(const CreateDataCellsFilterRequest& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataCellsFilter(request), context);
}

CreateLFTagOutcome LakeFormationClient::CreateLFTag(const CreateLFTagRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/CreateLFTag");
  return CreateLFTagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLFTagOutcomeCallable LakeFormationClient::CreateLFTagCallable(const CreateLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CreateLFTagAsync(const CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLFTagAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::CreateLFTagAsyncHelper(const CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLFTag(request), context);
}

DeleteDataCellsFilterOutcome LakeFormationClient::DeleteDataCellsFilter(const DeleteDataCellsFilterRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/DeleteDataCellsFilter");
  return DeleteDataCellsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataCellsFilterOutcomeCallable LakeFormationClient::DeleteDataCellsFilterCallable(const DeleteDataCellsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataCellsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataCellsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeleteDataCellsFilterAsync(const DeleteDataCellsFilterRequest& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDataCellsFilterAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::DeleteDataCellsFilterAsyncHelper(const DeleteDataCellsFilterRequest& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataCellsFilter(request), context);
}

DeleteLFTagOutcome LakeFormationClient::DeleteLFTag(const DeleteLFTagRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/DeleteLFTag");
  return DeleteLFTagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLFTagOutcomeCallable LakeFormationClient::DeleteLFTagCallable(const DeleteLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeleteLFTagAsync(const DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLFTagAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::DeleteLFTagAsyncHelper(const DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLFTag(request), context);
}

DeleteObjectsOnCancelOutcome LakeFormationClient::DeleteObjectsOnCancel(const DeleteObjectsOnCancelRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/DeleteObjectsOnCancel");
  return DeleteObjectsOnCancelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteObjectsOnCancelOutcomeCallable LakeFormationClient::DeleteObjectsOnCancelCallable(const DeleteObjectsOnCancelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectsOnCancelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObjectsOnCancel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeleteObjectsOnCancelAsync(const DeleteObjectsOnCancelRequest& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteObjectsOnCancelAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::DeleteObjectsOnCancelAsyncHelper(const DeleteObjectsOnCancelRequest& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteObjectsOnCancel(request), context);
}

DeregisterResourceOutcome LakeFormationClient::DeregisterResource(const DeregisterResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/DeregisterResource");
  return DeregisterResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterResourceOutcomeCallable LakeFormationClient::DeregisterResourceCallable(const DeregisterResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeregisterResourceAsync(const DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterResourceAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::DeregisterResourceAsyncHelper(const DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterResource(request), context);
}

DescribeResourceOutcome LakeFormationClient::DescribeResource(const DescribeResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/DescribeResource");
  return DescribeResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceOutcomeCallable LakeFormationClient::DescribeResourceCallable(const DescribeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourceAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::DescribeResourceAsyncHelper(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResource(request), context);
}

DescribeTransactionOutcome LakeFormationClient::DescribeTransaction(const DescribeTransactionRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/DescribeTransaction");
  return DescribeTransactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTransactionOutcomeCallable LakeFormationClient::DescribeTransactionCallable(const DescribeTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DescribeTransactionAsync(const DescribeTransactionRequest& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTransactionAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::DescribeTransactionAsyncHelper(const DescribeTransactionRequest& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTransaction(request), context);
}

ExtendTransactionOutcome LakeFormationClient::ExtendTransaction(const ExtendTransactionRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ExtendTransaction");
  return ExtendTransactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExtendTransactionOutcomeCallable LakeFormationClient::ExtendTransactionCallable(const ExtendTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExtendTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExtendTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ExtendTransactionAsync(const ExtendTransactionRequest& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExtendTransactionAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ExtendTransactionAsyncHelper(const ExtendTransactionRequest& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExtendTransaction(request), context);
}

GetDataLakeSettingsOutcome LakeFormationClient::GetDataLakeSettings(const GetDataLakeSettingsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetDataLakeSettings");
  return GetDataLakeSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataLakeSettingsOutcomeCallable LakeFormationClient::GetDataLakeSettingsCallable(const GetDataLakeSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataLakeSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataLakeSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetDataLakeSettingsAsync(const GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataLakeSettingsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetDataLakeSettingsAsyncHelper(const GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataLakeSettings(request), context);
}

GetEffectivePermissionsForPathOutcome LakeFormationClient::GetEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetEffectivePermissionsForPath");
  return GetEffectivePermissionsForPathOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEffectivePermissionsForPathOutcomeCallable LakeFormationClient::GetEffectivePermissionsForPathCallable(const GetEffectivePermissionsForPathRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEffectivePermissionsForPathOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEffectivePermissionsForPath(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetEffectivePermissionsForPathAsync(const GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEffectivePermissionsForPathAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetEffectivePermissionsForPathAsyncHelper(const GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEffectivePermissionsForPath(request), context);
}

GetLFTagOutcome LakeFormationClient::GetLFTag(const GetLFTagRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetLFTag");
  return GetLFTagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLFTagOutcomeCallable LakeFormationClient::GetLFTagCallable(const GetLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetLFTagAsync(const GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLFTagAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetLFTagAsyncHelper(const GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLFTag(request), context);
}

GetQueryStateOutcome LakeFormationClient::GetQueryState(const GetQueryStateRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("query-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetQueryState", "Invalid DNS host: " << uri.GetAuthority());
      return GetQueryStateOutcome(Aws::Client::AWSError<LakeFormationErrors>(LakeFormationErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/GetQueryState");
  return GetQueryStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryStateOutcomeCallable LakeFormationClient::GetQueryStateCallable(const GetQueryStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetQueryStateAsync(const GetQueryStateRequest& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryStateAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetQueryStateAsyncHelper(const GetQueryStateRequest& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryState(request), context);
}

GetQueryStatisticsOutcome LakeFormationClient::GetQueryStatistics(const GetQueryStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("query-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetQueryStatistics", "Invalid DNS host: " << uri.GetAuthority());
      return GetQueryStatisticsOutcome(Aws::Client::AWSError<LakeFormationErrors>(LakeFormationErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/GetQueryStatistics");
  return GetQueryStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryStatisticsOutcomeCallable LakeFormationClient::GetQueryStatisticsCallable(const GetQueryStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetQueryStatisticsAsync(const GetQueryStatisticsRequest& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueryStatisticsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetQueryStatisticsAsyncHelper(const GetQueryStatisticsRequest& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueryStatistics(request), context);
}

GetResourceLFTagsOutcome LakeFormationClient::GetResourceLFTags(const GetResourceLFTagsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetResourceLFTags");
  return GetResourceLFTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceLFTagsOutcomeCallable LakeFormationClient::GetResourceLFTagsCallable(const GetResourceLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetResourceLFTagsAsync(const GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceLFTagsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetResourceLFTagsAsyncHelper(const GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceLFTags(request), context);
}

GetTableObjectsOutcome LakeFormationClient::GetTableObjects(const GetTableObjectsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetTableObjects");
  return GetTableObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableObjectsOutcomeCallable LakeFormationClient::GetTableObjectsCallable(const GetTableObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetTableObjectsAsync(const GetTableObjectsRequest& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTableObjectsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetTableObjectsAsyncHelper(const GetTableObjectsRequest& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTableObjects(request), context);
}

GetTemporaryGluePartitionCredentialsOutcome LakeFormationClient::GetTemporaryGluePartitionCredentials(const GetTemporaryGluePartitionCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetTemporaryGluePartitionCredentials");
  return GetTemporaryGluePartitionCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemporaryGluePartitionCredentialsOutcomeCallable LakeFormationClient::GetTemporaryGluePartitionCredentialsCallable(const GetTemporaryGluePartitionCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemporaryGluePartitionCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemporaryGluePartitionCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetTemporaryGluePartitionCredentialsAsync(const GetTemporaryGluePartitionCredentialsRequest& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTemporaryGluePartitionCredentialsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetTemporaryGluePartitionCredentialsAsyncHelper(const GetTemporaryGluePartitionCredentialsRequest& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTemporaryGluePartitionCredentials(request), context);
}

GetTemporaryGlueTableCredentialsOutcome LakeFormationClient::GetTemporaryGlueTableCredentials(const GetTemporaryGlueTableCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GetTemporaryGlueTableCredentials");
  return GetTemporaryGlueTableCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemporaryGlueTableCredentialsOutcomeCallable LakeFormationClient::GetTemporaryGlueTableCredentialsCallable(const GetTemporaryGlueTableCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemporaryGlueTableCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemporaryGlueTableCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetTemporaryGlueTableCredentialsAsync(const GetTemporaryGlueTableCredentialsRequest& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTemporaryGlueTableCredentialsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetTemporaryGlueTableCredentialsAsyncHelper(const GetTemporaryGlueTableCredentialsRequest& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTemporaryGlueTableCredentials(request), context);
}

GetWorkUnitResultsOutcome LakeFormationClient::GetWorkUnitResults(const GetWorkUnitResultsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetWorkUnitResults", "Invalid DNS host: " << uri.GetAuthority());
      return GetWorkUnitResultsOutcome(Aws::Client::AWSError<LakeFormationErrors>(LakeFormationErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/GetWorkUnitResults");
  return GetWorkUnitResultsOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetWorkUnitResultsOutcomeCallable LakeFormationClient::GetWorkUnitResultsCallable(const GetWorkUnitResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkUnitResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkUnitResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetWorkUnitResultsAsync(const GetWorkUnitResultsRequest& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkUnitResultsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetWorkUnitResultsAsyncHelper(const GetWorkUnitResultsRequest& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkUnitResults(request), context);
}

GetWorkUnitsOutcome LakeFormationClient::GetWorkUnits(const GetWorkUnitsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("query-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetWorkUnits", "Invalid DNS host: " << uri.GetAuthority());
      return GetWorkUnitsOutcome(Aws::Client::AWSError<LakeFormationErrors>(LakeFormationErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/GetWorkUnits");
  return GetWorkUnitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkUnitsOutcomeCallable LakeFormationClient::GetWorkUnitsCallable(const GetWorkUnitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkUnitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkUnits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetWorkUnitsAsync(const GetWorkUnitsRequest& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkUnitsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GetWorkUnitsAsyncHelper(const GetWorkUnitsRequest& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkUnits(request), context);
}

GrantPermissionsOutcome LakeFormationClient::GrantPermissions(const GrantPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/GrantPermissions");
  return GrantPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GrantPermissionsOutcomeCallable LakeFormationClient::GrantPermissionsCallable(const GrantPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GrantPermissionsAsync(const GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GrantPermissionsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::GrantPermissionsAsyncHelper(const GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GrantPermissions(request), context);
}

ListDataCellsFilterOutcome LakeFormationClient::ListDataCellsFilter(const ListDataCellsFilterRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ListDataCellsFilter");
  return ListDataCellsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataCellsFilterOutcomeCallable LakeFormationClient::ListDataCellsFilterCallable(const ListDataCellsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataCellsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataCellsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListDataCellsFilterAsync(const ListDataCellsFilterRequest& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataCellsFilterAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ListDataCellsFilterAsyncHelper(const ListDataCellsFilterRequest& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataCellsFilter(request), context);
}

ListLFTagsOutcome LakeFormationClient::ListLFTags(const ListLFTagsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ListLFTags");
  return ListLFTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLFTagsOutcomeCallable LakeFormationClient::ListLFTagsCallable(const ListLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListLFTagsAsync(const ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLFTagsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ListLFTagsAsyncHelper(const ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLFTags(request), context);
}

ListPermissionsOutcome LakeFormationClient::ListPermissions(const ListPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ListPermissions");
  return ListPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionsOutcomeCallable LakeFormationClient::ListPermissionsCallable(const ListPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ListPermissionsAsyncHelper(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissions(request), context);
}

ListResourcesOutcome LakeFormationClient::ListResources(const ListResourcesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ListResources");
  return ListResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable LakeFormationClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ListResourcesAsyncHelper(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResources(request), context);
}

ListTableStorageOptimizersOutcome LakeFormationClient::ListTableStorageOptimizers(const ListTableStorageOptimizersRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ListTableStorageOptimizers");
  return ListTableStorageOptimizersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableStorageOptimizersOutcomeCallable LakeFormationClient::ListTableStorageOptimizersCallable(const ListTableStorageOptimizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableStorageOptimizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableStorageOptimizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListTableStorageOptimizersAsync(const ListTableStorageOptimizersRequest& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTableStorageOptimizersAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ListTableStorageOptimizersAsyncHelper(const ListTableStorageOptimizersRequest& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTableStorageOptimizers(request), context);
}

ListTransactionsOutcome LakeFormationClient::ListTransactions(const ListTransactionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/ListTransactions");
  return ListTransactionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTransactionsOutcomeCallable LakeFormationClient::ListTransactionsCallable(const ListTransactionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTransactionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTransactions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListTransactionsAsync(const ListTransactionsRequest& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTransactionsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::ListTransactionsAsyncHelper(const ListTransactionsRequest& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTransactions(request), context);
}

PutDataLakeSettingsOutcome LakeFormationClient::PutDataLakeSettings(const PutDataLakeSettingsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/PutDataLakeSettings");
  return PutDataLakeSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDataLakeSettingsOutcomeCallable LakeFormationClient::PutDataLakeSettingsCallable(const PutDataLakeSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDataLakeSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDataLakeSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::PutDataLakeSettingsAsync(const PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutDataLakeSettingsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::PutDataLakeSettingsAsyncHelper(const PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDataLakeSettings(request), context);
}

RegisterResourceOutcome LakeFormationClient::RegisterResource(const RegisterResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/RegisterResource");
  return RegisterResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterResourceOutcomeCallable LakeFormationClient::RegisterResourceCallable(const RegisterResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::RegisterResourceAsync(const RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterResourceAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::RegisterResourceAsyncHelper(const RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterResource(request), context);
}

RemoveLFTagsFromResourceOutcome LakeFormationClient::RemoveLFTagsFromResource(const RemoveLFTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/RemoveLFTagsFromResource");
  return RemoveLFTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveLFTagsFromResourceOutcomeCallable LakeFormationClient::RemoveLFTagsFromResourceCallable(const RemoveLFTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveLFTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveLFTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::RemoveLFTagsFromResourceAsync(const RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveLFTagsFromResourceAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::RemoveLFTagsFromResourceAsyncHelper(const RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveLFTagsFromResource(request), context);
}

RevokePermissionsOutcome LakeFormationClient::RevokePermissions(const RevokePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/RevokePermissions");
  return RevokePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokePermissionsOutcomeCallable LakeFormationClient::RevokePermissionsCallable(const RevokePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::RevokePermissionsAsync(const RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokePermissionsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::RevokePermissionsAsyncHelper(const RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokePermissions(request), context);
}

SearchDatabasesByLFTagsOutcome LakeFormationClient::SearchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/SearchDatabasesByLFTags");
  return SearchDatabasesByLFTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDatabasesByLFTagsOutcomeCallable LakeFormationClient::SearchDatabasesByLFTagsCallable(const SearchDatabasesByLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDatabasesByLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDatabasesByLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::SearchDatabasesByLFTagsAsync(const SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchDatabasesByLFTagsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::SearchDatabasesByLFTagsAsyncHelper(const SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchDatabasesByLFTags(request), context);
}

SearchTablesByLFTagsOutcome LakeFormationClient::SearchTablesByLFTags(const SearchTablesByLFTagsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/SearchTablesByLFTags");
  return SearchTablesByLFTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchTablesByLFTagsOutcomeCallable LakeFormationClient::SearchTablesByLFTagsCallable(const SearchTablesByLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchTablesByLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchTablesByLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::SearchTablesByLFTagsAsync(const SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchTablesByLFTagsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::SearchTablesByLFTagsAsyncHelper(const SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchTablesByLFTags(request), context);
}

StartQueryPlanningOutcome LakeFormationClient::StartQueryPlanning(const StartQueryPlanningRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("query-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("StartQueryPlanning", "Invalid DNS host: " << uri.GetAuthority());
      return StartQueryPlanningOutcome(Aws::Client::AWSError<LakeFormationErrors>(LakeFormationErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/StartQueryPlanning");
  return StartQueryPlanningOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartQueryPlanningOutcomeCallable LakeFormationClient::StartQueryPlanningCallable(const StartQueryPlanningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryPlanningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQueryPlanning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::StartQueryPlanningAsync(const StartQueryPlanningRequest& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartQueryPlanningAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::StartQueryPlanningAsyncHelper(const StartQueryPlanningRequest& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartQueryPlanning(request), context);
}

StartTransactionOutcome LakeFormationClient::StartTransaction(const StartTransactionRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/StartTransaction");
  return StartTransactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTransactionOutcomeCallable LakeFormationClient::StartTransactionCallable(const StartTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::StartTransactionAsync(const StartTransactionRequest& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTransactionAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::StartTransactionAsyncHelper(const StartTransactionRequest& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTransaction(request), context);
}

UpdateLFTagOutcome LakeFormationClient::UpdateLFTag(const UpdateLFTagRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/UpdateLFTag");
  return UpdateLFTagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLFTagOutcomeCallable LakeFormationClient::UpdateLFTagCallable(const UpdateLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateLFTagAsync(const UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLFTagAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::UpdateLFTagAsyncHelper(const UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLFTag(request), context);
}

UpdateResourceOutcome LakeFormationClient::UpdateResource(const UpdateResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/UpdateResource");
  return UpdateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcomeCallable LakeFormationClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::UpdateResourceAsyncHelper(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResource(request), context);
}

UpdateTableObjectsOutcome LakeFormationClient::UpdateTableObjects(const UpdateTableObjectsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/UpdateTableObjects");
  return UpdateTableObjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableObjectsOutcomeCallable LakeFormationClient::UpdateTableObjectsCallable(const UpdateTableObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTableObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateTableObjectsAsync(const UpdateTableObjectsRequest& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTableObjectsAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::UpdateTableObjectsAsyncHelper(const UpdateTableObjectsRequest& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTableObjects(request), context);
}

UpdateTableStorageOptimizerOutcome LakeFormationClient::UpdateTableStorageOptimizer(const UpdateTableStorageOptimizerRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/UpdateTableStorageOptimizer");
  return UpdateTableStorageOptimizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableStorageOptimizerOutcomeCallable LakeFormationClient::UpdateTableStorageOptimizerCallable(const UpdateTableStorageOptimizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableStorageOptimizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTableStorageOptimizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateTableStorageOptimizerAsync(const UpdateTableStorageOptimizerRequest& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTableStorageOptimizerAsyncHelper( request, handler, context ); } );
}

void LakeFormationClient::UpdateTableStorageOptimizerAsyncHelper(const UpdateTableStorageOptimizerRequest& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTableStorageOptimizer(request), context);
}

