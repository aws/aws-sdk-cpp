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

#include <aws/sagemaker-runtime/SageMakerRuntimeClient.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeEndpoint.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrorMarshaller.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerRuntime;
using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "sagemaker";
static const char* ALLOCATION_TAG = "SageMakerRuntimeClient";


SageMakerRuntimeClient::SageMakerRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerRuntimeClient::SageMakerRuntimeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerRuntimeClient::SageMakerRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerRuntimeClient::~SageMakerRuntimeClient()
{
}

void SageMakerRuntimeClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SageMakerRuntimeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SageMakerRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
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

InvokeEndpointOutcome SageMakerRuntimeClient::InvokeEndpoint(const InvokeEndpointRequest& request) const
{
  if (!request.EndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpoint", "Required field: EndpointName, is not set");
    return InvokeEndpointOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/endpoints/";
  ss << request.GetEndpointName();
  ss << "/invocations";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return InvokeEndpointOutcome(InvokeEndpointResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return InvokeEndpointOutcome(outcome.GetError());
  }
}

InvokeEndpointOutcomeCallable SageMakerRuntimeClient::InvokeEndpointCallable(const InvokeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvokeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvokeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerRuntimeClient::InvokeEndpointAsync(const InvokeEndpointRequest& request, const InvokeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InvokeEndpointAsyncHelper( request, handler, context ); } );
}

void SageMakerRuntimeClient::InvokeEndpointAsyncHelper(const InvokeEndpointRequest& request, const InvokeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InvokeEndpoint(request), context);
}

