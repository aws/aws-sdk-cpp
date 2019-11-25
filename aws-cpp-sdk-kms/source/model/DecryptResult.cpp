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

#include <aws/kms/model/DecryptResult.h>
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

DecryptResult::DecryptResult() : 
    m_encryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET)
{
}

DecryptResult::DecryptResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_encryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET)
{
  *this = result;
}

DecryptResult& DecryptResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("Plaintext"))
  {
    m_plaintext = HashingUtils::Base64Decode(jsonValue.GetString("Plaintext"));
  }

  if(jsonValue.ValueExists("EncryptionAlgorithm"))
  {
    m_encryptionAlgorithm = EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(jsonValue.GetString("EncryptionAlgorithm"));

  }



  return *this;
}
