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
#include <aws/iot/IoTClient.h>
#include <aws/iot/IoTEndpoint.h>
#include <aws/iot/IoTErrorMarshaller.h>
#include <aws/iot/model/AcceptCertificateTransferRequest.h>
#include <aws/iot/model/AttachPrincipalPolicyRequest.h>
#include <aws/iot/model/AttachThingPrincipalRequest.h>
#include <aws/iot/model/CancelCertificateTransferRequest.h>
#include <aws/iot/model/CreateCertificateFromCsrRequest.h>
#include <aws/iot/model/CreateKeysAndCertificateRequest.h>
#include <aws/iot/model/CreatePolicyRequest.h>
#include <aws/iot/model/CreatePolicyVersionRequest.h>
#include <aws/iot/model/CreateThingRequest.h>
#include <aws/iot/model/CreateTopicRuleRequest.h>
#include <aws/iot/model/DeleteCACertificateRequest.h>
#include <aws/iot/model/DeleteCertificateRequest.h>
#include <aws/iot/model/DeletePolicyRequest.h>
#include <aws/iot/model/DeletePolicyVersionRequest.h>
#include <aws/iot/model/DeleteRegistrationCodeRequest.h>
#include <aws/iot/model/DeleteThingRequest.h>
#include <aws/iot/model/DeleteTopicRuleRequest.h>
#include <aws/iot/model/DescribeCACertificateRequest.h>
#include <aws/iot/model/DescribeCertificateRequest.h>
#include <aws/iot/model/DescribeEndpointRequest.h>
#include <aws/iot/model/DescribeThingRequest.h>
#include <aws/iot/model/DetachPrincipalPolicyRequest.h>
#include <aws/iot/model/DetachThingPrincipalRequest.h>
#include <aws/iot/model/DisableTopicRuleRequest.h>
#include <aws/iot/model/EnableTopicRuleRequest.h>
#include <aws/iot/model/GetLoggingOptionsRequest.h>
#include <aws/iot/model/GetPolicyRequest.h>
#include <aws/iot/model/GetPolicyVersionRequest.h>
#include <aws/iot/model/GetRegistrationCodeRequest.h>
#include <aws/iot/model/GetTopicRuleRequest.h>
#include <aws/iot/model/ListCACertificatesRequest.h>
#include <aws/iot/model/ListCertificatesRequest.h>
#include <aws/iot/model/ListCertificatesByCARequest.h>
#include <aws/iot/model/ListPoliciesRequest.h>
#include <aws/iot/model/ListPolicyVersionsRequest.h>
#include <aws/iot/model/ListPrincipalPoliciesRequest.h>
#include <aws/iot/model/ListPrincipalThingsRequest.h>
#include <aws/iot/model/ListThingPrincipalsRequest.h>
#include <aws/iot/model/ListThingsRequest.h>
#include <aws/iot/model/ListTopicRulesRequest.h>
#include <aws/iot/model/RegisterCACertificateRequest.h>
#include <aws/iot/model/RegisterCertificateRequest.h>
#include <aws/iot/model/RejectCertificateTransferRequest.h>
#include <aws/iot/model/ReplaceTopicRuleRequest.h>
#include <aws/iot/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iot/model/SetLoggingOptionsRequest.h>
#include <aws/iot/model/TransferCertificateRequest.h>
#include <aws/iot/model/UpdateCACertificateRequest.h>
#include <aws/iot/model/UpdateCertificateRequest.h>
#include <aws/iot/model/UpdateThingRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::IoTClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTClient::IoTClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << IoTEndpoint::ForRegion(config.region);
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
  ss << m_uri << "/accept-certificate-transfer/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::AcceptCertificateTransfer, this, request);
}

void IoTClient::AcceptCertificateTransferAsync(const AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::AcceptCertificateTransferAsyncHelper, this, request, handler, context);
}

void IoTClient::AcceptCertificateTransferAsyncHelper(const AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptCertificateTransfer(request), context);
}

