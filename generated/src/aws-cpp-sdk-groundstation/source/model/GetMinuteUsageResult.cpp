/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetMinuteUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMinuteUsageResult::GetMinuteUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMinuteUsageResult& GetMinuteUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("estimatedMinutesRemaining"))
  {
    m_estimatedMinutesRemaining = jsonValue.GetInteger("estimatedMinutesRemaining");
    m_estimatedMinutesRemainingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isReservedMinutesCustomer"))
  {
    m_isReservedMinutesCustomer = jsonValue.GetBool("isReservedMinutesCustomer");
    m_isReservedMinutesCustomerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalReservedMinuteAllocation"))
  {
    m_totalReservedMinuteAllocation = jsonValue.GetInteger("totalReservedMinuteAllocation");
    m_totalReservedMinuteAllocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalScheduledMinutes"))
  {
    m_totalScheduledMinutes = jsonValue.GetInteger("totalScheduledMinutes");
    m_totalScheduledMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upcomingMinutesScheduled"))
  {
    m_upcomingMinutesScheduled = jsonValue.GetInteger("upcomingMinutesScheduled");
    m_upcomingMinutesScheduledHasBeenSet = true;
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
