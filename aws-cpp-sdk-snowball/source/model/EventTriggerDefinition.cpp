/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/EventTriggerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

EventTriggerDefinition::EventTriggerDefinition() : 
    m_eventResourceARNHasBeenSet(false)
{
}

EventTriggerDefinition::EventTriggerDefinition(JsonView jsonValue) : 
    m_eventResourceARNHasBeenSet(false)
{
  *this = jsonValue;
}

EventTriggerDefinition& EventTriggerDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventResourceARN"))
  {
    m_eventResourceARN = jsonValue.GetString("EventResourceARN");

    m_eventResourceARNHasBeenSet = true;
  }

  return *this;
}

JsonValue EventTriggerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_eventResourceARNHasBeenSet)
  {
   payload.WithString("EventResourceARN", m_eventResourceARN);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
