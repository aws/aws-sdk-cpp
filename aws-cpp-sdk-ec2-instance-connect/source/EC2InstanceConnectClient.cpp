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

#include <aws/ec2-instance-connect/EC2InstanceConnectClient.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectEndpoint.h>
#include <aws/ec2-instance-connect/EC2InstanceConnectErrorMarshaller.h>
#include <aws/ec2-instance-connect/model/SendSSHPublicKeyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2InstanceConnect;
using namespace Aws::EC2InstanceConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ec2-instance-connect";
static const char* ALLOCATION_TAG = "EC2InstanceConnectClient";


EC2InstanceConnectClient::EC2InstanceConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2InstanceConnectClient::EC2InstanceConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2InstanceConnectClient::EC2InstanceConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EC2InstanceConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EC2InstanceConnectClient::~EC2InstanceConnectClient()
{
}

void EC2InstanceConnectClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EC2InstanceConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EC2InstanceConnectClient::OverrideEndpoint(const Aws::String& endpoint)
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

SendSSHPublicKeyOutcome EC2InstanceConnectClient::SendSSHPublicKey(const SendSSHPublicKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendSSHPublicKeyOutcome(SendSSHPublicKeyResult(outcome.GetResult()));
  }
  else
  {
    return SendSSHPublicKeyOutcome(outcome.GetError());
  }
}

SendSSHPublicKeyOutcomeCallable EC2InstanceConnectClient::SendSSHPublicKeyCallable(const SendSSHPublicKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendSSHPublicKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendSSHPublicKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EC2InstanceConnectClient::SendSSHPublicKeyAsync(const SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendSSHPublicKeyAsyncHelper( request, handler, context ); } );
}

void EC2InstanceConnectClient::SendSSHPublicKeyAsyncHelper(const SendSSHPublicKeyRequest& request, const SendSSHPublicKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendSSHPublicKey(request), context);
}

