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
#include <aws/iot/IoTClient.h>
#include <aws/iot/IoTEndpoint.h>
#include <aws/iot/IoTErrorMarshaller.h>
#include <aws/iot/model/AcceptCertificateTransferRequest.h>
#include <aws/iot/model/AddThingToThingGroupRequest.h>
#include <aws/iot/model/AssociateTargetsWithJobRequest.h>
#include <aws/iot/model/AttachPolicyRequest.h>
#include <aws/iot/model/AttachThingPrincipalRequest.h>
#include <aws/iot/model/CancelCertificateTransferRequest.h>
#include <aws/iot/model/CancelJobRequest.h>
#include <aws/iot/model/ClearDefaultAuthorizerRequest.h>
#include <aws/iot/model/CreateAuthorizerRequest.h>
#include <aws/iot/model/CreateCertificateFromCsrRequest.h>
#include <aws/iot/model/CreateJobRequest.h>
#include <aws/iot/model/CreateKeysAndCertificateRequest.h>
#include <aws/iot/model/CreateOTAUpdateRequest.h>
#include <aws/iot/model/CreatePolicyRequest.h>
#include <aws/iot/model/CreatePolicyVersionRequest.h>
#include <aws/iot/model/CreateRoleAliasRequest.h>
#include <aws/iot/model/CreateStreamRequest.h>
#include <aws/iot/model/CreateThingRequest.h>
#include <aws/iot/model/CreateThingGroupRequest.h>
#include <aws/iot/model/CreateThingTypeRequest.h>
#include <aws/iot/model/CreateTopicRuleRequest.h>
#include <aws/iot/model/DeleteAuthorizerRequest.h>
#include <aws/iot/model/DeleteCACertificateRequest.h>
#include <aws/iot/model/DeleteCertificateRequest.h>
#include <aws/iot/model/DeleteJobRequest.h>
#include <aws/iot/model/DeleteJobExecutionRequest.h>
#include <aws/iot/model/DeleteOTAUpdateRequest.h>
#include <aws/iot/model/DeletePolicyRequest.h>
#include <aws/iot/model/DeletePolicyVersionRequest.h>
#include <aws/iot/model/DeleteRegistrationCodeRequest.h>
#include <aws/iot/model/DeleteRoleAliasRequest.h>
#include <aws/iot/model/DeleteStreamRequest.h>
#include <aws/iot/model/DeleteThingRequest.h>
#include <aws/iot/model/DeleteThingGroupRequest.h>
#include <aws/iot/model/DeleteThingTypeRequest.h>
#include <aws/iot/model/DeleteTopicRuleRequest.h>
#include <aws/iot/model/DeleteV2LoggingLevelRequest.h>
#include <aws/iot/model/DeprecateThingTypeRequest.h>
#include <aws/iot/model/DescribeAuthorizerRequest.h>
#include <aws/iot/model/DescribeCACertificateRequest.h>
#include <aws/iot/model/DescribeCertificateRequest.h>
#include <aws/iot/model/DescribeDefaultAuthorizerRequest.h>
#include <aws/iot/model/DescribeEndpointRequest.h>
#include <aws/iot/model/DescribeEventConfigurationsRequest.h>
#include <aws/iot/model/DescribeIndexRequest.h>
#include <aws/iot/model/DescribeJobRequest.h>
#include <aws/iot/model/DescribeJobExecutionRequest.h>
#include <aws/iot/model/DescribeRoleAliasRequest.h>
#include <aws/iot/model/DescribeStreamRequest.h>
#include <aws/iot/model/DescribeThingRequest.h>
#include <aws/iot/model/DescribeThingGroupRequest.h>
#include <aws/iot/model/DescribeThingRegistrationTaskRequest.h>
#include <aws/iot/model/DescribeThingTypeRequest.h>
#include <aws/iot/model/DetachPolicyRequest.h>
#include <aws/iot/model/DetachThingPrincipalRequest.h>
#include <aws/iot/model/DisableTopicRuleRequest.h>
#include <aws/iot/model/EnableTopicRuleRequest.h>
#include <aws/iot/model/GetEffectivePoliciesRequest.h>
#include <aws/iot/model/GetIndexingConfigurationRequest.h>
#include <aws/iot/model/GetJobDocumentRequest.h>
#include <aws/iot/model/GetLoggingOptionsRequest.h>
#include <aws/iot/model/GetOTAUpdateRequest.h>
#include <aws/iot/model/GetPolicyRequest.h>
#include <aws/iot/model/GetPolicyVersionRequest.h>
#include <aws/iot/model/GetRegistrationCodeRequest.h>
#include <aws/iot/model/GetTopicRuleRequest.h>
#include <aws/iot/model/GetV2LoggingOptionsRequest.h>
#include <aws/iot/model/ListAttachedPoliciesRequest.h>
#include <aws/iot/model/ListAuthorizersRequest.h>
#include <aws/iot/model/ListCACertificatesRequest.h>
#include <aws/iot/model/ListCertificatesRequest.h>
#include <aws/iot/model/ListCertificatesByCARequest.h>
#include <aws/iot/model/ListIndicesRequest.h>
#include <aws/iot/model/ListJobExecutionsForJobRequest.h>
#include <aws/iot/model/ListJobExecutionsForThingRequest.h>
#include <aws/iot/model/ListJobsRequest.h>
#include <aws/iot/model/ListOTAUpdatesRequest.h>
#include <aws/iot/model/ListOutgoingCertificatesRequest.h>
#include <aws/iot/model/ListPoliciesRequest.h>
#include <aws/iot/model/ListPolicyVersionsRequest.h>
#include <aws/iot/model/ListPrincipalThingsRequest.h>
#include <aws/iot/model/ListRoleAliasesRequest.h>
#include <aws/iot/model/ListStreamsRequest.h>
#include <aws/iot/model/ListTargetsForPolicyRequest.h>
#include <aws/iot/model/ListThingGroupsRequest.h>
#include <aws/iot/model/ListThingGroupsForThingRequest.h>
#include <aws/iot/model/ListThingPrincipalsRequest.h>
#include <aws/iot/model/ListThingRegistrationTaskReportsRequest.h>
#include <aws/iot/model/ListThingRegistrationTasksRequest.h>
#include <aws/iot/model/ListThingTypesRequest.h>
#include <aws/iot/model/ListThingsRequest.h>
#include <aws/iot/model/ListThingsInThingGroupRequest.h>
#include <aws/iot/model/ListTopicRulesRequest.h>
#include <aws/iot/model/ListV2LoggingLevelsRequest.h>
#include <aws/iot/model/RegisterCACertificateRequest.h>
#include <aws/iot/model/RegisterCertificateRequest.h>
#include <aws/iot/model/RegisterThingRequest.h>
#include <aws/iot/model/RejectCertificateTransferRequest.h>
#include <aws/iot/model/RemoveThingFromThingGroupRequest.h>
#include <aws/iot/model/ReplaceTopicRuleRequest.h>
#include <aws/iot/model/SearchIndexRequest.h>
#include <aws/iot/model/SetDefaultAuthorizerRequest.h>
#include <aws/iot/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iot/model/SetLoggingOptionsRequest.h>
#include <aws/iot/model/SetV2LoggingLevelRequest.h>
#include <aws/iot/model/SetV2LoggingOptionsRequest.h>
#include <aws/iot/model/StartThingRegistrationTaskRequest.h>
#include <aws/iot/model/StopThingRegistrationTaskRequest.h>
#include <aws/iot/model/TestAuthorizationRequest.h>
#include <aws/iot/model/TestInvokeAuthorizerRequest.h>
#include <aws/iot/model/TransferCertificateRequest.h>
#include <aws/iot/model/UpdateAuthorizerRequest.h>
#include <aws/iot/model/UpdateCACertificateRequest.h>
#include <aws/iot/model/UpdateCertificateRequest.h>
#include <aws/iot/model/UpdateEventConfigurationsRequest.h>
#include <aws/iot/model/UpdateIndexingConfigurationRequest.h>
#include <aws/iot/model/UpdateRoleAliasRequest.h>
#include <aws/iot/model/UpdateStreamRequest.h>
#include <aws/iot/model/UpdateThingRequest.h>
#include <aws/iot/model/UpdateThingGroupRequest.h>
#include <aws/iot/model/UpdateThingGroupsForThingRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT;
using namespace Aws::IoT::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "execute-api";
static const char* ALLOCATION_TAG = "IoTClient";


IoTClient::IoTClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::IoTClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::IoTClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::~IoTClient()
{
}

void IoTClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << IoTEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AcceptCertificateTransferOutcome IoTClient::AcceptCertificateTransfer(const AcceptCertificateTransferRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/accept-certificate-transfer/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptCertificateTransferOutcome(NoResult());
  }
  else
  {
    return AcceptCertificateTransferOutcome(outcome.GetError());
  }
}

AcceptCertificateTransferOutcomeCallable IoTClient::AcceptCertificateTransferCallable(const AcceptCertificateTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptCertificateTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptCertificateTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AcceptCertificateTransferAsync(const AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptCertificateTransferAsyncHelper( request, handler, context ); } );
}

void IoTClient::AcceptCertificateTransferAsyncHelper(const AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptCertificateTransfer(request), context);
}

AddThingToThingGroupOutcome IoTClient::AddThingToThingGroup(const AddThingToThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/addThingToThingGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddThingToThingGroupOutcome(AddThingToThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return AddThingToThingGroupOutcome(outcome.GetError());
  }
}

