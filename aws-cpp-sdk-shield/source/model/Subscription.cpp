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

#include <aws/shield/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Subscription::Subscription() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeCommitmentInSeconds(0),
    m_timeCommitmentInSecondsHasBeenSet(false),
    m_autoRenew(AutoRenew::NOT_SET),
    m_autoRenewHasBeenSet(false),
    m_limitsHasBeenSet(false)
{
}

Subscription::Subscription(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeCommitmentInSeconds(0),
    m_timeCommitmentInSecondsHasBeenSet(false),
    m_autoRenew(AutoRenew::NOT_SET),
    m_autoRenewHasBeenSet(false),
    m_limitsHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeCommitmentInSeconds"))
  {
    m_timeCommitmentInSeconds = jsonValue.GetInt64("TimeCommitmentInSeconds");

    m_timeCommitmentInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoRenew"))
  {
    m_autoRenew = AutoRenewMapper::GetAutoRenewForName(jsonValue.GetString("AutoRenew"));

    m_autoRenewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limits"))
  {
    Array<JsonView> limitsJsonList = jsonValue.GetArray("Limits");
    for(unsigned limitsIndex = 0; limitsIndex < limitsJsonList.GetLength(); ++limitsIndex)
    {
      m_limits.push_back(limitsJsonList[limitsIndex].AsObject());
    }
    m_limitsHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_timeCommitmentInSecondsHasBeenSet)
  {
   payload.WithInt64("TimeCommitmentInSeconds", m_timeCommitmentInSeconds);

  }

  if(m_autoRenewHasBeenSet)
  {
   payload.WithString("AutoRenew", AutoRenewMapper::GetNameForAutoRenew(m_autoRenew));
  }

  if(m_limitsHasBeenSet)
  {
   Array<JsonValue> limitsJsonList(m_limits.size());
   for(unsigned limitsIndex = 0; limitsIndex < limitsJsonList.GetLength(); ++limitsIndex)
   {
     limitsJsonList[limitsIndex].AsObject(m_limits[limitsIndex].Jsonize());
   }
   payload.WithArray("Limits", std::move(limitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
