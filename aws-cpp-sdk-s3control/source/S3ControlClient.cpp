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

#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/S3ControlEndpoint.h>
#include <aws/s3control/S3ControlErrorMarshaller.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "s3";
static const char* ALLOCATION_TAG = "S3ControlClient";


S3ControlClient::S3ControlClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::S3ControlClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::S3ControlClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region, Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::RequestDependent, false),
    Aws::MakeShared<S3ControlErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

S3ControlClient::~S3ControlClient()
{
}

void S3ControlClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = S3ControlEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void S3ControlClient::OverrideEndpoint(const Aws::String& endpoint)
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
DeletePublicAccessBlockOutcome S3ControlClient::DeletePublicAccessBlock(const DeletePublicAccessBlockRequest& request) const
{
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return DeletePublicAccessBlockOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePublicAccessBlockOutcome(NoResult());
  }
  else
  {
    return DeletePublicAccessBlockOutcome(outcome.GetError());
  }
}

DeletePublicAccessBlockOutcomeCallable S3ControlClient::DeletePublicAccessBlockCallable(const DeletePublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::DeletePublicAccessBlockAsync(const DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicAccessBlockAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::DeletePublicAccessBlockAsyncHelper(const DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicAccessBlock(request), context);
}

GetPublicAccessBlockOutcome S3ControlClient::GetPublicAccessBlock(const GetPublicAccessBlockRequest& request) const
{
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return GetPublicAccessBlockOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicAccessBlockOutcome(GetPublicAccessBlockResult(outcome.GetResult()));
  }
  else
  {
    return GetPublicAccessBlockOutcome(outcome.GetError());
  }
}

GetPublicAccessBlockOutcomeCallable S3ControlClient::GetPublicAccessBlockCallable(const GetPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::GetPublicAccessBlockAsync(const GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicAccessBlockAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::GetPublicAccessBlockAsyncHelper(const GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicAccessBlock(request), context);
}

PutPublicAccessBlockOutcome S3ControlClient::PutPublicAccessBlock(const PutPublicAccessBlockRequest& request) const
{
  Aws::String endpointString(ComputeEndpointString(request.GetAccountId()));
  if (endpointString.empty())
  {
      return PutPublicAccessBlockOutcome(AWSError<CoreErrors>(CoreErrors::VALIDATION, "", "Account ID provided is not a valid [RFC 1123 2.1] host domain name label.", false/*retryable*/));
  }
  Aws::Http::URI uri = endpointString;
  Aws::StringStream ss;
  ss << "/v20180820/configuration/publicAccessBlock";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return PutPublicAccessBlockOutcome(NoResult());
  }
  else
  {
    return PutPublicAccessBlockOutcome(outcome.GetError());
  }
}

PutPublicAccessBlockOutcomeCallable S3ControlClient::PutPublicAccessBlockCallable(const PutPublicAccessBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPublicAccessBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPublicAccessBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void S3ControlClient::PutPublicAccessBlockAsync(const PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutPublicAccessBlockAsyncHelper( request, handler, context ); } );
}

void S3ControlClient::PutPublicAccessBlockAsyncHelper(const PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutPublicAccessBlock(request), context);
}



#include<aws/core/utils/HashingUtils.h>

Aws::String S3ControlClient::ComputeEndpointString(const Aws::String& accountId) const
{
    Aws::StringStream ss;
    // The account ID have to follow RFC 1123 2.1(https://tools.ietf.org/html/rfc1123#section-2.1).
    if(Aws::Utils::IsValidDnsLabel(accountId))
    {
        ss << m_scheme << "://" << accountId << "." << m_baseUri;
        return ss.str();
    }
    else
    {
        return {};
    }
}

Aws::String S3ControlClient::ComputeEndpointString() const
{
    Aws::StringStream ss;
    ss << m_scheme << "://" << m_baseUri;
    return ss.str();
}
