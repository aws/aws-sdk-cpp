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
