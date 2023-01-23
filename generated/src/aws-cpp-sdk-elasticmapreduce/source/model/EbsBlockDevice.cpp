/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/EbsBlockDevice.h>
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

EbsBlockDevice::EbsBlockDevice() : 
    m_volumeSpecificationHasBeenSet(false),
    m_deviceHasBeenSet(false)
{
}

EbsBlockDevice::EbsBlockDevice(JsonView jsonValue) : 
    m_volumeSpecificationHasBeenSet(false),
    m_deviceHasBeenSet(false)
{
  *this = jsonValue;
}

EbsBlockDevice& EbsBlockDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeSpecification"))
  {
    m_volumeSpecification = jsonValue.GetObject("VolumeSpecification");

    m_volumeSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Device"))
  {
    m_device = jsonValue.GetString("Device");

    m_deviceHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsBlockDevice::Jsonize() const
{
  JsonValue payload;

  if(m_volumeSpecificationHasBeenSet)
  {
   payload.WithObject("VolumeSpecification", m_volumeSpecification.Jsonize());

  }

  if(m_deviceHasBeenSet)
  {
   payload.WithString("Device", m_device);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
