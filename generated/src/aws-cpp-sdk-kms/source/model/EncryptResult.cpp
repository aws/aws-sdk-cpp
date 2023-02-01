/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/EncryptResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EncryptResult::EncryptResult() : 
    m_encryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET)
{
}

EncryptResult::EncryptResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_encryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET)
{
  *this = result;
}

EncryptResult& EncryptResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CiphertextBlob"))
  {
    m_ciphertextBlob = HashingUtils::Base64Decode(jsonValue.GetString("CiphertextBlob"));
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("EncryptionAlgorithm"))
  {
    m_encryptionAlgorithm = EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(jsonValue.GetString("EncryptionAlgorithm"));

  }



  return *this;
}
