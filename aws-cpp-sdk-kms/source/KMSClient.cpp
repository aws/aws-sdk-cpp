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
#include <aws/kms/KMSClient.h>
#include <aws/kms/KMSEndpoint.h>
#include <aws/kms/KMSErrorMarshaller.h>
#include <aws/kms/model/CancelKeyDeletionRequest.h>
#include <aws/kms/model/CreateAliasRequest.h>
#include <aws/kms/model/CreateGrantRequest.h>
#include <aws/kms/model/CreateKeyRequest.h>
#include <aws/kms/model/DecryptRequest.h>
#include <aws/kms/model/DeleteAliasRequest.h>
#include <aws/kms/model/DescribeKeyRequest.h>
#include <aws/kms/model/DisableKeyRequest.h>
#include <aws/kms/model/DisableKeyRotationRequest.h>
#include <aws/kms/model/EnableKeyRequest.h>
#include <aws/kms/model/EnableKeyRotationRequest.h>
#include <aws/kms/model/EncryptRequest.h>
#include <aws/kms/model/GenerateDataKeyRequest.h>
#include <aws/kms/model/GenerateDataKeyWithoutPlaintextRequest.h>
#include <aws/kms/model/GenerateRandomRequest.h>
#include <aws/kms/model/GetKeyPolicyRequest.h>
#include <aws/kms/model/GetKeyRotationStatusRequest.h>
#include <aws/kms/model/ListAliasesRequest.h>
#include <aws/kms/model/ListGrantsRequest.h>
#include <aws/kms/model/ListKeyPoliciesRequest.h>
#include <aws/kms/model/ListKeysRequest.h>
#include <aws/kms/model/ListRetirableGrantsRequest.h>
#include <aws/kms/model/PutKeyPolicyRequest.h>
#include <aws/kms/model/ReEncryptRequest.h>
#include <aws/kms/model/RetireGrantRequest.h>
#include <aws/kms/model/RevokeGrantRequest.h>
#include <aws/kms/model/ScheduleKeyDeletionRequest.h>
#include <aws/kms/model/UpdateAliasRequest.h>
#include <aws/kms/model/UpdateKeyDescriptionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KMS;
using namespace Aws::KMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "kms";
static const char* ALLOCATION_TAG = "KMSClient";

KMSClient::KMSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::KMSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::KMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<KMSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

KMSClient::~KMSClient()
{
}

void KMSClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << KMSEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CancelKeyDeletionOutcome KMSClient::CancelKeyDeletion(const CancelKeyDeletionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CancelKeyDeletionOutcome(CancelKeyDeletionResult(outcome.GetResult()));
  }
  else
  {
    return CancelKeyDeletionOutcome(outcome.GetError());
  }
}

CancelKeyDeletionOutcomeCallable KMSClient::CancelKeyDeletionCallable(const CancelKeyDeletionRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::CancelKeyDeletion, this, request);
}

void KMSClient::CancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::CancelKeyDeletionAsyncHelper, this, request, handler, context);
}

void KMSClient::CancelKeyDeletionAsyncHelper(const CancelKeyDeletionRequest& request, const CancelKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelKeyDeletion(request), context);
}

CreateAliasOutcome KMSClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAliasOutcome(NoResult());
  }
  else
  {
    return CreateAliasOutcome(outcome.GetError());
  }
}

CreateAliasOutcomeCallable KMSClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::CreateAlias, this, request);
}

void KMSClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::CreateAliasAsyncHelper, this, request, handler, context);
}

void KMSClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateGrantOutcome KMSClient::CreateGrant(const CreateGrantRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateGrantOutcome(CreateGrantResult(outcome.GetResult()));
  }
  else
  {
    return CreateGrantOutcome(outcome.GetError());
  }
}

CreateGrantOutcomeCallable KMSClient::CreateGrantCallable(const CreateGrantRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::CreateGrant, this, request);
}

void KMSClient::CreateGrantAsync(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::CreateGrantAsyncHelper, this, request, handler, context);
}

void KMSClient::CreateGrantAsyncHelper(const CreateGrantRequest& request, const CreateGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGrant(request), context);
}

