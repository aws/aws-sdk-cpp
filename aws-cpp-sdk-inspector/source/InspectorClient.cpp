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
#include <aws/inspector/InspectorClient.h>
#include <aws/inspector/InspectorEndpoint.h>
#include <aws/inspector/InspectorErrorMarshaller.h>
#include <aws/inspector/model/AddAttributesToFindingsRequest.h>
#include <aws/inspector/model/AttachAssessmentAndRulesPackageRequest.h>
#include <aws/inspector/model/CreateApplicationRequest.h>
#include <aws/inspector/model/CreateAssessmentRequest.h>
#include <aws/inspector/model/CreateResourceGroupRequest.h>
#include <aws/inspector/model/DeleteApplicationRequest.h>
#include <aws/inspector/model/DeleteAssessmentRequest.h>
#include <aws/inspector/model/DeleteRunRequest.h>
#include <aws/inspector/model/DescribeApplicationRequest.h>
#include <aws/inspector/model/DescribeAssessmentRequest.h>
#include <aws/inspector/model/DescribeFindingRequest.h>
#include <aws/inspector/model/DescribeResourceGroupRequest.h>
#include <aws/inspector/model/DescribeRulesPackageRequest.h>
#include <aws/inspector/model/DescribeRunRequest.h>
#include <aws/inspector/model/DetachAssessmentAndRulesPackageRequest.h>
#include <aws/inspector/model/GetAssessmentTelemetryRequest.h>
#include <aws/inspector/model/ListApplicationsRequest.h>
#include <aws/inspector/model/ListAssessmentAgentsRequest.h>
#include <aws/inspector/model/ListAssessmentsRequest.h>
#include <aws/inspector/model/ListAttachedAssessmentsRequest.h>
#include <aws/inspector/model/ListAttachedRulesPackagesRequest.h>
#include <aws/inspector/model/ListFindingsRequest.h>
#include <aws/inspector/model/ListRulesPackagesRequest.h>
#include <aws/inspector/model/ListRunsRequest.h>
#include <aws/inspector/model/ListTagsForResourceRequest.h>
#include <aws/inspector/model/LocalizeTextRequest.h>
#include <aws/inspector/model/PreviewAgentsForResourceGroupRequest.h>
#include <aws/inspector/model/RegisterCrossAccountAccessRoleRequest.h>
#include <aws/inspector/model/RemoveAttributesFromFindingsRequest.h>
#include <aws/inspector/model/RunAssessmentRequest.h>
#include <aws/inspector/model/SetTagsForResourceRequest.h>
#include <aws/inspector/model/StartDataCollectionRequest.h>
#include <aws/inspector/model/StopDataCollectionRequest.h>
#include <aws/inspector/model/UpdateApplicationRequest.h>
#include <aws/inspector/model/UpdateAssessmentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Inspector;
using namespace Aws::Inspector::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "inspector";
static const char* ALLOCATION_TAG = "InspectorClient";

InspectorClient::InspectorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

InspectorClient::InspectorClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

InspectorClient::InspectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<InspectorErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

InspectorClient::~InspectorClient()
{
}

void InspectorClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << InspectorEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddAttributesToFindingsOutcome InspectorClient::AddAttributesToFindings(const AddAttributesToFindingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddAttributesToFindingsOutcome(AddAttributesToFindingsResult(outcome.GetResult()));
  }
  else
  {
    return AddAttributesToFindingsOutcome(outcome.GetError());
  }
}

AddAttributesToFindingsOutcomeCallable InspectorClient::AddAttributesToFindingsCallable(const AddAttributesToFindingsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::AddAttributesToFindings, this, request);
}

void InspectorClient::AddAttributesToFindingsAsync(const AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::AddAttributesToFindingsAsyncHelper, this, request, handler, context);
}

void InspectorClient::AddAttributesToFindingsAsyncHelper(const AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddAttributesToFindings(request), context);
}

