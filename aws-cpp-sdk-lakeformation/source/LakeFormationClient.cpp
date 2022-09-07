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
#include <aws/lakeformation/model/AssumeDecoratedRoleWithSAMLRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  AWSClient::SetServiceClientName("LakeFormation");
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

void LakeFormationClientAddLFTagsToResourceAsyncHelper(LakeFormationClient const * const clientThis, const AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddLFTagsToResource(request), context);
}

void LakeFormationClient::AddLFTagsToResourceAsync(const AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientAddLFTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

AssumeDecoratedRoleWithSAMLOutcome LakeFormationClient::AssumeDecoratedRoleWithSAML(const AssumeDecoratedRoleWithSAMLRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/AssumeDecoratedRoleWithSAML");
  return AssumeDecoratedRoleWithSAMLOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssumeDecoratedRoleWithSAMLOutcomeCallable LakeFormationClient::AssumeDecoratedRoleWithSAMLCallable(const AssumeDecoratedRoleWithSAMLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeDecoratedRoleWithSAMLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeDecoratedRoleWithSAML(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClientAssumeDecoratedRoleWithSAMLAsyncHelper(LakeFormationClient const * const clientThis, const AssumeDecoratedRoleWithSAMLRequest& request, const AssumeDecoratedRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssumeDecoratedRoleWithSAML(request), context);
}

void LakeFormationClient::AssumeDecoratedRoleWithSAMLAsync(const AssumeDecoratedRoleWithSAMLRequest& request, const AssumeDecoratedRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientAssumeDecoratedRoleWithSAMLAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientBatchGrantPermissionsAsyncHelper(LakeFormationClient const * const clientThis, const BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGrantPermissions(request), context);
}

void LakeFormationClient::BatchGrantPermissionsAsync(const BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientBatchGrantPermissionsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientBatchRevokePermissionsAsyncHelper(LakeFormationClient const * const clientThis, const BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchRevokePermissions(request), context);
}

void LakeFormationClient::BatchRevokePermissionsAsync(const BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientBatchRevokePermissionsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientCancelTransactionAsyncHelper(LakeFormationClient const * const clientThis, const CancelTransactionRequest& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelTransaction(request), context);
}

void LakeFormationClient::CancelTransactionAsync(const CancelTransactionRequest& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientCancelTransactionAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientCommitTransactionAsyncHelper(LakeFormationClient const * const clientThis, const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CommitTransaction(request), context);
}

void LakeFormationClient::CommitTransactionAsync(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientCommitTransactionAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientCreateDataCellsFilterAsyncHelper(LakeFormationClient const * const clientThis, const CreateDataCellsFilterRequest& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataCellsFilter(request), context);
}

void LakeFormationClient::CreateDataCellsFilterAsync(const CreateDataCellsFilterRequest& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientCreateDataCellsFilterAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientCreateLFTagAsyncHelper(LakeFormationClient const * const clientThis, const CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLFTag(request), context);
}

void LakeFormationClient::CreateLFTagAsync(const CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientCreateLFTagAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientDeleteDataCellsFilterAsyncHelper(LakeFormationClient const * const clientThis, const DeleteDataCellsFilterRequest& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataCellsFilter(request), context);
}

void LakeFormationClient::DeleteDataCellsFilterAsync(const DeleteDataCellsFilterRequest& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientDeleteDataCellsFilterAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientDeleteLFTagAsyncHelper(LakeFormationClient const * const clientThis, const DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLFTag(request), context);
}

void LakeFormationClient::DeleteLFTagAsync(const DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientDeleteLFTagAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientDeleteObjectsOnCancelAsyncHelper(LakeFormationClient const * const clientThis, const DeleteObjectsOnCancelRequest& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteObjectsOnCancel(request), context);
}

void LakeFormationClient::DeleteObjectsOnCancelAsync(const DeleteObjectsOnCancelRequest& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientDeleteObjectsOnCancelAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientDeregisterResourceAsyncHelper(LakeFormationClient const * const clientThis, const DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterResource(request), context);
}

void LakeFormationClient::DeregisterResourceAsync(const DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientDeregisterResourceAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientDescribeResourceAsyncHelper(LakeFormationClient const * const clientThis, const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeResource(request), context);
}

void LakeFormationClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientDescribeResourceAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientDescribeTransactionAsyncHelper(LakeFormationClient const * const clientThis, const DescribeTransactionRequest& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTransaction(request), context);
}

void LakeFormationClient::DescribeTransactionAsync(const DescribeTransactionRequest& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientDescribeTransactionAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientExtendTransactionAsyncHelper(LakeFormationClient const * const clientThis, const ExtendTransactionRequest& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExtendTransaction(request), context);
}

void LakeFormationClient::ExtendTransactionAsync(const ExtendTransactionRequest& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientExtendTransactionAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetDataLakeSettingsAsyncHelper(LakeFormationClient const * const clientThis, const GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataLakeSettings(request), context);
}

void LakeFormationClient::GetDataLakeSettingsAsync(const GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetDataLakeSettingsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetEffectivePermissionsForPathAsyncHelper(LakeFormationClient const * const clientThis, const GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEffectivePermissionsForPath(request), context);
}

void LakeFormationClient::GetEffectivePermissionsForPathAsync(const GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetEffectivePermissionsForPathAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetLFTagAsyncHelper(LakeFormationClient const * const clientThis, const GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLFTag(request), context);
}

void LakeFormationClient::GetLFTagAsync(const GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetLFTagAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetQueryStateAsyncHelper(LakeFormationClient const * const clientThis, const GetQueryStateRequest& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryState(request), context);
}

void LakeFormationClient::GetQueryStateAsync(const GetQueryStateRequest& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetQueryStateAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetQueryStatisticsAsyncHelper(LakeFormationClient const * const clientThis, const GetQueryStatisticsRequest& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueryStatistics(request), context);
}

void LakeFormationClient::GetQueryStatisticsAsync(const GetQueryStatisticsRequest& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetQueryStatisticsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetResourceLFTagsAsyncHelper(LakeFormationClient const * const clientThis, const GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourceLFTags(request), context);
}

void LakeFormationClient::GetResourceLFTagsAsync(const GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetResourceLFTagsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetTableObjectsAsyncHelper(LakeFormationClient const * const clientThis, const GetTableObjectsRequest& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTableObjects(request), context);
}

void LakeFormationClient::GetTableObjectsAsync(const GetTableObjectsRequest& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetTableObjectsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetTemporaryGluePartitionCredentialsAsyncHelper(LakeFormationClient const * const clientThis, const GetTemporaryGluePartitionCredentialsRequest& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTemporaryGluePartitionCredentials(request), context);
}

void LakeFormationClient::GetTemporaryGluePartitionCredentialsAsync(const GetTemporaryGluePartitionCredentialsRequest& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetTemporaryGluePartitionCredentialsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetTemporaryGlueTableCredentialsAsyncHelper(LakeFormationClient const * const clientThis, const GetTemporaryGlueTableCredentialsRequest& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTemporaryGlueTableCredentials(request), context);
}

void LakeFormationClient::GetTemporaryGlueTableCredentialsAsync(const GetTemporaryGlueTableCredentialsRequest& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetTemporaryGlueTableCredentialsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetWorkUnitResultsAsyncHelper(LakeFormationClient const * const clientThis, const GetWorkUnitResultsRequest& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkUnitResults(request), context);
}

void LakeFormationClient::GetWorkUnitResultsAsync(const GetWorkUnitResultsRequest& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetWorkUnitResultsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGetWorkUnitsAsyncHelper(LakeFormationClient const * const clientThis, const GetWorkUnitsRequest& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetWorkUnits(request), context);
}

void LakeFormationClient::GetWorkUnitsAsync(const GetWorkUnitsRequest& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGetWorkUnitsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientGrantPermissionsAsyncHelper(LakeFormationClient const * const clientThis, const GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GrantPermissions(request), context);
}

void LakeFormationClient::GrantPermissionsAsync(const GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientGrantPermissionsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientListDataCellsFilterAsyncHelper(LakeFormationClient const * const clientThis, const ListDataCellsFilterRequest& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataCellsFilter(request), context);
}

void LakeFormationClient::ListDataCellsFilterAsync(const ListDataCellsFilterRequest& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientListDataCellsFilterAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientListLFTagsAsyncHelper(LakeFormationClient const * const clientThis, const ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLFTags(request), context);
}

void LakeFormationClient::ListLFTagsAsync(const ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientListLFTagsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientListPermissionsAsyncHelper(LakeFormationClient const * const clientThis, const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissions(request), context);
}

void LakeFormationClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientListPermissionsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientListResourcesAsyncHelper(LakeFormationClient const * const clientThis, const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResources(request), context);
}

void LakeFormationClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientListResourcesAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientListTableStorageOptimizersAsyncHelper(LakeFormationClient const * const clientThis, const ListTableStorageOptimizersRequest& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTableStorageOptimizers(request), context);
}

