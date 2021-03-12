/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ScheduleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

ScheduleConfiguration::ScheduleConfiguration() : 
    m_transitionHasBeenSet(false)
{
}

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) : 
    m_transitionHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfiguration& ScheduleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Transition"))
  {
    m_transition = jsonValue.GetObject("Transition");

    m_transitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_transitionHasBeenSet)
  {
   payload.WithObject("Transition", m_transition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
