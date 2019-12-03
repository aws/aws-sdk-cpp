/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codeguruprofiler/model/ProfilingGroupDescription.h>
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

ProfilingGroupDescription::ProfilingGroupDescription() : 
    m_agentOrchestrationConfigHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_profilingStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

ProfilingGroupDescription::ProfilingGroupDescription(JsonView jsonValue) : 
    m_agentOrchestrationConfigHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_profilingStatusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ProfilingGroupDescription& ProfilingGroupDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentOrchestrationConfig"))
  {
    m_agentOrchestrationConfig = jsonValue.GetObject("agentOrchestrationConfig");

    m_agentOrchestrationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profilingStatus"))
  {
    m_profilingStatus = jsonValue.GetObject("profilingStatus");

    m_profilingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfilingGroupDescription::Jsonize() const
{
  JsonValue payload;

  if(m_agentOrchestrationConfigHasBeenSet)
  {
   payload.WithObject("agentOrchestrationConfig", m_agentOrchestrationConfig.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_profilingStatusHasBeenSet)
  {
   payload.WithObject("profilingStatus", m_profilingStatus.Jsonize());

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
