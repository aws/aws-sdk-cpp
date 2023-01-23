/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_profilingStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

ProfilingGroupDescription::ProfilingGroupDescription(JsonView jsonValue) : 
    m_agentOrchestrationConfigHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_profilingStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
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

  if(jsonValue.ValueExists("computePlatform"))
  {
    m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(jsonValue.GetString("computePlatform"));

    m_computePlatformHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_profilingStatusHasBeenSet)
  {
   payload.WithObject("profilingStatus", m_profilingStatus.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