AttachAssessmentAndRulesPackageOutcome InspectorClient::AttachAssessmentAndRulesPackage(const AttachAssessmentAndRulesPackageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachAssessmentAndRulesPackageOutcome(AttachAssessmentAndRulesPackageResult(outcome.GetResult()));
  }
  else
  {
    return AttachAssessmentAndRulesPackageOutcome(outcome.GetError());
  }
}

AttachAssessmentAndRulesPackageOutcomeCallable InspectorClient::AttachAssessmentAndRulesPackageCallable(const AttachAssessmentAndRulesPackageRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::AttachAssessmentAndRulesPackage, this, request);
}

void InspectorClient::AttachAssessmentAndRulesPackageAsync(const AttachAssessmentAndRulesPackageRequest& request, const AttachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::AttachAssessmentAndRulesPackageAsyncHelper, this, request, handler, context);
}

void InspectorClient::AttachAssessmentAndRulesPackageAsyncHelper(const AttachAssessmentAndRulesPackageRequest& request, const AttachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachAssessmentAndRulesPackage(request), context);
}

CreateApplicationOutcome InspectorClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateApplicationOutcome(CreateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationOutcome(outcome.GetError());
  }
}

CreateApplicationOutcomeCallable InspectorClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::CreateApplication, this, request);
}

void InspectorClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::CreateApplicationAsyncHelper, this, request, handler, context);
}

void InspectorClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateAssessmentOutcome InspectorClient::CreateAssessment(const CreateAssessmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAssessmentOutcome(CreateAssessmentResult(outcome.GetResult()));
  }
  else
  {
    return CreateAssessmentOutcome(outcome.GetError());
  }
}

CreateAssessmentOutcomeCallable InspectorClient::CreateAssessmentCallable(const CreateAssessmentRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::CreateAssessment, this, request);
}

void InspectorClient::CreateAssessmentAsync(const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::CreateAssessmentAsyncHelper, this, request, handler, context);
}

void InspectorClient::CreateAssessmentAsyncHelper(const CreateAssessmentRequest& request, const CreateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAssessment(request), context);
}

CreateResourceGroupOutcome InspectorClient::CreateResourceGroup(const CreateResourceGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateResourceGroupOutcome(CreateResourceGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateResourceGroupOutcome(outcome.GetError());
  }
}

CreateResourceGroupOutcomeCallable InspectorClient::CreateResourceGroupCallable(const CreateResourceGroupRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::CreateResourceGroup, this, request);
}

void InspectorClient::CreateResourceGroupAsync(const CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::CreateResourceGroupAsyncHelper, this, request, handler, context);
}

void InspectorClient::CreateResourceGroupAsyncHelper(const CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResourceGroup(request), context);
}

DeleteApplicationOutcome InspectorClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationOutcome(DeleteApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApplicationOutcome(outcome.GetError());
  }
}

DeleteApplicationOutcomeCallable InspectorClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DeleteApplication, this, request);
}

void InspectorClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DeleteApplicationAsyncHelper, this, request, handler, context);
}

void InspectorClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteAssessmentOutcome InspectorClient::DeleteAssessment(const DeleteAssessmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAssessmentOutcome(DeleteAssessmentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAssessmentOutcome(outcome.GetError());
  }
}

DeleteAssessmentOutcomeCallable InspectorClient::DeleteAssessmentCallable(const DeleteAssessmentRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DeleteAssessment, this, request);
}

void InspectorClient::DeleteAssessmentAsync(const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DeleteAssessmentAsyncHelper, this, request, handler, context);
}

void InspectorClient::DeleteAssessmentAsyncHelper(const DeleteAssessmentRequest& request, const DeleteAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAssessment(request), context);
}

DeleteRunOutcome InspectorClient::DeleteRun(const DeleteRunRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRunOutcome(DeleteRunResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRunOutcome(outcome.GetError());
  }
}

