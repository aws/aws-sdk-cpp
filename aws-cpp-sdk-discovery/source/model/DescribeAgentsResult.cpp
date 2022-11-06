/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DescribeAgentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAgentsResult::DescribeAgentsResult()
{
}

DescribeAgentsResult::DescribeAgentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAgentsResult& DescribeAgentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentsInfo"))
  {
    Aws::Utils::Array<JsonView> agentsInfoJsonList = jsonValue.GetArray("agentsInfo");
    for(unsigned agentsInfoIndex = 0; agentsInfoIndex < agentsInfoJsonList.GetLength(); ++agentsInfoIndex)
    {
      m_agentsInfo.push_back(agentsInfoJsonList[agentsInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