CreateKeyOutcome KMSClient::CreateKey(const CreateKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateKeyOutcome(CreateKeyResult(outcome.GetResult()));
  }
  else
  {
    return CreateKeyOutcome(outcome.GetError());
  }
}

CreateKeyOutcomeCallable KMSClient::CreateKeyCallable(const CreateKeyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::CreateKey, this, request);
}

void KMSClient::CreateKeyAsync(const CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::CreateKeyAsyncHelper, this, request, handler, context);
}

void KMSClient::CreateKeyAsyncHelper(const CreateKeyRequest& request, const CreateKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKey(request), context);
}

DecryptOutcome KMSClient::Decrypt(const DecryptRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DecryptOutcome(DecryptResult(outcome.GetResult()));
  }
  else
  {
    return DecryptOutcome(outcome.GetError());
  }
}

DecryptOutcomeCallable KMSClient::DecryptCallable(const DecryptRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::Decrypt, this, request);
}

void KMSClient::DecryptAsync(const DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::DecryptAsyncHelper, this, request, handler, context);
}

void KMSClient::DecryptAsyncHelper(const DecryptRequest& request, const DecryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Decrypt(request), context);
}

DeleteAliasOutcome KMSClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAliasOutcome(NoResult());
  }
  else
  {
    return DeleteAliasOutcome(outcome.GetError());
  }
}

DeleteAliasOutcomeCallable KMSClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::DeleteAlias, this, request);
}

void KMSClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::DeleteAliasAsyncHelper, this, request, handler, context);
}

void KMSClient::DeleteAliasAsyncHelper(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlias(request), context);
}

DescribeKeyOutcome KMSClient::DescribeKey(const DescribeKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeKeyOutcome(DescribeKeyResult(outcome.GetResult()));
  }
  else
  {
    return DescribeKeyOutcome(outcome.GetError());
  }
}

DescribeKeyOutcomeCallable KMSClient::DescribeKeyCallable(const DescribeKeyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::DescribeKey, this, request);
}

void KMSClient::DescribeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::DescribeKeyAsyncHelper, this, request, handler, context);
}

void KMSClient::DescribeKeyAsyncHelper(const DescribeKeyRequest& request, const DescribeKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeKey(request), context);
}

DisableKeyOutcome KMSClient::DisableKey(const DisableKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableKeyOutcome(NoResult());
  }
  else
  {
    return DisableKeyOutcome(outcome.GetError());
  }
}

DisableKeyOutcomeCallable KMSClient::DisableKeyCallable(const DisableKeyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::DisableKey, this, request);
}

void KMSClient::DisableKeyAsync(const DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::DisableKeyAsyncHelper, this, request, handler, context);
}

void KMSClient::DisableKeyAsyncHelper(const DisableKeyRequest& request, const DisableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableKey(request), context);
}

DisableKeyRotationOutcome KMSClient::DisableKeyRotation(const DisableKeyRotationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableKeyRotationOutcome(NoResult());
  }
  else
  {
    return DisableKeyRotationOutcome(outcome.GetError());
  }
}

DisableKeyRotationOutcomeCallable KMSClient::DisableKeyRotationCallable(const DisableKeyRotationRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::DisableKeyRotation, this, request);
}

void KMSClient::DisableKeyRotationAsync(const DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::DisableKeyRotationAsyncHelper, this, request, handler, context);
}

void KMSClient::DisableKeyRotationAsyncHelper(const DisableKeyRotationRequest& request, const DisableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableKeyRotation(request), context);
}

EnableKeyOutcome KMSClient::EnableKey(const EnableKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableKeyOutcome(NoResult());
  }
  else
  {
    return EnableKeyOutcome(outcome.GetError());
  }
}

EnableKeyOutcomeCallable KMSClient::EnableKeyCallable(const EnableKeyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::EnableKey, this, request);
}

void KMSClient::EnableKeyAsync(const EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::EnableKeyAsyncHelper, this, request, handler, context);
}

void KMSClient::EnableKeyAsyncHelper(const EnableKeyRequest& request, const EnableKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableKey(request), context);
}

