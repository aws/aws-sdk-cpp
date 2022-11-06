/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScheduleResult::DescribeScheduleResult()
{
}

DescribeScheduleResult::DescribeScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScheduleResult& DescribeScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("scheduleActions"))
  {
    Aws::Utils::Array<JsonView> scheduleActionsJsonList = jsonValue.GetArray("scheduleActions");
    for(unsigned scheduleActionsIndex = 0; scheduleActionsIndex < scheduleActionsJsonList.GetLength(); ++scheduleActionsIndex)
    {
      m_scheduleActions.push_back(scheduleActionsJsonList[scheduleActionsIndex].AsObject());
    }
  }



  return *this;
}
