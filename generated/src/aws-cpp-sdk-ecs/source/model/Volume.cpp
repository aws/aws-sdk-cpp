/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Volume.h>
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

Volume::Volume() : 
    m_nameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dockerVolumeConfigurationHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false),
    m_fsxWindowsFileServerVolumeConfigurationHasBeenSet(false)
{
}

Volume::Volume(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dockerVolumeConfigurationHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false),
    m_fsxWindowsFileServerVolumeConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Volume& Volume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("host"))
  {
    m_host = jsonValue.GetObject("host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dockerVolumeConfiguration"))
  {
    m_dockerVolumeConfiguration = jsonValue.GetObject("dockerVolumeConfiguration");

    m_dockerVolumeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("efsVolumeConfiguration"))
  {
    m_efsVolumeConfiguration = jsonValue.GetObject("efsVolumeConfiguration");

    m_efsVolumeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fsxWindowsFileServerVolumeConfiguration"))
  {
    m_fsxWindowsFileServerVolumeConfiguration = jsonValue.GetObject("fsxWindowsFileServerVolumeConfiguration");

    m_fsxWindowsFileServerVolumeConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Volume::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_hostHasBeenSet)
  {
   payload.WithObject("host", m_host.Jsonize());

  }

  if(m_dockerVolumeConfigurationHasBeenSet)
  {
   payload.WithObject("dockerVolumeConfiguration", m_dockerVolumeConfiguration.Jsonize());

  }

  if(m_efsVolumeConfigurationHasBeenSet)
  {
   payload.WithObject("efsVolumeConfiguration", m_efsVolumeConfiguration.Jsonize());

  }

  if(m_fsxWindowsFileServerVolumeConfigurationHasBeenSet)
  {
   payload.WithObject("fsxWindowsFileServerVolumeConfiguration", m_fsxWindowsFileServerVolumeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
