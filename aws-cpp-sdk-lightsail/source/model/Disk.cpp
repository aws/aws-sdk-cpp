/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_tagsHasBeenSet(false),
    m_addOnsHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_isSystemDisk(false),
    m_isSystemDiskHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_state(DiskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false)
{
}

Disk::Disk(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_addOnsHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_isSystemDisk(false),
    m_isSystemDiskHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_state(DiskState::NOT_SET),
    m_stateHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false)
{
  *this = jsonValue;
}

Disk& Disk::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addOns"))
  {
    Aws::Utils::Array<JsonView> addOnsJsonList = jsonValue.GetArray("addOns");
    for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
    {
      m_addOns.push_back(addOnsJsonList[addOnsIndex].AsObject());
    }
    m_addOnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = DiskStateMapper::GetDiskStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_addOnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addOnsJsonList(m_addOns.size());
   for(unsigned addOnsIndex = 0; addOnsIndex < addOnsJsonList.GetLength(); ++addOnsIndex)
   {
     addOnsJsonList[addOnsIndex].AsObject(m_addOns[addOnsIndex].Jsonize());
   }
   payload.WithArray("addOns", std::move(addOnsJsonList));

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

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

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", DiskStateMapper::GetNameForDiskState(m_state));
  }

  if(m_attachedToHasBeenSet)
  {
   payload.WithString("attachedTo", m_attachedTo);

  }

  if(m_isAttachedHasBeenSet)
  {
   payload.WithBool("isAttached", m_isAttached);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
