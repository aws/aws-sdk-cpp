/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeAgentVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAgentVersionsResult::DescribeAgentVersionsResult()
{
}

DescribeAgentVersionsResult::DescribeAgentVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAgentVersionsResult& DescribeAgentVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AgentVersions"))
  {
    Aws::Utils::Array<JsonView> agentVersionsJsonList = jsonValue.GetArray("AgentVersions");
    for(unsigned agentVersionsIndex = 0; agentVersionsIndex < agentVersionsJsonList.GetLength(); ++agentVersionsIndex)
    {
      m_agentVersions.push_back(agentVersionsJsonList[agentVersionsIndex].AsObject());
    }
  }



  return *this;
}