AddThingToThingGroupOutcomeCallable IoTClient::AddThingToThingGroupCallable(const AddThingToThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddThingToThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddThingToThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AddThingToThingGroupAsync(const AddThingToThingGroupRequest& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddThingToThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::AddThingToThingGroupAsyncHelper(const AddThingToThingGroupRequest& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddThingToThingGroup(request), context);
}

AssociateTargetsWithJobOutcome IoTClient::AssociateTargetsWithJob(const AssociateTargetsWithJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/targets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateTargetsWithJobOutcome(AssociateTargetsWithJobResult(outcome.GetResult()));
  }
  else
  {
    return AssociateTargetsWithJobOutcome(outcome.GetError());
  }
}

AssociateTargetsWithJobOutcomeCallable IoTClient::AssociateTargetsWithJobCallable(const AssociateTargetsWithJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTargetsWithJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTargetsWithJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AssociateTargetsWithJobAsync(const AssociateTargetsWithJobRequest& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateTargetsWithJobAsyncHelper( request, handler, context ); } );
}

void IoTClient::AssociateTargetsWithJobAsyncHelper(const AssociateTargetsWithJobRequest& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateTargetsWithJob(request), context);
}

AttachPolicyOutcome IoTClient::AttachPolicy(const AttachPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/target-policies/";
  ss << request.GetPolicyName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachPolicyOutcome(NoResult());
  }
  else
  {
    return AttachPolicyOutcome(outcome.GetError());
  }
}

AttachPolicyOutcomeCallable IoTClient::AttachPolicyCallable(const AttachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AttachPolicyAsync(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachPolicyAsyncHelper( request, handler, context ); } );
}

void IoTClient::AttachPolicyAsyncHelper(const AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachPolicy(request), context);
}

AttachThingPrincipalOutcome IoTClient::AttachThingPrincipal(const AttachThingPrincipalRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/principals";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachThingPrincipalOutcome(AttachThingPrincipalResult(outcome.GetResult()));
  }
  else
  {
    return AttachThingPrincipalOutcome(outcome.GetError());
  }
}

AttachThingPrincipalOutcomeCallable IoTClient::AttachThingPrincipalCallable(const AttachThingPrincipalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachThingPrincipalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachThingPrincipal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::AttachThingPrincipalAsync(const AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachThingPrincipalAsyncHelper( request, handler, context ); } );
}

void IoTClient::AttachThingPrincipalAsyncHelper(const AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachThingPrincipal(request), context);
}

CancelCertificateTransferOutcome IoTClient::CancelCertificateTransfer(const CancelCertificateTransferRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/cancel-certificate-transfer/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelCertificateTransferOutcome(NoResult());
  }
  else
  {
    return CancelCertificateTransferOutcome(outcome.GetError());
  }
}

CancelCertificateTransferOutcomeCallable IoTClient::CancelCertificateTransferCallable(const CancelCertificateTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelCertificateTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelCertificateTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelCertificateTransferAsync(const CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelCertificateTransferAsyncHelper( request, handler, context ); } );
}

void IoTClient::CancelCertificateTransferAsyncHelper(const CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelCertificateTransfer(request), context);
}

CancelJobOutcome IoTClient::CancelJob(const CancelJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/cancel";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CancelJobOutcome(CancelJobResult(outcome.GetResult()));
  }
  else
  {
    return CancelJobOutcome(outcome.GetError());
  }
}

CancelJobOutcomeCallable IoTClient::CancelJobCallable(const CancelJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CancelJobAsync(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelJobAsyncHelper( request, handler, context ); } );
}

void IoTClient::CancelJobAsyncHelper(const CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelJob(request), context);
}

ClearDefaultAuthorizerOutcome IoTClient::ClearDefaultAuthorizer(const ClearDefaultAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/default-authorizer";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ClearDefaultAuthorizerOutcome(ClearDefaultAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return ClearDefaultAuthorizerOutcome(outcome.GetError());
  }
}

ClearDefaultAuthorizerOutcomeCallable IoTClient::ClearDefaultAuthorizerCallable(const ClearDefaultAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClearDefaultAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClearDefaultAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ClearDefaultAuthorizerAsync(const ClearDefaultAuthorizerRequest& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ClearDefaultAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::ClearDefaultAuthorizerAsyncHelper(const ClearDefaultAuthorizerRequest& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ClearDefaultAuthorizer(request), context);
}

CreateAuthorizerOutcome IoTClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/authorizer/";
  ss << request.GetAuthorizerName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAuthorizerOutcome(CreateAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return CreateAuthorizerOutcome(outcome.GetError());
  }
}

CreateAuthorizerOutcomeCallable IoTClient::CreateAuthorizerCallable(const CreateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateAuthorizerAsync(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateAuthorizerAsyncHelper(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAuthorizer(request), context);
}

CreateCertificateFromCsrOutcome IoTClient::CreateCertificateFromCsr(const CreateCertificateFromCsrRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCertificateFromCsrOutcome(CreateCertificateFromCsrResult(outcome.GetResult()));
  }
  else
  {
    return CreateCertificateFromCsrOutcome(outcome.GetError());
  }
}

CreateCertificateFromCsrOutcomeCallable IoTClient::CreateCertificateFromCsrCallable(const CreateCertificateFromCsrRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateFromCsrOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificateFromCsr(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateCertificateFromCsrAsync(const CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCertificateFromCsrAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateCertificateFromCsrAsyncHelper(const CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCertificateFromCsr(request), context);
}

CreateJobOutcome IoTClient::CreateJob(const CreateJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateJobOutcome(CreateJobResult(outcome.GetResult()));
  }
  else
  {
    return CreateJobOutcome(outcome.GetError());
  }
}

CreateJobOutcomeCallable IoTClient::CreateJobCallable(const CreateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateJobAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateJobAsyncHelper(const CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateJob(request), context);
}

CreateKeysAndCertificateOutcome IoTClient::CreateKeysAndCertificate(const CreateKeysAndCertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/keys-and-certificate";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateKeysAndCertificateOutcome(CreateKeysAndCertificateResult(outcome.GetResult()));
  }
  else
  {
    return CreateKeysAndCertificateOutcome(outcome.GetError());
  }
}

CreateKeysAndCertificateOutcomeCallable IoTClient::CreateKeysAndCertificateCallable(const CreateKeysAndCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeysAndCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeysAndCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateKeysAndCertificateAsync(const CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeysAndCertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateKeysAndCertificateAsyncHelper(const CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeysAndCertificate(request), context);
}

CreateOTAUpdateOutcome IoTClient::CreateOTAUpdate(const CreateOTAUpdateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/otaUpdates/";
  ss << request.GetOtaUpdateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateOTAUpdateOutcome(CreateOTAUpdateResult(outcome.GetResult()));
  }
  else
  {
    return CreateOTAUpdateOutcome(outcome.GetError());
  }
}

CreateOTAUpdateOutcomeCallable IoTClient::CreateOTAUpdateCallable(const CreateOTAUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOTAUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOTAUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateOTAUpdateAsync(const CreateOTAUpdateRequest& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOTAUpdateAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateOTAUpdateAsyncHelper(const CreateOTAUpdateRequest& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOTAUpdate(request), context);
}

CreatePolicyOutcome IoTClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePolicyOutcome(CreatePolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreatePolicyOutcome(outcome.GetError());
  }
}

CreatePolicyOutcomeCallable IoTClient::CreatePolicyCallable(const CreatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePolicyAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreatePolicyAsyncHelper(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicy(request), context);
}

CreatePolicyVersionOutcome IoTClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePolicyVersionOutcome(CreatePolicyVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreatePolicyVersionOutcome(outcome.GetError());
  }
}

CreatePolicyVersionOutcomeCallable IoTClient::CreatePolicyVersionCallable(const CreatePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePolicyVersionAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreatePolicyVersionAsyncHelper(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicyVersion(request), context);
}

CreateRoleAliasOutcome IoTClient::CreateRoleAlias(const CreateRoleAliasRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/role-aliases/";
  ss << request.GetRoleAlias();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRoleAliasOutcome(CreateRoleAliasResult(outcome.GetResult()));
  }
  else
  {
    return CreateRoleAliasOutcome(outcome.GetError());
  }
}

CreateRoleAliasOutcomeCallable IoTClient::CreateRoleAliasCallable(const CreateRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateRoleAliasAsync(const CreateRoleAliasRequest& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoleAliasAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateRoleAliasAsyncHelper(const CreateRoleAliasRequest& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoleAlias(request), context);
}

CreateStreamOutcome IoTClient::CreateStream(const CreateStreamRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/streams/";
  ss << request.GetStreamId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStreamOutcome(CreateStreamResult(outcome.GetResult()));
  }
  else
  {
    return CreateStreamOutcome(outcome.GetError());
  }
}

CreateStreamOutcomeCallable IoTClient::CreateStreamCallable(const CreateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateStreamAsync(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateStreamAsyncHelper(const CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStream(request), context);
}

CreateThingOutcome IoTClient::CreateThing(const CreateThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateThingOutcome(CreateThingResult(outcome.GetResult()));
  }
  else
  {
    return CreateThingOutcome(outcome.GetError());
  }
}

