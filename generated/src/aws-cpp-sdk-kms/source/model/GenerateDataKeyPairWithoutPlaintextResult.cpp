﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateDataKeyPairWithoutPlaintextResult.h>
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

GenerateDataKeyPairWithoutPlaintextResult::GenerateDataKeyPairWithoutPlaintextResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateDataKeyPairWithoutPlaintextResult& GenerateDataKeyPairWithoutPlaintextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PrivateKeyCiphertextBlob"))
  {
    m_privateKeyCiphertextBlob = HashingUtils::Base64Decode(jsonValue.GetString("PrivateKeyCiphertextBlob"));
    m_privateKeyCiphertextBlobHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = HashingUtils::Base64Decode(jsonValue.GetString("PublicKey"));
    m_publicKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyPairSpec"))
  {
    m_keyPairSpec = DataKeyPairSpecMapper::GetDataKeyPairSpecForName(jsonValue.GetString("KeyPairSpec"));
    m_keyPairSpecHasBeenSet = true;
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
