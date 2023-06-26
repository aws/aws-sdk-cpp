/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/VerifyMacResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

VerifyMacResult::VerifyMacResult() : 
    m_macValid(false),
    m_macAlgorithm(MacAlgorithmSpec::NOT_SET)
{
}

VerifyMacResult::VerifyMacResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_macValid(false),
    m_macAlgorithm(MacAlgorithmSpec::NOT_SET)
{
  *this = result;
}

VerifyMacResult& VerifyMacResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("MacValid"))
  {
    m_macValid = jsonValue.GetBool("MacValid");

  }

  if(jsonValue.ValueExists("MacAlgorithm"))
  {
    m_macAlgorithm = MacAlgorithmSpecMapper::GetMacAlgorithmSpecForName(jsonValue.GetString("MacAlgorithm"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