AttachPrincipalPolicyOutcome IoTClient::AttachPrincipalPolicy(const AttachPrincipalPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/principal-policies/";
  ss << request.GetPolicyName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return AttachPrincipalPolicyOutcome(NoResult());
  }
  else
  {
    return AttachPrincipalPolicyOutcome(outcome.GetError());
  }
}

AttachPrincipalPolicyOutcomeCallable IoTClient::AttachPrincipalPolicyCallable(const AttachPrincipalPolicyRequest& request) const
{
  return std::async(std::launch::async, &IoTClient::AttachPrincipalPolicy, this, request);
}

void IoTClient::AttachPrincipalPolicyAsync(const AttachPrincipalPolicyRequest& request, const AttachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::AttachPrincipalPolicyAsyncHelper, this, request, handler, context);
}

void IoTClient::AttachPrincipalPolicyAsyncHelper(const AttachPrincipalPolicyRequest& request, const AttachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachPrincipalPolicy(request), context);
}

AttachThingPrincipalOutcome IoTClient::AttachThingPrincipal(const AttachThingPrincipalRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();
  ss << "/principals";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
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
  return std::async(std::launch::async, &IoTClient::AttachThingPrincipal, this, request);
}

void IoTClient::AttachThingPrincipalAsync(const AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::AttachThingPrincipalAsyncHelper, this, request, handler, context);
}

void IoTClient::AttachThingPrincipalAsyncHelper(const AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachThingPrincipal(request), context);
}

CancelCertificateTransferOutcome IoTClient::CancelCertificateTransfer(const CancelCertificateTransferRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/cancel-certificate-transfer/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::CancelCertificateTransfer, this, request);
}

void IoTClient::CancelCertificateTransferAsync(const CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CancelCertificateTransferAsyncHelper, this, request, handler, context);
}

void IoTClient::CancelCertificateTransferAsyncHelper(const CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelCertificateTransfer(request), context);
}

CreateCertificateFromCsrOutcome IoTClient::CreateCertificateFromCsr(const CreateCertificateFromCsrRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificates";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::CreateCertificateFromCsr, this, request);
}

void IoTClient::CreateCertificateFromCsrAsync(const CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CreateCertificateFromCsrAsyncHelper, this, request, handler, context);
}

void IoTClient::CreateCertificateFromCsrAsyncHelper(const CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCertificateFromCsr(request), context);
}

CreateKeysAndCertificateOutcome IoTClient::CreateKeysAndCertificate(const CreateKeysAndCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/keys-and-certificate";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::CreateKeysAndCertificate, this, request);
}

void IoTClient::CreateKeysAndCertificateAsync(const CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CreateKeysAndCertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::CreateKeysAndCertificateAsyncHelper(const CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeysAndCertificate(request), context);
}

CreatePolicyOutcome IoTClient::CreatePolicy(const CreatePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::CreatePolicy, this, request);
}

void IoTClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CreatePolicyAsyncHelper, this, request, handler, context);
}

void IoTClient::CreatePolicyAsyncHelper(const CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicy(request), context);
}

CreatePolicyVersionOutcome IoTClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::CreatePolicyVersion, this, request);
}

void IoTClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CreatePolicyVersionAsyncHelper, this, request, handler, context);
}

void IoTClient::CreatePolicyVersionAsyncHelper(const CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePolicyVersion(request), context);
}

CreateThingOutcome IoTClient::CreateThing(const CreateThingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::CreateThing, this, request);
}

void IoTClient::CreateThingAsync(const CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CreateThingAsyncHelper, this, request, handler, context);
}

void IoTClient::CreateThingAsyncHelper(const CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateThing(request), context);
}

CreateTopicRuleOutcome IoTClient::CreateTopicRule(const CreateTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules/";
  ss << request.GetRuleName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::CreateTopicRule, this, request);
}

void IoTClient::CreateTopicRuleAsync(const CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::CreateTopicRuleAsyncHelper, this, request, handler, context);
}

