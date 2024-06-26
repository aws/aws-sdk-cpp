/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/DeriveSharedSecretResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeriveSharedSecretResult::DeriveSharedSecretResult() : 
    m_keyAgreementAlgorithm(KeyAgreementAlgorithmSpec::NOT_SET),
    m_keyOrigin(OriginType::NOT_SET)
{
}

DeriveSharedSecretResult::DeriveSharedSecretResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeriveSharedSecretResult()
{
  *this = result;
}

DeriveSharedSecretResult& DeriveSharedSecretResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("SharedSecret"))
  {
    m_sharedSecret = HashingUtils::Base64Decode(jsonValue.GetString("SharedSecret"));
  }

  if(jsonValue.ValueExists("CiphertextForRecipient"))
  {
    m_ciphertextForRecipient = HashingUtils::Base64Decode(jsonValue.GetString("CiphertextForRecipient"));
  }

  if(jsonValue.ValueExists("KeyAgreementAlgorithm"))
  {
    m_keyAgreementAlgorithm = KeyAgreementAlgorithmSpecMapper::GetKeyAgreementAlgorithmSpecForName(jsonValue.GetString("KeyAgreementAlgorithm"));

  }

  if(jsonValue.ValueExists("KeyOrigin"))
  {
    m_keyOrigin = OriginTypeMapper::GetOriginTypeForName(jsonValue.GetString("KeyOrigin"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