DeleteRunOutcomeCallable InspectorClient::DeleteRunCallable(const DeleteRunRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DeleteRun, this, request);
}

void InspectorClient::DeleteRunAsync(const DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DeleteRunAsyncHelper, this, request, handler, context);
}

void InspectorClient::DeleteRunAsyncHelper(const DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRun(request), context);
}

DescribeApplicationOutcome InspectorClient::DescribeApplication(const DescribeApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeApplicationOutcome(DescribeApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeApplicationOutcome(outcome.GetError());
  }
}

DescribeApplicationOutcomeCallable InspectorClient::DescribeApplicationCallable(const DescribeApplicationRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DescribeApplication, this, request);
}

void InspectorClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeApplicationAsyncHelper, this, request, handler, context);
}

void InspectorClient::DescribeApplicationAsyncHelper(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplication(request), context);
}

DescribeAssessmentOutcome InspectorClient::DescribeAssessment(const DescribeAssessmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAssessmentOutcome(DescribeAssessmentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAssessmentOutcome(outcome.GetError());
  }
}

DescribeAssessmentOutcomeCallable InspectorClient::DescribeAssessmentCallable(const DescribeAssessmentRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DescribeAssessment, this, request);
}

void InspectorClient::DescribeAssessmentAsync(const DescribeAssessmentRequest& request, const DescribeAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeAssessmentAsyncHelper, this, request, handler, context);
}

void InspectorClient::DescribeAssessmentAsyncHelper(const DescribeAssessmentRequest& request, const DescribeAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAssessment(request), context);
}

DescribeCrossAccountAccessRoleOutcome InspectorClient::DescribeCrossAccountAccessRole() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCrossAccountAccessRoleOutcome(DescribeCrossAccountAccessRoleResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCrossAccountAccessRoleOutcome(outcome.GetError());
  }
}

DescribeCrossAccountAccessRoleOutcomeCallable InspectorClient::DescribeCrossAccountAccessRoleCallable() const
{
  return std::async(std::launch::async, &InspectorClient::DescribeCrossAccountAccessRole, this);
}

void InspectorClient::DescribeCrossAccountAccessRoleAsync(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeCrossAccountAccessRoleAsyncHelper, this, handler, context);
}

void InspectorClient::DescribeCrossAccountAccessRoleAsyncHelper(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeCrossAccountAccessRole(), context);
}

DescribeFindingOutcome InspectorClient::DescribeFinding(const DescribeFindingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeFindingOutcome(DescribeFindingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFindingOutcome(outcome.GetError());
  }
}

DescribeFindingOutcomeCallable InspectorClient::DescribeFindingCallable(const DescribeFindingRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DescribeFinding, this, request);
}

void InspectorClient::DescribeFindingAsync(const DescribeFindingRequest& request, const DescribeFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeFindingAsyncHelper, this, request, handler, context);
}

void InspectorClient::DescribeFindingAsyncHelper(const DescribeFindingRequest& request, const DescribeFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFinding(request), context);
}

DescribeResourceGroupOutcome InspectorClient::DescribeResourceGroup(const DescribeResourceGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeResourceGroupOutcome(DescribeResourceGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeResourceGroupOutcome(outcome.GetError());
  }
}

DescribeResourceGroupOutcomeCallable InspectorClient::DescribeResourceGroupCallable(const DescribeResourceGroupRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DescribeResourceGroup, this, request);
}

void InspectorClient::DescribeResourceGroupAsync(const DescribeResourceGroupRequest& request, const DescribeResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeResourceGroupAsyncHelper, this, request, handler, context);
}

void InspectorClient::DescribeResourceGroupAsyncHelper(const DescribeResourceGroupRequest& request, const DescribeResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourceGroup(request), context);
}

DescribeRulesPackageOutcome InspectorClient::DescribeRulesPackage(const DescribeRulesPackageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRulesPackageOutcome(DescribeRulesPackageResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRulesPackageOutcome(outcome.GetError());
  }
}

