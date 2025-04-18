﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListV2LoggingLevelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListV2LoggingLevelsResult::ListV2LoggingLevelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListV2LoggingLevelsResult& ListV2LoggingLevelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logTargetConfigurations"))
  {
    Aws::Utils::Array<JsonView> logTargetConfigurationsJsonList = jsonValue.GetArray("logTargetConfigurations");
    for(unsigned logTargetConfigurationsIndex = 0; logTargetConfigurationsIndex < logTargetConfigurationsJsonList.GetLength(); ++logTargetConfigurationsIndex)
    {
      m_logTargetConfigurations.push_back(logTargetConfigurationsJsonList[logTargetConfigurationsIndex].AsObject());
    }
    m_logTargetConfigurationsHasBeenSet = true;
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
