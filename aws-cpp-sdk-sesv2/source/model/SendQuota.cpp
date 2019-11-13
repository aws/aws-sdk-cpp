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

#include <aws/sesv2/model/SendQuota.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SendQuota::SendQuota() : 
    m_max24HourSend(0.0),
    m_max24HourSendHasBeenSet(false),
    m_maxSendRate(0.0),
    m_maxSendRateHasBeenSet(false),
    m_sentLast24Hours(0.0),
    m_sentLast24HoursHasBeenSet(false)
{
}

SendQuota::SendQuota(JsonView jsonValue) : 
    m_max24HourSend(0.0),
    m_max24HourSendHasBeenSet(false),
    m_maxSendRate(0.0),
    m_maxSendRateHasBeenSet(false),
    m_sentLast24Hours(0.0),
    m_sentLast24HoursHasBeenSet(false)
{
  *this = jsonValue;
}

SendQuota& SendQuota::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Max24HourSend"))
  {
    m_max24HourSend = jsonValue.GetDouble("Max24HourSend");

    m_max24HourSendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSendRate"))
  {
    m_maxSendRate = jsonValue.GetDouble("MaxSendRate");

    m_maxSendRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SentLast24Hours"))
  {
    m_sentLast24Hours = jsonValue.GetDouble("SentLast24Hours");

    m_sentLast24HoursHasBeenSet = true;
  }

  return *this;
}

JsonValue SendQuota::Jsonize() const
{
  JsonValue payload;

  if(m_max24HourSendHasBeenSet)
  {
   payload.WithDouble("Max24HourSend", m_max24HourSend);

  }

  if(m_maxSendRateHasBeenSet)
  {
   payload.WithDouble("MaxSendRate", m_maxSendRate);

  }

  if(m_sentLast24HoursHasBeenSet)
  {
   payload.WithDouble("SentLast24Hours", m_sentLast24Hours);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
