/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateDataKeyPairWithoutPlaintextResult.h>
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

GenerateDataKeyPairWithoutPlaintextResult::GenerateDataKeyPairWithoutPlaintextResult() : 
    m_keyPairSpec(DataKeyPairSpec::NOT_SET)
{
}

GenerateDataKeyPairWithoutPlaintextResult::GenerateDataKeyPairWithoutPlaintextResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_keyPairSpec(DataKeyPairSpec::NOT_SET)
{
  *this = result;
}

GenerateDataKeyPairWithoutPlaintextResult& GenerateDataKeyPairWithoutPlaintextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PrivateKeyCiphertextBlob"))
  {
    m_privateKeyCiphertextBlob = HashingUtils::Base64Decode(jsonValue.GetString("PrivateKeyCiphertextBlob"));
  }

  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = HashingUtils::Base64Decode(jsonValue.GetString("PublicKey"));
  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("KeyPairSpec"))
  {
    m_keyPairSpec = DataKeyPairSpecMapper::GetDataKeyPairSpecForName(jsonValue.GetString("KeyPairSpec"));

  }



  return *this;
}