CreateThingOutcomeCallable IoTClient::CreateThingCallable(const CreateThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateThingAsync(const CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateThingAsyncHelper(const CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateThing(request), context);
}

CreateThingGroupOutcome IoTClient::CreateThingGroup(const CreateThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/";
  ss << request.GetThingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateThingGroupOutcome(CreateThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateThingGroupOutcome(outcome.GetError());
  }
}

CreateThingGroupOutcomeCallable IoTClient::CreateThingGroupCallable(const CreateThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateThingGroupAsync(const CreateThingGroupRequest& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateThingGroupAsyncHelper(const CreateThingGroupRequest& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateThingGroup(request), context);
}

CreateThingTypeOutcome IoTClient::CreateThingType(const CreateThingTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-types/";
  ss << request.GetThingTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateThingTypeOutcome(CreateThingTypeResult(outcome.GetResult()));
  }
  else
  {
    return CreateThingTypeOutcome(outcome.GetError());
  }
}

CreateThingTypeOutcomeCallable IoTClient::CreateThingTypeCallable(const CreateThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateThingTypeAsync(const CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateThingTypeAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateThingTypeAsyncHelper(const CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateThingType(request), context);
}

CreateTopicRuleOutcome IoTClient::CreateTopicRule(const CreateTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTopicRuleOutcome(NoResult());
  }
  else
  {
    return CreateTopicRuleOutcome(outcome.GetError());
  }
}

CreateTopicRuleOutcomeCallable IoTClient::CreateTopicRuleCallable(const CreateTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTopicRuleAsyncHelper( request, handler, context ); } );
}

void IoTClient::CreateTopicRuleAsyncHelper(const CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTopicRule(request), context);
}

DeleteAuthorizerOutcome IoTClient::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/authorizer/";
  ss << request.GetAuthorizerName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAuthorizerOutcome(DeleteAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAuthorizerOutcome(outcome.GetError());
  }
}

DeleteAuthorizerOutcomeCallable IoTClient::DeleteAuthorizerCallable(const DeleteAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteAuthorizerAsync(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteAuthorizerAsyncHelper(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAuthorizer(request), context);
}

DeleteCACertificateOutcome IoTClient::DeleteCACertificate(const DeleteCACertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/cacertificate/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCACertificateOutcome(DeleteCACertificateResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCACertificateOutcome(outcome.GetError());
  }
}

DeleteCACertificateOutcomeCallable IoTClient::DeleteCACertificateCallable(const DeleteCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteCACertificateAsync(const DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCACertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteCACertificateAsyncHelper(const DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCACertificate(request), context);
}

DeleteCertificateOutcome IoTClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteCertificateOutcome(outcome.GetError());
  }
}

DeleteCertificateOutcomeCallable IoTClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteCertificateAsyncHelper(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificate(request), context);
}

DeleteJobOutcome IoTClient::DeleteJob(const DeleteJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteJobOutcome(NoResult());
  }
  else
  {
    return DeleteJobOutcome(outcome.GetError());
  }
}

DeleteJobOutcomeCallable IoTClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteJobAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteJobAsyncHelper(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteJob(request), context);
}

DeleteJobExecutionOutcome IoTClient::DeleteJobExecution(const DeleteJobExecutionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/executionNumber/";
  ss << request.GetExecutionNumber();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteJobExecutionOutcome(NoResult());
  }
  else
  {
    return DeleteJobExecutionOutcome(outcome.GetError());
  }
}

DeleteJobExecutionOutcomeCallable IoTClient::DeleteJobExecutionCallable(const DeleteJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteJobExecutionAsync(const DeleteJobExecutionRequest& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteJobExecutionAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteJobExecutionAsyncHelper(const DeleteJobExecutionRequest& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteJobExecution(request), context);
}

DeleteOTAUpdateOutcome IoTClient::DeleteOTAUpdate(const DeleteOTAUpdateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/otaUpdates/";
  ss << request.GetOtaUpdateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteOTAUpdateOutcome(DeleteOTAUpdateResult(outcome.GetResult()));
  }
  else
  {
    return DeleteOTAUpdateOutcome(outcome.GetError());
  }
}

DeleteOTAUpdateOutcomeCallable IoTClient::DeleteOTAUpdateCallable(const DeleteOTAUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOTAUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOTAUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteOTAUpdateAsync(const DeleteOTAUpdateRequest& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOTAUpdateAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteOTAUpdateAsyncHelper(const DeleteOTAUpdateRequest& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOTAUpdate(request), context);
}

DeletePolicyOutcome IoTClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePolicyOutcome(NoResult());
  }
  else
  {
    return DeletePolicyOutcome(outcome.GetError());
  }
}

DeletePolicyOutcomeCallable IoTClient::DeletePolicyCallable(const DeletePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePolicyAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DeletePolicyVersionOutcome IoTClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version/";
  ss << request.GetPolicyVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePolicyVersionOutcome(NoResult());
  }
  else
  {
    return DeletePolicyVersionOutcome(outcome.GetError());
  }
}

DeletePolicyVersionOutcomeCallable IoTClient::DeletePolicyVersionCallable(const DeletePolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePolicyVersionAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeletePolicyVersionAsyncHelper(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicyVersion(request), context);
}

DeleteRegistrationCodeOutcome IoTClient::DeleteRegistrationCode(const DeleteRegistrationCodeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/registrationcode";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRegistrationCodeOutcome(DeleteRegistrationCodeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRegistrationCodeOutcome(outcome.GetError());
  }
}

DeleteRegistrationCodeOutcomeCallable IoTClient::DeleteRegistrationCodeCallable(const DeleteRegistrationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegistrationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegistrationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteRegistrationCodeAsync(const DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRegistrationCodeAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteRegistrationCodeAsyncHelper(const DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRegistrationCode(request), context);
}

DeleteRoleAliasOutcome IoTClient::DeleteRoleAlias(const DeleteRoleAliasRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/role-aliases/";
  ss << request.GetRoleAlias();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoleAliasOutcome(DeleteRoleAliasResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRoleAliasOutcome(outcome.GetError());
  }
}

DeleteRoleAliasOutcomeCallable IoTClient::DeleteRoleAliasCallable(const DeleteRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteRoleAliasAsync(const DeleteRoleAliasRequest& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoleAliasAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteRoleAliasAsyncHelper(const DeleteRoleAliasRequest& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoleAlias(request), context);
}

DeleteStreamOutcome IoTClient::DeleteStream(const DeleteStreamRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/streams/";
  ss << request.GetStreamId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStreamOutcome(DeleteStreamResult(outcome.GetResult()));
  }
  else
  {
    return DeleteStreamOutcome(outcome.GetError());
  }
}

DeleteStreamOutcomeCallable IoTClient::DeleteStreamCallable(const DeleteStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteStreamAsync(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteStreamAsyncHelper(const DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStream(request), context);
}

DeleteThingOutcome IoTClient::DeleteThing(const DeleteThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteThingOutcome(DeleteThingResult(outcome.GetResult()));
  }
  else
  {
    return DeleteThingOutcome(outcome.GetError());
  }
}

DeleteThingOutcomeCallable IoTClient::DeleteThingCallable(const DeleteThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteThingAsync(const DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteThingAsyncHelper(const DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThing(request), context);
}

DeleteThingGroupOutcome IoTClient::DeleteThingGroup(const DeleteThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/";
  ss << request.GetThingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteThingGroupOutcome(DeleteThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteThingGroupOutcome(outcome.GetError());
  }
}

DeleteThingGroupOutcomeCallable IoTClient::DeleteThingGroupCallable(const DeleteThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteThingGroupAsync(const DeleteThingGroupRequest& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteThingGroupAsyncHelper(const DeleteThingGroupRequest& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThingGroup(request), context);
}

DeleteThingTypeOutcome IoTClient::DeleteThingType(const DeleteThingTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-types/";
  ss << request.GetThingTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteThingTypeOutcome(DeleteThingTypeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteThingTypeOutcome(outcome.GetError());
  }
}

DeleteThingTypeOutcomeCallable IoTClient::DeleteThingTypeCallable(const DeleteThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteThingTypeAsync(const DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteThingTypeAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteThingTypeAsyncHelper(const DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThingType(request), context);
}

DeleteTopicRuleOutcome IoTClient::DeleteTopicRule(const DeleteTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTopicRuleOutcome(NoResult());
  }
  else
  {
    return DeleteTopicRuleOutcome(outcome.GetError());
  }
}

DeleteTopicRuleOutcomeCallable IoTClient::DeleteTopicRuleCallable(const DeleteTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTopicRuleAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteTopicRuleAsyncHelper(const DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTopicRule(request), context);
}

DeleteV2LoggingLevelOutcome IoTClient::DeleteV2LoggingLevel(const DeleteV2LoggingLevelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v2LoggingLevel";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteV2LoggingLevelOutcome(NoResult());
  }
  else
  {
    return DeleteV2LoggingLevelOutcome(outcome.GetError());
  }
}

DeleteV2LoggingLevelOutcomeCallable IoTClient::DeleteV2LoggingLevelCallable(const DeleteV2LoggingLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteV2LoggingLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteV2LoggingLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeleteV2LoggingLevelAsync(const DeleteV2LoggingLevelRequest& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteV2LoggingLevelAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeleteV2LoggingLevelAsyncHelper(const DeleteV2LoggingLevelRequest& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteV2LoggingLevel(request), context);
}

DeprecateThingTypeOutcome IoTClient::DeprecateThingType(const DeprecateThingTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-types/";
  ss << request.GetThingTypeName();
  ss << "/deprecate";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeprecateThingTypeOutcome(DeprecateThingTypeResult(outcome.GetResult()));
  }
  else
  {
    return DeprecateThingTypeOutcome(outcome.GetError());
  }
}

DeprecateThingTypeOutcomeCallable IoTClient::DeprecateThingTypeCallable(const DeprecateThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeprecateThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeprecateThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DeprecateThingTypeAsync(const DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeprecateThingTypeAsyncHelper( request, handler, context ); } );
}

void IoTClient::DeprecateThingTypeAsyncHelper(const DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeprecateThingType(request), context);
}

