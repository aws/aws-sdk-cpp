﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/TimerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

TimerDefinition::TimerDefinition() : 
    m_nameHasBeenSet(false),
    m_seconds(0),
    m_secondsHasBeenSet(false)
{
}

TimerDefinition::TimerDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_seconds(0),
    m_secondsHasBeenSet(false)
{
  *this = jsonValue;
}

TimerDefinition& TimerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("seconds"))
  {
    m_seconds = jsonValue.GetInteger("seconds");

    m_secondsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_secondsHasBeenSet)
  {
   payload.WithInteger("seconds", m_seconds);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
