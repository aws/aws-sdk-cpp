﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ListThreatIntelSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThreatIntelSetsResult::ListThreatIntelSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThreatIntelSetsResult& ListThreatIntelSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("threatIntelSetIds"))
  {
    Aws::Utils::Array<JsonView> threatIntelSetIdsJsonList = jsonValue.GetArray("threatIntelSetIds");
    for(unsigned threatIntelSetIdsIndex = 0; threatIntelSetIdsIndex < threatIntelSetIdsJsonList.GetLength(); ++threatIntelSetIdsIndex)
    {
      m_threatIntelSetIds.push_back(threatIntelSetIdsJsonList[threatIntelSetIdsIndex].AsString());
    }
    m_threatIntelSetIdsHasBeenSet = true;
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