DescribeAuthorizerOutcome IoTClient::DescribeAuthorizer(const DescribeAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/authorizer/";
  ss << request.GetAuthorizerName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAuthorizerOutcome(DescribeAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAuthorizerOutcome(outcome.GetError());
  }
}

DescribeAuthorizerOutcomeCallable IoTClient::DescribeAuthorizerCallable(const DescribeAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeAuthorizerAsync(const DescribeAuthorizerRequest& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeAuthorizerAsyncHelper(const DescribeAuthorizerRequest& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAuthorizer(request), context);
}

DescribeCACertificateOutcome IoTClient::DescribeCACertificate(const DescribeCACertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/cacertificate/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCACertificateOutcome(DescribeCACertificateResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCACertificateOutcome(outcome.GetError());
  }
}

DescribeCACertificateOutcomeCallable IoTClient::DescribeCACertificateCallable(const DescribeCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeCACertificateAsync(const DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCACertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeCACertificateAsyncHelper(const DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCACertificate(request), context);
}

DescribeCertificateOutcome IoTClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCertificateOutcome(DescribeCertificateResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificateOutcome(outcome.GetError());
  }
}

DescribeCertificateOutcomeCallable IoTClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeCertificateAsyncHelper(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificate(request), context);
}

DescribeDefaultAuthorizerOutcome IoTClient::DescribeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/default-authorizer";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDefaultAuthorizerOutcome(DescribeDefaultAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDefaultAuthorizerOutcome(outcome.GetError());
  }
}

DescribeDefaultAuthorizerOutcomeCallable IoTClient::DescribeDefaultAuthorizerCallable(const DescribeDefaultAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDefaultAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDefaultAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeDefaultAuthorizerAsync(const DescribeDefaultAuthorizerRequest& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDefaultAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeDefaultAuthorizerAsyncHelper(const DescribeDefaultAuthorizerRequest& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDefaultAuthorizer(request), context);
}

DescribeEndpointOutcome IoTClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/endpoint";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointOutcome(DescribeEndpointResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointOutcome(outcome.GetError());
  }
}

DescribeEndpointOutcomeCallable IoTClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeEndpointAsyncHelper(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpoint(request), context);
}

DescribeEventConfigurationsOutcome IoTClient::DescribeEventConfigurations(const DescribeEventConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/event-configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventConfigurationsOutcome(DescribeEventConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventConfigurationsOutcome(outcome.GetError());
  }
}

DescribeEventConfigurationsOutcomeCallable IoTClient::DescribeEventConfigurationsCallable(const DescribeEventConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeEventConfigurationsAsync(const DescribeEventConfigurationsRequest& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventConfigurationsAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeEventConfigurationsAsyncHelper(const DescribeEventConfigurationsRequest& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventConfigurations(request), context);
}

DescribeIndexOutcome IoTClient::DescribeIndex(const DescribeIndexRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/indices/";
  ss << request.GetIndexName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeIndexOutcome(DescribeIndexResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIndexOutcome(outcome.GetError());
  }
}

DescribeIndexOutcomeCallable IoTClient::DescribeIndexCallable(const DescribeIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIndexAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeIndexAsyncHelper(const DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIndex(request), context);
}

DescribeJobOutcome IoTClient::DescribeJob(const DescribeJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeJobOutcome(DescribeJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobOutcome(outcome.GetError());
  }
}

DescribeJobOutcomeCallable IoTClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeJobAsyncHelper(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJob(request), context);
}

DescribeJobExecutionOutcome IoTClient::DescribeJobExecution(const DescribeJobExecutionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeJobExecutionOutcome(DescribeJobExecutionResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobExecutionOutcome(outcome.GetError());
  }
}

DescribeJobExecutionOutcomeCallable IoTClient::DescribeJobExecutionCallable(const DescribeJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeJobExecutionAsync(const DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobExecutionAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeJobExecutionAsyncHelper(const DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobExecution(request), context);
}

DescribeRoleAliasOutcome IoTClient::DescribeRoleAlias(const DescribeRoleAliasRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/role-aliases/";
  ss << request.GetRoleAlias();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRoleAliasOutcome(DescribeRoleAliasResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRoleAliasOutcome(outcome.GetError());
  }
}

DescribeRoleAliasOutcomeCallable IoTClient::DescribeRoleAliasCallable(const DescribeRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeRoleAliasAsync(const DescribeRoleAliasRequest& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRoleAliasAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeRoleAliasAsyncHelper(const DescribeRoleAliasRequest& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRoleAlias(request), context);
}

DescribeStreamOutcome IoTClient::DescribeStream(const DescribeStreamRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/streams/";
  ss << request.GetStreamId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeStreamOutcome(DescribeStreamResult(outcome.GetResult()));
  }
  else
  {
    return DescribeStreamOutcome(outcome.GetError());
  }
}

DescribeStreamOutcomeCallable IoTClient::DescribeStreamCallable(const DescribeStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeStreamAsync(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStreamAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeStreamAsyncHelper(const DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStream(request), context);
}

DescribeThingOutcome IoTClient::DescribeThing(const DescribeThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeThingOutcome(DescribeThingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeThingOutcome(outcome.GetError());
  }
}

DescribeThingOutcomeCallable IoTClient::DescribeThingCallable(const DescribeThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingAsync(const DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeThingAsyncHelper(const DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeThing(request), context);
}

DescribeThingGroupOutcome IoTClient::DescribeThingGroup(const DescribeThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/";
  ss << request.GetThingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeThingGroupOutcome(DescribeThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeThingGroupOutcome(outcome.GetError());
  }
}

DescribeThingGroupOutcomeCallable IoTClient::DescribeThingGroupCallable(const DescribeThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingGroupAsync(const DescribeThingGroupRequest& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeThingGroupAsyncHelper(const DescribeThingGroupRequest& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeThingGroup(request), context);
}

DescribeThingRegistrationTaskOutcome IoTClient::DescribeThingRegistrationTask(const DescribeThingRegistrationTaskRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-registration-tasks/";
  ss << request.GetTaskId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeThingRegistrationTaskOutcome(DescribeThingRegistrationTaskResult(outcome.GetResult()));
  }
  else
  {
    return DescribeThingRegistrationTaskOutcome(outcome.GetError());
  }
}

DescribeThingRegistrationTaskOutcomeCallable IoTClient::DescribeThingRegistrationTaskCallable(const DescribeThingRegistrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingRegistrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThingRegistrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingRegistrationTaskAsync(const DescribeThingRegistrationTaskRequest& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeThingRegistrationTaskAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeThingRegistrationTaskAsyncHelper(const DescribeThingRegistrationTaskRequest& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeThingRegistrationTask(request), context);
}

DescribeThingTypeOutcome IoTClient::DescribeThingType(const DescribeThingTypeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-types/";
  ss << request.GetThingTypeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeThingTypeOutcome(DescribeThingTypeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeThingTypeOutcome(outcome.GetError());
  }
}

DescribeThingTypeOutcomeCallable IoTClient::DescribeThingTypeCallable(const DescribeThingTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeThingTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeThingType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DescribeThingTypeAsync(const DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeThingTypeAsyncHelper( request, handler, context ); } );
}

void IoTClient::DescribeThingTypeAsyncHelper(const DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeThingType(request), context);
}

DetachPolicyOutcome IoTClient::DetachPolicy(const DetachPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/target-policies/";
  ss << request.GetPolicyName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachPolicyOutcome(NoResult());
  }
  else
  {
    return DetachPolicyOutcome(outcome.GetError());
  }
}

DetachPolicyOutcomeCallable IoTClient::DetachPolicyCallable(const DetachPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DetachPolicyAsync(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachPolicyAsyncHelper( request, handler, context ); } );
}

void IoTClient::DetachPolicyAsyncHelper(const DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachPolicy(request), context);
}

DetachThingPrincipalOutcome IoTClient::DetachThingPrincipal(const DetachThingPrincipalRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/principals";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachThingPrincipalOutcome(DetachThingPrincipalResult(outcome.GetResult()));
  }
  else
  {
    return DetachThingPrincipalOutcome(outcome.GetError());
  }
}

DetachThingPrincipalOutcomeCallable IoTClient::DetachThingPrincipalCallable(const DetachThingPrincipalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachThingPrincipalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachThingPrincipal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DetachThingPrincipalAsync(const DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachThingPrincipalAsyncHelper( request, handler, context ); } );
}

void IoTClient::DetachThingPrincipalAsyncHelper(const DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachThingPrincipal(request), context);
}

DisableTopicRuleOutcome IoTClient::DisableTopicRule(const DisableTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules/";
  ss << request.GetRuleName();
  ss << "/disable";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableTopicRuleOutcome(NoResult());
  }
  else
  {
    return DisableTopicRuleOutcome(outcome.GetError());
  }
}

DisableTopicRuleOutcomeCallable IoTClient::DisableTopicRuleCallable(const DisableTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableTopicRuleAsyncHelper( request, handler, context ); } );
}

void IoTClient::DisableTopicRuleAsyncHelper(const DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableTopicRule(request), context);
}

EnableTopicRuleOutcome IoTClient::EnableTopicRule(const EnableTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules/";
  ss << request.GetRuleName();
  ss << "/enable";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableTopicRuleOutcome(NoResult());
  }
  else
  {
    return EnableTopicRuleOutcome(outcome.GetError());
  }
}

