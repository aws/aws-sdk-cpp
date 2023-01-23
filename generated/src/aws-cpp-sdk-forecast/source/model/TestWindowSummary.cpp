/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