void IoTClient::CreateTopicRuleAsyncHelper(const CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTopicRule(request), context);
}

DeleteCACertificateOutcome IoTClient::DeleteCACertificate(const DeleteCACertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/cacertificate/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeleteCACertificate, this, request);
}

void IoTClient::DeleteCACertificateAsync(const DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeleteCACertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::DeleteCACertificateAsyncHelper(const DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCACertificate(request), context);
}

DeleteCertificateOutcome IoTClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificates/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeleteCertificate, this, request);
}

void IoTClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeleteCertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::DeleteCertificateAsyncHelper(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificate(request), context);
}

DeletePolicyOutcome IoTClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeletePolicy, this, request);
}

void IoTClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeletePolicyAsyncHelper, this, request, handler, context);
}

void IoTClient::DeletePolicyAsyncHelper(const DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicy(request), context);
}

DeletePolicyVersionOutcome IoTClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version/";
  ss << request.GetPolicyVersionId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeletePolicyVersion, this, request);
}

void IoTClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeletePolicyVersionAsyncHelper, this, request, handler, context);
}

void IoTClient::DeletePolicyVersionAsyncHelper(const DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePolicyVersion(request), context);
}

DeleteRegistrationCodeOutcome IoTClient::DeleteRegistrationCode(const DeleteRegistrationCodeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/registrationcode";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeleteRegistrationCode, this, request);
}

void IoTClient::DeleteRegistrationCodeAsync(const DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeleteRegistrationCodeAsyncHelper, this, request, handler, context);
}

void IoTClient::DeleteRegistrationCodeAsyncHelper(const DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRegistrationCode(request), context);
}

DeleteThingOutcome IoTClient::DeleteThing(const DeleteThingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeleteThing, this, request);
}

void IoTClient::DeleteThingAsync(const DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeleteThingAsyncHelper, this, request, handler, context);
}

void IoTClient::DeleteThingAsyncHelper(const DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThing(request), context);
}

DeleteTopicRuleOutcome IoTClient::DeleteTopicRule(const DeleteTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules/";
  ss << request.GetRuleName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DeleteTopicRule, this, request);
}

void IoTClient::DeleteTopicRuleAsync(const DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DeleteTopicRuleAsyncHelper, this, request, handler, context);
}

void IoTClient::DeleteTopicRuleAsyncHelper(const DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTopicRule(request), context);
}

DescribeCACertificateOutcome IoTClient::DescribeCACertificate(const DescribeCACertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/cacertificate/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::DescribeCACertificate, this, request);
}

void IoTClient::DescribeCACertificateAsync(const DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DescribeCACertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::DescribeCACertificateAsyncHelper(const DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCACertificate(request), context);
}

DescribeCertificateOutcome IoTClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificates/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::DescribeCertificate, this, request);
}

void IoTClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DescribeCertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::DescribeCertificateAsyncHelper(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificate(request), context);
}

DescribeEndpointOutcome IoTClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/endpoint";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::DescribeEndpoint, this, request);
}

void IoTClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DescribeEndpointAsyncHelper, this, request, handler, context);
}

void IoTClient::DescribeEndpointAsyncHelper(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpoint(request), context);
}

DescribeThingOutcome IoTClient::DescribeThing(const DescribeThingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::DescribeThing, this, request);
}

void IoTClient::DescribeThingAsync(const DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DescribeThingAsyncHelper, this, request, handler, context);
}

void IoTClient::DescribeThingAsyncHelper(const DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeThing(request), context);
}

DetachPrincipalPolicyOutcome IoTClient::DetachPrincipalPolicy(const DetachPrincipalPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/principal-policies/";
  ss << request.GetPolicyName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DetachPrincipalPolicyOutcome(NoResult());
  }
  else
  {
    return DetachPrincipalPolicyOutcome(outcome.GetError());
  }
}

