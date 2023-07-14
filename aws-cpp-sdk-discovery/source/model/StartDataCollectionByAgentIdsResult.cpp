﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/StartDataCollectionByAgentIdsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDataCollectionByAgentIdsResult::StartDataCollectionByAgentIdsResult()
{
}

StartDataCollectionByAgentIdsResult::StartDataCollectionByAgentIdsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartDataCollectionByAgentIdsResult& StartDataCollectionByAgentIdsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentsConfigurationStatus"))
  {
    Array<JsonView> agentsConfigurationStatusJsonList = jsonValue.GetArray("agentsConfigurationStatus");
    for(unsigned agentsConfigurationStatusIndex = 0; agentsConfigurationStatusIndex < agentsConfigurationStatusJsonList.GetLength(); ++agentsConfigurationStatusIndex)
    {
      m_agentsConfigurationStatus.push_back(agentsConfigurationStatusJsonList[agentsConfigurationStatusIndex].AsObject());
    }
  }



  return *this;
}
