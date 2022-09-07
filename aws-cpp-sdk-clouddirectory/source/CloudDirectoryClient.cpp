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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  AWSClient::SetServiceClientName("CloudDirectory");
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

void CloudDirectoryClientAddFacetToObjectAsyncHelper(CloudDirectoryClient const * const clientThis, const AddFacetToObjectRequest& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddFacetToObject(request), context);
}

void CloudDirectoryClient::AddFacetToObjectAsync(const AddFacetToObjectRequest& request, const AddFacetToObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientAddFacetToObjectAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientApplySchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const ApplySchemaRequest& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ApplySchema(request), context);
}

void CloudDirectoryClient::ApplySchemaAsync(const ApplySchemaRequest& request, const ApplySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientApplySchemaAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientAttachObjectAsyncHelper(CloudDirectoryClient const * const clientThis, const AttachObjectRequest& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachObject(request), context);
}

void CloudDirectoryClient::AttachObjectAsync(const AttachObjectRequest& request, const AttachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientAttachObjectAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientAttachPolicyAsyncHelper(CloudDirectoryClient const * const clientThis, const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachPolicy(request), context);
}

void CloudDirectoryClient::AttachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientAttachPolicyAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientAttachToIndexAsyncHelper(CloudDirectoryClient const * const clientThis, const AttachToIndexRequest& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachToIndex(request), context);
}

void CloudDirectoryClient::AttachToIndexAsync(const AttachToIndexRequest& request, const AttachToIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientAttachToIndexAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientAttachTypedLinkAsyncHelper(CloudDirectoryClient const * const clientThis, const AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachTypedLink(request), context);
}

void CloudDirectoryClient::AttachTypedLinkAsync(const AttachTypedLinkRequest& request, const AttachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientAttachTypedLinkAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientBatchReadAsyncHelper(CloudDirectoryClient const * const clientThis, const BatchReadRequest& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchRead(request), context);
}

void CloudDirectoryClient::BatchReadAsync(const BatchReadRequest& request, const BatchReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientBatchReadAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientBatchWriteAsyncHelper(CloudDirectoryClient const * const clientThis, const BatchWriteRequest& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchWrite(request), context);
}

void CloudDirectoryClient::BatchWriteAsync(const BatchWriteRequest& request, const BatchWriteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientBatchWriteAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientCreateDirectoryAsyncHelper(CloudDirectoryClient const * const clientThis, const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDirectory(request), context);
}

void CloudDirectoryClient::CreateDirectoryAsync(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientCreateDirectoryAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientCreateFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const CreateFacetRequest& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFacet(request), context);
}

void CloudDirectoryClient::CreateFacetAsync(const CreateFacetRequest& request, const CreateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientCreateFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientCreateIndexAsyncHelper(CloudDirectoryClient const * const clientThis, const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIndex(request), context);
}

void CloudDirectoryClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientCreateIndexAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientCreateObjectAsyncHelper(CloudDirectoryClient const * const clientThis, const CreateObjectRequest& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateObject(request), context);
}

void CloudDirectoryClient::CreateObjectAsync(const CreateObjectRequest& request, const CreateObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientCreateObjectAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientCreateSchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSchema(request), context);
}

void CloudDirectoryClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientCreateSchemaAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientCreateTypedLinkFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const CreateTypedLinkFacetRequest& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTypedLinkFacet(request), context);
}

void CloudDirectoryClient::CreateTypedLinkFacetAsync(const CreateTypedLinkFacetRequest& request, const CreateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientCreateTypedLinkFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDeleteDirectoryAsyncHelper(CloudDirectoryClient const * const clientThis, const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDirectory(request), context);
}

void CloudDirectoryClient::DeleteDirectoryAsync(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDeleteDirectoryAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDeleteFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const DeleteFacetRequest& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFacet(request), context);
}

void CloudDirectoryClient::DeleteFacetAsync(const DeleteFacetRequest& request, const DeleteFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDeleteFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDeleteObjectAsyncHelper(CloudDirectoryClient const * const clientThis, const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteObject(request), context);
}

void CloudDirectoryClient::DeleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDeleteObjectAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDeleteSchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSchema(request), context);
}

void CloudDirectoryClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDeleteSchemaAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDeleteTypedLinkFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const DeleteTypedLinkFacetRequest& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTypedLinkFacet(request), context);
}

