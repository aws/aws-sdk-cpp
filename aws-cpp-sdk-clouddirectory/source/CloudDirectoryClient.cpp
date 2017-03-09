/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/clouddirectory/CloudDirectoryClient.h>
#include <aws/clouddirectory/CloudDirectoryEndpoint.h>
#include <aws/clouddirectory/CloudDirectoryErrorMarshaller.h>
#include <aws/clouddirectory/model/AddFacetToObjectRequest.h>
#include <aws/clouddirectory/model/ApplySchemaRequest.h>
#include <aws/clouddirectory/model/AttachObjectRequest.h>
#include <aws/clouddirectory/model/AttachPolicyRequest.h>
#include <aws/clouddirectory/model/AttachToIndexRequest.h>
#include <aws/clouddirectory/model/BatchReadRequest.h>
#include <aws/clouddirectory/model/BatchWriteRequest.h>
#include <aws/clouddirectory/model/CreateDirectoryRequest.h>
#include <aws/clouddirectory/model/CreateFacetRequest.h>
#include <aws/clouddirectory/model/CreateIndexRequest.h>
#include <aws/clouddirectory/model/CreateObjectRequest.h>
#include <aws/clouddirectory/model/CreateSchemaRequest.h>
#include <aws/clouddirectory/model/DeleteDirectoryRequest.h>
#include <aws/clouddirectory/model/DeleteFacetRequest.h>
#include <aws/clouddirectory/model/DeleteObjectRequest.h>
#include <aws/clouddirectory/model/DeleteSchemaRequest.h>
#include <aws/clouddirectory/model/DetachFromIndexRequest.h>
#include <aws/clouddirectory/model/DetachObjectRequest.h>
#include <aws/clouddirectory/model/DetachPolicyRequest.h>
#include <aws/clouddirectory/model/DisableDirectoryRequest.h>
#include <aws/clouddirectory/model/EnableDirectoryRequest.h>
#include <aws/clouddirectory/model/GetDirectoryRequest.h>
#include <aws/clouddirectory/model/GetFacetRequest.h>
#include <aws/clouddirectory/model/GetObjectInformationRequest.h>
#include <aws/clouddirectory/model/GetSchemaAsJsonRequest.h>
#include <aws/clouddirectory/model/ListAppliedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListAttachedIndicesRequest.h>
#include <aws/clouddirectory/model/ListDevelopmentSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListDirectoriesRequest.h>
#include <aws/clouddirectory/model/ListFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListFacetNamesRequest.h>
#include <aws/clouddirectory/model/ListIndexRequest.h>
#include <aws/clouddirectory/model/ListObjectAttributesRequest.h>
#include <aws/clouddirectory/model/ListObjectChildrenRequest.h>
#include <aws/clouddirectory/model/ListObjectParentPathsRequest.h>
#include <aws/clouddirectory/model/ListObjectParentsRequest.h>
#include <aws/clouddirectory/model/ListObjectPoliciesRequest.h>
#include <aws/clouddirectory/model/ListPolicyAttachmentsRequest.h>
#include <aws/clouddirectory/model/ListPublishedSchemaArnsRequest.h>
#include <aws/clouddirectory/model/ListTagsForResourceRequest.h>
#include <aws/clouddirectory/model/LookupPolicyRequest.h>
#include <aws/clouddirectory/model/PublishSchemaRequest.h>
#include <aws/clouddirectory/model/PutSchemaFromJsonRequest.h>
#include <aws/clouddirectory/model/RemoveFacetFromObjectRequest.h>
#include <aws/clouddirectory/model/TagResourceRequest.h>
#include <aws/clouddirectory/model/UntagResourceRequest.h>
#include <aws/clouddirectory/model/UpdateFacetRequest.h>
#include <aws/clouddirectory/model/UpdateObjectAttributesRequest.h>
#include <aws/clouddirectory/model/UpdateSchemaRequest.h>

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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::CloudDirectoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudDirectoryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudDirectoryClient::~CloudDirectoryClient()
{
}

void CloudDirectoryClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CloudDirectoryEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddFacetToObjectOutcome CloudDirectoryClient::AddFacetToObject(const AddFacetToObjectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/facets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return AddFacetToObjectOutcome(AddFacetToObjectResult(outcome.GetResult()));
  }
  else
  {
    return AddFacetToObjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/apply";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return ApplySchemaOutcome(ApplySchemaResult(outcome.GetResult()));
  }
  else
  {
    return ApplySchemaOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/attach";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return AttachObjectOutcome(AttachObjectResult(outcome.GetResult()));
  }
  else
  {
    return AttachObjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/policy/attach";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return AttachPolicyOutcome(AttachPolicyResult(outcome.GetResult()));
  }
  else
  {
    return AttachPolicyOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/index/attach";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return AttachToIndexOutcome(AttachToIndexResult(outcome.GetResult()));
  }
  else
  {
    return AttachToIndexOutcome(outcome.GetError());
  }
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

BatchReadOutcome CloudDirectoryClient::BatchRead(const BatchReadRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/batchread";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchReadOutcome(BatchReadResult(outcome.GetResult()));
  }
  else
  {
    return BatchReadOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/batchwrite";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return BatchWriteOutcome(BatchWriteResult(outcome.GetResult()));
  }
  else
  {
    return BatchWriteOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/directory/create";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateDirectoryOutcome(CreateDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectoryOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/facet/create";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateFacetOutcome(CreateFacetResult(outcome.GetResult()));
  }
  else
  {
    return CreateFacetOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/index";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateIndexOutcome(CreateIndexResult(outcome.GetResult()));
  }
  else
  {
    return CreateIndexOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateObjectOutcome(CreateObjectResult(outcome.GetResult()));
  }
  else
  {
    return CreateObjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/create";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return CreateSchemaOutcome(CreateSchemaResult(outcome.GetResult()));
  }
  else
  {
    return CreateSchemaOutcome(outcome.GetError());
  }
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