EnableKeyRotationOutcome KMSClient::EnableKeyRotation(const EnableKeyRotationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableKeyRotationOutcome(NoResult());
  }
  else
  {
    return EnableKeyRotationOutcome(outcome.GetError());
  }
}

EnableKeyRotationOutcomeCallable KMSClient::EnableKeyRotationCallable(const EnableKeyRotationRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::EnableKeyRotation, this, request);
}

void KMSClient::EnableKeyRotationAsync(const EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::EnableKeyRotationAsyncHelper, this, request, handler, context);
}

void KMSClient::EnableKeyRotationAsyncHelper(const EnableKeyRotationRequest& request, const EnableKeyRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableKeyRotation(request), context);
}

EncryptOutcome KMSClient::Encrypt(const EncryptRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EncryptOutcome(EncryptResult(outcome.GetResult()));
  }
  else
  {
    return EncryptOutcome(outcome.GetError());
  }
}

EncryptOutcomeCallable KMSClient::EncryptCallable(const EncryptRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::Encrypt, this, request);
}

void KMSClient::EncryptAsync(const EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::EncryptAsyncHelper, this, request, handler, context);
}

void KMSClient::EncryptAsyncHelper(const EncryptRequest& request, const EncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Encrypt(request), context);
}

GenerateDataKeyOutcome KMSClient::GenerateDataKey(const GenerateDataKeyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GenerateDataKeyOutcome(GenerateDataKeyResult(outcome.GetResult()));
  }
  else
  {
    return GenerateDataKeyOutcome(outcome.GetError());
  }
}

GenerateDataKeyOutcomeCallable KMSClient::GenerateDataKeyCallable(const GenerateDataKeyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::GenerateDataKey, this, request);
}

void KMSClient::GenerateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::GenerateDataKeyAsyncHelper, this, request, handler, context);
}

void KMSClient::GenerateDataKeyAsyncHelper(const GenerateDataKeyRequest& request, const GenerateDataKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateDataKey(request), context);
}

GenerateDataKeyWithoutPlaintextOutcome KMSClient::GenerateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GenerateDataKeyWithoutPlaintextOutcome(GenerateDataKeyWithoutPlaintextResult(outcome.GetResult()));
  }
  else
  {
    return GenerateDataKeyWithoutPlaintextOutcome(outcome.GetError());
  }
}

GenerateDataKeyWithoutPlaintextOutcomeCallable KMSClient::GenerateDataKeyWithoutPlaintextCallable(const GenerateDataKeyWithoutPlaintextRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::GenerateDataKeyWithoutPlaintext, this, request);
}

void KMSClient::GenerateDataKeyWithoutPlaintextAsync(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::GenerateDataKeyWithoutPlaintextAsyncHelper, this, request, handler, context);
}

void KMSClient::GenerateDataKeyWithoutPlaintextAsyncHelper(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateDataKeyWithoutPlaintext(request), context);
}

GenerateRandomOutcome KMSClient::GenerateRandom(const GenerateRandomRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GenerateRandomOutcome(GenerateRandomResult(outcome.GetResult()));
  }
  else
  {
    return GenerateRandomOutcome(outcome.GetError());
  }
}

GenerateRandomOutcomeCallable KMSClient::GenerateRandomCallable(const GenerateRandomRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::GenerateRandom, this, request);
}

void KMSClient::GenerateRandomAsync(const GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::GenerateRandomAsyncHelper, this, request, handler, context);
}

void KMSClient::GenerateRandomAsyncHelper(const GenerateRandomRequest& request, const GenerateRandomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateRandom(request), context);
}

GetKeyPolicyOutcome KMSClient::GetKeyPolicy(const GetKeyPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetKeyPolicyOutcome(GetKeyPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetKeyPolicyOutcome(outcome.GetError());
  }
}

GetKeyPolicyOutcomeCallable KMSClient::GetKeyPolicyCallable(const GetKeyPolicyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::GetKeyPolicy, this, request);
}

void KMSClient::GetKeyPolicyAsync(const GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::GetKeyPolicyAsyncHelper, this, request, handler, context);
}

void KMSClient::GetKeyPolicyAsyncHelper(const GetKeyPolicyRequest& request, const GetKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyPolicy(request), context);
}

