/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kms/model/EncapsulateResult.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EncapsulateResult::EncapsulateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

EncapsulateResult& EncapsulateResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("KeyId")) {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharedSecret")) {
    m_sharedSecret = HashingUtils::Base64Decode(jsonValue.GetString("SharedSecret"));
    m_sharedSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SharedSecretCiphertextBlob")) {
    m_sharedSecretCiphertextBlob = HashingUtils::Base64Decode(jsonValue.GetString("SharedSecretCiphertextBlob"));
    m_sharedSecretCiphertextBlobHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncapsulationAlgorithm")) {
    m_encapsulationAlgorithm =
        EncapsulationAlgorithmSpecMapper::GetEncapsulationAlgorithmSpecForName(jsonValue.GetString("EncapsulationAlgorithm"));
    m_encapsulationAlgorithmHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
