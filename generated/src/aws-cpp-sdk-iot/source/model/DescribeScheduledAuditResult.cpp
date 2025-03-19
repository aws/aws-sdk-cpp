/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeScheduledAuditResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeScheduledAuditResult::DescribeScheduledAuditResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeScheduledAuditResult& DescribeScheduledAuditResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("frequency"))
  {
    m_frequency = AuditFrequencyMapper::GetAuditFrequencyForName(jsonValue.GetString("frequency"));
    m_frequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetString("dayOfMonth");
    m_dayOfMonthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("dayOfWeek"));
    m_dayOfWeekHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetCheckNames"))
  {
    Aws::Utils::Array<JsonView> targetCheckNamesJsonList = jsonValue.GetArray("targetCheckNames");
    for(unsigned targetCheckNamesIndex = 0; targetCheckNamesIndex < targetCheckNamesJsonList.GetLength(); ++targetCheckNamesIndex)
    {
      m_targetCheckNames.push_back(targetCheckNamesJsonList[targetCheckNamesIndex].AsString());
    }
    m_targetCheckNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledAuditName"))
  {
    m_scheduledAuditName = jsonValue.GetString("scheduledAuditName");
    m_scheduledAuditNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduledAuditArn"))
  {
    m_scheduledAuditArn = jsonValue.GetString("scheduledAuditArn");
    m_scheduledAuditArnHasBeenSet = true;
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
