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
    m_timeCommitmentInSeconds(0),
    m_timeCommitmentInSecondsHasBeenSet(false)
{
}

Subscription::Subscription(const JsonValue& jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_timeCommitmentInSeconds(0),
    m_timeCommitmentInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeCommitmentInSeconds"))
  {
    m_timeCommitmentInSeconds = jsonValue.GetInt64("TimeCommitmentInSeconds");

    m_timeCommitmentInSecondsHasBeenSet = true;
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

  if(m_timeCommitmentInSecondsHasBeenSet)
  {
   payload.WithInt64("TimeCommitmentInSeconds", m_timeCommitmentInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws