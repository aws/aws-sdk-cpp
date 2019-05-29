/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/iotthingsgraph/IoTThingsGraphClient.h>
#include <aws/iotthingsgraph/IoTThingsGraphEndpoint.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrorMarshaller.h>
#include <aws/iotthingsgraph/model/AssociateEntityToThingRequest.h>
#include <aws/iotthingsgraph/model/CreateFlowTemplateRequest.h>
#include <aws/iotthingsgraph/model/CreateSystemInstanceRequest.h>
#include <aws/iotthingsgraph/model/CreateSystemTemplateRequest.h>
#include <aws/iotthingsgraph/model/DeleteFlowTemplateRequest.h>
#include <aws/iotthingsgraph/model/DeleteNamespaceRequest.h>
#include <aws/iotthingsgraph/model/DeleteSystemInstanceRequest.h>
#include <aws/iotthingsgraph/model/DeleteSystemTemplateRequest.h>
#include <aws/iotthingsgraph/model/DeploySystemInstanceRequest.h>
#include <aws/iotthingsgraph/model/DeprecateFlowTemplateRequest.h>
#include <aws/iotthingsgraph/model/DeprecateSystemTemplateRequest.h>
#include <aws/iotthingsgraph/model/DescribeNamespaceRequest.h>
#include <aws/iotthingsgraph/model/DissociateEntityFromThingRequest.h>
#include <aws/iotthingsgraph/model/GetEntitiesRequest.h>
#include <aws/iotthingsgraph/model/GetFlowTemplateRequest.h>
#include <aws/iotthingsgraph/model/GetFlowTemplateRevisionsRequest.h>
#include <aws/iotthingsgraph/model/GetNamespaceDeletionStatusRequest.h>
#include <aws/iotthingsgraph/model/GetSystemInstanceRequest.h>
#include <aws/iotthingsgraph/model/GetSystemTemplateRequest.h>
#include <aws/iotthingsgraph/model/GetSystemTemplateRevisionsRequest.h>
#include <aws/iotthingsgraph/model/GetUploadStatusRequest.h>
#include <aws/iotthingsgraph/model/ListFlowExecutionMessagesRequest.h>
#include <aws/iotthingsgraph/model/ListTagsForResourceRequest.h>
#include <aws/iotthingsgraph/model/SearchEntitiesRequest.h>
#include <aws/iotthingsgraph/model/SearchFlowExecutionsRequest.h>
#include <aws/iotthingsgraph/model/SearchFlowTemplatesRequest.h>
#include <aws/iotthingsgraph/model/SearchSystemInstancesRequest.h>
#include <aws/iotthingsgraph/model/SearchSystemTemplatesRequest.h>
#include <aws/iotthingsgraph/model/SearchThingsRequest.h>
#include <aws/iotthingsgraph/model/TagResourceRequest.h>
#include <aws/iotthingsgraph/model/UndeploySystemInstanceRequest.h>
#include <aws/iotthingsgraph/model/UntagResourceRequest.h>
#include <aws/iotthingsgraph/model/UpdateFlowTemplateRequest.h>
#include <aws/iotthingsgraph/model/UpdateSystemTemplateRequest.h>
#include <aws/iotthingsgraph/model/UploadEntityDefinitionsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTThingsGraph;
using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iotthingsgraph";
static const char* ALLOCATION_TAG = "IoTThingsGraphClient";


IoTThingsGraphClient::IoTThingsGraphClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTThingsGraphClient::IoTThingsGraphClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTThingsGraphClient::IoTThingsGraphClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTThingsGraphClient::~IoTThingsGraphClient()
{
}

void IoTThingsGraphClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTThingsGraphEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTThingsGraphClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateEntityToThingOutcome IoTThingsGraphClient::AssociateEntityToThing(const AssociateEntityToThingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateEntityToThingOutcome(AssociateEntityToThingResult(outcome.GetResult()));
  }
  else
  {
    return AssociateEntityToThingOutcome(outcome.GetError());
  }
}

AssociateEntityToThingOutcomeCallable IoTThingsGraphClient::AssociateEntityToThingCallable(const AssociateEntityToThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateEntityToThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateEntityToThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::AssociateEntityToThingAsync(const AssociateEntityToThingRequest& request, const AssociateEntityToThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateEntityToThingAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::AssociateEntityToThingAsyncHelper(const AssociateEntityToThingRequest& request, const AssociateEntityToThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateEntityToThing(request), context);
}

CreateFlowTemplateOutcome IoTThingsGraphClient::CreateFlowTemplate(const CreateFlowTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFlowTemplateOutcome(CreateFlowTemplateResult(outcome.GetResult()));
  }
  else
  {
    return CreateFlowTemplateOutcome(outcome.GetError());
  }
}

