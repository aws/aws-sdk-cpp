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

#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpoint.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrorMarshaller.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationRequest.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeGuruReviewer;
using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codeguru-reviewer";
static const char* ALLOCATION_TAG = "CodeGuruReviewerClient";


CodeGuruReviewerClient::CodeGuruReviewerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::~CodeGuruReviewerClient()
{
}

void CodeGuruReviewerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeGuruReviewerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeGuruReviewerClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateRepositoryOutcome CodeGuruReviewerClient::AssociateRepository(const AssociateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateRepositoryOutcome(AssociateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return AssociateRepositoryOutcome(outcome.GetError());
  }
}

AssociateRepositoryOutcomeCallable CodeGuruReviewerClient::AssociateRepositoryCallable(const AssociateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::AssociateRepositoryAsync(const AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::AssociateRepositoryAsyncHelper(const AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateRepository(request), context);
}

DescribeRepositoryAssociationOutcome CodeGuruReviewerClient::DescribeRepositoryAssociation(const DescribeRepositoryAssociationRequest& request) const
{
  if (!request.AssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRepositoryAssociation", "Required field: AssociationArn, is not set");
    return DescribeRepositoryAssociationOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations/";
  ss << request.GetAssociationArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRepositoryAssociationOutcome(DescribeRepositoryAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRepositoryAssociationOutcome(outcome.GetError());
  }
}

DescribeRepositoryAssociationOutcomeCallable CodeGuruReviewerClient::DescribeRepositoryAssociationCallable(const DescribeRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::DescribeRepositoryAssociationAsync(const DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRepositoryAssociationAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::DescribeRepositoryAssociationAsyncHelper(const DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRepositoryAssociation(request), context);
}

DisassociateRepositoryOutcome CodeGuruReviewerClient::DisassociateRepository(const DisassociateRepositoryRequest& request) const
{
  if (!request.AssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRepository", "Required field: AssociationArn, is not set");
    return DisassociateRepositoryOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations/";
  ss << request.GetAssociationArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateRepositoryOutcome(DisassociateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateRepositoryOutcome(outcome.GetError());
  }
}

DisassociateRepositoryOutcomeCallable CodeGuruReviewerClient::DisassociateRepositoryCallable(const DisassociateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::DisassociateRepositoryAsync(const DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::DisassociateRepositoryAsyncHelper(const DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRepository(request), context);
}

ListRepositoryAssociationsOutcome CodeGuruReviewerClient::ListRepositoryAssociations(const ListRepositoryAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRepositoryAssociationsOutcome(ListRepositoryAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return ListRepositoryAssociationsOutcome(outcome.GetError());
  }
}

ListRepositoryAssociationsOutcomeCallable CodeGuruReviewerClient::ListRepositoryAssociationsCallable(const ListRepositoryAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoryAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositoryAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::ListRepositoryAssociationsAsync(const ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRepositoryAssociationsAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::ListRepositoryAssociationsAsyncHelper(const ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRepositoryAssociations(request), context);
}

