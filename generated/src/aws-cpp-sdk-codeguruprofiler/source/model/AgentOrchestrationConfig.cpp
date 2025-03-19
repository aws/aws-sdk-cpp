/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

AgentOrchestrationConfig::AgentOrchestrationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentOrchestrationConfig& AgentOrchestrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profilingEnabled"))
  {
    m_profilingEnabled = jsonValue.GetBool("profilingEnabled");
    m_profilingEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentOrchestrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_profilingEnabledHasBeenSet)
  {
   payload.WithBool("profilingEnabled", m_profilingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
