/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/Processor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

Processor::Processor() : 
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_executionOrder(0),
    m_executionOrderHasBeenSet(false),
    m_fallbackAction(FallbackAction::NOT_SET),
    m_fallbackActionHasBeenSet(false)
{
}

Processor::Processor(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_executionOrder(0),
    m_executionOrderHasBeenSet(false),
    m_fallbackAction(FallbackAction::NOT_SET),
    m_fallbackActionHasBeenSet(false)
{
  *this = jsonValue;
}

Processor& Processor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionOrder"))
  {
    m_executionOrder = jsonValue.GetInteger("ExecutionOrder");

    m_executionOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FallbackAction"))
  {
    m_fallbackAction = FallbackActionMapper::GetFallbackActionForName(jsonValue.GetString("FallbackAction"));

    m_fallbackActionHasBeenSet = true;
  }

  return *this;
}

JsonValue Processor::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_executionOrderHasBeenSet)
  {
   payload.WithInteger("ExecutionOrder", m_executionOrder);

  }

  if(m_fallbackActionHasBeenSet)
  {
   payload.WithString("FallbackAction", FallbackActionMapper::GetNameForFallbackAction(m_fallbackAction));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
