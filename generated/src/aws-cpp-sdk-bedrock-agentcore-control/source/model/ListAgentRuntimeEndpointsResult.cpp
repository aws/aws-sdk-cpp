/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeEndpointsResult.h>
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

ListAgentRuntimeEndpointsResult::ListAgentRuntimeEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAgentRuntimeEndpointsResult& ListAgentRuntimeEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("runtimeEndpoints"))
  {
    Aws::Utils::Array<JsonView> runtimeEndpointsJsonList = jsonValue.GetArray("runtimeEndpoints");
    for(unsigned runtimeEndpointsIndex = 0; runtimeEndpointsIndex < runtimeEndpointsJsonList.GetLength(); ++runtimeEndpointsIndex)
    {
      m_runtimeEndpoints.push_back(runtimeEndpointsJsonList[runtimeEndpointsIndex].AsObject());
    }
    m_runtimeEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
