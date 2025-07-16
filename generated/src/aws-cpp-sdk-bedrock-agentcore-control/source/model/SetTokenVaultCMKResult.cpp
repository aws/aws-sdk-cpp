/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SetTokenVaultCMKResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SetTokenVaultCMKResult::SetTokenVaultCMKResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SetTokenVaultCMKResult& SetTokenVaultCMKResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tokenVaultId"))
  {
    m_tokenVaultId = jsonValue.GetString("tokenVaultId");
    m_tokenVaultIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsConfiguration"))
  {
    m_kmsConfiguration = jsonValue.GetObject("kmsConfiguration");
    m_kmsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
