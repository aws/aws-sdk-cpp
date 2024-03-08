/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceVolumeConfiguration::ServiceVolumeConfiguration() : 
    m_nameHasBeenSet(false),
    m_managedEBSVolumeHasBeenSet(false)
{
}

ServiceVolumeConfiguration::ServiceVolumeConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_managedEBSVolumeHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceVolumeConfiguration& ServiceVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedEBSVolume"))
  {
    m_managedEBSVolume = jsonValue.GetObject("managedEBSVolume");

    m_managedEBSVolumeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_managedEBSVolumeHasBeenSet)
  {
   payload.WithObject("managedEBSVolume", m_managedEBSVolume.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
