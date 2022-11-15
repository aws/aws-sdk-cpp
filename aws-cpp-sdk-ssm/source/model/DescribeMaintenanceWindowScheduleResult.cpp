/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeMaintenanceWindowScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMaintenanceWindowScheduleResult::DescribeMaintenanceWindowScheduleResult()
{
}

DescribeMaintenanceWindowScheduleResult::DescribeMaintenanceWindowScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMaintenanceWindowScheduleResult& DescribeMaintenanceWindowScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScheduledWindowExecutions"))
  {
    Aws::Utils::Array<JsonView> scheduledWindowExecutionsJsonList = jsonValue.GetArray("ScheduledWindowExecutions");
    for(unsigned scheduledWindowExecutionsIndex = 0; scheduledWindowExecutionsIndex < scheduledWindowExecutionsJsonList.GetLength(); ++scheduledWindowExecutionsIndex)
    {
      m_scheduledWindowExecutions.push_back(scheduledWindowExecutionsJsonList[scheduledWindowExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
