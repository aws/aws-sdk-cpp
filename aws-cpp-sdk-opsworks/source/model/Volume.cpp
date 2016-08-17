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
#include <aws/opsworks/model/Volume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Volume::Volume() : 
    m_volumeIdHasBeenSet(false),
    m_ec2VolumeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_raidArrayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_mountPointHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false)
{
}

Volume::Volume(const JsonValue& jsonValue) : 
    m_volumeIdHasBeenSet(false),
    m_ec2VolumeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_raidArrayIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_mountPointHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false)
{
  *this = jsonValue;
}

Volume& Volume::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");

    m_volumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2VolumeId"))
  {
    m_ec2VolumeId = jsonValue.GetString("Ec2VolumeId");

    m_ec2VolumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RaidArrayId"))
  {
    m_raidArrayId = jsonValue.GetString("RaidArrayId");

    m_raidArrayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Device"))
  {
    m_device = jsonValue.GetString("Device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountPoint"))
  {
    m_mountPoint = jsonValue.GetString("MountPoint");

    m_mountPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Iops"))
  {
    m_iops = jsonValue.GetInteger("Iops");

    m_iopsHasBeenSet = true;
  }

  return *this;
}

JsonValue Volume::Jsonize() const
{
  JsonValue payload;

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_ec2VolumeIdHasBeenSet)
  {
   payload.WithString("Ec2VolumeId", m_ec2VolumeId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_raidArrayIdHasBeenSet)
  {
   payload.WithString("RaidArrayId", m_raidArrayId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  if(m_deviceHasBeenSet)
  {
   payload.WithString("Device", m_device);

  }

  if(m_mountPointHasBeenSet)
  {
   payload.WithString("MountPoint", m_mountPoint);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("Iops", m_iops);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws