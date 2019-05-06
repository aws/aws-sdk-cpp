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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/sts/STSClient.h>
#include <aws/sts/STSEndpoint.h>
#include <aws/sts/STSErrorMarshaller.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/sts/model/DecodeAuthorizationMessageRequest.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/sts/model/GetFederationTokenRequest.h>
#include <aws/sts/model/GetSessionTokenRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::STS;
using namespace Aws::STS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "sts";
static const char* ALLOCATION_TAG = "STSClient";


STSClient::STSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

STSClient::STSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

STSClient::STSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<STSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

STSClient::~STSClient()
{
}

void STSClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + STSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void STSClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String STSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << STSEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AssumeRoleOutcome STSClient::AssumeRole(const AssumeRoleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssumeRoleOutcome(AssumeRoleResult(outcome.GetResult()));
  }
  else
  {
    return AssumeRoleOutcome(outcome.GetError());
  }
}

AssumeRoleOutcomeCallable STSClient::AssumeRoleCallable(const AssumeRoleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeRoleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeRole(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::AssumeRoleAsync(const AssumeRoleRequest& request, const AssumeRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssumeRoleAsyncHelper( request, handler, context ); } );
}

void STSClient::AssumeRoleAsyncHelper(const AssumeRoleRequest& request, const AssumeRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssumeRole(request), context);
}

AssumeRoleWithSAMLOutcome STSClient::AssumeRoleWithSAML(const AssumeRoleWithSAMLRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssumeRoleWithSAMLOutcome(AssumeRoleWithSAMLResult(outcome.GetResult()));
  }
  else
  {
    return AssumeRoleWithSAMLOutcome(outcome.GetError());
  }
}

AssumeRoleWithSAMLOutcomeCallable STSClient::AssumeRoleWithSAMLCallable(const AssumeRoleWithSAMLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeRoleWithSAMLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeRoleWithSAML(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::AssumeRoleWithSAMLAsync(const AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssumeRoleWithSAMLAsyncHelper( request, handler, context ); } );
}

void STSClient::AssumeRoleWithSAMLAsyncHelper(const AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssumeRoleWithSAML(request), context);
}

AssumeRoleWithWebIdentityOutcome STSClient::AssumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssumeRoleWithWebIdentityOutcome(AssumeRoleWithWebIdentityResult(outcome.GetResult()));
  }
  else
  {
    return AssumeRoleWithWebIdentityOutcome(outcome.GetError());
  }
}

AssumeRoleWithWebIdentityOutcomeCallable STSClient::AssumeRoleWithWebIdentityCallable(const AssumeRoleWithWebIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeRoleWithWebIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeRoleWithWebIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::AssumeRoleWithWebIdentityAsync(const AssumeRoleWithWebIdentityRequest& request, const AssumeRoleWithWebIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssumeRoleWithWebIdentityAsyncHelper( request, handler, context ); } );
}

void STSClient::AssumeRoleWithWebIdentityAsyncHelper(const AssumeRoleWithWebIdentityRequest& request, const AssumeRoleWithWebIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssumeRoleWithWebIdentity(request), context);
}

DecodeAuthorizationMessageOutcome STSClient::DecodeAuthorizationMessage(const DecodeAuthorizationMessageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DecodeAuthorizationMessageOutcome(DecodeAuthorizationMessageResult(outcome.GetResult()));
  }
  else
  {
    return DecodeAuthorizationMessageOutcome(outcome.GetError());
  }
}

DecodeAuthorizationMessageOutcomeCallable STSClient::DecodeAuthorizationMessageCallable(const DecodeAuthorizationMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DecodeAuthorizationMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DecodeAuthorizationMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::DecodeAuthorizationMessageAsync(const DecodeAuthorizationMessageRequest& request, const DecodeAuthorizationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DecodeAuthorizationMessageAsyncHelper( request, handler, context ); } );
}

void STSClient::DecodeAuthorizationMessageAsyncHelper(const DecodeAuthorizationMessageRequest& request, const DecodeAuthorizationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DecodeAuthorizationMessage(request), context);
}

GetCallerIdentityOutcome STSClient::GetCallerIdentity(const GetCallerIdentityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetCallerIdentityOutcome(GetCallerIdentityResult(outcome.GetResult()));
  }
  else
  {
    return GetCallerIdentityOutcome(outcome.GetError());
  }
}

GetCallerIdentityOutcomeCallable STSClient::GetCallerIdentityCallable(const GetCallerIdentityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCallerIdentityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCallerIdentity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetCallerIdentityAsync(const GetCallerIdentityRequest& request, const GetCallerIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCallerIdentityAsyncHelper( request, handler, context ); } );
}

void STSClient::GetCallerIdentityAsyncHelper(const GetCallerIdentityRequest& request, const GetCallerIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCallerIdentity(request), context);
}

GetFederationTokenOutcome STSClient::GetFederationToken(const GetFederationTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetFederationTokenOutcome(GetFederationTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetFederationTokenOutcome(outcome.GetError());
  }
}

GetFederationTokenOutcomeCallable STSClient::GetFederationTokenCallable(const GetFederationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFederationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFederationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetFederationTokenAsync(const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFederationTokenAsyncHelper( request, handler, context ); } );
}

void STSClient::GetFederationTokenAsyncHelper(const GetFederationTokenRequest& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFederationToken(request), context);
}

GetSessionTokenOutcome STSClient::GetSessionToken(const GetSessionTokenRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSessionTokenOutcome(GetSessionTokenResult(outcome.GetResult()));
  }
  else
  {
    return GetSessionTokenOutcome(outcome.GetError());
  }
}

GetSessionTokenOutcomeCallable STSClient::GetSessionTokenCallable(const GetSessionTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSessionTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSessionToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void STSClient::GetSessionTokenAsync(const GetSessionTokenRequest& request, const GetSessionTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSessionTokenAsyncHelper( request, handler, context ); } );
}

void STSClient::GetSessionTokenAsyncHelper(const GetSessionTokenRequest& request, const GetSessionTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSessionToken(request), context);
}