EnableTopicRuleOutcomeCallable IoTClient::EnableTopicRuleCallable(const EnableTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableTopicRuleAsyncHelper( request, handler, context ); } );
}

void IoTClient::EnableTopicRuleAsyncHelper(const EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableTopicRule(request), context);
}

GetEffectivePoliciesOutcome IoTClient::GetEffectivePolicies(const GetEffectivePoliciesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/effective-policies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEffectivePoliciesOutcome(GetEffectivePoliciesResult(outcome.GetResult()));
  }
  else
  {
    return GetEffectivePoliciesOutcome(outcome.GetError());
  }
}

GetEffectivePoliciesOutcomeCallable IoTClient::GetEffectivePoliciesCallable(const GetEffectivePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEffectivePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEffectivePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetEffectivePoliciesAsync(const GetEffectivePoliciesRequest& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEffectivePoliciesAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetEffectivePoliciesAsyncHelper(const GetEffectivePoliciesRequest& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEffectivePolicies(request), context);
}

GetIndexingConfigurationOutcome IoTClient::GetIndexingConfiguration(const GetIndexingConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/indexing/config";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIndexingConfigurationOutcome(GetIndexingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetIndexingConfigurationOutcome(outcome.GetError());
  }
}

GetIndexingConfigurationOutcomeCallable IoTClient::GetIndexingConfigurationCallable(const GetIndexingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIndexingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIndexingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetIndexingConfigurationAsync(const GetIndexingConfigurationRequest& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIndexingConfigurationAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetIndexingConfigurationAsyncHelper(const GetIndexingConfigurationRequest& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIndexingConfiguration(request), context);
}

GetJobDocumentOutcome IoTClient::GetJobDocument(const GetJobDocumentRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/job-document";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetJobDocumentOutcome(GetJobDocumentResult(outcome.GetResult()));
  }
  else
  {
    return GetJobDocumentOutcome(outcome.GetError());
  }
}

GetJobDocumentOutcomeCallable IoTClient::GetJobDocumentCallable(const GetJobDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetJobDocumentAsync(const GetJobDocumentRequest& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobDocumentAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetJobDocumentAsyncHelper(const GetJobDocumentRequest& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobDocument(request), context);
}

GetLoggingOptionsOutcome IoTClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/loggingOptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoggingOptionsOutcome(GetLoggingOptionsResult(outcome.GetResult()));
  }
  else
  {
    return GetLoggingOptionsOutcome(outcome.GetError());
  }
}

GetLoggingOptionsOutcomeCallable IoTClient::GetLoggingOptionsCallable(const GetLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetLoggingOptionsAsync(const GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLoggingOptionsAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetLoggingOptionsAsyncHelper(const GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoggingOptions(request), context);
}

GetOTAUpdateOutcome IoTClient::GetOTAUpdate(const GetOTAUpdateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/otaUpdates/";
  ss << request.GetOtaUpdateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOTAUpdateOutcome(GetOTAUpdateResult(outcome.GetResult()));
  }
  else
  {
    return GetOTAUpdateOutcome(outcome.GetError());
  }
}

GetOTAUpdateOutcomeCallable IoTClient::GetOTAUpdateCallable(const GetOTAUpdateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOTAUpdateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOTAUpdate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetOTAUpdateAsync(const GetOTAUpdateRequest& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOTAUpdateAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetOTAUpdateAsyncHelper(const GetOTAUpdateRequest& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOTAUpdate(request), context);
}

GetPolicyOutcome IoTClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPolicyOutcome(GetPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetPolicyOutcome(outcome.GetError());
  }
}

GetPolicyOutcomeCallable IoTClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPolicyAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetPolicyAsyncHelper(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicy(request), context);
}

GetPolicyVersionOutcome IoTClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version/";
  ss << request.GetPolicyVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPolicyVersionOutcome(GetPolicyVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetPolicyVersionOutcome(outcome.GetError());
  }
}

GetPolicyVersionOutcomeCallable IoTClient::GetPolicyVersionCallable(const GetPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPolicyVersionAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetPolicyVersionAsyncHelper(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicyVersion(request), context);
}

GetRegistrationCodeOutcome IoTClient::GetRegistrationCode(const GetRegistrationCodeRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/registrationcode";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRegistrationCodeOutcome(GetRegistrationCodeResult(outcome.GetResult()));
  }
  else
  {
    return GetRegistrationCodeOutcome(outcome.GetError());
  }
}

GetRegistrationCodeOutcomeCallable IoTClient::GetRegistrationCodeCallable(const GetRegistrationCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegistrationCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegistrationCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetRegistrationCodeAsync(const GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRegistrationCodeAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetRegistrationCodeAsyncHelper(const GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRegistrationCode(request), context);
}

GetTopicRuleOutcome IoTClient::GetTopicRule(const GetTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTopicRuleOutcome(GetTopicRuleResult(outcome.GetResult()));
  }
  else
  {
    return GetTopicRuleOutcome(outcome.GetError());
  }
}

GetTopicRuleOutcomeCallable IoTClient::GetTopicRuleCallable(const GetTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetTopicRuleAsync(const GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTopicRuleAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetTopicRuleAsyncHelper(const GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTopicRule(request), context);
}

GetV2LoggingOptionsOutcome IoTClient::GetV2LoggingOptions(const GetV2LoggingOptionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v2LoggingOptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetV2LoggingOptionsOutcome(GetV2LoggingOptionsResult(outcome.GetResult()));
  }
  else
  {
    return GetV2LoggingOptionsOutcome(outcome.GetError());
  }
}

GetV2LoggingOptionsOutcomeCallable IoTClient::GetV2LoggingOptionsCallable(const GetV2LoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetV2LoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetV2LoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::GetV2LoggingOptionsAsync(const GetV2LoggingOptionsRequest& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetV2LoggingOptionsAsyncHelper( request, handler, context ); } );
}

void IoTClient::GetV2LoggingOptionsAsyncHelper(const GetV2LoggingOptionsRequest& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetV2LoggingOptions(request), context);
}

ListAttachedPoliciesOutcome IoTClient::ListAttachedPolicies(const ListAttachedPoliciesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/attached-policies/";
  ss << request.GetTarget();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAttachedPoliciesOutcome(ListAttachedPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttachedPoliciesOutcome(outcome.GetError());
  }
}

ListAttachedPoliciesOutcomeCallable IoTClient::ListAttachedPoliciesCallable(const ListAttachedPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttachedPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttachedPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAttachedPoliciesAsync(const ListAttachedPoliciesRequest& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttachedPoliciesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListAttachedPoliciesAsyncHelper(const ListAttachedPoliciesRequest& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttachedPolicies(request), context);
}

ListAuthorizersOutcome IoTClient::ListAuthorizers(const ListAuthorizersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/authorizers/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAuthorizersOutcome(ListAuthorizersResult(outcome.GetResult()));
  }
  else
  {
    return ListAuthorizersOutcome(outcome.GetError());
  }
}

ListAuthorizersOutcomeCallable IoTClient::ListAuthorizersCallable(const ListAuthorizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAuthorizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAuthorizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListAuthorizersAsync(const ListAuthorizersRequest& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAuthorizersAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListAuthorizersAsyncHelper(const ListAuthorizersRequest& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAuthorizers(request), context);
}

ListCACertificatesOutcome IoTClient::ListCACertificates(const ListCACertificatesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/cacertificates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCACertificatesOutcome(ListCACertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListCACertificatesOutcome(outcome.GetError());
  }
}

ListCACertificatesOutcomeCallable IoTClient::ListCACertificatesCallable(const ListCACertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCACertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCACertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCACertificatesAsync(const ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCACertificatesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListCACertificatesAsyncHelper(const ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCACertificates(request), context);
}

ListCertificatesOutcome IoTClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCertificatesOutcome(ListCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListCertificatesOutcome(outcome.GetError());
  }
}

ListCertificatesOutcomeCallable IoTClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCertificatesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListCertificatesAsyncHelper(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificates(request), context);
}

ListCertificatesByCAOutcome IoTClient::ListCertificatesByCA(const ListCertificatesByCARequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates-by-ca/";
  ss << request.GetCaCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCertificatesByCAOutcome(ListCertificatesByCAResult(outcome.GetResult()));
  }
  else
  {
    return ListCertificatesByCAOutcome(outcome.GetError());
  }
}

