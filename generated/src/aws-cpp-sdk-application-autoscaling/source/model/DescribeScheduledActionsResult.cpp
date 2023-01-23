/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/DescribeScheduledActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScheduledActionsResult::DescribeScheduledActionsResult()
{
}

DescribeScheduledActionsResult::DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScheduledActionsResult& DescribeScheduledActionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ScheduledActions"))
  {
    Aws::Utils::Array<JsonView> scheduledActionsJsonList = jsonValue.GetArray("ScheduledActions");
    for(unsigned scheduledActionsIndex = 0; scheduledActionsIndex < scheduledActionsJsonList.GetLength(); ++scheduledActionsIndex)
    {
      m_scheduledActions.push_back(scheduledActionsJsonList[scheduledActionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
