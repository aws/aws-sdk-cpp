/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/SupportClient.h>
#include <aws/support/SupportEndpoint.h>
#include <aws/support/SupportErrorMarshaller.h>
#include <aws/support/model/AddAttachmentsToSetRequest.h>
#include <aws/support/model/AddCommunicationToCaseRequest.h>
#include <aws/support/model/CreateCaseRequest.h>
#include <aws/support/model/DescribeAttachmentRequest.h>
#include <aws/support/model/DescribeCasesRequest.h>
#include <aws/support/model/DescribeCommunicationsRequest.h>
#include <aws/support/model/DescribeServicesRequest.h>
#include <aws/support/model/DescribeSeverityLevelsRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckResultRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesRequest.h>
#include <aws/support/model/DescribeTrustedAdvisorChecksRequest.h>
#include <aws/support/model/RefreshTrustedAdvisorCheckRequest.h>
#include <aws/support/model/ResolveCaseRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Support;
using namespace Aws::Support::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "support";
static const char* ALLOCATION_TAG = "SupportClient";

SupportClient::SupportClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportClient::SupportClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportClient::SupportClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SupportErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportClient::~SupportClient()
{
}

void SupportClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << SupportEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddAttachmentsToSetOutcome SupportClient::AddAttachmentsToSet(const AddAttachmentsToSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddAttachmentsToSetOutcome(AddAttachmentsToSetResult(outcome.GetResult()));
  }
  else
  {
    return AddAttachmentsToSetOutcome(outcome.GetError());
  }
}

AddAttachmentsToSetOutcomeCallable SupportClient::AddAttachmentsToSetCallable(const AddAttachmentsToSetRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::AddAttachmentsToSet, this, request);
}

void SupportClient::AddAttachmentsToSetAsync(const AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::AddAttachmentsToSetAsyncHelper, this, request, handler, context);
}

void SupportClient::AddAttachmentsToSetAsyncHelper(const AddAttachmentsToSetRequest& request, const AddAttachmentsToSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddAttachmentsToSet(request), context);
}

AddCommunicationToCaseOutcome SupportClient::AddCommunicationToCase(const AddCommunicationToCaseRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddCommunicationToCaseOutcome(AddCommunicationToCaseResult(outcome.GetResult()));
  }
  else
  {
    return AddCommunicationToCaseOutcome(outcome.GetError());
  }
}

AddCommunicationToCaseOutcomeCallable SupportClient::AddCommunicationToCaseCallable(const AddCommunicationToCaseRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::AddCommunicationToCase, this, request);
}

void SupportClient::AddCommunicationToCaseAsync(const AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::AddCommunicationToCaseAsyncHelper, this, request, handler, context);
}

void SupportClient::AddCommunicationToCaseAsyncHelper(const AddCommunicationToCaseRequest& request, const AddCommunicationToCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddCommunicationToCase(request), context);
}

CreateCaseOutcome SupportClient::CreateCase(const CreateCaseRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCaseOutcome(CreateCaseResult(outcome.GetResult()));
  }
  else
  {
    return CreateCaseOutcome(outcome.GetError());
  }
}

CreateCaseOutcomeCallable SupportClient::CreateCaseCallable(const CreateCaseRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::CreateCase, this, request);
}

void SupportClient::CreateCaseAsync(const CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::CreateCaseAsyncHelper, this, request, handler, context);
}

void SupportClient::CreateCaseAsyncHelper(const CreateCaseRequest& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCase(request), context);
}

DescribeAttachmentOutcome SupportClient::DescribeAttachment(const DescribeAttachmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAttachmentOutcome(DescribeAttachmentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAttachmentOutcome(outcome.GetError());
  }
}

DescribeAttachmentOutcomeCallable SupportClient::DescribeAttachmentCallable(const DescribeAttachmentRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeAttachment, this, request);
}

void SupportClient::DescribeAttachmentAsync(const DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeAttachmentAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeAttachmentAsyncHelper(const DescribeAttachmentRequest& request, const DescribeAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAttachment(request), context);
}

DescribeCasesOutcome SupportClient::DescribeCases(const DescribeCasesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCasesOutcome(DescribeCasesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCasesOutcome(outcome.GetError());
  }
}

DescribeCasesOutcomeCallable SupportClient::DescribeCasesCallable(const DescribeCasesRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeCases, this, request);
}

void SupportClient::DescribeCasesAsync(const DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeCasesAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeCasesAsyncHelper(const DescribeCasesRequest& request, const DescribeCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCases(request), context);
}

DescribeCommunicationsOutcome SupportClient::DescribeCommunications(const DescribeCommunicationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCommunicationsOutcome(DescribeCommunicationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCommunicationsOutcome(outcome.GetError());
  }
}

DescribeCommunicationsOutcomeCallable SupportClient::DescribeCommunicationsCallable(const DescribeCommunicationsRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeCommunications, this, request);
}

void SupportClient::DescribeCommunicationsAsync(const DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeCommunicationsAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeCommunicationsAsyncHelper(const DescribeCommunicationsRequest& request, const DescribeCommunicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCommunications(request), context);
}

DescribeServicesOutcome SupportClient::DescribeServices(const DescribeServicesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeServicesOutcome(DescribeServicesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeServicesOutcome(outcome.GetError());
  }
}

DescribeServicesOutcomeCallable SupportClient::DescribeServicesCallable(const DescribeServicesRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeServices, this, request);
}

void SupportClient::DescribeServicesAsync(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeServicesAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeServicesAsyncHelper(const DescribeServicesRequest& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServices(request), context);
}

