/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/EbsVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

EbsVolume::EbsVolume() : 
    m_deviceHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
}

EbsVolume::EbsVolume(JsonView jsonValue) : 
    m_deviceHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
  *this = jsonValue;
}

EbsVolume& EbsVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Device"))
  {
    m_device = jsonValue.GetString("Device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");

    m_volumeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsVolume::Jsonize() const
{
  JsonValue payload;

  if(m_deviceHasBeenSet)
  {
   payload.WithString("Device", m_device);

  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
