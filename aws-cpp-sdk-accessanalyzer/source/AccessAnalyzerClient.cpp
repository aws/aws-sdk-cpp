/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

#include <aws/accessanalyzer/AccessAnalyzerClient.h>
#include <aws/accessanalyzer/AccessAnalyzerEndpoint.h>
#include <aws/accessanalyzer/AccessAnalyzerErrorMarshaller.h>
#include <aws/accessanalyzer/model/ApplyArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/CreateAccessPreviewRequest.h>
#include <aws/accessanalyzer/model/CreateAnalyzerRequest.h>
#include <aws/accessanalyzer/model/CreateArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/DeleteAnalyzerRequest.h>
#include <aws/accessanalyzer/model/DeleteArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/GetAccessPreviewRequest.h>
#include <aws/accessanalyzer/model/GetAnalyzedResourceRequest.h>
#include <aws/accessanalyzer/model/GetAnalyzerRequest.h>
#include <aws/accessanalyzer/model/GetArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/GetFindingRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzersRequest.h>
#include <aws/accessanalyzer/model/ListArchiveRulesRequest.h>
#include <aws/accessanalyzer/model/ListFindingsRequest.h>
#include <aws/accessanalyzer/model/ListTagsForResourceRequest.h>
#include <aws/accessanalyzer/model/StartResourceScanRequest.h>
#include <aws/accessanalyzer/model/TagResourceRequest.h>
#include <aws/accessanalyzer/model/UntagResourceRequest.h>
#include <aws/accessanalyzer/model/UpdateArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/UpdateFindingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AccessAnalyzer;
using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "access-analyzer";
static const char* ALLOCATION_TAG = "AccessAnalyzerClient";


AccessAnalyzerClient::AccessAnalyzerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AccessAnalyzerClient::~AccessAnalyzerClient()
{
}

void AccessAnalyzerClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("AccessAnalyzer");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AccessAnalyzerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AccessAnalyzerClient::OverrideEndpoint(const Aws::String& endpoint)
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

ApplyArchiveRuleOutcome AccessAnalyzerClient::ApplyArchiveRule(const ApplyArchiveRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/archive-rule";
  uri.SetPath(uri.GetPath() + ss.str());
  return ApplyArchiveRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ApplyArchiveRuleOutcomeCallable AccessAnalyzerClient::ApplyArchiveRuleCallable(const ApplyArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ApplyArchiveRuleAsync(const ApplyArchiveRuleRequest& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplyArchiveRuleAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ApplyArchiveRuleAsyncHelper(const ApplyArchiveRuleRequest& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplyArchiveRule(request), context);
}

CreateAccessPreviewOutcome AccessAnalyzerClient::CreateAccessPreview(const CreateAccessPreviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/access-preview";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAccessPreviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessPreviewOutcomeCallable AccessAnalyzerClient::CreateAccessPreviewCallable(const CreateAccessPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CreateAccessPreviewAsync(const CreateAccessPreviewRequest& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccessPreviewAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::CreateAccessPreviewAsyncHelper(const CreateAccessPreviewRequest& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccessPreview(request), context);
}

CreateAnalyzerOutcome AccessAnalyzerClient::CreateAnalyzer(const CreateAnalyzerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAnalyzerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateAnalyzerOutcomeCallable AccessAnalyzerClient::CreateAnalyzerCallable(const CreateAnalyzerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnalyzerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnalyzer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CreateAnalyzerAsync(const CreateAnalyzerRequest& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAnalyzerAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::CreateAnalyzerAsyncHelper(const CreateAnalyzerRequest& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAnalyzer(request), context);
}

CreateArchiveRuleOutcome AccessAnalyzerClient::CreateArchiveRule(const CreateArchiveRuleRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateArchiveRule", "Required field: AnalyzerName, is not set");
    return CreateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  ss << "/archive-rule";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateArchiveRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateArchiveRuleOutcomeCallable AccessAnalyzerClient::CreateArchiveRuleCallable(const CreateArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CreateArchiveRuleAsync(const CreateArchiveRuleRequest& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateArchiveRuleAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::CreateArchiveRuleAsyncHelper(const CreateArchiveRuleRequest& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateArchiveRule(request), context);
}

DeleteAnalyzerOutcome AccessAnalyzerClient::DeleteAnalyzer(const DeleteAnalyzerRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalyzer", "Required field: AnalyzerName, is not set");
    return DeleteAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAnalyzerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnalyzerOutcomeCallable AccessAnalyzerClient::DeleteAnalyzerCallable(const DeleteAnalyzerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnalyzerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnalyzer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::DeleteAnalyzerAsync(const DeleteAnalyzerRequest& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAnalyzerAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::DeleteAnalyzerAsyncHelper(const DeleteAnalyzerRequest& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAnalyzer(request), context);
}

DeleteArchiveRuleOutcome AccessAnalyzerClient::DeleteArchiveRule(const DeleteArchiveRuleRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchiveRule", "Required field: AnalyzerName, is not set");
    return DeleteArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchiveRule", "Required field: RuleName, is not set");
    return DeleteArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  ss << "/archive-rule/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteArchiveRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteArchiveRuleOutcomeCallable AccessAnalyzerClient::DeleteArchiveRuleCallable(const DeleteArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::DeleteArchiveRuleAsync(const DeleteArchiveRuleRequest& request, const DeleteArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteArchiveRuleAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::DeleteArchiveRuleAsyncHelper(const DeleteArchiveRuleRequest& request, const DeleteArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteArchiveRule(request), context);
}

GetAccessPreviewOutcome AccessAnalyzerClient::GetAccessPreview(const GetAccessPreviewRequest& request) const
{
  if (!request.AccessPreviewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPreview", "Required field: AccessPreviewId, is not set");
    return GetAccessPreviewOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPreviewId]", false));
  }
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPreview", "Required field: AnalyzerArn, is not set");
    return GetAccessPreviewOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/access-preview/";
  ss << request.GetAccessPreviewId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccessPreviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccessPreviewOutcomeCallable AccessAnalyzerClient::GetAccessPreviewCallable(const GetAccessPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetAccessPreviewAsync(const GetAccessPreviewRequest& request, const GetAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccessPreviewAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::GetAccessPreviewAsyncHelper(const GetAccessPreviewRequest& request, const GetAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccessPreview(request), context);
}

GetAnalyzedResourceOutcome AccessAnalyzerClient::GetAnalyzedResource(const GetAnalyzedResourceRequest& request) const
{
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalyzedResource", "Required field: AnalyzerArn, is not set");
    return GetAnalyzedResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalyzedResource", "Required field: ResourceArn, is not set");
    return GetAnalyzedResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzed-resource";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAnalyzedResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAnalyzedResourceOutcomeCallable AccessAnalyzerClient::GetAnalyzedResourceCallable(const GetAnalyzedResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnalyzedResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnalyzedResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetAnalyzedResourceAsync(const GetAnalyzedResourceRequest& request, const GetAnalyzedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAnalyzedResourceAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::GetAnalyzedResourceAsyncHelper(const GetAnalyzedResourceRequest& request, const GetAnalyzedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAnalyzedResource(request), context);
}

GetAnalyzerOutcome AccessAnalyzerClient::GetAnalyzer(const GetAnalyzerRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalyzer", "Required field: AnalyzerName, is not set");
    return GetAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAnalyzerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAnalyzerOutcomeCallable AccessAnalyzerClient::GetAnalyzerCallable(const GetAnalyzerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnalyzerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnalyzer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetAnalyzerAsync(const GetAnalyzerRequest& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAnalyzerAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::GetAnalyzerAsyncHelper(const GetAnalyzerRequest& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAnalyzer(request), context);
}

GetArchiveRuleOutcome AccessAnalyzerClient::GetArchiveRule(const GetArchiveRuleRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArchiveRule", "Required field: AnalyzerName, is not set");
    return GetArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArchiveRule", "Required field: RuleName, is not set");
    return GetArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  ss << "/archive-rule/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetArchiveRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetArchiveRuleOutcomeCallable AccessAnalyzerClient::GetArchiveRuleCallable(const GetArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetArchiveRuleAsync(const GetArchiveRuleRequest& request, const GetArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetArchiveRuleAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::GetArchiveRuleAsyncHelper(const GetArchiveRuleRequest& request, const GetArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetArchiveRule(request), context);
}

GetFindingOutcome AccessAnalyzerClient::GetFinding(const GetFindingRequest& request) const
{
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFinding", "Required field: AnalyzerArn, is not set");
    return GetFindingOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFinding", "Required field: Id, is not set");
    return GetFindingOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/finding/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetFindingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingOutcomeCallable AccessAnalyzerClient::GetFindingCallable(const GetFindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetFindingAsync(const GetFindingRequest& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::GetFindingAsyncHelper(const GetFindingRequest& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFinding(request), context);
}

ListAccessPreviewFindingsOutcome AccessAnalyzerClient::ListAccessPreviewFindings(const ListAccessPreviewFindingsRequest& request) const
{
  if (!request.AccessPreviewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPreviewFindings", "Required field: AccessPreviewId, is not set");
    return ListAccessPreviewFindingsOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPreviewId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/access-preview/";
  ss << request.GetAccessPreviewId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccessPreviewFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessPreviewFindingsOutcomeCallable AccessAnalyzerClient::ListAccessPreviewFindingsCallable(const ListAccessPreviewFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPreviewFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPreviewFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAccessPreviewFindingsAsync(const ListAccessPreviewFindingsRequest& request, const ListAccessPreviewFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccessPreviewFindingsAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListAccessPreviewFindingsAsyncHelper(const ListAccessPreviewFindingsRequest& request, const ListAccessPreviewFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccessPreviewFindings(request), context);
}

ListAccessPreviewsOutcome AccessAnalyzerClient::ListAccessPreviews(const ListAccessPreviewsRequest& request) const
{
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPreviews", "Required field: AnalyzerArn, is not set");
    return ListAccessPreviewsOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/access-preview";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccessPreviewsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAccessPreviewsOutcomeCallable AccessAnalyzerClient::ListAccessPreviewsCallable(const ListAccessPreviewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPreviewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPreviews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAccessPreviewsAsync(const ListAccessPreviewsRequest& request, const ListAccessPreviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccessPreviewsAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListAccessPreviewsAsyncHelper(const ListAccessPreviewsRequest& request, const ListAccessPreviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccessPreviews(request), context);
}

ListAnalyzedResourcesOutcome AccessAnalyzerClient::ListAnalyzedResources(const ListAnalyzedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzed-resource";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAnalyzedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnalyzedResourcesOutcomeCallable AccessAnalyzerClient::ListAnalyzedResourcesCallable(const ListAnalyzedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnalyzedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnalyzedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAnalyzedResourcesAsync(const ListAnalyzedResourcesRequest& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAnalyzedResourcesAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListAnalyzedResourcesAsyncHelper(const ListAnalyzedResourcesRequest& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAnalyzedResources(request), context);
}

ListAnalyzersOutcome AccessAnalyzerClient::ListAnalyzers(const ListAnalyzersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAnalyzersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnalyzersOutcomeCallable AccessAnalyzerClient::ListAnalyzersCallable(const ListAnalyzersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnalyzersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnalyzers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAnalyzersAsync(const ListAnalyzersRequest& request, const ListAnalyzersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAnalyzersAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListAnalyzersAsyncHelper(const ListAnalyzersRequest& request, const ListAnalyzersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAnalyzers(request), context);
}

ListArchiveRulesOutcome AccessAnalyzerClient::ListArchiveRules(const ListArchiveRulesRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArchiveRules", "Required field: AnalyzerName, is not set");
    return ListArchiveRulesOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  ss << "/archive-rule";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListArchiveRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListArchiveRulesOutcomeCallable AccessAnalyzerClient::ListArchiveRulesCallable(const ListArchiveRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArchiveRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArchiveRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListArchiveRulesAsync(const ListArchiveRulesRequest& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListArchiveRulesAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListArchiveRulesAsyncHelper(const ListArchiveRulesRequest& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListArchiveRules(request), context);
}

ListFindingsOutcome AccessAnalyzerClient::ListFindings(const ListFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/finding";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable AccessAnalyzerClient::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFindingsAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListFindingsAsyncHelper(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFindings(request), context);
}

ListTagsForResourceOutcome AccessAnalyzerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AccessAnalyzerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartResourceScanOutcome AccessAnalyzerClient::StartResourceScan(const StartResourceScanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/resource/scan";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartResourceScanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartResourceScanOutcomeCallable AccessAnalyzerClient::StartResourceScanCallable(const StartResourceScanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartResourceScanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartResourceScan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::StartResourceScanAsync(const StartResourceScanRequest& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartResourceScanAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::StartResourceScanAsyncHelper(const StartResourceScanRequest& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartResourceScan(request), context);
}

TagResourceOutcome AccessAnalyzerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AccessAnalyzerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AccessAnalyzerClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AccessAnalyzerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateArchiveRuleOutcome AccessAnalyzerClient::UpdateArchiveRule(const UpdateArchiveRuleRequest& request) const
{
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateArchiveRule", "Required field: AnalyzerName, is not set");
    return UpdateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateArchiveRule", "Required field: RuleName, is not set");
    return UpdateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/analyzer/";
  ss << request.GetAnalyzerName();
  ss << "/archive-rule/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateArchiveRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateArchiveRuleOutcomeCallable AccessAnalyzerClient::UpdateArchiveRuleCallable(const UpdateArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::UpdateArchiveRuleAsync(const UpdateArchiveRuleRequest& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateArchiveRuleAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::UpdateArchiveRuleAsyncHelper(const UpdateArchiveRuleRequest& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateArchiveRule(request), context);
}

UpdateFindingsOutcome AccessAnalyzerClient::UpdateFindings(const UpdateFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/finding";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsOutcomeCallable AccessAnalyzerClient::UpdateFindingsCallable(const UpdateFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::UpdateFindingsAsync(const UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFindingsAsyncHelper( request, handler, context ); } );
}

void AccessAnalyzerClient::UpdateFindingsAsyncHelper(const UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFindings(request), context);
}

