/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisScanConfiguration::CisScanConfiguration() : 
    m_ownerIdHasBeenSet(false),
    m_scanConfigurationArnHasBeenSet(false),
    m_scanNameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_securityLevel(CisSecurityLevel::NOT_SET),
    m_securityLevelHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

CisScanConfiguration::CisScanConfiguration(JsonView jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_scanConfigurationArnHasBeenSet(false),
    m_scanNameHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_securityLevel(CisSecurityLevel::NOT_SET),
    m_securityLevelHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
  *this = jsonValue;
}

CisScanConfiguration& CisScanConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ownerId"))
  {
    m_ownerId = jsonValue.GetString("ownerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanConfigurationArn"))
  {
    m_scanConfigurationArn = jsonValue.GetString("scanConfigurationArn");

    m_scanConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");

    m_scanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityLevel"))
  {
    m_securityLevel = CisSecurityLevelMapper::GetCisSecurityLevelForName(jsonValue.GetString("securityLevel"));

    m_securityLevelHasBeenSet = true;
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

  if(jsonValue.ValueExists("targets"))
  {
    m_targets = jsonValue.GetObject("targets");

    m_targetsHasBeenSet = true;
  }

  return *this;
}

JsonValue CisScanConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("ownerId", m_ownerId);

  }

  if(m_scanConfigurationArnHasBeenSet)
  {
   payload.WithString("scanConfigurationArn", m_scanConfigurationArn);

  }

  if(m_scanNameHasBeenSet)
  {
   payload.WithString("scanName", m_scanName);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_securityLevelHasBeenSet)
  {
   payload.WithString("securityLevel", CisSecurityLevelMapper::GetNameForCisSecurityLevel(m_securityLevel));
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

  if(m_targetsHasBeenSet)
  {
   payload.WithObject("targets", m_targets.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
