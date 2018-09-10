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

#include <aws/iot/model/DescribeScheduledAuditResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScheduledAuditResult::DescribeScheduledAuditResult() : 
    m_frequency(AuditFrequency::NOT_SET),
    m_dayOfWeek(DayOfWeek::NOT_SET)
{
}

DescribeScheduledAuditResult::DescribeScheduledAuditResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_frequency(AuditFrequency::NOT_SET),
    m_dayOfWeek(DayOfWeek::NOT_SET)
{
  *this = result;
}

DescribeScheduledAuditResult& DescribeScheduledAuditResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = AuditFrequencyMapper::GetAuditFrequencyForName(jsonValue.GetString("frequency"));

  }

  if(jsonValue.ValueExists("dayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetString("dayOfMonth");

  }

  if(jsonValue.ValueExists("dayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));

  }

  if(jsonValue.ValueExists("targetCheckNames"))
  {
    Array<JsonView> targetCheckNamesJsonList = jsonValue.GetArray("targetCheckNames");
    for(unsigned targetCheckNamesIndex = 0; targetCheckNamesIndex < targetCheckNamesJsonList.GetLength(); ++targetCheckNamesIndex)
    {
      m_targetCheckNames.push_back(targetCheckNamesJsonList[targetCheckNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("scheduledAuditName"))
  {
    m_scheduledAuditName = jsonValue.GetString("scheduledAuditName");

  }

  if(jsonValue.ValueExists("scheduledAuditArn"))
  {
    m_scheduledAuditArn = jsonValue.GetString("scheduledAuditArn");

  }



  return *this;
}
