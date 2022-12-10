/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Addon.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Addon::Addon() : 
    m_addonNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_status(AddonStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_addonVersionHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_addonArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_serviceAccountRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_marketplaceInformationHasBeenSet(false),
    m_configurationValuesHasBeenSet(false)
{
}

Addon::Addon(JsonView jsonValue) : 
    m_addonNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_status(AddonStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_addonVersionHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_addonArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_serviceAccountRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publisherHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_marketplaceInformationHasBeenSet(false),
    m_configurationValuesHasBeenSet(false)
{
  *this = jsonValue;
}

Addon& Addon::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addonName"))
  {
    m_addonName = jsonValue.GetString("addonName");

    m_addonNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AddonStatusMapper::GetAddonStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addonVersion"))
  {
    m_addonVersion = jsonValue.GetString("addonVersion");

    m_addonVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = jsonValue.GetObject("health");

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addonArn"))
  {
    m_addonArn = jsonValue.GetString("addonArn");

    m_addonArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceAccountRoleArn"))
  {
    m_serviceAccountRoleArn = jsonValue.GetString("serviceAccountRoleArn");

    m_serviceAccountRoleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("publisher"))
  {
    m_publisher = jsonValue.GetString("publisher");

    m_publisherHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("marketplaceInformation"))
  {
    m_marketplaceInformation = jsonValue.GetObject("marketplaceInformation");

    m_marketplaceInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationValues"))
  {
    m_configurationValues = jsonValue.GetString("configurationValues");

    m_configurationValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Addon::Jsonize() const
{
  JsonValue payload;

  if(m_addonNameHasBeenSet)
  {
   payload.WithString("addonName", m_addonName);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AddonStatusMapper::GetNameForAddonStatus(m_status));
  }

  if(m_addonVersionHasBeenSet)
  {
   payload.WithString("addonVersion", m_addonVersion);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithObject("health", m_health.Jsonize());

  }

  if(m_addonArnHasBeenSet)
  {
   payload.WithString("addonArn", m_addonArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_serviceAccountRoleArnHasBeenSet)
  {
   payload.WithString("serviceAccountRoleArn", m_serviceAccountRoleArn);

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

  if(m_publisherHasBeenSet)
  {
   payload.WithString("publisher", m_publisher);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_marketplaceInformationHasBeenSet)
  {
   payload.WithObject("marketplaceInformation", m_marketplaceInformation.Jsonize());

  }

  if(m_configurationValuesHasBeenSet)
  {
   payload.WithString("configurationValues", m_configurationValues);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