DetachPrincipalPolicyOutcomeCallable IoTClient::DetachPrincipalPolicyCallable(const DetachPrincipalPolicyRequest& request) const
{
  return std::async(std::launch::async, &IoTClient::DetachPrincipalPolicy, this, request);
}

void IoTClient::DetachPrincipalPolicyAsync(const DetachPrincipalPolicyRequest& request, const DetachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DetachPrincipalPolicyAsyncHelper, this, request, handler, context);
}

void IoTClient::DetachPrincipalPolicyAsyncHelper(const DetachPrincipalPolicyRequest& request, const DetachPrincipalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachPrincipalPolicy(request), context);
}

DetachThingPrincipalOutcome IoTClient::DetachThingPrincipal(const DetachThingPrincipalRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();
  ss << "/principals";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
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
  return std::async(std::launch::async, &IoTClient::DetachThingPrincipal, this, request);
}

void IoTClient::DetachThingPrincipalAsync(const DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DetachThingPrincipalAsyncHelper, this, request, handler, context);
}

void IoTClient::DetachThingPrincipalAsyncHelper(const DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachThingPrincipal(request), context);
}

DisableTopicRuleOutcome IoTClient::DisableTopicRule(const DisableTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules/";
  ss << request.GetRuleName();
  ss << "/disable";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::DisableTopicRule, this, request);
}

void IoTClient::DisableTopicRuleAsync(const DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::DisableTopicRuleAsyncHelper, this, request, handler, context);
}

void IoTClient::DisableTopicRuleAsyncHelper(const DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableTopicRule(request), context);
}

EnableTopicRuleOutcome IoTClient::EnableTopicRule(const EnableTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules/";
  ss << request.GetRuleName();
  ss << "/enable";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::EnableTopicRule, this, request);
}

void IoTClient::EnableTopicRuleAsync(const EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::EnableTopicRuleAsyncHelper, this, request, handler, context);
}

void IoTClient::EnableTopicRuleAsyncHelper(const EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableTopicRule(request), context);
}

GetLoggingOptionsOutcome IoTClient::GetLoggingOptions(const GetLoggingOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/loggingOptions";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::GetLoggingOptions, this, request);
}

void IoTClient::GetLoggingOptionsAsync(const GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::GetLoggingOptionsAsyncHelper, this, request, handler, context);
}

void IoTClient::GetLoggingOptionsAsyncHelper(const GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoggingOptions(request), context);
}

GetPolicyOutcome IoTClient::GetPolicy(const GetPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::GetPolicy, this, request);
}

void IoTClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::GetPolicyAsyncHelper, this, request, handler, context);
}

void IoTClient::GetPolicyAsyncHelper(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicy(request), context);
}

GetPolicyVersionOutcome IoTClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version/";
  ss << request.GetPolicyVersionId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::GetPolicyVersion, this, request);
}

void IoTClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::GetPolicyVersionAsyncHelper, this, request, handler, context);
}

void IoTClient::GetPolicyVersionAsyncHelper(const GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPolicyVersion(request), context);
}

GetRegistrationCodeOutcome IoTClient::GetRegistrationCode(const GetRegistrationCodeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/registrationcode";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::GetRegistrationCode, this, request);
}

void IoTClient::GetRegistrationCodeAsync(const GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::GetRegistrationCodeAsyncHelper, this, request, handler, context);
}

void IoTClient::GetRegistrationCodeAsyncHelper(const GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRegistrationCode(request), context);
}

GetTopicRuleOutcome IoTClient::GetTopicRule(const GetTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules/";
  ss << request.GetRuleName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::GetTopicRule, this, request);
}

void IoTClient::GetTopicRuleAsync(const GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::GetTopicRuleAsyncHelper, this, request, handler, context);
}

void IoTClient::GetTopicRuleAsyncHelper(const GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTopicRule(request), context);
}

ListCACertificatesOutcome IoTClient::ListCACertificates(const ListCACertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/cacertificates";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListCACertificates, this, request);
}

void IoTClient::ListCACertificatesAsync(const ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListCACertificatesAsyncHelper, this, request, handler, context);
}

