/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/Volume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

Volume::Volume() : 
    m_volumeNameHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
}

Volume::Volume(JsonView jsonValue) : 
    m_volumeNameHasBeenSet(false),
    m_volumeType(VolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Volume& Volume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("volumeName"))
  {
    m_volumeName = jsonValue.GetString("volumeName");

    m_volumeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("volumeType"));

    m_volumeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Volume::Jsonize() const
{
  JsonValue payload;

  if(m_volumeNameHasBeenSet)
  {
   payload.WithString("volumeName", m_volumeName);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("volumeType", VolumeTypeMapper::GetNameForVolumeType(m_volumeType));
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
