﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/DecryptResult.h>
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

DecryptResult::DecryptResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DecryptResult& DecryptResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Plaintext"))
  {
    m_plaintext = HashingUtils::Base64Decode(jsonValue.GetString("Plaintext"));
    m_plaintextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionAlgorithm"))
  {
    m_encryptionAlgorithm = EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(jsonValue.GetString("EncryptionAlgorithm"));
    m_encryptionAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CiphertextForRecipient"))
  {
    m_ciphertextForRecipient = HashingUtils::Base64Decode(jsonValue.GetString("CiphertextForRecipient"));
    m_ciphertextForRecipientHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyMaterialId"))
  {
    m_keyMaterialId = jsonValue.GetString("KeyMaterialId");
    m_keyMaterialIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
