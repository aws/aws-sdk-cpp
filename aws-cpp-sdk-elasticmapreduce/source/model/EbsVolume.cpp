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

EbsVolume::EbsVolume(const JsonValue& jsonValue) : 
    m_deviceHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
  *this = jsonValue;
}

EbsVolume& EbsVolume::operator =(const JsonValue& jsonValue)
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