DescribeSeverityLevelsOutcome SupportClient::DescribeSeverityLevels(const DescribeSeverityLevelsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSeverityLevelsOutcome(DescribeSeverityLevelsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSeverityLevelsOutcome(outcome.GetError());
  }
}

DescribeSeverityLevelsOutcomeCallable SupportClient::DescribeSeverityLevelsCallable(const DescribeSeverityLevelsRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeSeverityLevels, this, request);
}

void SupportClient::DescribeSeverityLevelsAsync(const DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeSeverityLevelsAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeSeverityLevelsAsyncHelper(const DescribeSeverityLevelsRequest& request, const DescribeSeverityLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSeverityLevels(request), context);
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcome SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrustedAdvisorCheckRefreshStatusesOutcome(DescribeTrustedAdvisorCheckRefreshStatusesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrustedAdvisorCheckRefreshStatusesOutcome(outcome.GetError());
  }
}

DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesCallable(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses, this, request);
}

void SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesAsync(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeTrustedAdvisorCheckRefreshStatusesAsyncHelper(const DescribeTrustedAdvisorCheckRefreshStatusesRequest& request, const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrustedAdvisorCheckRefreshStatuses(request), context);
}

DescribeTrustedAdvisorCheckResultOutcome SupportClient::DescribeTrustedAdvisorCheckResult(const DescribeTrustedAdvisorCheckResultRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrustedAdvisorCheckResultOutcome(DescribeTrustedAdvisorCheckResultResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrustedAdvisorCheckResultOutcome(outcome.GetError());
  }
}

DescribeTrustedAdvisorCheckResultOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckResultCallable(const DescribeTrustedAdvisorCheckResultRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeTrustedAdvisorCheckResult, this, request);
}

void SupportClient::DescribeTrustedAdvisorCheckResultAsync(const DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeTrustedAdvisorCheckResultAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeTrustedAdvisorCheckResultAsyncHelper(const DescribeTrustedAdvisorCheckResultRequest& request, const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrustedAdvisorCheckResult(request), context);
}

DescribeTrustedAdvisorCheckSummariesOutcome SupportClient::DescribeTrustedAdvisorCheckSummaries(const DescribeTrustedAdvisorCheckSummariesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrustedAdvisorCheckSummariesOutcome(DescribeTrustedAdvisorCheckSummariesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrustedAdvisorCheckSummariesOutcome(outcome.GetError());
  }
}

DescribeTrustedAdvisorCheckSummariesOutcomeCallable SupportClient::DescribeTrustedAdvisorCheckSummariesCallable(const DescribeTrustedAdvisorCheckSummariesRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeTrustedAdvisorCheckSummaries, this, request);
}

void SupportClient::DescribeTrustedAdvisorCheckSummariesAsync(const DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeTrustedAdvisorCheckSummariesAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeTrustedAdvisorCheckSummariesAsyncHelper(const DescribeTrustedAdvisorCheckSummariesRequest& request, const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrustedAdvisorCheckSummaries(request), context);
}

DescribeTrustedAdvisorChecksOutcome SupportClient::DescribeTrustedAdvisorChecks(const DescribeTrustedAdvisorChecksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrustedAdvisorChecksOutcome(DescribeTrustedAdvisorChecksResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrustedAdvisorChecksOutcome(outcome.GetError());
  }
}

DescribeTrustedAdvisorChecksOutcomeCallable SupportClient::DescribeTrustedAdvisorChecksCallable(const DescribeTrustedAdvisorChecksRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::DescribeTrustedAdvisorChecks, this, request);
}

void SupportClient::DescribeTrustedAdvisorChecksAsync(const DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::DescribeTrustedAdvisorChecksAsyncHelper, this, request, handler, context);
}

void SupportClient::DescribeTrustedAdvisorChecksAsyncHelper(const DescribeTrustedAdvisorChecksRequest& request, const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrustedAdvisorChecks(request), context);
}

RefreshTrustedAdvisorCheckOutcome SupportClient::RefreshTrustedAdvisorCheck(const RefreshTrustedAdvisorCheckRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RefreshTrustedAdvisorCheckOutcome(RefreshTrustedAdvisorCheckResult(outcome.GetResult()));
  }
  else
  {
    return RefreshTrustedAdvisorCheckOutcome(outcome.GetError());
  }
}

RefreshTrustedAdvisorCheckOutcomeCallable SupportClient::RefreshTrustedAdvisorCheckCallable(const RefreshTrustedAdvisorCheckRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::RefreshTrustedAdvisorCheck, this, request);
}

void SupportClient::RefreshTrustedAdvisorCheckAsync(const RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::RefreshTrustedAdvisorCheckAsyncHelper, this, request, handler, context);
}

void SupportClient::RefreshTrustedAdvisorCheckAsyncHelper(const RefreshTrustedAdvisorCheckRequest& request, const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RefreshTrustedAdvisorCheck(request), context);
}

ResolveCaseOutcome SupportClient::ResolveCase(const ResolveCaseRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResolveCaseOutcome(ResolveCaseResult(outcome.GetResult()));
  }
  else
  {
    return ResolveCaseOutcome(outcome.GetError());
  }
}

ResolveCaseOutcomeCallable SupportClient::ResolveCaseCallable(const ResolveCaseRequest& request) const
{
  return std::async(std::launch::async, &SupportClient::ResolveCase, this, request);
}

void SupportClient::ResolveCaseAsync(const ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SupportClient::ResolveCaseAsyncHelper, this, request, handler, context);
}

void SupportClient::ResolveCaseAsyncHelper(const ResolveCaseRequest& request, const ResolveCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResolveCase(request), context);
}