DescribeRulesPackageOutcomeCallable InspectorClient::DescribeRulesPackageCallable(const DescribeRulesPackageRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DescribeRulesPackage, this, request);
}

void InspectorClient::DescribeRulesPackageAsync(const DescribeRulesPackageRequest& request, const DescribeRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeRulesPackageAsyncHelper, this, request, handler, context);
}

void InspectorClient::DescribeRulesPackageAsyncHelper(const DescribeRulesPackageRequest& request, const DescribeRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRulesPackage(request), context);
}

DescribeRunOutcome InspectorClient::DescribeRun(const DescribeRunRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRunOutcome(DescribeRunResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRunOutcome(outcome.GetError());
  }
}

DescribeRunOutcomeCallable InspectorClient::DescribeRunCallable(const DescribeRunRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DescribeRun, this, request);
}

void InspectorClient::DescribeRunAsync(const DescribeRunRequest& request, const DescribeRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DescribeRunAsyncHelper, this, request, handler, context);
}

void InspectorClient::DescribeRunAsyncHelper(const DescribeRunRequest& request, const DescribeRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRun(request), context);
}

DetachAssessmentAndRulesPackageOutcome InspectorClient::DetachAssessmentAndRulesPackage(const DetachAssessmentAndRulesPackageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachAssessmentAndRulesPackageOutcome(DetachAssessmentAndRulesPackageResult(outcome.GetResult()));
  }
  else
  {
    return DetachAssessmentAndRulesPackageOutcome(outcome.GetError());
  }
}

DetachAssessmentAndRulesPackageOutcomeCallable InspectorClient::DetachAssessmentAndRulesPackageCallable(const DetachAssessmentAndRulesPackageRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::DetachAssessmentAndRulesPackage, this, request);
}

void InspectorClient::DetachAssessmentAndRulesPackageAsync(const DetachAssessmentAndRulesPackageRequest& request, const DetachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::DetachAssessmentAndRulesPackageAsyncHelper, this, request, handler, context);
}

void InspectorClient::DetachAssessmentAndRulesPackageAsyncHelper(const DetachAssessmentAndRulesPackageRequest& request, const DetachAssessmentAndRulesPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachAssessmentAndRulesPackage(request), context);
}

GetAssessmentTelemetryOutcome InspectorClient::GetAssessmentTelemetry(const GetAssessmentTelemetryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetAssessmentTelemetryOutcome(GetAssessmentTelemetryResult(outcome.GetResult()));
  }
  else
  {
    return GetAssessmentTelemetryOutcome(outcome.GetError());
  }
}

GetAssessmentTelemetryOutcomeCallable InspectorClient::GetAssessmentTelemetryCallable(const GetAssessmentTelemetryRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::GetAssessmentTelemetry, this, request);
}

void InspectorClient::GetAssessmentTelemetryAsync(const GetAssessmentTelemetryRequest& request, const GetAssessmentTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::GetAssessmentTelemetryAsyncHelper, this, request, handler, context);
}

void InspectorClient::GetAssessmentTelemetryAsyncHelper(const GetAssessmentTelemetryRequest& request, const GetAssessmentTelemetryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAssessmentTelemetry(request), context);
}

ListApplicationsOutcome InspectorClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListApplicationsOutcome(ListApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationsOutcome(outcome.GetError());
  }
}

ListApplicationsOutcomeCallable InspectorClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListApplications, this, request);
}

void InspectorClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListApplicationsAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListAssessmentAgentsOutcome InspectorClient::ListAssessmentAgents(const ListAssessmentAgentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAssessmentAgentsOutcome(ListAssessmentAgentsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssessmentAgentsOutcome(outcome.GetError());
  }
}

ListAssessmentAgentsOutcomeCallable InspectorClient::ListAssessmentAgentsCallable(const ListAssessmentAgentsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListAssessmentAgents, this, request);
}