void IoTClient::ListCACertificatesAsyncHelper(const ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCACertificates(request), context);
}

ListCertificatesOutcome IoTClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificates";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListCertificates, this, request);
}

void IoTClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListCertificatesAsyncHelper, this, request, handler, context);
}

void IoTClient::ListCertificatesAsyncHelper(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificates(request), context);
}

ListCertificatesByCAOutcome IoTClient::ListCertificatesByCA(const ListCertificatesByCARequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificates-by-ca/";
  ss << request.GetCaCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListCertificatesByCA, this, request);
}

void IoTClient::ListCertificatesByCAAsync(const ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListCertificatesByCAAsyncHelper, this, request, handler, context);
}

void IoTClient::ListCertificatesByCAAsyncHelper(const ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificatesByCA(request), context);
}

ListPoliciesOutcome IoTClient::ListPolicies(const ListPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListPolicies, this, request);
}

void IoTClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListPoliciesAsyncHelper, this, request, handler, context);
}

void IoTClient::ListPoliciesAsyncHelper(const ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicies(request), context);
}

ListPolicyVersionsOutcome IoTClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListPolicyVersions, this, request);
}

void IoTClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListPolicyVersionsAsyncHelper, this, request, handler, context);
}

void IoTClient::ListPolicyVersionsAsyncHelper(const ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPolicyVersions(request), context);
}

ListPrincipalPoliciesOutcome IoTClient::ListPrincipalPolicies(const ListPrincipalPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/principal-policies";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPrincipalPoliciesOutcome(ListPrincipalPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListPrincipalPoliciesOutcome(outcome.GetError());
  }
}

ListPrincipalPoliciesOutcomeCallable IoTClient::ListPrincipalPoliciesCallable(const ListPrincipalPoliciesRequest& request) const
{
  return std::async(std::launch::async, &IoTClient::ListPrincipalPolicies, this, request);
}

void IoTClient::ListPrincipalPoliciesAsync(const ListPrincipalPoliciesRequest& request, const ListPrincipalPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListPrincipalPoliciesAsyncHelper, this, request, handler, context);
}

void IoTClient::ListPrincipalPoliciesAsyncHelper(const ListPrincipalPoliciesRequest& request, const ListPrincipalPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrincipalPolicies(request), context);
}

ListPrincipalThingsOutcome IoTClient::ListPrincipalThings(const ListPrincipalThingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/principals/things";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListPrincipalThings, this, request);
}

void IoTClient::ListPrincipalThingsAsync(const ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListPrincipalThingsAsyncHelper, this, request, handler, context);
}

void IoTClient::ListPrincipalThingsAsyncHelper(const ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrincipalThings(request), context);
}

ListThingPrincipalsOutcome IoTClient::ListThingPrincipals(const ListThingPrincipalsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();
  ss << "/principals";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListThingPrincipals, this, request);
}

void IoTClient::ListThingPrincipalsAsync(const ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListThingPrincipalsAsyncHelper, this, request, handler, context);
}

void IoTClient::ListThingPrincipalsAsyncHelper(const ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThingPrincipals(request), context);
}

ListThingsOutcome IoTClient::ListThings(const ListThingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListThings, this, request);
}

void IoTClient::ListThingsAsync(const ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListThingsAsyncHelper, this, request, handler, context);
}

void IoTClient::ListThingsAsyncHelper(const ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThings(request), context);
}

ListTopicRulesOutcome IoTClient::ListTopicRules(const ListTopicRulesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
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
  return std::async(std::launch::async, &IoTClient::ListTopicRules, this, request);
}

void IoTClient::ListTopicRulesAsync(const ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ListTopicRulesAsyncHelper, this, request, handler, context);
}

void IoTClient::ListTopicRulesAsyncHelper(const ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTopicRules(request), context);
}

