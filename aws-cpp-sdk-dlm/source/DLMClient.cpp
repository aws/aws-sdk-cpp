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

#include <aws/dlm/DLMClient.h>
#include <aws/dlm/DLMEndpoint.h>
#include <aws/dlm/DLMErrorMarshaller.h>
#include <aws/dlm/model/CreateLifecyclePolicyRequest.h>
#include <aws/dlm/model/DeleteLifecyclePolicyRequest.h>
#include <aws/dlm/model/GetLifecyclePoliciesRequest.h>
#include <aws/dlm/model/GetLifecyclePolicyRequest.h>
#include <aws/dlm/model/UpdateLifecyclePolicyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DLM;
using namespace Aws::DLM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "dlm";
static const char* ALLOCATION_TAG = "DLMClient";


DLMClient::DLMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DLMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DLMClient::DLMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DLMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DLMClient::DLMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DLMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DLMClient::~DLMClient()
{
}

void DLMClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DLMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DLMClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateLifecyclePolicyOutcome DLMClient::CreateLifecyclePolicy(const CreateLifecyclePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/policies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLifecyclePolicyOutcome(CreateLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateLifecyclePolicyOutcome(outcome.GetError());
  }
}

CreateLifecyclePolicyOutcomeCallable DLMClient::CreateLifecyclePolicyCallable(const CreateLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DLMClient::CreateLifecyclePolicyAsync(const CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void DLMClient::CreateLifecyclePolicyAsyncHelper(const CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLifecyclePolicy(request), context);
}

DeleteLifecyclePolicyOutcome DLMClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const
{
  if (!request.PolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLifecyclePolicy", "Required field: PolicyId, is not set");
    return DeleteLifecyclePolicyOutcome(Aws::Client::AWSError<DLMErrors>(DLMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/policies/";
  ss << request.GetPolicyId();
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLifecyclePolicyOutcome(DeleteLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLifecyclePolicyOutcome(outcome.GetError());
  }
}

DeleteLifecyclePolicyOutcomeCallable DLMClient::DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DLMClient::DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void DLMClient::DeleteLifecyclePolicyAsyncHelper(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLifecyclePolicy(request), context);
}

GetLifecyclePoliciesOutcome DLMClient::GetLifecyclePolicies(const GetLifecyclePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/policies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLifecyclePoliciesOutcome(GetLifecyclePoliciesResult(outcome.GetResult()));
  }
  else
  {
    return GetLifecyclePoliciesOutcome(outcome.GetError());
  }
}

GetLifecyclePoliciesOutcomeCallable DLMClient::GetLifecyclePoliciesCallable(const GetLifecyclePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DLMClient::GetLifecyclePoliciesAsync(const GetLifecyclePoliciesRequest& request, const GetLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLifecyclePoliciesAsyncHelper( request, handler, context ); } );
}

void DLMClient::GetLifecyclePoliciesAsyncHelper(const GetLifecyclePoliciesRequest& request, const GetLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLifecyclePolicies(request), context);
}

GetLifecyclePolicyOutcome DLMClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const
{
  if (!request.PolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLifecyclePolicy", "Required field: PolicyId, is not set");
    return GetLifecyclePolicyOutcome(Aws::Client::AWSError<DLMErrors>(DLMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/policies/";
  ss << request.GetPolicyId();
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLifecyclePolicyOutcome(GetLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetLifecyclePolicyOutcome(outcome.GetError());
  }
}

GetLifecyclePolicyOutcomeCallable DLMClient::GetLifecyclePolicyCallable(const GetLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DLMClient::GetLifecyclePolicyAsync(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void DLMClient::GetLifecyclePolicyAsyncHelper(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLifecyclePolicy(request), context);
}

UpdateLifecyclePolicyOutcome DLMClient::UpdateLifecyclePolicy(const UpdateLifecyclePolicyRequest& request) const
{
  if (!request.PolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLifecyclePolicy", "Required field: PolicyId, is not set");
    return UpdateLifecyclePolicyOutcome(Aws::Client::AWSError<DLMErrors>(DLMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/policies/";
  ss << request.GetPolicyId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateLifecyclePolicyOutcome(UpdateLifecyclePolicyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateLifecyclePolicyOutcome(outcome.GetError());
  }
}

UpdateLifecyclePolicyOutcomeCallable DLMClient::UpdateLifecyclePolicyCallable(const UpdateLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DLMClient::UpdateLifecyclePolicyAsync(const UpdateLifecyclePolicyRequest& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLifecyclePolicyAsyncHelper( request, handler, context ); } );
}

void DLMClient::UpdateLifecyclePolicyAsyncHelper(const UpdateLifecyclePolicyRequest& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLifecyclePolicy(request), context);
}