GetKeyRotationStatusOutcome KMSClient::GetKeyRotationStatus(const GetKeyRotationStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetKeyRotationStatusOutcome(GetKeyRotationStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetKeyRotationStatusOutcome(outcome.GetError());
  }
}

GetKeyRotationStatusOutcomeCallable KMSClient::GetKeyRotationStatusCallable(const GetKeyRotationStatusRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::GetKeyRotationStatus, this, request);
}

void KMSClient::GetKeyRotationStatusAsync(const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::GetKeyRotationStatusAsyncHelper, this, request, handler, context);
}

void KMSClient::GetKeyRotationStatusAsyncHelper(const GetKeyRotationStatusRequest& request, const GetKeyRotationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyRotationStatus(request), context);
}

ListAliasesOutcome KMSClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListAliasesOutcome(ListAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListAliasesOutcome(outcome.GetError());
  }
}

ListAliasesOutcomeCallable KMSClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ListAliases, this, request);
}

void KMSClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ListAliasesAsyncHelper, this, request, handler, context);
}

void KMSClient::ListAliasesAsyncHelper(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAliases(request), context);
}

ListGrantsOutcome KMSClient::ListGrants(const ListGrantsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListGrantsOutcome(ListGrantsResult(outcome.GetResult()));
  }
  else
  {
    return ListGrantsOutcome(outcome.GetError());
  }
}

ListGrantsOutcomeCallable KMSClient::ListGrantsCallable(const ListGrantsRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ListGrants, this, request);
}

void KMSClient::ListGrantsAsync(const ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ListGrantsAsyncHelper, this, request, handler, context);
}

void KMSClient::ListGrantsAsyncHelper(const ListGrantsRequest& request, const ListGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGrants(request), context);
}

ListKeyPoliciesOutcome KMSClient::ListKeyPolicies(const ListKeyPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListKeyPoliciesOutcome(ListKeyPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListKeyPoliciesOutcome(outcome.GetError());
  }
}

ListKeyPoliciesOutcomeCallable KMSClient::ListKeyPoliciesCallable(const ListKeyPoliciesRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ListKeyPolicies, this, request);
}

void KMSClient::ListKeyPoliciesAsync(const ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ListKeyPoliciesAsyncHelper, this, request, handler, context);
}

void KMSClient::ListKeyPoliciesAsyncHelper(const ListKeyPoliciesRequest& request, const ListKeyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeyPolicies(request), context);
}

ListKeysOutcome KMSClient::ListKeys(const ListKeysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListKeysOutcome(ListKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListKeysOutcome(outcome.GetError());
  }
}

ListKeysOutcomeCallable KMSClient::ListKeysCallable(const ListKeysRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ListKeys, this, request);
}

void KMSClient::ListKeysAsync(const ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ListKeysAsyncHelper, this, request, handler, context);
}

void KMSClient::ListKeysAsyncHelper(const ListKeysRequest& request, const ListKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeys(request), context);
}

ListRetirableGrantsOutcome KMSClient::ListRetirableGrants(const ListRetirableGrantsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRetirableGrantsOutcome(ListRetirableGrantsResult(outcome.GetResult()));
  }
  else
  {
    return ListRetirableGrantsOutcome(outcome.GetError());
  }
}

ListRetirableGrantsOutcomeCallable KMSClient::ListRetirableGrantsCallable(const ListRetirableGrantsRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ListRetirableGrants, this, request);
}

void KMSClient::ListRetirableGrantsAsync(const ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ListRetirableGrantsAsyncHelper, this, request, handler, context);
}

void KMSClient::ListRetirableGrantsAsyncHelper(const ListRetirableGrantsRequest& request, const ListRetirableGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRetirableGrants(request), context);
}

PutKeyPolicyOutcome KMSClient::PutKeyPolicy(const PutKeyPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutKeyPolicyOutcome(NoResult());
  }
  else
  {
    return PutKeyPolicyOutcome(outcome.GetError());
  }
}

PutKeyPolicyOutcomeCallable KMSClient::PutKeyPolicyCallable(const PutKeyPolicyRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::PutKeyPolicy, this, request);
}