RegisterCACertificateOutcome IoTClient::RegisterCACertificate(const RegisterCACertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/cacertificate";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::RegisterCACertificate, this, request);
}

void IoTClient::RegisterCACertificateAsync(const RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::RegisterCACertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::RegisterCACertificateAsyncHelper(const RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterCACertificate(request), context);
}

RegisterCertificateOutcome IoTClient::RegisterCertificate(const RegisterCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificate/register";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::RegisterCertificate, this, request);
}

void IoTClient::RegisterCertificateAsync(const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::RegisterCertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::RegisterCertificateAsyncHelper(const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterCertificate(request), context);
}

RejectCertificateTransferOutcome IoTClient::RejectCertificateTransfer(const RejectCertificateTransferRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/reject-certificate-transfer/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::RejectCertificateTransfer, this, request);
}

void IoTClient::RejectCertificateTransferAsync(const RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::RejectCertificateTransferAsyncHelper, this, request, handler, context);
}

void IoTClient::RejectCertificateTransferAsyncHelper(const RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectCertificateTransfer(request), context);
}

ReplaceTopicRuleOutcome IoTClient::ReplaceTopicRule(const ReplaceTopicRuleRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/rules/";
  ss << request.GetRuleName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::ReplaceTopicRule, this, request);
}

void IoTClient::ReplaceTopicRuleAsync(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::ReplaceTopicRuleAsyncHelper, this, request, handler, context);
}

void IoTClient::ReplaceTopicRuleAsyncHelper(const ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReplaceTopicRule(request), context);
}

SetDefaultPolicyVersionOutcome IoTClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/policies/";
  ss << request.GetPolicyName();
  ss << "/version/";
  ss << request.GetPolicyVersionId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::SetDefaultPolicyVersion, this, request);
}

void IoTClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::SetDefaultPolicyVersionAsyncHelper, this, request, handler, context);
}

void IoTClient::SetDefaultPolicyVersionAsyncHelper(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDefaultPolicyVersion(request), context);
}

SetLoggingOptionsOutcome IoTClient::SetLoggingOptions(const SetLoggingOptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/loggingOptions";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &IoTClient::SetLoggingOptions, this, request);
}

void IoTClient::SetLoggingOptionsAsync(const SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::SetLoggingOptionsAsyncHelper, this, request, handler, context);
}

void IoTClient::SetLoggingOptionsAsyncHelper(const SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoggingOptions(request), context);
}

TransferCertificateOutcome IoTClient::TransferCertificate(const TransferCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/transfer-certificate/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::TransferCertificate, this, request);
}

void IoTClient::TransferCertificateAsync(const TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::TransferCertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::TransferCertificateAsyncHelper(const TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransferCertificate(request), context);
}

UpdateCACertificateOutcome IoTClient::UpdateCACertificate(const UpdateCACertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/cacertificate/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
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
  return std::async(std::launch::async, &IoTClient::UpdateCACertificate, this, request);
}

void IoTClient::UpdateCACertificateAsync(const UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::UpdateCACertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::UpdateCACertificateAsyncHelper(const UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCACertificate(request), context);
}

UpdateCertificateOutcome IoTClient::UpdateCertificate(const UpdateCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/certificates/";
  ss << request.GetCertificateId();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
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
  return std::async(std::launch::async, &IoTClient::UpdateCertificate, this, request);
}

void IoTClient::UpdateCertificateAsync(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::UpdateCertificateAsyncHelper, this, request, handler, context);
}

void IoTClient::UpdateCertificateAsyncHelper(const UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCertificate(request), context);
}

UpdateThingOutcome IoTClient::UpdateThing(const UpdateThingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/things/";
  ss << request.GetThingName();

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PATCH);
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
  return std::async(std::launch::async, &IoTClient::UpdateThing, this, request);
}

void IoTClient::UpdateThingAsync(const UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&IoTClient::UpdateThingAsyncHelper, this, request, handler, context);
}

void IoTClient::UpdateThingAsyncHelper(const UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThing(request), context);
}

