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

#include <aws/clouddirectory/CloudDirectoryClient.h>
#include <aws/clouddirectory/CloudDirectoryEndpoint.h>
#include <aws/clouddirectory/CloudDirectoryErrorMarshaller.h>
#include <aws/clouddirectory/model/AddFacetToObjectRequest.h>
#include <aws/clouddirectory/model/ApplySchemaRequest.h>
#include <aws/clouddirectory/model/AttachObjectRequest.h>
#include <aws/clouddirectory/model/AttachPolicyRequest.h>
#include <aws/clouddirectory/model/AttachToIndexRequest.h>
#include <aws/clouddirectory/model/AttachTypedLinkRequest.h>
#include <aws/clouddirectory/model/BatchReadRequest.h>
#include <aws/clouddirectory/model/BatchWriteRequest.h>
#include <aws/clouddirectory/model/CreateDirectoryRequest.h>
#include <aws/clouddirectory/model/CreateFacetRequest.h>
#include <aws/clouddirectory/model/CreateIndexRequest.h>
#include <aws/clouddirectory/model/CreateObjectRequest.h>
#include <aws/clouddirectory/model/CreateSchemaRequest.h>
#include <aws/clouddirectory/model/CreateTypedLinkFacetRequest.h>
#include <aws/clouddirectory/model/DeleteDirectoryRequest.h>
#include <aws/clouddirectory/model/DeleteFacetRequest.h>
#include <aws/clouddirectory/model/DeleteObjectRequest.h>
#include <aws/clouddirectory/model/DeleteSchemaRequest.h>
#include <aws/clouddirectory/model/DeleteTypedLinkFacetRequest.h>
#include <aws/clouddirectory/model/DetachFromIndexRequest.h>
#include <aws/clouddirectory/model/DetachObjectRequest.h>
#include <aws/clouddirectory/model/DetachPolicyRequest.h>
#include <aws/clouddirectory/model/DetachTypedLinkRequest.h>
#include <aws/clouddirectory/model/DisableDirectoryRequest.h>
#include <aws/clouddirectory/model/EnableDirectoryRequest.h>
#include <aws/clouddirectory/model/GetAppliedSchemaVersionRequest.h>
#include <aws/clouddirectory/model/GetDirectoryRequest.h>
#include <aws/clouddirectory/model/GetFacetRequest.h>
#include <aws/clouddirectory/model/GetLinkAttributesRequest.h>
#include <aws/clouddirectory/model/GetObjectAttributesRequest.h>
#include <aws/clouddirectory/model/GetObjectInformationRequest.h>
#include <aws/clouddirectory/model/GetSchemaAsJsonRequest.h>
#include <aws/clouddirectory/model/GetTypedLinkFacetInformationRequest.h>
#include <aws/clouddirectory/model/ListAppliedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListAttachedIndicesRequest.h>
#include <aws/clouddirectory/model/ListDevelopmentSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListDirectoriesRequest.h>
#include <aws/clouddirectory/model/ListFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListFacetNamesRequest.h>
#include <aws/clouddirectory/model/ListIncomingTypedLinksRequest.h>
#include <aws/clouddirectory/model/ListIndexRequest.h>
#include <aws/clouddirectory/model/ListManagedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListObjectAttributesRequest.h>
#include <aws/clouddirectory/model/ListObjectChildrenRequest.h>
#include <aws/clouddirectory/model/ListObjectParentPathsRequest.h>
#include <aws/clouddirectory/model/ListObjectParentsRequest.h>
#include <aws/clouddirectory/model/ListObjectPoliciesRequest.h>
#include <aws/clouddirectory/model/ListOutgoingTypedLinksRequest.h>
#include <aws/clouddirectory/model/ListPolicyAttachmentsRequest.h>
#include <aws/clouddirectory/model/ListPublishedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListTagsForResourceRequest.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetNamesRequest.h>
#include <aws/clouddirectory/model/LookupPolicyRequest.h>
#include <aws/clouddirectory/model/PublishSchemaRequest.h>
#include <aws/clouddirectory/model/PutSchemaFromJsonRequest.h>
#include <aws/clouddirectory/model/RemoveFacetFromObjectRequest.h>
#include <aws/clouddirectory/model/TagResourceRequest.h>
#include <aws/clouddirectory/model/UntagResourceRequest.h>
#include <aws/clouddirectory/model/UpdateFacetRequest.h>
#include <aws/clouddirectory/model/UpdateLinkAttributesRequest.h>
#include <aws/clouddirectory/model/UpdateObjectAttributesRequest.h>
#include <aws/clouddirectory/model/UpdateSchemaRequest.h>
#include <aws/clouddirectory/model/UpdateTypedLinkFacetRequest.h>
#include <aws/clouddirectory/model/UpgradeAppliedSchemaRequest.h>
#include <aws/clouddirectory/model/UpgradePublishedSchemaRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudDirectory;
using namespace Aws::CloudDirectory::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "clouddirectory";
static const char* ALLOCATION_TAG = "CloudDirectoryClient";


CloudDirectoryClient::CloudDirectoryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::~CloudDirectoryClient()
{
}

void CloudDirectoryClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("CloudDirectory");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudDirectoryEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudDirectoryClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddFacetToObjectOutcome CloudDirectoryClient::AddFacetToObject(const AddFacetToObjectRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFacetToObject", "Required field: DirectoryArn, is not set");
    return AddFacetToObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/facets");
  return AddFacetToObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AddFacetToObjectOutcomeCallable CloudDirectoryClient::AddFacetToObjectCallable(const AddFacetToObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddFacetToObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddFacetToObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::AddFacetToObjectAsync(const AddFacetToObjectRequest& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddFacetToObjectAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::AddFacetToObjectAsyncHelper(const AddFacetToObjectRequest& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddFacetToObject(request), context);
}

ApplySchemaOutcome CloudDirectoryClient::ApplySchema(const ApplySchemaRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ApplySchema", "Required field: DirectoryArn, is not set");
    return ApplySchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/apply");
  return ApplySchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ApplySchemaOutcomeCallable CloudDirectoryClient::ApplySchemaCallable(const ApplySchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplySchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplySchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ApplySchemaAsync(const ApplySchemaRequest& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplySchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ApplySchemaAsyncHelper(const ApplySchemaRequest& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplySchema(request), context);
}

AttachObjectOutcome CloudDirectoryClient::AttachObject(const AttachObjectRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachObject", "Required field: DirectoryArn, is not set");
    return AttachObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/attach");
  return AttachObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachObjectOutcomeCallable CloudDirectoryClient::AttachObjectCallable(const AttachObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::AttachObjectAsync(const AttachObjectRequest& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachObjectAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::AttachObjectAsyncHelper(const AttachObjectRequest& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachObject(request), context);
}

AttachPolicyOutcome CloudDirectoryClient::AttachPolicy(const AttachPolicyRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachPolicy", "Required field: DirectoryArn, is not set");
    return AttachPolicyOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/policy/attach");
  return AttachPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachPolicyOutcomeCallable CloudDirectoryClient::AttachPolicyCallable(const AttachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::AttachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachPolicyAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::AttachPolicyAsyncHelper(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachPolicy(request), context);
}

AttachToIndexOutcome CloudDirectoryClient::AttachToIndex(const AttachToIndexRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachToIndex", "Required field: DirectoryArn, is not set");
    return AttachToIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/index/attach");
  return AttachToIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachToIndexOutcomeCallable CloudDirectoryClient::AttachToIndexCallable(const AttachToIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachToIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachToIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::AttachToIndexAsync(const AttachToIndexRequest& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachToIndexAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::AttachToIndexAsyncHelper(const AttachToIndexRequest& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachToIndex(request), context);
}

AttachTypedLinkOutcome CloudDirectoryClient::AttachTypedLink(const AttachTypedLinkRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AttachTypedLink", "Required field: DirectoryArn, is not set");
    return AttachTypedLinkOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/attach");
  return AttachTypedLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AttachTypedLinkOutcomeCallable CloudDirectoryClient::AttachTypedLinkCallable(const AttachTypedLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachTypedLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachTypedLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::AttachTypedLinkAsync(const AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachTypedLinkAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::AttachTypedLinkAsyncHelper(const AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachTypedLink(request), context);
}

BatchReadOutcome CloudDirectoryClient::BatchRead(const BatchReadRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchRead", "Required field: DirectoryArn, is not set");
    return BatchReadOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/batchread");
  return BatchReadOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchReadOutcomeCallable CloudDirectoryClient::BatchReadCallable(const BatchReadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchReadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchRead(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::BatchReadAsync(const BatchReadRequest& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchReadAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::BatchReadAsyncHelper(const BatchReadRequest& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchRead(request), context);
}

BatchWriteOutcome CloudDirectoryClient::BatchWrite(const BatchWriteRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchWrite", "Required field: DirectoryArn, is not set");
    return BatchWriteOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/batchwrite");
  return BatchWriteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

BatchWriteOutcomeCallable CloudDirectoryClient::BatchWriteCallable(const BatchWriteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchWriteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchWrite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::BatchWriteAsync(const BatchWriteRequest& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchWriteAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::BatchWriteAsyncHelper(const BatchWriteRequest& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchWrite(request), context);
}

CreateDirectoryOutcome CloudDirectoryClient::CreateDirectory(const CreateDirectoryRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDirectory", "Required field: SchemaArn, is not set");
    return CreateDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/directory/create");
  return CreateDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateDirectoryOutcomeCallable CloudDirectoryClient::CreateDirectoryCallable(const CreateDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::CreateDirectoryAsync(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDirectoryAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::CreateDirectoryAsyncHelper(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectory(request), context);
}

CreateFacetOutcome CloudDirectoryClient::CreateFacet(const CreateFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFacet", "Required field: SchemaArn, is not set");
    return CreateFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/facet/create");
  return CreateFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateFacetOutcomeCallable CloudDirectoryClient::CreateFacetCallable(const CreateFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::CreateFacetAsync(const CreateFacetRequest& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::CreateFacetAsyncHelper(const CreateFacetRequest& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFacet(request), context);
}

CreateIndexOutcome CloudDirectoryClient::CreateIndex(const CreateIndexRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIndex", "Required field: DirectoryArn, is not set");
    return CreateIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/index");
  return CreateIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIndexOutcomeCallable CloudDirectoryClient::CreateIndexCallable(const CreateIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIndexAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::CreateIndexAsyncHelper(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIndex(request), context);
}

CreateObjectOutcome CloudDirectoryClient::CreateObject(const CreateObjectRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateObject", "Required field: DirectoryArn, is not set");
    return CreateObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object");
  return CreateObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateObjectOutcomeCallable CloudDirectoryClient::CreateObjectCallable(const CreateObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::CreateObjectAsync(const CreateObjectRequest& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateObjectAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::CreateObjectAsyncHelper(const CreateObjectRequest& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateObject(request), context);
}

CreateSchemaOutcome CloudDirectoryClient::CreateSchema(const CreateSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/create");
  return CreateSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateSchemaOutcomeCallable CloudDirectoryClient::CreateSchemaCallable(const CreateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::CreateSchemaAsyncHelper(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSchema(request), context);
}

CreateTypedLinkFacetOutcome CloudDirectoryClient::CreateTypedLinkFacet(const CreateTypedLinkFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTypedLinkFacet", "Required field: SchemaArn, is not set");
    return CreateTypedLinkFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/create");
  return CreateTypedLinkFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateTypedLinkFacetOutcomeCallable CloudDirectoryClient::CreateTypedLinkFacetCallable(const CreateTypedLinkFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTypedLinkFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTypedLinkFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::CreateTypedLinkFacetAsync(const CreateTypedLinkFacetRequest& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTypedLinkFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::CreateTypedLinkFacetAsyncHelper(const CreateTypedLinkFacetRequest& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTypedLinkFacet(request), context);
}

DeleteDirectoryOutcome CloudDirectoryClient::DeleteDirectory(const DeleteDirectoryRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDirectory", "Required field: DirectoryArn, is not set");
    return DeleteDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/directory");
  return DeleteDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DeleteDirectoryOutcomeCallable CloudDirectoryClient::DeleteDirectoryCallable(const DeleteDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DeleteDirectoryAsync(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDirectoryAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DeleteDirectoryAsyncHelper(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectory(request), context);
}

DeleteFacetOutcome CloudDirectoryClient::DeleteFacet(const DeleteFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFacet", "Required field: SchemaArn, is not set");
    return DeleteFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/facet/delete");
  return DeleteFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DeleteFacetOutcomeCallable CloudDirectoryClient::DeleteFacetCallable(const DeleteFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DeleteFacetAsync(const DeleteFacetRequest& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DeleteFacetAsyncHelper(const DeleteFacetRequest& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFacet(request), context);
}

DeleteObjectOutcome CloudDirectoryClient::DeleteObject(const DeleteObjectRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: DirectoryArn, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/delete");
  return DeleteObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DeleteObjectOutcomeCallable CloudDirectoryClient::DeleteObjectCallable(const DeleteObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DeleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteObjectAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DeleteObjectAsyncHelper(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteObject(request), context);
}

DeleteSchemaOutcome CloudDirectoryClient::DeleteSchema(const DeleteSchemaRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchema", "Required field: SchemaArn, is not set");
    return DeleteSchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema");
  return DeleteSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DeleteSchemaOutcomeCallable CloudDirectoryClient::DeleteSchemaCallable(const DeleteSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DeleteSchemaAsyncHelper(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSchema(request), context);
}

DeleteTypedLinkFacetOutcome CloudDirectoryClient::DeleteTypedLinkFacet(const DeleteTypedLinkFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTypedLinkFacet", "Required field: SchemaArn, is not set");
    return DeleteTypedLinkFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/delete");
  return DeleteTypedLinkFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DeleteTypedLinkFacetOutcomeCallable CloudDirectoryClient::DeleteTypedLinkFacetCallable(const DeleteTypedLinkFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTypedLinkFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTypedLinkFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DeleteTypedLinkFacetAsync(const DeleteTypedLinkFacetRequest& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTypedLinkFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DeleteTypedLinkFacetAsyncHelper(const DeleteTypedLinkFacetRequest& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTypedLinkFacet(request), context);
}

DetachFromIndexOutcome CloudDirectoryClient::DetachFromIndex(const DetachFromIndexRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachFromIndex", "Required field: DirectoryArn, is not set");
    return DetachFromIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/index/detach");
  return DetachFromIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DetachFromIndexOutcomeCallable CloudDirectoryClient::DetachFromIndexCallable(const DetachFromIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachFromIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachFromIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DetachFromIndexAsync(const DetachFromIndexRequest& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachFromIndexAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DetachFromIndexAsyncHelper(const DetachFromIndexRequest& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachFromIndex(request), context);
}

DetachObjectOutcome CloudDirectoryClient::DetachObject(const DetachObjectRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachObject", "Required field: DirectoryArn, is not set");
    return DetachObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/detach");
  return DetachObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DetachObjectOutcomeCallable CloudDirectoryClient::DetachObjectCallable(const DetachObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DetachObjectAsync(const DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachObjectAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DetachObjectAsyncHelper(const DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachObject(request), context);
}

DetachPolicyOutcome CloudDirectoryClient::DetachPolicy(const DetachPolicyRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachPolicy", "Required field: DirectoryArn, is not set");
    return DetachPolicyOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/policy/detach");
  return DetachPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DetachPolicyOutcomeCallable CloudDirectoryClient::DetachPolicyCallable(const DetachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DetachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachPolicyAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DetachPolicyAsyncHelper(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachPolicy(request), context);
}

DetachTypedLinkOutcome CloudDirectoryClient::DetachTypedLink(const DetachTypedLinkRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetachTypedLink", "Required field: DirectoryArn, is not set");
    return DetachTypedLinkOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/detach");
  return DetachTypedLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DetachTypedLinkOutcomeCallable CloudDirectoryClient::DetachTypedLinkCallable(const DetachTypedLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachTypedLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachTypedLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DetachTypedLinkAsync(const DetachTypedLinkRequest& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachTypedLinkAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DetachTypedLinkAsyncHelper(const DetachTypedLinkRequest& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachTypedLink(request), context);
}

DisableDirectoryOutcome CloudDirectoryClient::DisableDirectory(const DisableDirectoryRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableDirectory", "Required field: DirectoryArn, is not set");
    return DisableDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/directory/disable");
  return DisableDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

DisableDirectoryOutcomeCallable CloudDirectoryClient::DisableDirectoryCallable(const DisableDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::DisableDirectoryAsync(const DisableDirectoryRequest& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableDirectoryAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::DisableDirectoryAsyncHelper(const DisableDirectoryRequest& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableDirectory(request), context);
}

EnableDirectoryOutcome CloudDirectoryClient::EnableDirectory(const EnableDirectoryRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableDirectory", "Required field: DirectoryArn, is not set");
    return EnableDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/directory/enable");
  return EnableDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

EnableDirectoryOutcomeCallable CloudDirectoryClient::EnableDirectoryCallable(const EnableDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::EnableDirectoryAsync(const EnableDirectoryRequest& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableDirectoryAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::EnableDirectoryAsyncHelper(const EnableDirectoryRequest& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableDirectory(request), context);
}

GetAppliedSchemaVersionOutcome CloudDirectoryClient::GetAppliedSchemaVersion(const GetAppliedSchemaVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/getappliedschema");
  return GetAppliedSchemaVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppliedSchemaVersionOutcomeCallable CloudDirectoryClient::GetAppliedSchemaVersionCallable(const GetAppliedSchemaVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppliedSchemaVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppliedSchemaVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetAppliedSchemaVersionAsync(const GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppliedSchemaVersionAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetAppliedSchemaVersionAsyncHelper(const GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAppliedSchemaVersion(request), context);
}

GetDirectoryOutcome CloudDirectoryClient::GetDirectory(const GetDirectoryRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDirectory", "Required field: DirectoryArn, is not set");
    return GetDirectoryOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/directory/get");
  return GetDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDirectoryOutcomeCallable CloudDirectoryClient::GetDirectoryCallable(const GetDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetDirectoryAsync(const GetDirectoryRequest& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDirectoryAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetDirectoryAsyncHelper(const GetDirectoryRequest& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDirectory(request), context);
}

GetFacetOutcome CloudDirectoryClient::GetFacet(const GetFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFacet", "Required field: SchemaArn, is not set");
    return GetFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/facet");
  return GetFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFacetOutcomeCallable CloudDirectoryClient::GetFacetCallable(const GetFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetFacetAsync(const GetFacetRequest& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetFacetAsyncHelper(const GetFacetRequest& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFacet(request), context);
}

GetLinkAttributesOutcome CloudDirectoryClient::GetLinkAttributes(const GetLinkAttributesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLinkAttributes", "Required field: DirectoryArn, is not set");
    return GetLinkAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/attributes/get");
  return GetLinkAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLinkAttributesOutcomeCallable CloudDirectoryClient::GetLinkAttributesCallable(const GetLinkAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLinkAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLinkAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetLinkAttributesAsync(const GetLinkAttributesRequest& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLinkAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetLinkAttributesAsyncHelper(const GetLinkAttributesRequest& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLinkAttributes(request), context);
}

GetObjectAttributesOutcome CloudDirectoryClient::GetObjectAttributes(const GetObjectAttributesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectAttributes", "Required field: DirectoryArn, is not set");
    return GetObjectAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/attributes/get");
  return GetObjectAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetObjectAttributesOutcomeCallable CloudDirectoryClient::GetObjectAttributesCallable(const GetObjectAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetObjectAttributesAsync(const GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetObjectAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetObjectAttributesAsyncHelper(const GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetObjectAttributes(request), context);
}

GetObjectInformationOutcome CloudDirectoryClient::GetObjectInformation(const GetObjectInformationRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObjectInformation", "Required field: DirectoryArn, is not set");
    return GetObjectInformationOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/information");
  return GetObjectInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetObjectInformationOutcomeCallable CloudDirectoryClient::GetObjectInformationCallable(const GetObjectInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObjectInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetObjectInformationAsync(const GetObjectInformationRequest& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetObjectInformationAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetObjectInformationAsyncHelper(const GetObjectInformationRequest& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetObjectInformation(request), context);
}

GetSchemaAsJsonOutcome CloudDirectoryClient::GetSchemaAsJson(const GetSchemaAsJsonRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaAsJson", "Required field: SchemaArn, is not set");
    return GetSchemaAsJsonOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/json");
  return GetSchemaAsJsonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaAsJsonOutcomeCallable CloudDirectoryClient::GetSchemaAsJsonCallable(const GetSchemaAsJsonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaAsJsonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchemaAsJson(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetSchemaAsJsonAsync(const GetSchemaAsJsonRequest& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSchemaAsJsonAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetSchemaAsJsonAsyncHelper(const GetSchemaAsJsonRequest& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSchemaAsJson(request), context);
}

GetTypedLinkFacetInformationOutcome CloudDirectoryClient::GetTypedLinkFacetInformation(const GetTypedLinkFacetInformationRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTypedLinkFacetInformation", "Required field: SchemaArn, is not set");
    return GetTypedLinkFacetInformationOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/get");
  return GetTypedLinkFacetInformationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTypedLinkFacetInformationOutcomeCallable CloudDirectoryClient::GetTypedLinkFacetInformationCallable(const GetTypedLinkFacetInformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTypedLinkFacetInformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTypedLinkFacetInformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::GetTypedLinkFacetInformationAsync(const GetTypedLinkFacetInformationRequest& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTypedLinkFacetInformationAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::GetTypedLinkFacetInformationAsyncHelper(const GetTypedLinkFacetInformationRequest& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTypedLinkFacetInformation(request), context);
}

ListAppliedSchemaArnsOutcome CloudDirectoryClient::ListAppliedSchemaArns(const ListAppliedSchemaArnsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/applied");
  return ListAppliedSchemaArnsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppliedSchemaArnsOutcomeCallable CloudDirectoryClient::ListAppliedSchemaArnsCallable(const ListAppliedSchemaArnsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppliedSchemaArnsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppliedSchemaArns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListAppliedSchemaArnsAsync(const ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAppliedSchemaArnsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListAppliedSchemaArnsAsyncHelper(const ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAppliedSchemaArns(request), context);
}

ListAttachedIndicesOutcome CloudDirectoryClient::ListAttachedIndices(const ListAttachedIndicesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttachedIndices", "Required field: DirectoryArn, is not set");
    return ListAttachedIndicesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/indices");
  return ListAttachedIndicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAttachedIndicesOutcomeCallable CloudDirectoryClient::ListAttachedIndicesCallable(const ListAttachedIndicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedIndicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedIndices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListAttachedIndicesAsync(const ListAttachedIndicesRequest& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttachedIndicesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListAttachedIndicesAsyncHelper(const ListAttachedIndicesRequest& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedIndices(request), context);
}

ListDevelopmentSchemaArnsOutcome CloudDirectoryClient::ListDevelopmentSchemaArns(const ListDevelopmentSchemaArnsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/development");
  return ListDevelopmentSchemaArnsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevelopmentSchemaArnsOutcomeCallable CloudDirectoryClient::ListDevelopmentSchemaArnsCallable(const ListDevelopmentSchemaArnsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevelopmentSchemaArnsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevelopmentSchemaArns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListDevelopmentSchemaArnsAsync(const ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDevelopmentSchemaArnsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListDevelopmentSchemaArnsAsyncHelper(const ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDevelopmentSchemaArns(request), context);
}

ListDirectoriesOutcome CloudDirectoryClient::ListDirectories(const ListDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/directory/list");
  return ListDirectoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDirectoriesOutcomeCallable CloudDirectoryClient::ListDirectoriesCallable(const ListDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListDirectoriesAsync(const ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDirectoriesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListDirectoriesAsyncHelper(const ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDirectories(request), context);
}

ListFacetAttributesOutcome CloudDirectoryClient::ListFacetAttributes(const ListFacetAttributesRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFacetAttributes", "Required field: SchemaArn, is not set");
    return ListFacetAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/facet/attributes");
  return ListFacetAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFacetAttributesOutcomeCallable CloudDirectoryClient::ListFacetAttributesCallable(const ListFacetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFacetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFacetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListFacetAttributesAsync(const ListFacetAttributesRequest& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFacetAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListFacetAttributesAsyncHelper(const ListFacetAttributesRequest& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFacetAttributes(request), context);
}

ListFacetNamesOutcome CloudDirectoryClient::ListFacetNames(const ListFacetNamesRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFacetNames", "Required field: SchemaArn, is not set");
    return ListFacetNamesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/facet/list");
  return ListFacetNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFacetNamesOutcomeCallable CloudDirectoryClient::ListFacetNamesCallable(const ListFacetNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFacetNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFacetNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListFacetNamesAsync(const ListFacetNamesRequest& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFacetNamesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListFacetNamesAsyncHelper(const ListFacetNamesRequest& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFacetNames(request), context);
}

ListIncomingTypedLinksOutcome CloudDirectoryClient::ListIncomingTypedLinks(const ListIncomingTypedLinksRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIncomingTypedLinks", "Required field: DirectoryArn, is not set");
    return ListIncomingTypedLinksOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/incoming");
  return ListIncomingTypedLinksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIncomingTypedLinksOutcomeCallable CloudDirectoryClient::ListIncomingTypedLinksCallable(const ListIncomingTypedLinksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIncomingTypedLinksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIncomingTypedLinks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListIncomingTypedLinksAsync(const ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIncomingTypedLinksAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListIncomingTypedLinksAsyncHelper(const ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIncomingTypedLinks(request), context);
}

ListIndexOutcome CloudDirectoryClient::ListIndex(const ListIndexRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIndex", "Required field: DirectoryArn, is not set");
    return ListIndexOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/index/targets");
  return ListIndexOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIndexOutcomeCallable CloudDirectoryClient::ListIndexCallable(const ListIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListIndexAsync(const ListIndexRequest& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIndexAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListIndexAsyncHelper(const ListIndexRequest& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIndex(request), context);
}

ListManagedSchemaArnsOutcome CloudDirectoryClient::ListManagedSchemaArns(const ListManagedSchemaArnsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/managed");
  return ListManagedSchemaArnsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedSchemaArnsOutcomeCallable CloudDirectoryClient::ListManagedSchemaArnsCallable(const ListManagedSchemaArnsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedSchemaArnsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedSchemaArns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListManagedSchemaArnsAsync(const ListManagedSchemaArnsRequest& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListManagedSchemaArnsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListManagedSchemaArnsAsyncHelper(const ListManagedSchemaArnsRequest& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListManagedSchemaArns(request), context);
}

ListObjectAttributesOutcome CloudDirectoryClient::ListObjectAttributes(const ListObjectAttributesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectAttributes", "Required field: DirectoryArn, is not set");
    return ListObjectAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/attributes");
  return ListObjectAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObjectAttributesOutcomeCallable CloudDirectoryClient::ListObjectAttributesCallable(const ListObjectAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListObjectAttributesAsync(const ListObjectAttributesRequest& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListObjectAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListObjectAttributesAsyncHelper(const ListObjectAttributesRequest& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListObjectAttributes(request), context);
}

ListObjectChildrenOutcome CloudDirectoryClient::ListObjectChildren(const ListObjectChildrenRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectChildren", "Required field: DirectoryArn, is not set");
    return ListObjectChildrenOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/children");
  return ListObjectChildrenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObjectChildrenOutcomeCallable CloudDirectoryClient::ListObjectChildrenCallable(const ListObjectChildrenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectChildrenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectChildren(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListObjectChildrenAsync(const ListObjectChildrenRequest& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListObjectChildrenAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListObjectChildrenAsyncHelper(const ListObjectChildrenRequest& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListObjectChildren(request), context);
}

ListObjectParentPathsOutcome CloudDirectoryClient::ListObjectParentPaths(const ListObjectParentPathsRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectParentPaths", "Required field: DirectoryArn, is not set");
    return ListObjectParentPathsOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/parentpaths");
  return ListObjectParentPathsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObjectParentPathsOutcomeCallable CloudDirectoryClient::ListObjectParentPathsCallable(const ListObjectParentPathsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectParentPathsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectParentPaths(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListObjectParentPathsAsync(const ListObjectParentPathsRequest& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListObjectParentPathsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListObjectParentPathsAsyncHelper(const ListObjectParentPathsRequest& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListObjectParentPaths(request), context);
}

ListObjectParentsOutcome CloudDirectoryClient::ListObjectParents(const ListObjectParentsRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectParents", "Required field: DirectoryArn, is not set");
    return ListObjectParentsOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/parent");
  return ListObjectParentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObjectParentsOutcomeCallable CloudDirectoryClient::ListObjectParentsCallable(const ListObjectParentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectParentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectParents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListObjectParentsAsync(const ListObjectParentsRequest& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListObjectParentsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListObjectParentsAsyncHelper(const ListObjectParentsRequest& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListObjectParents(request), context);
}

ListObjectPoliciesOutcome CloudDirectoryClient::ListObjectPolicies(const ListObjectPoliciesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListObjectPolicies", "Required field: DirectoryArn, is not set");
    return ListObjectPoliciesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/policy");
  return ListObjectPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObjectPoliciesOutcomeCallable CloudDirectoryClient::ListObjectPoliciesCallable(const ListObjectPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObjectPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObjectPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListObjectPoliciesAsync(const ListObjectPoliciesRequest& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListObjectPoliciesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListObjectPoliciesAsyncHelper(const ListObjectPoliciesRequest& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListObjectPolicies(request), context);
}

ListOutgoingTypedLinksOutcome CloudDirectoryClient::ListOutgoingTypedLinks(const ListOutgoingTypedLinksRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOutgoingTypedLinks", "Required field: DirectoryArn, is not set");
    return ListOutgoingTypedLinksOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/outgoing");
  return ListOutgoingTypedLinksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOutgoingTypedLinksOutcomeCallable CloudDirectoryClient::ListOutgoingTypedLinksCallable(const ListOutgoingTypedLinksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOutgoingTypedLinksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOutgoingTypedLinks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListOutgoingTypedLinksAsync(const ListOutgoingTypedLinksRequest& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOutgoingTypedLinksAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListOutgoingTypedLinksAsyncHelper(const ListOutgoingTypedLinksRequest& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOutgoingTypedLinks(request), context);
}

ListPolicyAttachmentsOutcome CloudDirectoryClient::ListPolicyAttachments(const ListPolicyAttachmentsRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPolicyAttachments", "Required field: DirectoryArn, is not set");
    return ListPolicyAttachmentsOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/policy/attachment");
  return ListPolicyAttachmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPolicyAttachmentsOutcomeCallable CloudDirectoryClient::ListPolicyAttachmentsCallable(const ListPolicyAttachmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyAttachmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyAttachments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListPolicyAttachmentsAsync(const ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPolicyAttachmentsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListPolicyAttachmentsAsyncHelper(const ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicyAttachments(request), context);
}

ListPublishedSchemaArnsOutcome CloudDirectoryClient::ListPublishedSchemaArns(const ListPublishedSchemaArnsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/published");
  return ListPublishedSchemaArnsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPublishedSchemaArnsOutcomeCallable CloudDirectoryClient::ListPublishedSchemaArnsCallable(const ListPublishedSchemaArnsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublishedSchemaArnsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublishedSchemaArns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListPublishedSchemaArnsAsync(const ListPublishedSchemaArnsRequest& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublishedSchemaArnsAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListPublishedSchemaArnsAsyncHelper(const ListPublishedSchemaArnsRequest& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublishedSchemaArns(request), context);
}

ListTagsForResourceOutcome CloudDirectoryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CloudDirectoryClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTypedLinkFacetAttributesOutcome CloudDirectoryClient::ListTypedLinkFacetAttributes(const ListTypedLinkFacetAttributesRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTypedLinkFacetAttributes", "Required field: SchemaArn, is not set");
    return ListTypedLinkFacetAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/attributes");
  return ListTypedLinkFacetAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTypedLinkFacetAttributesOutcomeCallable CloudDirectoryClient::ListTypedLinkFacetAttributesCallable(const ListTypedLinkFacetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypedLinkFacetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypedLinkFacetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListTypedLinkFacetAttributesAsync(const ListTypedLinkFacetAttributesRequest& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTypedLinkFacetAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListTypedLinkFacetAttributesAsyncHelper(const ListTypedLinkFacetAttributesRequest& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTypedLinkFacetAttributes(request), context);
}

ListTypedLinkFacetNamesOutcome CloudDirectoryClient::ListTypedLinkFacetNames(const ListTypedLinkFacetNamesRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTypedLinkFacetNames", "Required field: SchemaArn, is not set");
    return ListTypedLinkFacetNamesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet/list");
  return ListTypedLinkFacetNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTypedLinkFacetNamesOutcomeCallable CloudDirectoryClient::ListTypedLinkFacetNamesCallable(const ListTypedLinkFacetNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypedLinkFacetNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypedLinkFacetNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::ListTypedLinkFacetNamesAsync(const ListTypedLinkFacetNamesRequest& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTypedLinkFacetNamesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::ListTypedLinkFacetNamesAsyncHelper(const ListTypedLinkFacetNamesRequest& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTypedLinkFacetNames(request), context);
}

LookupPolicyOutcome CloudDirectoryClient::LookupPolicy(const LookupPolicyRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("LookupPolicy", "Required field: DirectoryArn, is not set");
    return LookupPolicyOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/policy/lookup");
  return LookupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LookupPolicyOutcomeCallable CloudDirectoryClient::LookupPolicyCallable(const LookupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LookupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LookupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::LookupPolicyAsync(const LookupPolicyRequest& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->LookupPolicyAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::LookupPolicyAsyncHelper(const LookupPolicyRequest& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LookupPolicy(request), context);
}

PublishSchemaOutcome CloudDirectoryClient::PublishSchema(const PublishSchemaRequest& request) const
{
  if (!request.DevelopmentSchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishSchema", "Required field: DevelopmentSchemaArn, is not set");
    return PublishSchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DevelopmentSchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/publish");
  return PublishSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PublishSchemaOutcomeCallable CloudDirectoryClient::PublishSchemaCallable(const PublishSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::PublishSchemaAsync(const PublishSchemaRequest& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PublishSchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::PublishSchemaAsyncHelper(const PublishSchemaRequest& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PublishSchema(request), context);
}

PutSchemaFromJsonOutcome CloudDirectoryClient::PutSchemaFromJson(const PutSchemaFromJsonRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSchemaFromJson", "Required field: SchemaArn, is not set");
    return PutSchemaFromJsonOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/json");
  return PutSchemaFromJsonOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSchemaFromJsonOutcomeCallable CloudDirectoryClient::PutSchemaFromJsonCallable(const PutSchemaFromJsonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSchemaFromJsonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSchemaFromJson(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::PutSchemaFromJsonAsync(const PutSchemaFromJsonRequest& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSchemaFromJsonAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::PutSchemaFromJsonAsyncHelper(const PutSchemaFromJsonRequest& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSchemaFromJson(request), context);
}

RemoveFacetFromObjectOutcome CloudDirectoryClient::RemoveFacetFromObject(const RemoveFacetFromObjectRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFacetFromObject", "Required field: DirectoryArn, is not set");
    return RemoveFacetFromObjectOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/facets/delete");
  return RemoveFacetFromObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveFacetFromObjectOutcomeCallable CloudDirectoryClient::RemoveFacetFromObjectCallable(const RemoveFacetFromObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFacetFromObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFacetFromObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::RemoveFacetFromObjectAsync(const RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveFacetFromObjectAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::RemoveFacetFromObjectAsyncHelper(const RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveFacetFromObject(request), context);
}

TagResourceOutcome CloudDirectoryClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/tags/add");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CloudDirectoryClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome CloudDirectoryClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/tags/remove");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CloudDirectoryClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateFacetOutcome CloudDirectoryClient::UpdateFacet(const UpdateFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFacet", "Required field: SchemaArn, is not set");
    return UpdateFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/facet");
  return UpdateFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFacetOutcomeCallable CloudDirectoryClient::UpdateFacetCallable(const UpdateFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpdateFacetAsync(const UpdateFacetRequest& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpdateFacetAsyncHelper(const UpdateFacetRequest& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFacet(request), context);
}

UpdateLinkAttributesOutcome CloudDirectoryClient::UpdateLinkAttributes(const UpdateLinkAttributesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLinkAttributes", "Required field: DirectoryArn, is not set");
    return UpdateLinkAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/attributes/update");
  return UpdateLinkAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLinkAttributesOutcomeCallable CloudDirectoryClient::UpdateLinkAttributesCallable(const UpdateLinkAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLinkAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLinkAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpdateLinkAttributesAsync(const UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLinkAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpdateLinkAttributesAsyncHelper(const UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLinkAttributes(request), context);
}

UpdateObjectAttributesOutcome CloudDirectoryClient::UpdateObjectAttributes(const UpdateObjectAttributesRequest& request) const
{
  if (!request.DirectoryArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateObjectAttributes", "Required field: DirectoryArn, is not set");
    return UpdateObjectAttributesOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/object/update");
  return UpdateObjectAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateObjectAttributesOutcomeCallable CloudDirectoryClient::UpdateObjectAttributesCallable(const UpdateObjectAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateObjectAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateObjectAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpdateObjectAttributesAsync(const UpdateObjectAttributesRequest& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateObjectAttributesAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpdateObjectAttributesAsyncHelper(const UpdateObjectAttributesRequest& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateObjectAttributes(request), context);
}

UpdateSchemaOutcome CloudDirectoryClient::UpdateSchema(const UpdateSchemaRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSchema", "Required field: SchemaArn, is not set");
    return UpdateSchemaOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/update");
  return UpdateSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSchemaOutcomeCallable CloudDirectoryClient::UpdateSchemaCallable(const UpdateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpdateSchemaAsync(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpdateSchemaAsyncHelper(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSchema(request), context);
}

UpdateTypedLinkFacetOutcome CloudDirectoryClient::UpdateTypedLinkFacet(const UpdateTypedLinkFacetRequest& request) const
{
  if (!request.SchemaArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTypedLinkFacet", "Required field: SchemaArn, is not set");
    return UpdateTypedLinkFacetOutcome(Aws::Client::AWSError<CloudDirectoryErrors>(CloudDirectoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SchemaArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/typedlink/facet");
  return UpdateTypedLinkFacetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTypedLinkFacetOutcomeCallable CloudDirectoryClient::UpdateTypedLinkFacetCallable(const UpdateTypedLinkFacetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTypedLinkFacetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTypedLinkFacet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpdateTypedLinkFacetAsync(const UpdateTypedLinkFacetRequest& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTypedLinkFacetAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpdateTypedLinkFacetAsyncHelper(const UpdateTypedLinkFacetRequest& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTypedLinkFacet(request), context);
}

UpgradeAppliedSchemaOutcome CloudDirectoryClient::UpgradeAppliedSchema(const UpgradeAppliedSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/upgradeapplied");
  return UpgradeAppliedSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpgradeAppliedSchemaOutcomeCallable CloudDirectoryClient::UpgradeAppliedSchemaCallable(const UpgradeAppliedSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradeAppliedSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradeAppliedSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpgradeAppliedSchemaAsync(const UpgradeAppliedSchemaRequest& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpgradeAppliedSchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpgradeAppliedSchemaAsyncHelper(const UpgradeAppliedSchemaRequest& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpgradeAppliedSchema(request), context);
}

UpgradePublishedSchemaOutcome CloudDirectoryClient::UpgradePublishedSchema(const UpgradePublishedSchemaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/amazonclouddirectory/2017-01-11/schema/upgradepublished");
  return UpgradePublishedSchemaOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpgradePublishedSchemaOutcomeCallable CloudDirectoryClient::UpgradePublishedSchemaCallable(const UpgradePublishedSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpgradePublishedSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpgradePublishedSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudDirectoryClient::UpgradePublishedSchemaAsync(const UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpgradePublishedSchemaAsyncHelper( request, handler, context ); } );
}

void CloudDirectoryClient::UpgradePublishedSchemaAsyncHelper(const UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpgradePublishedSchema(request), context);
}

