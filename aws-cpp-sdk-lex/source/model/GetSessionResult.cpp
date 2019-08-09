/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lex/model/GetSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSessionResult::GetSessionResult()
{
}

GetSessionResult::GetSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSessionResult& GetSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("recentIntentSummaryView"))
  {
    Array<JsonView> recentIntentSummaryViewJsonList = jsonValue.GetArray("recentIntentSummaryView");
    for(unsigned recentIntentSummaryViewIndex = 0; recentIntentSummaryViewIndex < recentIntentSummaryViewJsonList.GetLength(); ++recentIntentSummaryViewIndex)
    {
      m_recentIntentSummaryView.push_back(recentIntentSummaryViewJsonList[recentIntentSummaryViewIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("sessionAttributes"))
  {
    Aws::Map<Aws::String, JsonView> sessionAttributesJsonMap = jsonValue.GetObject("sessionAttributes").GetAllObjects();
    for(auto& sessionAttributesItem : sessionAttributesJsonMap)
    {
      m_sessionAttributes[sessionAttributesItem.first] = sessionAttributesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("dialogAction"))
  {
    m_dialogAction = jsonValue.GetObject("dialogAction");

  }



  return *this;
}
