/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/VerifyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifyResult::VerifyResult() : 
    m_signatureValid(false),
    m_signingAlgorithm(SigningAlgorithmSpec::NOT_SET)
{
}

VerifyResult::VerifyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_signatureValid(false),
    m_signingAlgorithm(SigningAlgorithmSpec::NOT_SET)
{
  *this = result;
}

VerifyResult& VerifyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("SignatureValid"))
  {
    m_signatureValid = jsonValue.GetBool("SignatureValid");

  }

  if(jsonValue.ValueExists("SigningAlgorithm"))
  {
    m_signingAlgorithm = SigningAlgorithmSpecMapper::GetSigningAlgorithmSpecForName(jsonValue.GetString("SigningAlgorithm"));

  }



  return *this;
}