void LakeFormationClient::ListTableStorageOptimizersAsync(const ListTableStorageOptimizersRequest& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientListTableStorageOptimizersAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientListTransactionsAsyncHelper(LakeFormationClient const * const clientThis, const ListTransactionsRequest& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTransactions(request), context);
}

void LakeFormationClient::ListTransactionsAsync(const ListTransactionsRequest& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientListTransactionsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientPutDataLakeSettingsAsyncHelper(LakeFormationClient const * const clientThis, const PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDataLakeSettings(request), context);
}

void LakeFormationClient::PutDataLakeSettingsAsync(const PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientPutDataLakeSettingsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientRegisterResourceAsyncHelper(LakeFormationClient const * const clientThis, const RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterResource(request), context);
}

void LakeFormationClient::RegisterResourceAsync(const RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientRegisterResourceAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientRemoveLFTagsFromResourceAsyncHelper(LakeFormationClient const * const clientThis, const RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveLFTagsFromResource(request), context);
}

void LakeFormationClient::RemoveLFTagsFromResourceAsync(const RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientRemoveLFTagsFromResourceAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientRevokePermissionsAsyncHelper(LakeFormationClient const * const clientThis, const RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokePermissions(request), context);
}

void LakeFormationClient::RevokePermissionsAsync(const RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientRevokePermissionsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientSearchDatabasesByLFTagsAsyncHelper(LakeFormationClient const * const clientThis, const SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchDatabasesByLFTags(request), context);
}

