/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/TestGridSessionAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

TestGridSessionAction::TestGridSessionAction() : 
    m_actionHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_requestMethodHasBeenSet(false)
{
}

TestGridSessionAction::TestGridSessionAction(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_startedHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_requestMethodHasBeenSet(false)
{
  *this = jsonValue;
}

TestGridSessionAction& TestGridSessionAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("started"))
  {
    m_started = jsonValue.GetDouble("started");

    m_startedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInt64("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestMethod"))
  {
    m_requestMethod = jsonValue.GetString("requestMethod");

    m_requestMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue TestGridSessionAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_startedHasBeenSet)
  {
   payload.WithDouble("started", m_started.SecondsWithMSPrecision());
  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("duration", m_duration);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  if(m_requestMethodHasBeenSet)
  {
   payload.WithString("requestMethod", m_requestMethod);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