void CloudDirectoryClient::DeleteTypedLinkFacetAsync(const DeleteTypedLinkFacetRequest& request, const DeleteTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDeleteTypedLinkFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDetachFromIndexAsyncHelper(CloudDirectoryClient const * const clientThis, const DetachFromIndexRequest& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachFromIndex(request), context);
}

void CloudDirectoryClient::DetachFromIndexAsync(const DetachFromIndexRequest& request, const DetachFromIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDetachFromIndexAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDetachObjectAsyncHelper(CloudDirectoryClient const * const clientThis, const DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachObject(request), context);
}

void CloudDirectoryClient::DetachObjectAsync(const DetachObjectRequest& request, const DetachObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDetachObjectAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDetachPolicyAsyncHelper(CloudDirectoryClient const * const clientThis, const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachPolicy(request), context);
}

void CloudDirectoryClient::DetachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDetachPolicyAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDetachTypedLinkAsyncHelper(CloudDirectoryClient const * const clientThis, const DetachTypedLinkRequest& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachTypedLink(request), context);
}

void CloudDirectoryClient::DetachTypedLinkAsync(const DetachTypedLinkRequest& request, const DetachTypedLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDetachTypedLinkAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientDisableDirectoryAsyncHelper(CloudDirectoryClient const * const clientThis, const DisableDirectoryRequest& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableDirectory(request), context);
}

void CloudDirectoryClient::DisableDirectoryAsync(const DisableDirectoryRequest& request, const DisableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientDisableDirectoryAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientEnableDirectoryAsyncHelper(CloudDirectoryClient const * const clientThis, const EnableDirectoryRequest& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableDirectory(request), context);
}

void CloudDirectoryClient::EnableDirectoryAsync(const EnableDirectoryRequest& request, const EnableDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientEnableDirectoryAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetAppliedSchemaVersionAsyncHelper(CloudDirectoryClient const * const clientThis, const GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAppliedSchemaVersion(request), context);
}

void CloudDirectoryClient::GetAppliedSchemaVersionAsync(const GetAppliedSchemaVersionRequest& request, const GetAppliedSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetAppliedSchemaVersionAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetDirectoryAsyncHelper(CloudDirectoryClient const * const clientThis, const GetDirectoryRequest& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDirectory(request), context);
}

void CloudDirectoryClient::GetDirectoryAsync(const GetDirectoryRequest& request, const GetDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetDirectoryAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const GetFacetRequest& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFacet(request), context);
}

void CloudDirectoryClient::GetFacetAsync(const GetFacetRequest& request, const GetFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetLinkAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const GetLinkAttributesRequest& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLinkAttributes(request), context);
}

void CloudDirectoryClient::GetLinkAttributesAsync(const GetLinkAttributesRequest& request, const GetLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetLinkAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetObjectAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetObjectAttributes(request), context);
}

void CloudDirectoryClient::GetObjectAttributesAsync(const GetObjectAttributesRequest& request, const GetObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetObjectAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetObjectInformationAsyncHelper(CloudDirectoryClient const * const clientThis, const GetObjectInformationRequest& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetObjectInformation(request), context);
}

void CloudDirectoryClient::GetObjectInformationAsync(const GetObjectInformationRequest& request, const GetObjectInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetObjectInformationAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetSchemaAsJsonAsyncHelper(CloudDirectoryClient const * const clientThis, const GetSchemaAsJsonRequest& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSchemaAsJson(request), context);
}

void CloudDirectoryClient::GetSchemaAsJsonAsync(const GetSchemaAsJsonRequest& request, const GetSchemaAsJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetSchemaAsJsonAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientGetTypedLinkFacetInformationAsyncHelper(CloudDirectoryClient const * const clientThis, const GetTypedLinkFacetInformationRequest& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTypedLinkFacetInformation(request), context);
}

void CloudDirectoryClient::GetTypedLinkFacetInformationAsync(const GetTypedLinkFacetInformationRequest& request, const GetTypedLinkFacetInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientGetTypedLinkFacetInformationAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListAppliedSchemaArnsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppliedSchemaArns(request), context);
}

