/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GenerateMacResult.h>
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

GenerateMacResult::GenerateMacResult() : 
    m_macAlgorithm(MacAlgorithmSpec::NOT_SET)
{
}

GenerateMacResult::GenerateMacResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_macAlgorithm(MacAlgorithmSpec::NOT_SET)
{
  *this = result;
}

GenerateMacResult& GenerateMacResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Mac"))
  {
    m_mac = HashingUtils::Base64Decode(jsonValue.GetString("Mac"));
  }

  if(jsonValue.ValueExists("MacAlgorithm"))
  {
    m_macAlgorithm = MacAlgorithmSpecMapper::GetMacAlgorithmSpecForName(jsonValue.GetString("MacAlgorithm"));

  }

  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
