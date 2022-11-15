/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/ListScheduleGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScheduleGroupsResult::ListScheduleGroupsResult()
{
}

ListScheduleGroupsResult::ListScheduleGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListScheduleGroupsResult& ListScheduleGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ScheduleGroups"))
  {
    Aws::Utils::Array<JsonView> scheduleGroupsJsonList = jsonValue.GetArray("ScheduleGroups");
    for(unsigned scheduleGroupsIndex = 0; scheduleGroupsIndex < scheduleGroupsJsonList.GetLength(); ++scheduleGroupsIndex)
    {
      m_scheduleGroups.push_back(scheduleGroupsJsonList[scheduleGroupsIndex].AsObject());
    }
  }



  return *this;
}
