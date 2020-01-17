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
    m_efsVolumeConfigurationHasBeenSet(false)
{
}

Volume::Volume(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dockerVolumeConfigurationHasBeenSet(false),
    m_efsVolumeConfigurationHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