ListCertificatesByCAOutcomeCallable IoTClient::ListCertificatesByCACallable(const ListCertificatesByCARequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesByCAOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificatesByCA(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListCertificatesByCAAsync(const ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCertificatesByCAAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListCertificatesByCAAsyncHelper(const ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificatesByCA(request), context);
}

ListIndicesOutcome IoTClient::ListIndices(const ListIndicesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/indices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListIndicesOutcome(ListIndicesResult(outcome.GetResult()));
  }
  else
  {
    return ListIndicesOutcome(outcome.GetError());
  }
}

ListIndicesOutcomeCallable IoTClient::ListIndicesCallable(const ListIndicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIndicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIndices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListIndicesAsync(const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIndicesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListIndicesAsyncHelper(const ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIndices(request), context);
}

ListJobExecutionsForJobOutcome IoTClient::ListJobExecutionsForJob(const ListJobExecutionsForJobRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/things";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListJobExecutionsForJobOutcome(ListJobExecutionsForJobResult(outcome.GetResult()));
  }
  else
  {
    return ListJobExecutionsForJobOutcome(outcome.GetError());
  }
}

ListJobExecutionsForJobOutcomeCallable IoTClient::ListJobExecutionsForJobCallable(const ListJobExecutionsForJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobExecutionsForJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobExecutionsForJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobExecutionsForJobAsync(const ListJobExecutionsForJobRequest& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListJobExecutionsForJobAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListJobExecutionsForJobAsyncHelper(const ListJobExecutionsForJobRequest& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobExecutionsForJob(request), context);
}

ListJobExecutionsForThingOutcome IoTClient::ListJobExecutionsForThing(const ListJobExecutionsForThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListJobExecutionsForThingOutcome(ListJobExecutionsForThingResult(outcome.GetResult()));
  }
  else
  {
    return ListJobExecutionsForThingOutcome(outcome.GetError());
  }
}

ListJobExecutionsForThingOutcomeCallable IoTClient::ListJobExecutionsForThingCallable(const ListJobExecutionsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobExecutionsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobExecutionsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobExecutionsForThingAsync(const ListJobExecutionsForThingRequest& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListJobExecutionsForThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListJobExecutionsForThingAsyncHelper(const ListJobExecutionsForThingRequest& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobExecutionsForThing(request), context);
}

ListJobsOutcome IoTClient::ListJobs(const ListJobsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListJobsOutcome(ListJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsOutcome(outcome.GetError());
  }
}

ListJobsOutcomeCallable IoTClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListJobsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListJobsAsyncHelper(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobs(request), context);
}

ListOTAUpdatesOutcome IoTClient::ListOTAUpdates(const ListOTAUpdatesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/otaUpdates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOTAUpdatesOutcome(ListOTAUpdatesResult(outcome.GetResult()));
  }
  else
  {
    return ListOTAUpdatesOutcome(outcome.GetError());
  }
}

ListOTAUpdatesOutcomeCallable IoTClient::ListOTAUpdatesCallable(const ListOTAUpdatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOTAUpdatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOTAUpdates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListOTAUpdatesAsync(const ListOTAUpdatesRequest& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOTAUpdatesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListOTAUpdatesAsyncHelper(const ListOTAUpdatesRequest& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOTAUpdates(request), context);
}

ListOutgoingCertificatesOutcome IoTClient::ListOutgoingCertificates(const ListOutgoingCertificatesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates-out-going";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOutgoingCertificatesOutcome(ListOutgoingCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListOutgoingCertificatesOutcome(outcome.GetError());
  }
}

ListOutgoingCertificatesOutcomeCallable IoTClient::ListOutgoingCertificatesCallable(const ListOutgoingCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOutgoingCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOutgoingCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListOutgoingCertificatesAsync(const ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOutgoingCertificatesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListOutgoingCertificatesAsyncHelper(const ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOutgoingCertificates(request), context);
}

ListPoliciesOutcome IoTClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPoliciesOutcome(ListPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListPoliciesOutcome(outcome.GetError());
  }
}

ListPoliciesOutcomeCallable IoTClient::ListPoliciesCallable(const ListPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPoliciesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListPoliciesAsyncHelper(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicies(request), context);
}

ListPolicyVersionsOutcome IoTClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPolicyVersionsOutcome(ListPolicyVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListPolicyVersionsOutcome(outcome.GetError());
  }
}

ListPolicyVersionsOutcomeCallable IoTClient::ListPolicyVersionsCallable(const ListPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPolicyVersionsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListPolicyVersionsAsyncHelper(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicyVersions(request), context);
}

ListPrincipalThingsOutcome IoTClient::ListPrincipalThings(const ListPrincipalThingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/principals/things";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPrincipalThingsOutcome(ListPrincipalThingsResult(outcome.GetResult()));
  }
  else
  {
    return ListPrincipalThingsOutcome(outcome.GetError());
  }
}

ListPrincipalThingsOutcomeCallable IoTClient::ListPrincipalThingsCallable(const ListPrincipalThingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalThingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrincipalThings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListPrincipalThingsAsync(const ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPrincipalThingsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListPrincipalThingsAsyncHelper(const ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrincipalThings(request), context);
}

ListRoleAliasesOutcome IoTClient::ListRoleAliases(const ListRoleAliasesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/role-aliases";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRoleAliasesOutcome(ListRoleAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListRoleAliasesOutcome(outcome.GetError());
  }
}

ListRoleAliasesOutcomeCallable IoTClient::ListRoleAliasesCallable(const ListRoleAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoleAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoleAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListRoleAliasesAsync(const ListRoleAliasesRequest& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoleAliasesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListRoleAliasesAsyncHelper(const ListRoleAliasesRequest& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoleAliases(request), context);
}

ListStreamsOutcome IoTClient::ListStreams(const ListStreamsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/streams";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListStreamsOutcome(ListStreamsResult(outcome.GetResult()));
  }
  else
  {
    return ListStreamsOutcome(outcome.GetError());
  }
}

ListStreamsOutcomeCallable IoTClient::ListStreamsCallable(const ListStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListStreamsAsync(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListStreamsAsyncHelper(const ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreams(request), context);
}

ListTargetsForPolicyOutcome IoTClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policy-targets/";
  ss << request.GetPolicyName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTargetsForPolicyOutcome(ListTargetsForPolicyResult(outcome.GetResult()));
  }
  else
  {
    return ListTargetsForPolicyOutcome(outcome.GetError());
  }
}

ListTargetsForPolicyOutcomeCallable IoTClient::ListTargetsForPolicyCallable(const ListTargetsForPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetsForPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetsForPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTargetsForPolicyAsync(const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTargetsForPolicyAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListTargetsForPolicyAsyncHelper(const ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTargetsForPolicy(request), context);
}

ListThingGroupsOutcome IoTClient::ListThingGroups(const ListThingGroupsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingGroupsOutcome(ListThingGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListThingGroupsOutcome(outcome.GetError());
  }
}

ListThingGroupsOutcomeCallable IoTClient::ListThingGroupsCallable(const ListThingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingGroupsAsync(const ListThingGroupsRequest& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingGroupsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingGroupsAsyncHelper(const ListThingGroupsRequest& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingGroups(request), context);
}

ListThingGroupsForThingOutcome IoTClient::ListThingGroupsForThing(const ListThingGroupsForThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/thing-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingGroupsForThingOutcome(ListThingGroupsForThingResult(outcome.GetResult()));
  }
  else
  {
    return ListThingGroupsForThingOutcome(outcome.GetError());
  }
}

ListThingGroupsForThingOutcomeCallable IoTClient::ListThingGroupsForThingCallable(const ListThingGroupsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingGroupsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingGroupsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingGroupsForThingAsync(const ListThingGroupsForThingRequest& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingGroupsForThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingGroupsForThingAsyncHelper(const ListThingGroupsForThingRequest& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingGroupsForThing(request), context);
}

ListThingPrincipalsOutcome IoTClient::ListThingPrincipals(const ListThingPrincipalsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/principals";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingPrincipalsOutcome(ListThingPrincipalsResult(outcome.GetResult()));
  }
  else
  {
    return ListThingPrincipalsOutcome(outcome.GetError());
  }
}

ListThingPrincipalsOutcomeCallable IoTClient::ListThingPrincipalsCallable(const ListThingPrincipalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingPrincipalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingPrincipals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingPrincipalsAsync(const ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingPrincipalsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingPrincipalsAsyncHelper(const ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingPrincipals(request), context);
}

ListThingRegistrationTaskReportsOutcome IoTClient::ListThingRegistrationTaskReports(const ListThingRegistrationTaskReportsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-registration-tasks/";
  ss << request.GetTaskId();
  ss << "/reports";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingRegistrationTaskReportsOutcome(ListThingRegistrationTaskReportsResult(outcome.GetResult()));
  }
  else
  {
    return ListThingRegistrationTaskReportsOutcome(outcome.GetError());
  }
}

ListThingRegistrationTaskReportsOutcomeCallable IoTClient::ListThingRegistrationTaskReportsCallable(const ListThingRegistrationTaskReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingRegistrationTaskReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingRegistrationTaskReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingRegistrationTaskReportsAsync(const ListThingRegistrationTaskReportsRequest& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingRegistrationTaskReportsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingRegistrationTaskReportsAsyncHelper(const ListThingRegistrationTaskReportsRequest& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingRegistrationTaskReports(request), context);
}

ListThingRegistrationTasksOutcome IoTClient::ListThingRegistrationTasks(const ListThingRegistrationTasksRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-registration-tasks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingRegistrationTasksOutcome(ListThingRegistrationTasksResult(outcome.GetResult()));
  }
  else
  {
    return ListThingRegistrationTasksOutcome(outcome.GetError());
  }
}

ListThingRegistrationTasksOutcomeCallable IoTClient::ListThingRegistrationTasksCallable(const ListThingRegistrationTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingRegistrationTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingRegistrationTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingRegistrationTasksAsync(const ListThingRegistrationTasksRequest& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingRegistrationTasksAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingRegistrationTasksAsyncHelper(const ListThingRegistrationTasksRequest& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingRegistrationTasks(request), context);
}

ListThingTypesOutcome IoTClient::ListThingTypes(const ListThingTypesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-types";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingTypesOutcome(ListThingTypesResult(outcome.GetResult()));
  }
  else
  {
    return ListThingTypesOutcome(outcome.GetError());
  }
}

ListThingTypesOutcomeCallable IoTClient::ListThingTypesCallable(const ListThingTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingTypesAsync(const ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingTypesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingTypesAsyncHelper(const ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingTypes(request), context);
}

ListThingsOutcome IoTClient::ListThings(const ListThingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingsOutcome(ListThingsResult(outcome.GetResult()));
  }
  else
  {
    return ListThingsOutcome(outcome.GetError());
  }
}

ListThingsOutcomeCallable IoTClient::ListThingsCallable(const ListThingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingsAsync(const ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingsAsyncHelper(const ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThings(request), context);
}

ListThingsInThingGroupOutcome IoTClient::ListThingsInThingGroup(const ListThingsInThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/";
  ss << request.GetThingGroupName();
  ss << "/things";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThingsInThingGroupOutcome(ListThingsInThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return ListThingsInThingGroupOutcome(outcome.GetError());
  }
}

ListThingsInThingGroupOutcomeCallable IoTClient::ListThingsInThingGroupCallable(const ListThingsInThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThingsInThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThingsInThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListThingsInThingGroupAsync(const ListThingsInThingGroupRequest& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThingsInThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListThingsInThingGroupAsyncHelper(const ListThingsInThingGroupRequest& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingsInThingGroup(request), context);
}

ListTopicRulesOutcome IoTClient::ListTopicRules(const ListTopicRulesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTopicRulesOutcome(ListTopicRulesResult(outcome.GetResult()));
  }
  else
  {
    return ListTopicRulesOutcome(outcome.GetError());
  }
}

ListTopicRulesOutcomeCallable IoTClient::ListTopicRulesCallable(const ListTopicRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopicRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListTopicRulesAsync(const ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTopicRulesAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListTopicRulesAsyncHelper(const ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTopicRules(request), context);
}

ListV2LoggingLevelsOutcome IoTClient::ListV2LoggingLevels(const ListV2LoggingLevelsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v2LoggingLevel";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListV2LoggingLevelsOutcome(ListV2LoggingLevelsResult(outcome.GetResult()));
  }
  else
  {
    return ListV2LoggingLevelsOutcome(outcome.GetError());
  }
}

ListV2LoggingLevelsOutcomeCallable IoTClient::ListV2LoggingLevelsCallable(const ListV2LoggingLevelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListV2LoggingLevelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListV2LoggingLevels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ListV2LoggingLevelsAsync(const ListV2LoggingLevelsRequest& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListV2LoggingLevelsAsyncHelper( request, handler, context ); } );
}

void IoTClient::ListV2LoggingLevelsAsyncHelper(const ListV2LoggingLevelsRequest& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListV2LoggingLevels(request), context);
}