DeleteDirectoryOutcome CloudDirectoryClient::DeleteDirectory(const DeleteDirectoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/directory";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DeleteDirectoryOutcome(DeleteDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectoryOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/facet/delete";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DeleteFacetOutcome(DeleteFacetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFacetOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/delete";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DeleteObjectOutcome(DeleteObjectResult(outcome.GetResult()));
  }
  else
  {
    return DeleteObjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DeleteSchemaOutcome(DeleteSchemaResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSchemaOutcome(outcome.GetError());
  }
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

DetachFromIndexOutcome CloudDirectoryClient::DetachFromIndex(const DetachFromIndexRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/index/detach";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DetachFromIndexOutcome(DetachFromIndexResult(outcome.GetResult()));
  }
  else
  {
    return DetachFromIndexOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/detach";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DetachObjectOutcome(DetachObjectResult(outcome.GetResult()));
  }
  else
  {
    return DetachObjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/policy/detach";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DetachPolicyOutcome(DetachPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DetachPolicyOutcome(outcome.GetError());
  }
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

DisableDirectoryOutcome CloudDirectoryClient::DisableDirectory(const DisableDirectoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/directory/disable";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return DisableDirectoryOutcome(DisableDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return DisableDirectoryOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/directory/enable";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return EnableDirectoryOutcome(EnableDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return EnableDirectoryOutcome(outcome.GetError());
  }
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

GetDirectoryOutcome CloudDirectoryClient::GetDirectory(const GetDirectoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/directory/get";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDirectoryOutcome(GetDirectoryResult(outcome.GetResult()));
  }
  else
  {
    return GetDirectoryOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/facet";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetFacetOutcome(GetFacetResult(outcome.GetResult()));
  }
  else
  {
    return GetFacetOutcome(outcome.GetError());
  }
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

GetObjectInformationOutcome CloudDirectoryClient::GetObjectInformation(const GetObjectInformationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/information";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetObjectInformationOutcome(GetObjectInformationResult(outcome.GetResult()));
  }
  else
  {
    return GetObjectInformationOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/json";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSchemaAsJsonOutcome(GetSchemaAsJsonResult(outcome.GetResult()));
  }
  else
  {
    return GetSchemaAsJsonOutcome(outcome.GetError());
  }
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

ListAppliedSchemaArnsOutcome CloudDirectoryClient::ListAppliedSchemaArns(const ListAppliedSchemaArnsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/applied";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAppliedSchemaArnsOutcome(ListAppliedSchemaArnsResult(outcome.GetResult()));
  }
  else
  {
    return ListAppliedSchemaArnsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/indices";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAttachedIndicesOutcome(ListAttachedIndicesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedIndicesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/development";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDevelopmentSchemaArnsOutcome(ListDevelopmentSchemaArnsResult(outcome.GetResult()));
  }
  else
  {
    return ListDevelopmentSchemaArnsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/directory/list";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDirectoriesOutcome(ListDirectoriesResult(outcome.GetResult()));
  }
  else
  {
    return ListDirectoriesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/facet/attributes";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListFacetAttributesOutcome(ListFacetAttributesResult(outcome.GetResult()));
  }
  else
  {
    return ListFacetAttributesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/facet/list";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListFacetNamesOutcome(ListFacetNamesResult(outcome.GetResult()));
  }
  else
  {
    return ListFacetNamesOutcome(outcome.GetError());
  }
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

ListIndexOutcome CloudDirectoryClient::ListIndex(const ListIndexRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/index/targets";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListIndexOutcome(ListIndexResult(outcome.GetResult()));
  }
  else
  {
    return ListIndexOutcome(outcome.GetError());
  }
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

ListObjectAttributesOutcome CloudDirectoryClient::ListObjectAttributes(const ListObjectAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/attributes";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListObjectAttributesOutcome(ListObjectAttributesResult(outcome.GetResult()));
  }
  else
  {
    return ListObjectAttributesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/children";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListObjectChildrenOutcome(ListObjectChildrenResult(outcome.GetResult()));
  }
  else
  {
    return ListObjectChildrenOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/parentpaths";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListObjectParentPathsOutcome(ListObjectParentPathsResult(outcome.GetResult()));
  }
  else
  {
    return ListObjectParentPathsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/parent";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListObjectParentsOutcome(ListObjectParentsResult(outcome.GetResult()));
  }
  else
  {
    return ListObjectParentsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/policy";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListObjectPoliciesOutcome(ListObjectPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListObjectPoliciesOutcome(outcome.GetError());
  }
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

ListPolicyAttachmentsOutcome CloudDirectoryClient::ListPolicyAttachments(const ListPolicyAttachmentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/policy/attachment";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPolicyAttachmentsOutcome(ListPolicyAttachmentsResult(outcome.GetResult()));
  }
  else
  {
    return ListPolicyAttachmentsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/published";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPublishedSchemaArnsOutcome(ListPublishedSchemaArnsResult(outcome.GetResult()));
  }
  else
  {
    return ListPublishedSchemaArnsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/tags";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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

LookupPolicyOutcome CloudDirectoryClient::LookupPolicy(const LookupPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/policy/lookup";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return LookupPolicyOutcome(LookupPolicyResult(outcome.GetResult()));
  }
  else
  {
    return LookupPolicyOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/publish";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return PublishSchemaOutcome(PublishSchemaResult(outcome.GetResult()));
  }
  else
  {
    return PublishSchemaOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/json";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return PutSchemaFromJsonOutcome(PutSchemaFromJsonResult(outcome.GetResult()));
  }
  else
  {
    return PutSchemaFromJsonOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/facets/delete";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return RemoveFacetFromObjectOutcome(RemoveFacetFromObjectResult(outcome.GetResult()));
  }
  else
  {
    return RemoveFacetFromObjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/tags/add";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/tags/remove";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/facet";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFacetOutcome(UpdateFacetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFacetOutcome(outcome.GetError());
  }
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

UpdateObjectAttributesOutcome CloudDirectoryClient::UpdateObjectAttributes(const UpdateObjectAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/object/update";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateObjectAttributesOutcome(UpdateObjectAttributesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateObjectAttributesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << m_uri << "/amazonclouddirectory/2017-01-11/schema/update";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateSchemaOutcome(UpdateSchemaResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSchemaOutcome(outcome.GetError());
  }
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

