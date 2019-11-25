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

#include <aws/kms/model/ReEncryptResult.h>
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

ReEncryptResult::ReEncryptResult() : 
    m_sourceEncryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET),
    m_destinationEncryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET)
{
}

ReEncryptResult::ReEncryptResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sourceEncryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET),
    m_destinationEncryptionAlgorithm(EncryptionAlgorithmSpec::NOT_SET)
{
  *this = result;
}

ReEncryptResult& ReEncryptResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CiphertextBlob"))
  {
    m_ciphertextBlob = HashingUtils::Base64Decode(jsonValue.GetString("CiphertextBlob"));
  }

  if(jsonValue.ValueExists("SourceKeyId"))
  {
    m_sourceKeyId = jsonValue.GetString("SourceKeyId");

  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("SourceEncryptionAlgorithm"))
  {
    m_sourceEncryptionAlgorithm = EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(jsonValue.GetString("SourceEncryptionAlgorithm"));

  }

  if(jsonValue.ValueExists("DestinationEncryptionAlgorithm"))
  {
    m_destinationEncryptionAlgorithm = EncryptionAlgorithmSpecMapper::GetEncryptionAlgorithmSpecForName(jsonValue.GetString("DestinationEncryptionAlgorithm"));

  }



  return *this;
}