void InspectorClient::ListAssessmentAgentsAsync(const ListAssessmentAgentsRequest& request, const ListAssessmentAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListAssessmentAgentsAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListAssessmentAgentsAsyncHelper(const ListAssessmentAgentsRequest& request, const ListAssessmentAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssessmentAgents(request), context);
}

ListAssessmentsOutcome InspectorClient::ListAssessments(const ListAssessmentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAssessmentsOutcome(ListAssessmentsResult(outcome.GetResult()));
  }
  else
  {
    return ListAssessmentsOutcome(outcome.GetError());
  }
}

ListAssessmentsOutcomeCallable InspectorClient::ListAssessmentsCallable(const ListAssessmentsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListAssessments, this, request);
}

void InspectorClient::ListAssessmentsAsync(const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListAssessmentsAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListAssessmentsAsyncHelper(const ListAssessmentsRequest& request, const ListAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssessments(request), context);
}

ListAttachedAssessmentsOutcome InspectorClient::ListAttachedAssessments(const ListAttachedAssessmentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAttachedAssessmentsOutcome(ListAttachedAssessmentsResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedAssessmentsOutcome(outcome.GetError());
  }
}

ListAttachedAssessmentsOutcomeCallable InspectorClient::ListAttachedAssessmentsCallable(const ListAttachedAssessmentsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListAttachedAssessments, this, request);
}

void InspectorClient::ListAttachedAssessmentsAsync(const ListAttachedAssessmentsRequest& request, const ListAttachedAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListAttachedAssessmentsAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListAttachedAssessmentsAsyncHelper(const ListAttachedAssessmentsRequest& request, const ListAttachedAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedAssessments(request), context);
}

ListAttachedRulesPackagesOutcome InspectorClient::ListAttachedRulesPackages(const ListAttachedRulesPackagesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAttachedRulesPackagesOutcome(ListAttachedRulesPackagesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedRulesPackagesOutcome(outcome.GetError());
  }
}

ListAttachedRulesPackagesOutcomeCallable InspectorClient::ListAttachedRulesPackagesCallable(const ListAttachedRulesPackagesRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListAttachedRulesPackages, this, request);
}

void InspectorClient::ListAttachedRulesPackagesAsync(const ListAttachedRulesPackagesRequest& request, const ListAttachedRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListAttachedRulesPackagesAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListAttachedRulesPackagesAsyncHelper(const ListAttachedRulesPackagesRequest& request, const ListAttachedRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedRulesPackages(request), context);
}

ListFindingsOutcome InspectorClient::ListFindings(const ListFindingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListFindingsOutcome(ListFindingsResult(outcome.GetResult()));
  }
  else
  {
    return ListFindingsOutcome(outcome.GetError());
  }
}

ListFindingsOutcomeCallable InspectorClient::ListFindingsCallable(const ListFindingsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListFindings, this, request);
}

void InspectorClient::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListFindingsAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListFindingsAsyncHelper(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFindings(request), context);
}

ListRulesPackagesOutcome InspectorClient::ListRulesPackages(const ListRulesPackagesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRulesPackagesOutcome(ListRulesPackagesResult(outcome.GetResult()));
  }
  else
  {
    return ListRulesPackagesOutcome(outcome.GetError());
  }
}

ListRulesPackagesOutcomeCallable InspectorClient::ListRulesPackagesCallable(const ListRulesPackagesRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListRulesPackages, this, request);
}

void InspectorClient::ListRulesPackagesAsync(const ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListRulesPackagesAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListRulesPackagesAsyncHelper(const ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRulesPackages(request), context);
}

ListRunsOutcome InspectorClient::ListRuns(const ListRunsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRunsOutcome(ListRunsResult(outcome.GetResult()));
  }
  else
  {
    return ListRunsOutcome(outcome.GetError());
  }
}

ListRunsOutcomeCallable InspectorClient::ListRunsCallable(const ListRunsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListRuns, this, request);
}

