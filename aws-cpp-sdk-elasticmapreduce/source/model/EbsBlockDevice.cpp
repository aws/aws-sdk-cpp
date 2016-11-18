/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

EbsBlockDevice::EbsBlockDevice(const JsonValue& jsonValue) : 
    m_volumeSpecificationHasBeenSet(false),
    m_deviceHasBeenSet(false)
{
  *this = jsonValue;
}

EbsBlockDevice& EbsBlockDevice::operator =(const JsonValue& jsonValue)
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