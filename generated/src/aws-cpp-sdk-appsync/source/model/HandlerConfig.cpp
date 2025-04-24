/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/HandlerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

HandlerConfig::HandlerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

HandlerConfig& HandlerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = HandlerBehaviorMapper::GetHandlerBehaviorForName(jsonValue.GetString("behavior"));
    m_behaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integration"))
  {
    m_integration = jsonValue.GetObject("integration");
    m_integrationHasBeenSet = true;
  }
  return *this;
}

JsonValue HandlerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("behavior", HandlerBehaviorMapper::GetNameForHandlerBehavior(m_behavior));
  }

  if(m_integrationHasBeenSet)
  {
   payload.WithObject("integration", m_integration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
