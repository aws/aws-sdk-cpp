/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

OutboundStrategy::OutboundStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

OutboundStrategy& OutboundStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = OutboundStrategyTypeMapper::GetOutboundStrategyTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Config"))
  {
    m_config = jsonValue.GetObject("Config");
    m_configHasBeenSet = true;
  }
  return *this;
}

JsonValue OutboundStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OutboundStrategyTypeMapper::GetNameForOutboundStrategyType(m_type));
  }

  if(m_configHasBeenSet)
  {
   payload.WithObject("Config", m_config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
