/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/TriggerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
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
  if(jsonValue.ValueExists("triggerType"))
  {
    m_triggerType = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("triggerType"));

    m_triggerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerProperties"))
  {
    m_triggerProperties = jsonValue.GetObject("triggerProperties");

    m_triggerPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_triggerTypeHasBeenSet)
  {
   payload.WithString("triggerType", TriggerTypeMapper::GetNameForTriggerType(m_triggerType));
  }

  if(m_triggerPropertiesHasBeenSet)
  {
   payload.WithObject("triggerProperties", m_triggerProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
