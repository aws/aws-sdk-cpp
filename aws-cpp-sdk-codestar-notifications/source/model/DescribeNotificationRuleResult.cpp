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

#include <aws/codestar-notifications/model/DescribeNotificationRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotificationRuleResult::DescribeNotificationRuleResult() : 
    m_detailType(DetailType::NOT_SET),
    m_status(NotificationRuleStatus::NOT_SET)
{
}

DescribeNotificationRuleResult::DescribeNotificationRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_detailType(DetailType::NOT_SET),
    m_status(NotificationRuleStatus::NOT_SET)
{
  *this = result;
}

DescribeNotificationRuleResult& DescribeNotificationRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("EventTypes"))
  {
    Array<JsonView> eventTypesJsonList = jsonValue.GetArray("EventTypes");
    for(unsigned eventTypesIndex = 0; eventTypesIndex < eventTypesJsonList.GetLength(); ++eventTypesIndex)
    {
      m_eventTypes.push_back(eventTypesJsonList[eventTypesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = jsonValue.GetString("Resource");

  }

  if(jsonValue.ValueExists("Targets"))
  {
    Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DetailType"))
  {
    m_detailType = DetailTypeMapper::GetDetailTypeForName(jsonValue.GetString("DetailType"));

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NotificationRuleStatusMapper::GetNotificationRuleStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("LastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("LastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
