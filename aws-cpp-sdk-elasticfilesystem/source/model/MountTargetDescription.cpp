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
#include <aws/elasticfilesystem/model/MountTargetDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

MountTargetDescription::MountTargetDescription() : 
    m_ownerIdHasBeenSet(false),
    m_mountTargetIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
}

MountTargetDescription::MountTargetDescription(const JsonValue& jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_mountTargetIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

MountTargetDescription& MountTargetDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountTargetId"))
  {
    m_mountTargetId = jsonValue.GetString("MountTargetId");

    m_mountTargetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));

    m_lifeCycleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MountTargetDescription::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_mountTargetIdHasBeenSet)
  {
   payload.WithString("MountTargetId", m_mountTargetId);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_lifeCycleStateHasBeenSet)
  {
   payload.WithString("LifeCycleState", LifeCycleStateMapper::GetNameForLifeCycleState(m_lifeCycleState));
  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws