/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LifecycleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

LifecycleConfiguration::LifecycleConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LifecycleConfiguration& LifecycleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("idleRuntimeSessionTimeout"))
  {
    m_idleRuntimeSessionTimeout = jsonValue.GetInteger("idleRuntimeSessionTimeout");
    m_idleRuntimeSessionTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxLifetime"))
  {
    m_maxLifetime = jsonValue.GetInteger("maxLifetime");
    m_maxLifetimeHasBeenSet = true;
  }
  return *this;
}

JsonValue LifecycleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_idleRuntimeSessionTimeoutHasBeenSet)
  {
   payload.WithInteger("idleRuntimeSessionTimeout", m_idleRuntimeSessionTimeout);

  }

  if(m_maxLifetimeHasBeenSet)
  {
   payload.WithInteger("maxLifetime", m_maxLifetime);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
