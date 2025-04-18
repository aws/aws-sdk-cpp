﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListAutoScalingConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutoScalingConfigurationsResult::ListAutoScalingConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAutoScalingConfigurationsResult& ListAutoScalingConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoScalingConfigurationSummaryList"))
  {
    Aws::Utils::Array<JsonView> autoScalingConfigurationSummaryListJsonList = jsonValue.GetArray("AutoScalingConfigurationSummaryList");
    for(unsigned autoScalingConfigurationSummaryListIndex = 0; autoScalingConfigurationSummaryListIndex < autoScalingConfigurationSummaryListJsonList.GetLength(); ++autoScalingConfigurationSummaryListIndex)
    {
      m_autoScalingConfigurationSummaryList.push_back(autoScalingConfigurationSummaryListJsonList[autoScalingConfigurationSummaryListIndex].AsObject());
    }
    m_autoScalingConfigurationSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