void CloudDirectoryClient::ListAppliedSchemaArnsAsync(const ListAppliedSchemaArnsRequest& request, const ListAppliedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListAppliedSchemaArnsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListAttachedIndicesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListAttachedIndicesRequest& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAttachedIndices(request), context);
}

void CloudDirectoryClient::ListAttachedIndicesAsync(const ListAttachedIndicesRequest& request, const ListAttachedIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListAttachedIndicesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListDevelopmentSchemaArnsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevelopmentSchemaArns(request), context);
}

void CloudDirectoryClient::ListDevelopmentSchemaArnsAsync(const ListDevelopmentSchemaArnsRequest& request, const ListDevelopmentSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListDevelopmentSchemaArnsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListDirectoriesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDirectories(request), context);
}

void CloudDirectoryClient::ListDirectoriesAsync(const ListDirectoriesRequest& request, const ListDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListDirectoriesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListFacetAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListFacetAttributesRequest& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFacetAttributes(request), context);
}

void CloudDirectoryClient::ListFacetAttributesAsync(const ListFacetAttributesRequest& request, const ListFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListFacetAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListFacetNamesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListFacetNamesRequest& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFacetNames(request), context);
}

void CloudDirectoryClient::ListFacetNamesAsync(const ListFacetNamesRequest& request, const ListFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListFacetNamesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListIncomingTypedLinksAsyncHelper(CloudDirectoryClient const * const clientThis, const ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIncomingTypedLinks(request), context);
}

void CloudDirectoryClient::ListIncomingTypedLinksAsync(const ListIncomingTypedLinksRequest& request, const ListIncomingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListIncomingTypedLinksAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListIndexAsyncHelper(CloudDirectoryClient const * const clientThis, const ListIndexRequest& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIndex(request), context);
}

void CloudDirectoryClient::ListIndexAsync(const ListIndexRequest& request, const ListIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListIndexAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListManagedSchemaArnsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListManagedSchemaArnsRequest& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListManagedSchemaArns(request), context);
}

void CloudDirectoryClient::ListManagedSchemaArnsAsync(const ListManagedSchemaArnsRequest& request, const ListManagedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListManagedSchemaArnsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListObjectAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListObjectAttributesRequest& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListObjectAttributes(request), context);
}

void CloudDirectoryClient::ListObjectAttributesAsync(const ListObjectAttributesRequest& request, const ListObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListObjectAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListObjectChildrenAsyncHelper(CloudDirectoryClient const * const clientThis, const ListObjectChildrenRequest& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListObjectChildren(request), context);
}

void CloudDirectoryClient::ListObjectChildrenAsync(const ListObjectChildrenRequest& request, const ListObjectChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListObjectChildrenAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListObjectParentPathsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListObjectParentPathsRequest& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListObjectParentPaths(request), context);
}

void CloudDirectoryClient::ListObjectParentPathsAsync(const ListObjectParentPathsRequest& request, const ListObjectParentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListObjectParentPathsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListObjectParentsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListObjectParentsRequest& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListObjectParents(request), context);
}

void CloudDirectoryClient::ListObjectParentsAsync(const ListObjectParentsRequest& request, const ListObjectParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListObjectParentsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListObjectPoliciesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListObjectPoliciesRequest& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListObjectPolicies(request), context);
}

void CloudDirectoryClient::ListObjectPoliciesAsync(const ListObjectPoliciesRequest& request, const ListObjectPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListObjectPoliciesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListOutgoingTypedLinksAsyncHelper(CloudDirectoryClient const * const clientThis, const ListOutgoingTypedLinksRequest& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOutgoingTypedLinks(request), context);
}

void CloudDirectoryClient::ListOutgoingTypedLinksAsync(const ListOutgoingTypedLinksRequest& request, const ListOutgoingTypedLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListOutgoingTypedLinksAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListPolicyAttachmentsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPolicyAttachments(request), context);
}

void CloudDirectoryClient::ListPolicyAttachmentsAsync(const ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListPolicyAttachmentsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListPublishedSchemaArnsAsyncHelper(CloudDirectoryClient const * const clientThis, const ListPublishedSchemaArnsRequest& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPublishedSchemaArns(request), context);
}