void KMSClient::PutKeyPolicyAsync(const PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::PutKeyPolicyAsyncHelper, this, request, handler, context);
}

void KMSClient::PutKeyPolicyAsyncHelper(const PutKeyPolicyRequest& request, const PutKeyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutKeyPolicy(request), context);
}

ReEncryptOutcome KMSClient::ReEncrypt(const ReEncryptRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReEncryptOutcome(ReEncryptResult(outcome.GetResult()));
  }
  else
  {
    return ReEncryptOutcome(outcome.GetError());
  }
}

ReEncryptOutcomeCallable KMSClient::ReEncryptCallable(const ReEncryptRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ReEncrypt, this, request);
}

void KMSClient::ReEncryptAsync(const ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ReEncryptAsyncHelper, this, request, handler, context);
}

void KMSClient::ReEncryptAsyncHelper(const ReEncryptRequest& request, const ReEncryptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReEncrypt(request), context);
}

RetireGrantOutcome KMSClient::RetireGrant(const RetireGrantRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RetireGrantOutcome(NoResult());
  }
  else
  {
    return RetireGrantOutcome(outcome.GetError());
  }
}

RetireGrantOutcomeCallable KMSClient::RetireGrantCallable(const RetireGrantRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::RetireGrant, this, request);
}

void KMSClient::RetireGrantAsync(const RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::RetireGrantAsyncHelper, this, request, handler, context);
}

void KMSClient::RetireGrantAsyncHelper(const RetireGrantRequest& request, const RetireGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RetireGrant(request), context);
}

RevokeGrantOutcome KMSClient::RevokeGrant(const RevokeGrantRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RevokeGrantOutcome(NoResult());
  }
  else
  {
    return RevokeGrantOutcome(outcome.GetError());
  }
}

RevokeGrantOutcomeCallable KMSClient::RevokeGrantCallable(const RevokeGrantRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::RevokeGrant, this, request);
}

void KMSClient::RevokeGrantAsync(const RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::RevokeGrantAsyncHelper, this, request, handler, context);
}

void KMSClient::RevokeGrantAsyncHelper(const RevokeGrantRequest& request, const RevokeGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeGrant(request), context);
}

ScheduleKeyDeletionOutcome KMSClient::ScheduleKeyDeletion(const ScheduleKeyDeletionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ScheduleKeyDeletionOutcome(ScheduleKeyDeletionResult(outcome.GetResult()));
  }
  else
  {
    return ScheduleKeyDeletionOutcome(outcome.GetError());
  }
}

ScheduleKeyDeletionOutcomeCallable KMSClient::ScheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::ScheduleKeyDeletion, this, request);
}

void KMSClient::ScheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::ScheduleKeyDeletionAsyncHelper, this, request, handler, context);
}

void KMSClient::ScheduleKeyDeletionAsyncHelper(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ScheduleKeyDeletion(request), context);
}

UpdateAliasOutcome KMSClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAliasOutcome(NoResult());
  }
  else
  {
    return UpdateAliasOutcome(outcome.GetError());
  }
}

UpdateAliasOutcomeCallable KMSClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::UpdateAlias, this, request);
}

void KMSClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::UpdateAliasAsyncHelper, this, request, handler, context);
}

void KMSClient::UpdateAliasAsyncHelper(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAlias(request), context);
}

UpdateKeyDescriptionOutcome KMSClient::UpdateKeyDescription(const UpdateKeyDescriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateKeyDescriptionOutcome(NoResult());
  }
  else
  {
    return UpdateKeyDescriptionOutcome(outcome.GetError());
  }
}

UpdateKeyDescriptionOutcomeCallable KMSClient::UpdateKeyDescriptionCallable(const UpdateKeyDescriptionRequest& request) const
{
  return std::async(std::launch::async, &KMSClient::UpdateKeyDescription, this, request);
}

void KMSClient::UpdateKeyDescriptionAsync(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&KMSClient::UpdateKeyDescriptionAsyncHelper, this, request, handler, context);
}

void KMSClient::UpdateKeyDescriptionAsyncHelper(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateKeyDescription(request), context);
}