void InspectorClient::ListRunsAsync(const ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListRunsAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListRunsAsyncHelper(const ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRuns(request), context);
}

ListTagsForResourceOutcome InspectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable InspectorClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::ListTagsForResource, this, request);
}

void InspectorClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::ListTagsForResourceAsyncHelper, this, request, handler, context);
}

void InspectorClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

LocalizeTextOutcome InspectorClient::LocalizeText(const LocalizeTextRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return LocalizeTextOutcome(LocalizeTextResult(outcome.GetResult()));
  }
  else
  {
    return LocalizeTextOutcome(outcome.GetError());
  }
}

LocalizeTextOutcomeCallable InspectorClient::LocalizeTextCallable(const LocalizeTextRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::LocalizeText, this, request);
}

void InspectorClient::LocalizeTextAsync(const LocalizeTextRequest& request, const LocalizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::LocalizeTextAsyncHelper, this, request, handler, context);
}

void InspectorClient::LocalizeTextAsyncHelper(const LocalizeTextRequest& request, const LocalizeTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LocalizeText(request), context);
}

PreviewAgentsForResourceGroupOutcome InspectorClient::PreviewAgentsForResourceGroup(const PreviewAgentsForResourceGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PreviewAgentsForResourceGroupOutcome(PreviewAgentsForResourceGroupResult(outcome.GetResult()));
  }
  else
  {
    return PreviewAgentsForResourceGroupOutcome(outcome.GetError());
  }
}

PreviewAgentsForResourceGroupOutcomeCallable InspectorClient::PreviewAgentsForResourceGroupCallable(const PreviewAgentsForResourceGroupRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::PreviewAgentsForResourceGroup, this, request);
}

void InspectorClient::PreviewAgentsForResourceGroupAsync(const PreviewAgentsForResourceGroupRequest& request, const PreviewAgentsForResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::PreviewAgentsForResourceGroupAsyncHelper, this, request, handler, context);
}

void InspectorClient::PreviewAgentsForResourceGroupAsyncHelper(const PreviewAgentsForResourceGroupRequest& request, const PreviewAgentsForResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PreviewAgentsForResourceGroup(request), context);
}

RegisterCrossAccountAccessRoleOutcome InspectorClient::RegisterCrossAccountAccessRole(const RegisterCrossAccountAccessRoleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterCrossAccountAccessRoleOutcome(RegisterCrossAccountAccessRoleResult(outcome.GetResult()));
  }
  else
  {
    return RegisterCrossAccountAccessRoleOutcome(outcome.GetError());
  }
}

RegisterCrossAccountAccessRoleOutcomeCallable InspectorClient::RegisterCrossAccountAccessRoleCallable(const RegisterCrossAccountAccessRoleRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::RegisterCrossAccountAccessRole, this, request);
}

void InspectorClient::RegisterCrossAccountAccessRoleAsync(const RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::RegisterCrossAccountAccessRoleAsyncHelper, this, request, handler, context);
}

void InspectorClient::RegisterCrossAccountAccessRoleAsyncHelper(const RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterCrossAccountAccessRole(request), context);
}

RemoveAttributesFromFindingsOutcome InspectorClient::RemoveAttributesFromFindings(const RemoveAttributesFromFindingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveAttributesFromFindingsOutcome(RemoveAttributesFromFindingsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveAttributesFromFindingsOutcome(outcome.GetError());
  }
}

RemoveAttributesFromFindingsOutcomeCallable InspectorClient::RemoveAttributesFromFindingsCallable(const RemoveAttributesFromFindingsRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::RemoveAttributesFromFindings, this, request);
}

void InspectorClient::RemoveAttributesFromFindingsAsync(const RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::RemoveAttributesFromFindingsAsyncHelper, this, request, handler, context);
}

void InspectorClient::RemoveAttributesFromFindingsAsyncHelper(const RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveAttributesFromFindings(request), context);
}

RunAssessmentOutcome InspectorClient::RunAssessment(const RunAssessmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RunAssessmentOutcome(RunAssessmentResult(outcome.GetResult()));
  }
  else
  {
    return RunAssessmentOutcome(outcome.GetError());
  }
}

RunAssessmentOutcomeCallable InspectorClient::RunAssessmentCallable(const RunAssessmentRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::RunAssessment, this, request);
}

void InspectorClient::RunAssessmentAsync(const RunAssessmentRequest& request, const RunAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::RunAssessmentAsyncHelper, this, request, handler, context);
}

void InspectorClient::RunAssessmentAsyncHelper(const RunAssessmentRequest& request, const RunAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RunAssessment(request), context);
}

SetTagsForResourceOutcome InspectorClient::SetTagsForResource(const SetTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetTagsForResourceOutcome(SetTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return SetTagsForResourceOutcome(outcome.GetError());
  }
}

SetTagsForResourceOutcomeCallable InspectorClient::SetTagsForResourceCallable(const SetTagsForResourceRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::SetTagsForResource, this, request);
}

void InspectorClient::SetTagsForResourceAsync(const SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::SetTagsForResourceAsyncHelper, this, request, handler, context);
}

void InspectorClient::SetTagsForResourceAsyncHelper(const SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetTagsForResource(request), context);
}

StartDataCollectionOutcome InspectorClient::StartDataCollection(const StartDataCollectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartDataCollectionOutcome(StartDataCollectionResult(outcome.GetResult()));
  }
  else
  {
    return StartDataCollectionOutcome(outcome.GetError());
  }
}

StartDataCollectionOutcomeCallable InspectorClient::StartDataCollectionCallable(const StartDataCollectionRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::StartDataCollection, this, request);
}

void InspectorClient::StartDataCollectionAsync(const StartDataCollectionRequest& request, const StartDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::StartDataCollectionAsyncHelper, this, request, handler, context);
}

void InspectorClient::StartDataCollectionAsyncHelper(const StartDataCollectionRequest& request, const StartDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDataCollection(request), context);
}

StopDataCollectionOutcome InspectorClient::StopDataCollection(const StopDataCollectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopDataCollectionOutcome(StopDataCollectionResult(outcome.GetResult()));
  }
  else
  {
    return StopDataCollectionOutcome(outcome.GetError());
  }
}

StopDataCollectionOutcomeCallable InspectorClient::StopDataCollectionCallable(const StopDataCollectionRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::StopDataCollection, this, request);
}

void InspectorClient::StopDataCollectionAsync(const StopDataCollectionRequest& request, const StopDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::StopDataCollectionAsyncHelper, this, request, handler, context);
}

void InspectorClient::StopDataCollectionAsyncHelper(const StopDataCollectionRequest& request, const StopDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDataCollection(request), context);
}

UpdateApplicationOutcome InspectorClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateApplicationOutcome(UpdateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApplicationOutcome(outcome.GetError());
  }
}

UpdateApplicationOutcomeCallable InspectorClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::UpdateApplication, this, request);
}

void InspectorClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::UpdateApplicationAsyncHelper, this, request, handler, context);
}

void InspectorClient::UpdateApplicationAsyncHelper(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApplication(request), context);
}

UpdateAssessmentOutcome InspectorClient::UpdateAssessment(const UpdateAssessmentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAssessmentOutcome(UpdateAssessmentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAssessmentOutcome(outcome.GetError());
  }
}

UpdateAssessmentOutcomeCallable InspectorClient::UpdateAssessmentCallable(const UpdateAssessmentRequest& request) const
{
  return std::async(std::launch::async, &InspectorClient::UpdateAssessment, this, request);
}

void InspectorClient::UpdateAssessmentAsync(const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&InspectorClient::UpdateAssessmentAsyncHelper, this, request, handler, context);
}

void InspectorClient::UpdateAssessmentAsyncHelper(const UpdateAssessmentRequest& request, const UpdateAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAssessment(request), context);
}