CreateFlowTemplateOutcomeCallable IoTThingsGraphClient::CreateFlowTemplateCallable(const CreateFlowTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlowTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::CreateFlowTemplateAsync(const CreateFlowTemplateRequest& request, const CreateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFlowTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::CreateFlowTemplateAsyncHelper(const CreateFlowTemplateRequest& request, const CreateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFlowTemplate(request), context);
}

CreateSystemInstanceOutcome IoTThingsGraphClient::CreateSystemInstance(const CreateSystemInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSystemInstanceOutcome(CreateSystemInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateSystemInstanceOutcome(outcome.GetError());
  }
}

CreateSystemInstanceOutcomeCallable IoTThingsGraphClient::CreateSystemInstanceCallable(const CreateSystemInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSystemInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSystemInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::CreateSystemInstanceAsync(const CreateSystemInstanceRequest& request, const CreateSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSystemInstanceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::CreateSystemInstanceAsyncHelper(const CreateSystemInstanceRequest& request, const CreateSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSystemInstance(request), context);
}

CreateSystemTemplateOutcome IoTThingsGraphClient::CreateSystemTemplate(const CreateSystemTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSystemTemplateOutcome(CreateSystemTemplateResult(outcome.GetResult()));
  }
  else
  {
    return CreateSystemTemplateOutcome(outcome.GetError());
  }
}

CreateSystemTemplateOutcomeCallable IoTThingsGraphClient::CreateSystemTemplateCallable(const CreateSystemTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSystemTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSystemTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::CreateSystemTemplateAsync(const CreateSystemTemplateRequest& request, const CreateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSystemTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::CreateSystemTemplateAsyncHelper(const CreateSystemTemplateRequest& request, const CreateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSystemTemplate(request), context);
}

DeleteFlowTemplateOutcome IoTThingsGraphClient::DeleteFlowTemplate(const DeleteFlowTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFlowTemplateOutcome(DeleteFlowTemplateResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFlowTemplateOutcome(outcome.GetError());
  }
}

DeleteFlowTemplateOutcomeCallable IoTThingsGraphClient::DeleteFlowTemplateCallable(const DeleteFlowTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlowTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeleteFlowTemplateAsync(const DeleteFlowTemplateRequest& request, const DeleteFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFlowTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeleteFlowTemplateAsyncHelper(const DeleteFlowTemplateRequest& request, const DeleteFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFlowTemplate(request), context);
}

DeleteNamespaceOutcome IoTThingsGraphClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNamespaceOutcome(outcome.GetError());
  }
}

DeleteNamespaceOutcomeCallable IoTThingsGraphClient::DeleteNamespaceCallable(const DeleteNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNamespaceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeleteNamespaceAsyncHelper(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNamespace(request), context);
}

DeleteSystemInstanceOutcome IoTThingsGraphClient::DeleteSystemInstance(const DeleteSystemInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSystemInstanceOutcome(DeleteSystemInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSystemInstanceOutcome(outcome.GetError());
  }
}

DeleteSystemInstanceOutcomeCallable IoTThingsGraphClient::DeleteSystemInstanceCallable(const DeleteSystemInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSystemInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSystemInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeleteSystemInstanceAsync(const DeleteSystemInstanceRequest& request, const DeleteSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSystemInstanceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeleteSystemInstanceAsyncHelper(const DeleteSystemInstanceRequest& request, const DeleteSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSystemInstance(request), context);
}

DeleteSystemTemplateOutcome IoTThingsGraphClient::DeleteSystemTemplate(const DeleteSystemTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSystemTemplateOutcome(DeleteSystemTemplateResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSystemTemplateOutcome(outcome.GetError());
  }
}

DeleteSystemTemplateOutcomeCallable IoTThingsGraphClient::DeleteSystemTemplateCallable(const DeleteSystemTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSystemTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSystemTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeleteSystemTemplateAsync(const DeleteSystemTemplateRequest& request, const DeleteSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSystemTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeleteSystemTemplateAsyncHelper(const DeleteSystemTemplateRequest& request, const DeleteSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSystemTemplate(request), context);
}

DeploySystemInstanceOutcome IoTThingsGraphClient::DeploySystemInstance(const DeploySystemInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeploySystemInstanceOutcome(DeploySystemInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeploySystemInstanceOutcome(outcome.GetError());
  }
}

DeploySystemInstanceOutcomeCallable IoTThingsGraphClient::DeploySystemInstanceCallable(const DeploySystemInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeploySystemInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeploySystemInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeploySystemInstanceAsync(const DeploySystemInstanceRequest& request, const DeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeploySystemInstanceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeploySystemInstanceAsyncHelper(const DeploySystemInstanceRequest& request, const DeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeploySystemInstance(request), context);
}

DeprecateFlowTemplateOutcome IoTThingsGraphClient::DeprecateFlowTemplate(const DeprecateFlowTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeprecateFlowTemplateOutcome(DeprecateFlowTemplateResult(outcome.GetResult()));
  }
  else
  {
    return DeprecateFlowTemplateOutcome(outcome.GetError());
  }
}

DeprecateFlowTemplateOutcomeCallable IoTThingsGraphClient::DeprecateFlowTemplateCallable(const DeprecateFlowTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateFlowTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateFlowTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeprecateFlowTemplateAsync(const DeprecateFlowTemplateRequest& request, const DeprecateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprecateFlowTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeprecateFlowTemplateAsyncHelper(const DeprecateFlowTemplateRequest& request, const DeprecateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateFlowTemplate(request), context);
}

DeprecateSystemTemplateOutcome IoTThingsGraphClient::DeprecateSystemTemplate(const DeprecateSystemTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeprecateSystemTemplateOutcome(DeprecateSystemTemplateResult(outcome.GetResult()));
  }
  else
  {
    return DeprecateSystemTemplateOutcome(outcome.GetError());
  }
}

DeprecateSystemTemplateOutcomeCallable IoTThingsGraphClient::DeprecateSystemTemplateCallable(const DeprecateSystemTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateSystemTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateSystemTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DeprecateSystemTemplateAsync(const DeprecateSystemTemplateRequest& request, const DeprecateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprecateSystemTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DeprecateSystemTemplateAsyncHelper(const DeprecateSystemTemplateRequest& request, const DeprecateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateSystemTemplate(request), context);
}

DescribeNamespaceOutcome IoTThingsGraphClient::DescribeNamespace(const DescribeNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeNamespaceOutcome(DescribeNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNamespaceOutcome(outcome.GetError());
  }
}

DescribeNamespaceOutcomeCallable IoTThingsGraphClient::DescribeNamespaceCallable(const DescribeNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DescribeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNamespaceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DescribeNamespaceAsyncHelper(const DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNamespace(request), context);
}

DissociateEntityFromThingOutcome IoTThingsGraphClient::DissociateEntityFromThing(const DissociateEntityFromThingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DissociateEntityFromThingOutcome(DissociateEntityFromThingResult(outcome.GetResult()));
  }
  else
  {
    return DissociateEntityFromThingOutcome(outcome.GetError());
  }
}

DissociateEntityFromThingOutcomeCallable IoTThingsGraphClient::DissociateEntityFromThingCallable(const DissociateEntityFromThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DissociateEntityFromThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DissociateEntityFromThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::DissociateEntityFromThingAsync(const DissociateEntityFromThingRequest& request, const DissociateEntityFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DissociateEntityFromThingAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::DissociateEntityFromThingAsyncHelper(const DissociateEntityFromThingRequest& request, const DissociateEntityFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DissociateEntityFromThing(request), context);
}

GetEntitiesOutcome IoTThingsGraphClient::GetEntities(const GetEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEntitiesOutcome(GetEntitiesResult(outcome.GetResult()));
  }
  else
  {
    return GetEntitiesOutcome(outcome.GetError());
  }
}

GetEntitiesOutcomeCallable IoTThingsGraphClient::GetEntitiesCallable(const GetEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetEntitiesAsync(const GetEntitiesRequest& request, const GetEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEntitiesAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetEntitiesAsyncHelper(const GetEntitiesRequest& request, const GetEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEntities(request), context);
}

GetFlowTemplateOutcome IoTThingsGraphClient::GetFlowTemplate(const GetFlowTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFlowTemplateOutcome(GetFlowTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GetFlowTemplateOutcome(outcome.GetError());
  }
}

GetFlowTemplateOutcomeCallable IoTThingsGraphClient::GetFlowTemplateCallable(const GetFlowTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFlowTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFlowTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetFlowTemplateAsync(const GetFlowTemplateRequest& request, const GetFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFlowTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetFlowTemplateAsyncHelper(const GetFlowTemplateRequest& request, const GetFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFlowTemplate(request), context);
}

GetFlowTemplateRevisionsOutcome IoTThingsGraphClient::GetFlowTemplateRevisions(const GetFlowTemplateRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFlowTemplateRevisionsOutcome(GetFlowTemplateRevisionsResult(outcome.GetResult()));
  }
  else
  {
    return GetFlowTemplateRevisionsOutcome(outcome.GetError());
  }
}

GetFlowTemplateRevisionsOutcomeCallable IoTThingsGraphClient::GetFlowTemplateRevisionsCallable(const GetFlowTemplateRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFlowTemplateRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFlowTemplateRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetFlowTemplateRevisionsAsync(const GetFlowTemplateRevisionsRequest& request, const GetFlowTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFlowTemplateRevisionsAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetFlowTemplateRevisionsAsyncHelper(const GetFlowTemplateRevisionsRequest& request, const GetFlowTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFlowTemplateRevisions(request), context);
}

GetNamespaceDeletionStatusOutcome IoTThingsGraphClient::GetNamespaceDeletionStatus(const GetNamespaceDeletionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNamespaceDeletionStatusOutcome(GetNamespaceDeletionStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetNamespaceDeletionStatusOutcome(outcome.GetError());
  }
}

GetNamespaceDeletionStatusOutcomeCallable IoTThingsGraphClient::GetNamespaceDeletionStatusCallable(const GetNamespaceDeletionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamespaceDeletionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamespaceDeletionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetNamespaceDeletionStatusAsync(const GetNamespaceDeletionStatusRequest& request, const GetNamespaceDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNamespaceDeletionStatusAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetNamespaceDeletionStatusAsyncHelper(const GetNamespaceDeletionStatusRequest& request, const GetNamespaceDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNamespaceDeletionStatus(request), context);
}

GetSystemInstanceOutcome IoTThingsGraphClient::GetSystemInstance(const GetSystemInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSystemInstanceOutcome(GetSystemInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetSystemInstanceOutcome(outcome.GetError());
  }
}

GetSystemInstanceOutcomeCallable IoTThingsGraphClient::GetSystemInstanceCallable(const GetSystemInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSystemInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSystemInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetSystemInstanceAsync(const GetSystemInstanceRequest& request, const GetSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSystemInstanceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetSystemInstanceAsyncHelper(const GetSystemInstanceRequest& request, const GetSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSystemInstance(request), context);
}

GetSystemTemplateOutcome IoTThingsGraphClient::GetSystemTemplate(const GetSystemTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSystemTemplateOutcome(GetSystemTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GetSystemTemplateOutcome(outcome.GetError());
  }
}

GetSystemTemplateOutcomeCallable IoTThingsGraphClient::GetSystemTemplateCallable(const GetSystemTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSystemTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSystemTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetSystemTemplateAsync(const GetSystemTemplateRequest& request, const GetSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSystemTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetSystemTemplateAsyncHelper(const GetSystemTemplateRequest& request, const GetSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSystemTemplate(request), context);
}

GetSystemTemplateRevisionsOutcome IoTThingsGraphClient::GetSystemTemplateRevisions(const GetSystemTemplateRevisionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSystemTemplateRevisionsOutcome(GetSystemTemplateRevisionsResult(outcome.GetResult()));
  }
  else
  {
    return GetSystemTemplateRevisionsOutcome(outcome.GetError());
  }
}

GetSystemTemplateRevisionsOutcomeCallable IoTThingsGraphClient::GetSystemTemplateRevisionsCallable(const GetSystemTemplateRevisionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSystemTemplateRevisionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSystemTemplateRevisions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetSystemTemplateRevisionsAsync(const GetSystemTemplateRevisionsRequest& request, const GetSystemTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSystemTemplateRevisionsAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetSystemTemplateRevisionsAsyncHelper(const GetSystemTemplateRevisionsRequest& request, const GetSystemTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSystemTemplateRevisions(request), context);
}

GetUploadStatusOutcome IoTThingsGraphClient::GetUploadStatus(const GetUploadStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUploadStatusOutcome(GetUploadStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetUploadStatusOutcome(outcome.GetError());
  }
}

GetUploadStatusOutcomeCallable IoTThingsGraphClient::GetUploadStatusCallable(const GetUploadStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUploadStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUploadStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::GetUploadStatusAsync(const GetUploadStatusRequest& request, const GetUploadStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUploadStatusAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::GetUploadStatusAsyncHelper(const GetUploadStatusRequest& request, const GetUploadStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUploadStatus(request), context);
}

ListFlowExecutionMessagesOutcome IoTThingsGraphClient::ListFlowExecutionMessages(const ListFlowExecutionMessagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFlowExecutionMessagesOutcome(ListFlowExecutionMessagesResult(outcome.GetResult()));
  }
  else
  {
    return ListFlowExecutionMessagesOutcome(outcome.GetError());
  }
}

ListFlowExecutionMessagesOutcomeCallable IoTThingsGraphClient::ListFlowExecutionMessagesCallable(const ListFlowExecutionMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowExecutionMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlowExecutionMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::ListFlowExecutionMessagesAsync(const ListFlowExecutionMessagesRequest& request, const ListFlowExecutionMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFlowExecutionMessagesAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::ListFlowExecutionMessagesAsyncHelper(const ListFlowExecutionMessagesRequest& request, const ListFlowExecutionMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFlowExecutionMessages(request), context);
}

ListTagsForResourceOutcome IoTThingsGraphClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable IoTThingsGraphClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

SearchEntitiesOutcome IoTThingsGraphClient::SearchEntities(const SearchEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchEntitiesOutcome(SearchEntitiesResult(outcome.GetResult()));
  }
  else
  {
    return SearchEntitiesOutcome(outcome.GetError());
  }
}

SearchEntitiesOutcomeCallable IoTThingsGraphClient::SearchEntitiesCallable(const SearchEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::SearchEntitiesAsync(const SearchEntitiesRequest& request, const SearchEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchEntitiesAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::SearchEntitiesAsyncHelper(const SearchEntitiesRequest& request, const SearchEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchEntities(request), context);
}

SearchFlowExecutionsOutcome IoTThingsGraphClient::SearchFlowExecutions(const SearchFlowExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchFlowExecutionsOutcome(SearchFlowExecutionsResult(outcome.GetResult()));
  }
  else
  {
    return SearchFlowExecutionsOutcome(outcome.GetError());
  }
}

SearchFlowExecutionsOutcomeCallable IoTThingsGraphClient::SearchFlowExecutionsCallable(const SearchFlowExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFlowExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFlowExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::SearchFlowExecutionsAsync(const SearchFlowExecutionsRequest& request, const SearchFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchFlowExecutionsAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::SearchFlowExecutionsAsyncHelper(const SearchFlowExecutionsRequest& request, const SearchFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchFlowExecutions(request), context);
}

SearchFlowTemplatesOutcome IoTThingsGraphClient::SearchFlowTemplates(const SearchFlowTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchFlowTemplatesOutcome(SearchFlowTemplatesResult(outcome.GetResult()));
  }
  else
  {
    return SearchFlowTemplatesOutcome(outcome.GetError());
  }
}

SearchFlowTemplatesOutcomeCallable IoTThingsGraphClient::SearchFlowTemplatesCallable(const SearchFlowTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchFlowTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchFlowTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::SearchFlowTemplatesAsync(const SearchFlowTemplatesRequest& request, const SearchFlowTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchFlowTemplatesAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::SearchFlowTemplatesAsyncHelper(const SearchFlowTemplatesRequest& request, const SearchFlowTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchFlowTemplates(request), context);
}

SearchSystemInstancesOutcome IoTThingsGraphClient::SearchSystemInstances(const SearchSystemInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchSystemInstancesOutcome(SearchSystemInstancesResult(outcome.GetResult()));
  }
  else
  {
    return SearchSystemInstancesOutcome(outcome.GetError());
  }
}

SearchSystemInstancesOutcomeCallable IoTThingsGraphClient::SearchSystemInstancesCallable(const SearchSystemInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSystemInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSystemInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::SearchSystemInstancesAsync(const SearchSystemInstancesRequest& request, const SearchSystemInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchSystemInstancesAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::SearchSystemInstancesAsyncHelper(const SearchSystemInstancesRequest& request, const SearchSystemInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchSystemInstances(request), context);
}

SearchSystemTemplatesOutcome IoTThingsGraphClient::SearchSystemTemplates(const SearchSystemTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchSystemTemplatesOutcome(SearchSystemTemplatesResult(outcome.GetResult()));
  }
  else
  {
    return SearchSystemTemplatesOutcome(outcome.GetError());
  }
}

SearchSystemTemplatesOutcomeCallable IoTThingsGraphClient::SearchSystemTemplatesCallable(const SearchSystemTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSystemTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSystemTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::SearchSystemTemplatesAsync(const SearchSystemTemplatesRequest& request, const SearchSystemTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchSystemTemplatesAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::SearchSystemTemplatesAsyncHelper(const SearchSystemTemplatesRequest& request, const SearchSystemTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchSystemTemplates(request), context);
}

SearchThingsOutcome IoTThingsGraphClient::SearchThings(const SearchThingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchThingsOutcome(SearchThingsResult(outcome.GetResult()));
  }
  else
  {
    return SearchThingsOutcome(outcome.GetError());
  }
}

SearchThingsOutcomeCallable IoTThingsGraphClient::SearchThingsCallable(const SearchThingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchThingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchThings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::SearchThingsAsync(const SearchThingsRequest& request, const SearchThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchThingsAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::SearchThingsAsyncHelper(const SearchThingsRequest& request, const SearchThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchThings(request), context);
}

TagResourceOutcome IoTThingsGraphClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable IoTThingsGraphClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UndeploySystemInstanceOutcome IoTThingsGraphClient::UndeploySystemInstance(const UndeploySystemInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UndeploySystemInstanceOutcome(UndeploySystemInstanceResult(outcome.GetResult()));
  }
  else
  {
    return UndeploySystemInstanceOutcome(outcome.GetError());
  }
}

UndeploySystemInstanceOutcomeCallable IoTThingsGraphClient::UndeploySystemInstanceCallable(const UndeploySystemInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UndeploySystemInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UndeploySystemInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::UndeploySystemInstanceAsync(const UndeploySystemInstanceRequest& request, const UndeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UndeploySystemInstanceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::UndeploySystemInstanceAsyncHelper(const UndeploySystemInstanceRequest& request, const UndeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UndeploySystemInstance(request), context);
}

UntagResourceOutcome IoTThingsGraphClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable IoTThingsGraphClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateFlowTemplateOutcome IoTThingsGraphClient::UpdateFlowTemplate(const UpdateFlowTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFlowTemplateOutcome(UpdateFlowTemplateResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFlowTemplateOutcome(outcome.GetError());
  }
}

UpdateFlowTemplateOutcomeCallable IoTThingsGraphClient::UpdateFlowTemplateCallable(const UpdateFlowTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::UpdateFlowTemplateAsync(const UpdateFlowTemplateRequest& request, const UpdateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::UpdateFlowTemplateAsyncHelper(const UpdateFlowTemplateRequest& request, const UpdateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowTemplate(request), context);
}

UpdateSystemTemplateOutcome IoTThingsGraphClient::UpdateSystemTemplate(const UpdateSystemTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSystemTemplateOutcome(UpdateSystemTemplateResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSystemTemplateOutcome(outcome.GetError());
  }
}

UpdateSystemTemplateOutcomeCallable IoTThingsGraphClient::UpdateSystemTemplateCallable(const UpdateSystemTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSystemTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSystemTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::UpdateSystemTemplateAsync(const UpdateSystemTemplateRequest& request, const UpdateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSystemTemplateAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::UpdateSystemTemplateAsyncHelper(const UpdateSystemTemplateRequest& request, const UpdateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSystemTemplate(request), context);
}

UploadEntityDefinitionsOutcome IoTThingsGraphClient::UploadEntityDefinitions(const UploadEntityDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UploadEntityDefinitionsOutcome(UploadEntityDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return UploadEntityDefinitionsOutcome(outcome.GetError());
  }
}

UploadEntityDefinitionsOutcomeCallable IoTThingsGraphClient::UploadEntityDefinitionsCallable(const UploadEntityDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadEntityDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadEntityDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTThingsGraphClient::UploadEntityDefinitionsAsync(const UploadEntityDefinitionsRequest& request, const UploadEntityDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadEntityDefinitionsAsyncHelper( request, handler, context ); } );
}

void IoTThingsGraphClient::UploadEntityDefinitionsAsyncHelper(const UploadEntityDefinitionsRequest& request, const UploadEntityDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadEntityDefinitions(request), context);
}

