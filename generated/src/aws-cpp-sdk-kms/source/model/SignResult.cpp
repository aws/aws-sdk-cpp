/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/SignResult.h>
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

SignResult::SignResult() : 
    m_signingAlgorithm(SigningAlgorithmSpec::NOT_SET)
{
}

SignResult::SignResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_signingAlgorithm(SigningAlgorithmSpec::NOT_SET)
{
  *this = result;
}

SignResult& SignResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("Signature"))
  {
    m_signature = HashingUtils::Base64Decode(jsonValue.GetString("Signature"));
  }

  if(jsonValue.ValueExists("SigningAlgorithm"))
  {
    m_signingAlgorithm = SigningAlgorithmSpecMapper::GetSigningAlgorithmSpecForName(jsonValue.GetString("SigningAlgorithm"));

  }



  return *this;
}
