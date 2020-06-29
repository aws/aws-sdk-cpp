/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/EbsBlockDeviceConfig.h>
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

EbsBlockDeviceConfig::EbsBlockDeviceConfig() : 
    m_volumeSpecificationHasBeenSet(false),
    m_volumesPerInstance(0),
    m_volumesPerInstanceHasBeenSet(false)
{
}

EbsBlockDeviceConfig::EbsBlockDeviceConfig(JsonView jsonValue) : 
    m_volumeSpecificationHasBeenSet(false),
    m_volumesPerInstance(0),
    m_volumesPerInstanceHasBeenSet(false)
{
  *this = jsonValue;
}

EbsBlockDeviceConfig& EbsBlockDeviceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeSpecification"))
  {
    m_volumeSpecification = jsonValue.GetObject("VolumeSpecification");

    m_volumeSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumesPerInstance"))
  {
    m_volumesPerInstance = jsonValue.GetInteger("VolumesPerInstance");

    m_volumesPerInstanceHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsBlockDeviceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_volumeSpecificationHasBeenSet)
  {
   payload.WithObject("VolumeSpecification", m_volumeSpecification.Jsonize());

  }

  if(m_volumesPerInstanceHasBeenSet)
  {
   payload.WithInteger("VolumesPerInstance", m_volumesPerInstance);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
