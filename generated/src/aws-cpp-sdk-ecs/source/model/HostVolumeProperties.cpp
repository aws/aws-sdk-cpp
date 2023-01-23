/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/HostVolumeProperties.h>
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

HostVolumeProperties::HostVolumeProperties() : 
    m_sourcePathHasBeenSet(false)
{
}

HostVolumeProperties::HostVolumeProperties(JsonView jsonValue) : 
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

HostVolumeProperties& HostVolumeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourcePath"))
  {
    m_sourcePath = jsonValue.GetString("sourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue HostVolumeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("sourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