void CloudDirectoryClient::ListPublishedSchemaArnsAsync(const ListPublishedSchemaArnsRequest& request, const ListPublishedSchemaArnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListPublishedSchemaArnsAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListTagsForResourceAsyncHelper(CloudDirectoryClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CloudDirectoryClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListTypedLinkFacetAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListTypedLinkFacetAttributesRequest& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTypedLinkFacetAttributes(request), context);
}

void CloudDirectoryClient::ListTypedLinkFacetAttributesAsync(const ListTypedLinkFacetAttributesRequest& request, const ListTypedLinkFacetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListTypedLinkFacetAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientListTypedLinkFacetNamesAsyncHelper(CloudDirectoryClient const * const clientThis, const ListTypedLinkFacetNamesRequest& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTypedLinkFacetNames(request), context);
}

void CloudDirectoryClient::ListTypedLinkFacetNamesAsync(const ListTypedLinkFacetNamesRequest& request, const ListTypedLinkFacetNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientListTypedLinkFacetNamesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientLookupPolicyAsyncHelper(CloudDirectoryClient const * const clientThis, const LookupPolicyRequest& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->LookupPolicy(request), context);
}

void CloudDirectoryClient::LookupPolicyAsync(const LookupPolicyRequest& request, const LookupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientLookupPolicyAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientPublishSchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const PublishSchemaRequest& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PublishSchema(request), context);
}

void CloudDirectoryClient::PublishSchemaAsync(const PublishSchemaRequest& request, const PublishSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientPublishSchemaAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientPutSchemaFromJsonAsyncHelper(CloudDirectoryClient const * const clientThis, const PutSchemaFromJsonRequest& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutSchemaFromJson(request), context);
}

void CloudDirectoryClient::PutSchemaFromJsonAsync(const PutSchemaFromJsonRequest& request, const PutSchemaFromJsonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientPutSchemaFromJsonAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientRemoveFacetFromObjectAsyncHelper(CloudDirectoryClient const * const clientThis, const RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveFacetFromObject(request), context);
}

void CloudDirectoryClient::RemoveFacetFromObjectAsync(const RemoveFacetFromObjectRequest& request, const RemoveFacetFromObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientRemoveFacetFromObjectAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientTagResourceAsyncHelper(CloudDirectoryClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CloudDirectoryClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUntagResourceAsyncHelper(CloudDirectoryClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CloudDirectoryClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpdateFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const UpdateFacetRequest& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFacet(request), context);
}

void CloudDirectoryClient::UpdateFacetAsync(const UpdateFacetRequest& request, const UpdateFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpdateFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpdateLinkAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLinkAttributes(request), context);
}

void CloudDirectoryClient::UpdateLinkAttributesAsync(const UpdateLinkAttributesRequest& request, const UpdateLinkAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpdateLinkAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpdateObjectAttributesAsyncHelper(CloudDirectoryClient const * const clientThis, const UpdateObjectAttributesRequest& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateObjectAttributes(request), context);
}

void CloudDirectoryClient::UpdateObjectAttributesAsync(const UpdateObjectAttributesRequest& request, const UpdateObjectAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpdateObjectAttributesAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpdateSchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSchema(request), context);
}

void CloudDirectoryClient::UpdateSchemaAsync(const UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpdateSchemaAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpdateTypedLinkFacetAsyncHelper(CloudDirectoryClient const * const clientThis, const UpdateTypedLinkFacetRequest& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTypedLinkFacet(request), context);
}

void CloudDirectoryClient::UpdateTypedLinkFacetAsync(const UpdateTypedLinkFacetRequest& request, const UpdateTypedLinkFacetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpdateTypedLinkFacetAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpgradeAppliedSchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const UpgradeAppliedSchemaRequest& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpgradeAppliedSchema(request), context);
}

void CloudDirectoryClient::UpgradeAppliedSchemaAsync(const UpgradeAppliedSchemaRequest& request, const UpgradeAppliedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpgradeAppliedSchemaAsyncHelper( this, request, handler, context ); } );
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

void CloudDirectoryClientUpgradePublishedSchemaAsyncHelper(CloudDirectoryClient const * const clientThis, const UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpgradePublishedSchema(request), context);
}

void CloudDirectoryClient::UpgradePublishedSchemaAsync(const UpgradePublishedSchemaRequest& request, const UpgradePublishedSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudDirectoryClientUpgradePublishedSchemaAsyncHelper( this, request, handler, context ); } );
}

