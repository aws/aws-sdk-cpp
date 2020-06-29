/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetPublicKeyResult.h>
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

GetPublicKeyResult::GetPublicKeyResult() : 
    m_customerMasterKeySpec(CustomerMasterKeySpec::NOT_SET),
    m_keyUsage(KeyUsageType::NOT_SET)
{
}

GetPublicKeyResult::GetPublicKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_customerMasterKeySpec(CustomerMasterKeySpec::NOT_SET),
    m_keyUsage(KeyUsageType::NOT_SET)
{
  *this = result;
}

GetPublicKeyResult& GetPublicKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = HashingUtils::Base64Decode(jsonValue.GetString("PublicKey"));
  }

  if(jsonValue.ValueExists("CustomerMasterKeySpec"))
  {
    m_customerMasterKeySpec = CustomerMasterKeySpecMapper::GetCustomerMasterKeySpecForName(jsonValue.GetString("CustomerMasterKeySpec"));

  }

  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = KeyUsageTypeMapper::GetKeyUsageTypeForName(jsonValue.GetString("KeyUsage"));

  }

  if(jsonValue.ValueExists("EncryptionAlgorithms"))
  {
    Array<JsonView> encryptionAlgorithmsJsonList = jsonValue.GetArray("EncryptionAlgorithms");
    for(unsigned encryptionAlgorithmsIndex = 0; encryptionAlgorithmsIndex < encryptionAlgorithmsJsonList.GetLength(); ++encryptionAlgorithmsIndex)
    {
      m_encryptionAlgorithms.push_back(EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(encryptionAlgorithmsJsonList[encryptionAlgorithmsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("SigningAlgorithms"))
  {
    Array<JsonView> signingAlgorithmsJsonList = jsonValue.GetArray("SigningAlgorithms");
    for(unsigned signingAlgorithmsIndex = 0; signingAlgorithmsIndex < signingAlgorithmsJsonList.GetLength(); ++signingAlgorithmsIndex)
    {
      m_signingAlgorithms.push_back(SigningAlgorithmSpecMapper::GetSigningAlgorithmSpecForName(signingAlgorithmsJsonList[signingAlgorithmsIndex].AsString()));
    }
  }



  return *this;
}
