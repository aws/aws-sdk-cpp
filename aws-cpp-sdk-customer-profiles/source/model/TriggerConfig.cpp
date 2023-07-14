/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/TriggerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

TriggerConfig::TriggerConfig() : 
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerPropertiesHasBeenSet(false)
{
}

TriggerConfig::TriggerConfig(JsonView jsonValue) : 
    m_triggerType(TriggerType::NOT_SET),
    m_triggerTypeHasBeenSet(false),
    m_triggerPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerConfig& TriggerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TriggerType"))
  {
    m_triggerType = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("TriggerType"));

    m_triggerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerProperties"))
  {
    m_triggerProperties = jsonValue.GetObject("TriggerProperties");

    m_triggerPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("TriggerType", TriggerTypeMapper::GetNameForTriggerType(m_triggerType));
  }

  if(m_triggerPropertiesHasBeenSet)
  {
   payload.WithObject("TriggerProperties", m_triggerProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
