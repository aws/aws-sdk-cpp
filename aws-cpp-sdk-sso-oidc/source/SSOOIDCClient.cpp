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

#include <aws/sso-oidc/SSOOIDCClient.h>
#include <aws/sso-oidc/SSOOIDCEndpoint.h>
#include <aws/sso-oidc/SSOOIDCErrorMarshaller.h>
#include <aws/sso-oidc/model/CreateTokenRequest.h>
#include <aws/sso-oidc/model/RegisterClientRequest.h>
#include <aws/sso-oidc/model/StartDeviceAuthorizationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSOOIDC;
using namespace Aws::SSOOIDC::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "awsssooidc";
static const char* ALLOCATION_TAG = "SSOOIDCClient";


SSOOIDCClient::SSOOIDCClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SSOOIDCErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOOIDCClient::SSOOIDCClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SSOOIDCErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOOIDCClient::SSOOIDCClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SSOOIDCErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SSOOIDCClient::~SSOOIDCClient()
{
}

void SSOOIDCClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SSOOIDCEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SSOOIDCClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateTokenOutcome SSOOIDCClient::CreateToken(const CreateTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/token";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTokenOutcome(CreateTokenResult(outcome.GetResult()));
  }
  else
  {
    return CreateTokenOutcome(outcome.GetError());
  }
}

CreateTokenOutcomeCallable SSOOIDCClient::CreateTokenCallable(const CreateTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOOIDCClient::CreateTokenAsync(const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTokenAsyncHelper( request, handler, context ); } );
}

void SSOOIDCClient::CreateTokenAsyncHelper(const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateToken(request), context);
}

RegisterClientOutcome SSOOIDCClient::RegisterClient(const RegisterClientRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/client/register";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterClientOutcome(RegisterClientResult(outcome.GetResult()));
  }
  else
  {
    return RegisterClientOutcome(outcome.GetError());
  }
}

RegisterClientOutcomeCallable SSOOIDCClient::RegisterClientCallable(const RegisterClientRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterClientOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterClient(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOOIDCClient::RegisterClientAsync(const RegisterClientRequest& request, const RegisterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterClientAsyncHelper( request, handler, context ); } );
}

void SSOOIDCClient::RegisterClientAsyncHelper(const RegisterClientRequest& request, const RegisterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterClient(request), context);
}

StartDeviceAuthorizationOutcome SSOOIDCClient::StartDeviceAuthorization(const StartDeviceAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/device_authorization";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::NULL_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDeviceAuthorizationOutcome(StartDeviceAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return StartDeviceAuthorizationOutcome(outcome.GetError());
  }
}

StartDeviceAuthorizationOutcomeCallable SSOOIDCClient::StartDeviceAuthorizationCallable(const StartDeviceAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeviceAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeviceAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SSOOIDCClient::StartDeviceAuthorizationAsync(const StartDeviceAuthorizationRequest& request, const StartDeviceAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDeviceAuthorizationAsyncHelper( request, handler, context ); } );
}

void SSOOIDCClient::StartDeviceAuthorizationAsyncHelper(const StartDeviceAuthorizationRequest& request, const StartDeviceAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDeviceAuthorization(request), context);
}

