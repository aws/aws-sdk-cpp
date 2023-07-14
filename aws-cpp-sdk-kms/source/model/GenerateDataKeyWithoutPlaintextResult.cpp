/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateDataKeyWithoutPlaintextResult.h>
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

GenerateDataKeyWithoutPlaintextResult::GenerateDataKeyWithoutPlaintextResult()
{
}

GenerateDataKeyWithoutPlaintextResult::GenerateDataKeyWithoutPlaintextResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateDataKeyWithoutPlaintextResult& GenerateDataKeyWithoutPlaintextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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



  return *this;
}
