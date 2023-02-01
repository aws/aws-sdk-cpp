/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/StateChangeConfiguration.h>
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

StateChangeConfiguration::StateChangeConfiguration() : 
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false)
{
}

StateChangeConfiguration::StateChangeConfiguration(JsonView jsonValue) : 
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StateChangeConfiguration& StateChangeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("triggerType"))
  {
    m_triggerType = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("triggerType"));

    m_triggerTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StateChangeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("triggerType", TriggerTypeMapper::GetNameForTriggerType(m_triggerType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
