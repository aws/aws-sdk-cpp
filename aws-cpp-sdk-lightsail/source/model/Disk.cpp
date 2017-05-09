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

#include <aws/lightsail/model/Disk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Disk::Disk() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_gbInUse(0),
    m_gbInUseHasBeenSet(false),
    m_isSystemDisk(false),
    m_isSystemDiskHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false),
    m_attachmentStateHasBeenSet(false)
{
}

Disk::Disk(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_gbInUse(0),
    m_gbInUseHasBeenSet(false),
    m_isSystemDisk(false),
    m_isSystemDiskHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false),
    m_attachmentStateHasBeenSet(false)
{
  *this = jsonValue;
}

Disk& Disk::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gbInUse"))
  {
    m_gbInUse = jsonValue.GetInteger("gbInUse");

    m_gbInUseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSystemDisk"))
  {
    m_isSystemDisk = jsonValue.GetBool("isSystemDisk");

    m_isSystemDiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInteger("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachedTo"))
  {
    m_attachedTo = jsonValue.GetString("attachedTo");

    m_attachedToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isAttached"))
  {
    m_isAttached = jsonValue.GetBool("isAttached");

    m_isAttachedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachmentState"))
  {
    m_attachmentState = jsonValue.GetString("attachmentState");

    m_attachmentStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Disk::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  if(m_gbInUseHasBeenSet)
  {
   payload.WithInteger("gbInUse", m_gbInUse);

  }

  if(m_isSystemDiskHasBeenSet)
  {
   payload.WithBool("isSystemDisk", m_isSystemDisk);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInteger("iops", m_iops);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("path", m_path);

  }

  if(m_attachedToHasBeenSet)
  {
   payload.WithString("attachedTo", m_attachedTo);

  }

  if(m_isAttachedHasBeenSet)
  {
   payload.WithBool("isAttached", m_isAttached);

  }

  if(m_attachmentStateHasBeenSet)
  {
   payload.WithString("attachmentState", m_attachmentState);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws