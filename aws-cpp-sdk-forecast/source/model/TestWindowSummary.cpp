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

#include <aws/forecast/model/TestWindowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

TestWindowSummary::TestWindowSummary() : 
    m_testWindowStartHasBeenSet(false),
    m_testWindowEndHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

TestWindowSummary::TestWindowSummary(JsonView jsonValue) : 
    m_testWindowStartHasBeenSet(false),
    m_testWindowEndHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

TestWindowSummary& TestWindowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TestWindowStart"))
  {
    m_testWindowStart = jsonValue.GetDouble("TestWindowStart");

    m_testWindowStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestWindowEnd"))
  {
    m_testWindowEnd = jsonValue.GetDouble("TestWindowEnd");

    m_testWindowEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue TestWindowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testWindowStartHasBeenSet)
  {
   payload.WithDouble("TestWindowStart", m_testWindowStart.SecondsWithMSPrecision());
  }

  if(m_testWindowEndHasBeenSet)
  {
   payload.WithDouble("TestWindowEnd", m_testWindowEnd.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