RegisterCACertificateOutcome IoTClient::RegisterCACertificate(const RegisterCACertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/cacertificate";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterCACertificateOutcome(RegisterCACertificateResult(outcome.GetResult()));
  }
  else
  {
    return RegisterCACertificateOutcome(outcome.GetError());
  }
}

RegisterCACertificateOutcomeCallable IoTClient::RegisterCACertificateCallable(const RegisterCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterCACertificateAsync(const RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterCACertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::RegisterCACertificateAsyncHelper(const RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterCACertificate(request), context);
}

RegisterCertificateOutcome IoTClient::RegisterCertificate(const RegisterCertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificate/register";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterCertificateOutcome(RegisterCertificateResult(outcome.GetResult()));
  }
  else
  {
    return RegisterCertificateOutcome(outcome.GetError());
  }
}

RegisterCertificateOutcomeCallable IoTClient::RegisterCertificateCallable(const RegisterCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterCertificateAsync(const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterCertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::RegisterCertificateAsyncHelper(const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterCertificate(request), context);
}

RegisterThingOutcome IoTClient::RegisterThing(const RegisterThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterThingOutcome(RegisterThingResult(outcome.GetResult()));
  }
  else
  {
    return RegisterThingOutcome(outcome.GetError());
  }
}

RegisterThingOutcomeCallable IoTClient::RegisterThingCallable(const RegisterThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RegisterThingAsync(const RegisterThingRequest& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::RegisterThingAsyncHelper(const RegisterThingRequest& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterThing(request), context);
}

RejectCertificateTransferOutcome IoTClient::RejectCertificateTransfer(const RejectCertificateTransferRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/reject-certificate-transfer/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectCertificateTransferOutcome(NoResult());
  }
  else
  {
    return RejectCertificateTransferOutcome(outcome.GetError());
  }
}

RejectCertificateTransferOutcomeCallable IoTClient::RejectCertificateTransferCallable(const RejectCertificateTransferRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectCertificateTransferOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectCertificateTransfer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RejectCertificateTransferAsync(const RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectCertificateTransferAsyncHelper( request, handler, context ); } );
}

void IoTClient::RejectCertificateTransferAsyncHelper(const RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectCertificateTransfer(request), context);
}

RemoveThingFromThingGroupOutcome IoTClient::RemoveThingFromThingGroup(const RemoveThingFromThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/removeThingFromThingGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveThingFromThingGroupOutcome(RemoveThingFromThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return RemoveThingFromThingGroupOutcome(outcome.GetError());
  }
}

RemoveThingFromThingGroupOutcomeCallable IoTClient::RemoveThingFromThingGroupCallable(const RemoveThingFromThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveThingFromThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveThingFromThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::RemoveThingFromThingGroupAsync(const RemoveThingFromThingGroupRequest& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveThingFromThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::RemoveThingFromThingGroupAsyncHelper(const RemoveThingFromThingGroupRequest& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveThingFromThingGroup(request), context);
}

ReplaceTopicRuleOutcome IoTClient::ReplaceTopicRule(const ReplaceTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/rules/";
  ss << request.GetRuleName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReplaceTopicRuleOutcome(NoResult());
  }
  else
  {
    return ReplaceTopicRuleOutcome(outcome.GetError());
  }
}

ReplaceTopicRuleOutcomeCallable IoTClient::ReplaceTopicRuleCallable(const ReplaceTopicRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReplaceTopicRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReplaceTopicRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::ReplaceTopicRuleAsync(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReplaceTopicRuleAsyncHelper( request, handler, context ); } );
}

void IoTClient::ReplaceTopicRuleAsyncHelper(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceTopicRule(request), context);
}

SearchIndexOutcome IoTClient::SearchIndex(const SearchIndexRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/indices/search";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchIndexOutcome(SearchIndexResult(outcome.GetResult()));
  }
  else
  {
    return SearchIndexOutcome(outcome.GetError());
  }
}

SearchIndexOutcomeCallable IoTClient::SearchIndexCallable(const SearchIndexRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchIndexOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchIndex(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SearchIndexAsync(const SearchIndexRequest& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchIndexAsyncHelper( request, handler, context ); } );
}

void IoTClient::SearchIndexAsyncHelper(const SearchIndexRequest& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchIndex(request), context);
}

SetDefaultAuthorizerOutcome IoTClient::SetDefaultAuthorizer(const SetDefaultAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/default-authorizer";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetDefaultAuthorizerOutcome(SetDefaultAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return SetDefaultAuthorizerOutcome(outcome.GetError());
  }
}

SetDefaultAuthorizerOutcomeCallable IoTClient::SetDefaultAuthorizerCallable(const SetDefaultAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetDefaultAuthorizerAsync(const SetDefaultAuthorizerRequest& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDefaultAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::SetDefaultAuthorizerAsyncHelper(const SetDefaultAuthorizerRequest& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultAuthorizer(request), context);
}

SetDefaultPolicyVersionOutcome IoTClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version/";
  ss << request.GetPolicyVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetDefaultPolicyVersionOutcome(NoResult());
  }
  else
  {
    return SetDefaultPolicyVersionOutcome(outcome.GetError());
  }
}

SetDefaultPolicyVersionOutcomeCallable IoTClient::SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDefaultPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDefaultPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDefaultPolicyVersionAsyncHelper( request, handler, context ); } );
}

void IoTClient::SetDefaultPolicyVersionAsyncHelper(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultPolicyVersion(request), context);
}

SetLoggingOptionsOutcome IoTClient::SetLoggingOptions(const SetLoggingOptionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/loggingOptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetLoggingOptionsOutcome(NoResult());
  }
  else
  {
    return SetLoggingOptionsOutcome(outcome.GetError());
  }
}

SetLoggingOptionsOutcomeCallable IoTClient::SetLoggingOptionsCallable(const SetLoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetLoggingOptionsAsync(const SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetLoggingOptionsAsyncHelper( request, handler, context ); } );
}

void IoTClient::SetLoggingOptionsAsyncHelper(const SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoggingOptions(request), context);
}

SetV2LoggingLevelOutcome IoTClient::SetV2LoggingLevel(const SetV2LoggingLevelRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v2LoggingLevel";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetV2LoggingLevelOutcome(NoResult());
  }
  else
  {
    return SetV2LoggingLevelOutcome(outcome.GetError());
  }
}

SetV2LoggingLevelOutcomeCallable IoTClient::SetV2LoggingLevelCallable(const SetV2LoggingLevelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetV2LoggingLevelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetV2LoggingLevel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetV2LoggingLevelAsync(const SetV2LoggingLevelRequest& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetV2LoggingLevelAsyncHelper( request, handler, context ); } );
}

void IoTClient::SetV2LoggingLevelAsyncHelper(const SetV2LoggingLevelRequest& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetV2LoggingLevel(request), context);
}

SetV2LoggingOptionsOutcome IoTClient::SetV2LoggingOptions(const SetV2LoggingOptionsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/v2LoggingOptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetV2LoggingOptionsOutcome(NoResult());
  }
  else
  {
    return SetV2LoggingOptionsOutcome(outcome.GetError());
  }
}

