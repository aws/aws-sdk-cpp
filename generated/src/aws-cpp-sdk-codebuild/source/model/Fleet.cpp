/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/Fleet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

Fleet::Fleet(JsonView jsonValue)
{
  *this = jsonValue;
}

Fleet& Fleet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");
    m_createdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModified"))
  {
    m_lastModified = jsonValue.GetDouble("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baseCapacity"))
  {
    m_baseCapacity = jsonValue.GetInteger("baseCapacity");
    m_baseCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentType"))
  {
    m_environmentType = EnvironmentTypeMapper::GetEnvironmentTypeForName(jsonValue.GetString("environmentType"));
    m_environmentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeType"))
  {
    m_computeType = ComputeTypeMapper::GetComputeTypeForName(jsonValue.GetString("computeType"));
    m_computeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeConfiguration"))
  {
    m_computeConfiguration = jsonValue.GetObject("computeConfiguration");
    m_computeConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scalingConfiguration"))
  {
    m_scalingConfiguration = jsonValue.GetObject("scalingConfiguration");
    m_scalingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overflowBehavior"))
  {
    m_overflowBehavior = FleetOverflowBehaviorMapper::GetFleetOverflowBehaviorForName(jsonValue.GetString("overflowBehavior"));
    m_overflowBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("proxyConfiguration"))
  {
    m_proxyConfiguration = jsonValue.GetObject("proxyConfiguration");
    m_proxyConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetString("imageId");
    m_imageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fleetServiceRole"))
  {
    m_fleetServiceRole = jsonValue.GetString("fleetServiceRole");
    m_fleetServiceRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue Fleet::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("lastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_baseCapacityHasBeenSet)
  {
   payload.WithInteger("baseCapacity", m_baseCapacity);

  }

  if(m_environmentTypeHasBeenSet)
  {
   payload.WithString("environmentType", EnvironmentTypeMapper::GetNameForEnvironmentType(m_environmentType));
  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_computeConfigurationHasBeenSet)
  {
   payload.WithObject("computeConfiguration", m_computeConfiguration.Jsonize());

  }

  if(m_scalingConfigurationHasBeenSet)
  {
   payload.WithObject("scalingConfiguration", m_scalingConfiguration.Jsonize());

  }

  if(m_overflowBehaviorHasBeenSet)
  {
   payload.WithString("overflowBehavior", FleetOverflowBehaviorMapper::GetNameForFleetOverflowBehavior(m_overflowBehavior));
  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_proxyConfigurationHasBeenSet)
  {
   payload.WithObject("proxyConfiguration", m_proxyConfiguration.Jsonize());

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("imageId", m_imageId);

  }

  if(m_fleetServiceRoleHasBeenSet)
  {
   payload.WithString("fleetServiceRole", m_fleetServiceRole);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