void LakeFormationClient::SearchDatabasesByLFTagsAsync(const SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientSearchDatabasesByLFTagsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientSearchTablesByLFTagsAsyncHelper(LakeFormationClient const * const clientThis, const SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchTablesByLFTags(request), context);
}

void LakeFormationClient::SearchTablesByLFTagsAsync(const SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientSearchTablesByLFTagsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientStartQueryPlanningAsyncHelper(LakeFormationClient const * const clientThis, const StartQueryPlanningRequest& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartQueryPlanning(request), context);
}

void LakeFormationClient::StartQueryPlanningAsync(const StartQueryPlanningRequest& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientStartQueryPlanningAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientStartTransactionAsyncHelper(LakeFormationClient const * const clientThis, const StartTransactionRequest& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTransaction(request), context);
}

void LakeFormationClient::StartTransactionAsync(const StartTransactionRequest& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientStartTransactionAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientUpdateLFTagAsyncHelper(LakeFormationClient const * const clientThis, const UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLFTag(request), context);
}

void LakeFormationClient::UpdateLFTagAsync(const UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientUpdateLFTagAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientUpdateResourceAsyncHelper(LakeFormationClient const * const clientThis, const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResource(request), context);
}

void LakeFormationClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientUpdateResourceAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientUpdateTableObjectsAsyncHelper(LakeFormationClient const * const clientThis, const UpdateTableObjectsRequest& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTableObjects(request), context);
}

void LakeFormationClient::UpdateTableObjectsAsync(const UpdateTableObjectsRequest& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientUpdateTableObjectsAsyncHelper( this, request, handler, context ); } );
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

void LakeFormationClientUpdateTableStorageOptimizerAsyncHelper(LakeFormationClient const * const clientThis, const UpdateTableStorageOptimizerRequest& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTableStorageOptimizer(request), context);
}

void LakeFormationClient::UpdateTableStorageOptimizerAsync(const UpdateTableStorageOptimizerRequest& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LakeFormationClientUpdateTableStorageOptimizerAsyncHelper( this, request, handler, context ); } );
}