SetV2LoggingOptionsOutcomeCallable IoTClient::SetV2LoggingOptionsCallable(const SetV2LoggingOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetV2LoggingOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetV2LoggingOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::SetV2LoggingOptionsAsync(const SetV2LoggingOptionsRequest& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetV2LoggingOptionsAsyncHelper( request, handler, context ); } );
}

void IoTClient::SetV2LoggingOptionsAsyncHelper(const SetV2LoggingOptionsRequest& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetV2LoggingOptions(request), context);
}

StartThingRegistrationTaskOutcome IoTClient::StartThingRegistrationTask(const StartThingRegistrationTaskRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-registration-tasks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartThingRegistrationTaskOutcome(StartThingRegistrationTaskResult(outcome.GetResult()));
  }
  else
  {
    return StartThingRegistrationTaskOutcome(outcome.GetError());
  }
}

StartThingRegistrationTaskOutcomeCallable IoTClient::StartThingRegistrationTaskCallable(const StartThingRegistrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartThingRegistrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartThingRegistrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StartThingRegistrationTaskAsync(const StartThingRegistrationTaskRequest& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartThingRegistrationTaskAsyncHelper( request, handler, context ); } );
}

void IoTClient::StartThingRegistrationTaskAsyncHelper(const StartThingRegistrationTaskRequest& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartThingRegistrationTask(request), context);
}

StopThingRegistrationTaskOutcome IoTClient::StopThingRegistrationTask(const StopThingRegistrationTaskRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-registration-tasks/";
  ss << request.GetTaskId();
  ss << "/cancel";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopThingRegistrationTaskOutcome(StopThingRegistrationTaskResult(outcome.GetResult()));
  }
  else
  {
    return StopThingRegistrationTaskOutcome(outcome.GetError());
  }
}

StopThingRegistrationTaskOutcomeCallable IoTClient::StopThingRegistrationTaskCallable(const StopThingRegistrationTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopThingRegistrationTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopThingRegistrationTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::StopThingRegistrationTaskAsync(const StopThingRegistrationTaskRequest& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopThingRegistrationTaskAsyncHelper( request, handler, context ); } );
}

void IoTClient::StopThingRegistrationTaskAsyncHelper(const StopThingRegistrationTaskRequest& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopThingRegistrationTask(request), context);
}

TestAuthorizationOutcome IoTClient::TestAuthorization(const TestAuthorizationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/test-authorization";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestAuthorizationOutcome(TestAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return TestAuthorizationOutcome(outcome.GetError());
  }
}

TestAuthorizationOutcomeCallable IoTClient::TestAuthorizationCallable(const TestAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TestAuthorizationAsync(const TestAuthorizationRequest& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestAuthorizationAsyncHelper( request, handler, context ); } );
}

void IoTClient::TestAuthorizationAsyncHelper(const TestAuthorizationRequest& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestAuthorization(request), context);
}

TestInvokeAuthorizerOutcome IoTClient::TestInvokeAuthorizer(const TestInvokeAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/authorizer/";
  ss << request.GetAuthorizerName();
  ss << "/test";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestInvokeAuthorizerOutcome(TestInvokeAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return TestInvokeAuthorizerOutcome(outcome.GetError());
  }
}

TestInvokeAuthorizerOutcomeCallable IoTClient::TestInvokeAuthorizerCallable(const TestInvokeAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestInvokeAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestInvokeAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TestInvokeAuthorizerAsync(const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestInvokeAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::TestInvokeAuthorizerAsyncHelper(const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestInvokeAuthorizer(request), context);
}

TransferCertificateOutcome IoTClient::TransferCertificate(const TransferCertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/transfer-certificate/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TransferCertificateOutcome(TransferCertificateResult(outcome.GetResult()));
  }
  else
  {
    return TransferCertificateOutcome(outcome.GetError());
  }
}

TransferCertificateOutcomeCallable IoTClient::TransferCertificateCallable(const TransferCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransferCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransferCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::TransferCertificateAsync(const TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TransferCertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::TransferCertificateAsyncHelper(const TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransferCertificate(request), context);
}

UpdateAuthorizerOutcome IoTClient::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/authorizer/";
  ss << request.GetAuthorizerName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAuthorizerOutcome(UpdateAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAuthorizerOutcome(outcome.GetError());
  }
}

UpdateAuthorizerOutcomeCallable IoTClient::UpdateAuthorizerCallable(const UpdateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateAuthorizerAsync(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAuthorizerAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateAuthorizerAsyncHelper(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAuthorizer(request), context);
}

UpdateCACertificateOutcome IoTClient::UpdateCACertificate(const UpdateCACertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/cacertificate/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCACertificateOutcome(NoResult());
  }
  else
  {
    return UpdateCACertificateOutcome(outcome.GetError());
  }
}

UpdateCACertificateOutcomeCallable IoTClient::UpdateCACertificateCallable(const UpdateCACertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCACertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCACertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateCACertificateAsync(const UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCACertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateCACertificateAsyncHelper(const UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCACertificate(request), context);
}

UpdateCertificateOutcome IoTClient::UpdateCertificate(const UpdateCertificateRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/certificates/";
  ss << request.GetCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateCertificateOutcome(NoResult());
  }
  else
  {
    return UpdateCertificateOutcome(outcome.GetError());
  }
}

UpdateCertificateOutcomeCallable IoTClient::UpdateCertificateCallable(const UpdateCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateCertificateAsync(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCertificateAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateCertificateAsyncHelper(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCertificate(request), context);
}

UpdateEventConfigurationsOutcome IoTClient::UpdateEventConfigurations(const UpdateEventConfigurationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/event-configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEventConfigurationsOutcome(UpdateEventConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEventConfigurationsOutcome(outcome.GetError());
  }
}

UpdateEventConfigurationsOutcomeCallable IoTClient::UpdateEventConfigurationsCallable(const UpdateEventConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateEventConfigurationsAsync(const UpdateEventConfigurationsRequest& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEventConfigurationsAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateEventConfigurationsAsyncHelper(const UpdateEventConfigurationsRequest& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEventConfigurations(request), context);
}

UpdateIndexingConfigurationOutcome IoTClient::UpdateIndexingConfiguration(const UpdateIndexingConfigurationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/indexing/config";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIndexingConfigurationOutcome(UpdateIndexingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIndexingConfigurationOutcome(outcome.GetError());
  }
}

UpdateIndexingConfigurationOutcomeCallable IoTClient::UpdateIndexingConfigurationCallable(const UpdateIndexingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIndexingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIndexingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateIndexingConfigurationAsync(const UpdateIndexingConfigurationRequest& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIndexingConfigurationAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateIndexingConfigurationAsyncHelper(const UpdateIndexingConfigurationRequest& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIndexingConfiguration(request), context);
}

UpdateRoleAliasOutcome IoTClient::UpdateRoleAlias(const UpdateRoleAliasRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/role-aliases/";
  ss << request.GetRoleAlias();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRoleAliasOutcome(UpdateRoleAliasResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoleAliasOutcome(outcome.GetError());
  }
}

UpdateRoleAliasOutcomeCallable IoTClient::UpdateRoleAliasCallable(const UpdateRoleAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoleAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoleAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateRoleAliasAsync(const UpdateRoleAliasRequest& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoleAliasAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateRoleAliasAsyncHelper(const UpdateRoleAliasRequest& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoleAlias(request), context);
}

UpdateStreamOutcome IoTClient::UpdateStream(const UpdateStreamRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/streams/";
  ss << request.GetStreamId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateStreamOutcome(UpdateStreamResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamOutcome(outcome.GetError());
  }
}

UpdateStreamOutcomeCallable IoTClient::UpdateStreamCallable(const UpdateStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateStreamAsync(const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateStreamAsyncHelper(const UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStream(request), context);
}

UpdateThingOutcome IoTClient::UpdateThing(const UpdateThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/things/";
  ss << request.GetThingName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateThingOutcome(UpdateThingResult(outcome.GetResult()));
  }
  else
  {
    return UpdateThingOutcome(outcome.GetError());
  }
}

UpdateThingOutcomeCallable IoTClient::UpdateThingCallable(const UpdateThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateThingAsync(const UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateThingAsyncHelper(const UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThing(request), context);
}

UpdateThingGroupOutcome IoTClient::UpdateThingGroup(const UpdateThingGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/";
  ss << request.GetThingGroupName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateThingGroupOutcome(UpdateThingGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateThingGroupOutcome(outcome.GetError());
  }
}

UpdateThingGroupOutcomeCallable IoTClient::UpdateThingGroupCallable(const UpdateThingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateThingGroupAsync(const UpdateThingGroupRequest& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateThingGroupAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateThingGroupAsyncHelper(const UpdateThingGroupRequest& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThingGroup(request), context);
}

UpdateThingGroupsForThingOutcome IoTClient::UpdateThingGroupsForThing(const UpdateThingGroupsForThingRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/thing-groups/updateThingGroupsForThing";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateThingGroupsForThingOutcome(UpdateThingGroupsForThingResult(outcome.GetResult()));
  }
  else
  {
    return UpdateThingGroupsForThingOutcome(outcome.GetError());
  }
}

UpdateThingGroupsForThingOutcomeCallable IoTClient::UpdateThingGroupsForThingCallable(const UpdateThingGroupsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingGroupsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThingGroupsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTClient::UpdateThingGroupsForThingAsync(const UpdateThingGroupsForThingRequest& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateThingGroupsForThingAsyncHelper( request, handler, context ); } );
}

void IoTClient::UpdateThingGroupsForThingAsyncHelper(const UpdateThingGroupsForThingRequest& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThingGroupsForThing(request), context);
}

