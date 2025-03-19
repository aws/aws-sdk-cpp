/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetEventTriggerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventTriggerResult::GetEventTriggerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEventTriggerResult& GetEventTriggerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventTriggerName"))
  {
    m_eventTriggerName = jsonValue.GetString("EventTriggerName");
    m_eventTriggerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");
    m_objectTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventTriggerConditions"))
  {
    Aws::Utils::Array<JsonView> eventTriggerConditionsJsonList = jsonValue.GetArray("EventTriggerConditions");
    for(unsigned eventTriggerConditionsIndex = 0; eventTriggerConditionsIndex < eventTriggerConditionsJsonList.GetLength(); ++eventTriggerConditionsIndex)
    {
      m_eventTriggerConditions.push_back(eventTriggerConditionsJsonList[eventTriggerConditionsIndex].AsObject());
    }
    m_eventTriggerConditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SegmentFilter"))
  {
    m_segmentFilter = jsonValue.GetString("SegmentFilter");
    m_segmentFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventTriggerLimits"))
  {
    m_eventTriggerLimits = jsonValue.GetObject("EventTriggerLimits");
    m_eventTriggerLimitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
