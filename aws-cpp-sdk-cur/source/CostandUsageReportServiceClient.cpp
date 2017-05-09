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
#include <aws/cur/CostandUsageReportServiceClient.h>
#include <aws/cur/CostandUsageReportServiceEndpoint.h>
#include <aws/cur/CostandUsageReportServiceErrorMarshaller.h>
#include <aws/cur/model/DeleteReportDefinitionRequest.h>
#include <aws/cur/model/DescribeReportDefinitionsRequest.h>
#include <aws/cur/model/PutReportDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CostandUsageReportService;
using namespace Aws::CostandUsageReportService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cur";
static const char* ALLOCATION_TAG = "CostandUsageReportServiceClient";


CostandUsageReportServiceClient::CostandUsageReportServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostandUsageReportServiceClient::CostandUsageReportServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CostandUsageReportServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CostandUsageReportServiceClient::~CostandUsageReportServiceClient()
{
}

void CostandUsageReportServiceClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CostandUsageReportServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeleteReportDefinitionOutcome CostandUsageReportServiceClient::DeleteReportDefinition(const DeleteReportDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteReportDefinitionOutcome(DeleteReportDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReportDefinitionOutcome(outcome.GetError());
  }
}

DeleteReportDefinitionOutcomeCallable CostandUsageReportServiceClient::DeleteReportDefinitionCallable(const DeleteReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::DeleteReportDefinitionAsync(const DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReportDefinitionAsyncHelper( request, handler, context ); } );
}

void CostandUsageReportServiceClient::DeleteReportDefinitionAsyncHelper(const DeleteReportDefinitionRequest& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReportDefinition(request), context);
}

DescribeReportDefinitionsOutcome CostandUsageReportServiceClient::DescribeReportDefinitions(const DescribeReportDefinitionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeReportDefinitionsOutcome(DescribeReportDefinitionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReportDefinitionsOutcome(outcome.GetError());
  }
}

DescribeReportDefinitionsOutcomeCallable CostandUsageReportServiceClient::DescribeReportDefinitionsCallable(const DescribeReportDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReportDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReportDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::DescribeReportDefinitionsAsync(const DescribeReportDefinitionsRequest& request, const DescribeReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReportDefinitionsAsyncHelper( request, handler, context ); } );
}

void CostandUsageReportServiceClient::DescribeReportDefinitionsAsyncHelper(const DescribeReportDefinitionsRequest& request, const DescribeReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReportDefinitions(request), context);
}

PutReportDefinitionOutcome CostandUsageReportServiceClient::PutReportDefinition(const PutReportDefinitionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutReportDefinitionOutcome(PutReportDefinitionResult(outcome.GetResult()));
  }
  else
  {
    return PutReportDefinitionOutcome(outcome.GetError());
  }
}

PutReportDefinitionOutcomeCallable CostandUsageReportServiceClient::PutReportDefinitionCallable(const PutReportDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutReportDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutReportDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CostandUsageReportServiceClient::PutReportDefinitionAsync(const PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutReportDefinitionAsyncHelper( request, handler, context ); } );
}

void CostandUsageReportServiceClient::PutReportDefinitionAsyncHelper(const PutReportDefinitionRequest& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutReportDefinition(request), context);
}

