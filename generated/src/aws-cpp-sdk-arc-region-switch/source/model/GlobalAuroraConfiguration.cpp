/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GlobalAuroraConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

GlobalAuroraConfiguration::GlobalAuroraConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalAuroraConfiguration& GlobalAuroraConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutMinutes"))
  {
    m_timeoutMinutes = jsonValue.GetInteger("timeoutMinutes");
    m_timeoutMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("crossAccountRole"))
  {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = GlobalAuroraDefaultBehaviorMapper::GetGlobalAuroraDefaultBehaviorForName(jsonValue.GetString("behavior"));
    m_behaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ungraceful"))
  {
    m_ungraceful = jsonValue.GetObject("ungraceful");
    m_ungracefulHasBeenSet = true;
  }
  if(jsonValue.ValueExists("globalClusterIdentifier"))
  {
    m_globalClusterIdentifier = jsonValue.GetString("globalClusterIdentifier");
    m_globalClusterIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseClusterArns"))
  {
    Aws::Utils::Array<JsonView> databaseClusterArnsJsonList = jsonValue.GetArray("databaseClusterArns");
    for(unsigned databaseClusterArnsIndex = 0; databaseClusterArnsIndex < databaseClusterArnsJsonList.GetLength(); ++databaseClusterArnsIndex)
    {
      m_databaseClusterArns.push_back(databaseClusterArnsJsonList[databaseClusterArnsIndex].AsString());
    }
    m_databaseClusterArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalAuroraConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutMinutesHasBeenSet)
  {
   payload.WithInteger("timeoutMinutes", m_timeoutMinutes);

  }

  if(m_crossAccountRoleHasBeenSet)
  {
   payload.WithString("crossAccountRole", m_crossAccountRole);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("behavior", GlobalAuroraDefaultBehaviorMapper::GetNameForGlobalAuroraDefaultBehavior(m_behavior));
  }

  if(m_ungracefulHasBeenSet)
  {
   payload.WithObject("ungraceful", m_ungraceful.Jsonize());

  }

  if(m_globalClusterIdentifierHasBeenSet)
  {
   payload.WithString("globalClusterIdentifier", m_globalClusterIdentifier);

  }

  if(m_databaseClusterArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databaseClusterArnsJsonList(m_databaseClusterArns.size());
   for(unsigned databaseClusterArnsIndex = 0; databaseClusterArnsIndex < databaseClusterArnsJsonList.GetLength(); ++databaseClusterArnsIndex)
   {
     databaseClusterArnsJsonList[databaseClusterArnsIndex].AsString(m_databaseClusterArns[databaseClusterArnsIndex]);
   }
   payload.WithArray("databaseClusterArns", std::move(databaseClusterArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
