/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ListLogPatternSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLogPatternSetsResult::ListLogPatternSetsResult()
{
}

ListLogPatternSetsResult::ListLogPatternSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLogPatternSetsResult& ListLogPatternSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");

  }

  if(jsonValue.ValueExists("LogPatternSets"))
  {
    Aws::Utils::Array<JsonView> logPatternSetsJsonList = jsonValue.GetArray("LogPatternSets");
    for(unsigned logPatternSetsIndex = 0; logPatternSetsIndex < logPatternSetsJsonList.GetLength(); ++logPatternSetsIndex)
    {
      m_logPatternSets.push_back(logPatternSetsJsonList[logPatternSetsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
