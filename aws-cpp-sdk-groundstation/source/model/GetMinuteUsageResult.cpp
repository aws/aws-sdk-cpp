/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetMinuteUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMinuteUsageResult::GetMinuteUsageResult() : 
    m_estimatedMinutesRemaining(0),
    m_isReservedMinutesCustomer(false),
    m_totalReservedMinuteAllocation(0),
    m_totalScheduledMinutes(0),
    m_upcomingMinutesScheduled(0)
{
}

GetMinuteUsageResult::GetMinuteUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedMinutesRemaining(0),
    m_isReservedMinutesCustomer(false),
    m_totalReservedMinuteAllocation(0),
    m_totalScheduledMinutes(0),
    m_upcomingMinutesScheduled(0)
{
  *this = result;
}

GetMinuteUsageResult& GetMinuteUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("estimatedMinutesRemaining"))
  {
    m_estimatedMinutesRemaining = jsonValue.GetInteger("estimatedMinutesRemaining");

  }

  if(jsonValue.ValueExists("isReservedMinutesCustomer"))
  {
    m_isReservedMinutesCustomer = jsonValue.GetBool("isReservedMinutesCustomer");

  }

  if(jsonValue.ValueExists("totalReservedMinuteAllocation"))
  {
    m_totalReservedMinuteAllocation = jsonValue.GetInteger("totalReservedMinuteAllocation");

  }

  if(jsonValue.ValueExists("totalScheduledMinutes"))
  {
    m_totalScheduledMinutes = jsonValue.GetInteger("totalScheduledMinutes");

  }

  if(jsonValue.ValueExists("upcomingMinutesScheduled"))
  {
    m_upcomingMinutesScheduled = jsonValue.GetInteger("upcomingMinutesScheduled");

  }



  return *this;
}
