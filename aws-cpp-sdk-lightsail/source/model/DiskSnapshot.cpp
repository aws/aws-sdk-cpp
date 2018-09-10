﻿/*
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

#include <aws/lightsail/model/DiskSnapshot.h>
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

DiskSnapshot::DiskSnapshot() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_state(DiskSnapshotState::NOT_SET),
    m_stateHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fromDiskNameHasBeenSet(false),
    m_fromDiskArnHasBeenSet(false)
{
}

DiskSnapshot::DiskSnapshot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false),
    m_state(DiskSnapshotState::NOT_SET),
    m_stateHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fromDiskNameHasBeenSet(false),
    m_fromDiskArnHasBeenSet(false)
{
  *this = jsonValue;
}

DiskSnapshot& DiskSnapshot::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = DiskSnapshotStateMapper::GetDiskSnapshotStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progress"))
  {
    m_progress = jsonValue.GetString("progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromDiskName"))
  {
    m_fromDiskName = jsonValue.GetString("fromDiskName");

    m_fromDiskNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromDiskArn"))
  {
    m_fromDiskArn = jsonValue.GetString("fromDiskArn");

    m_fromDiskArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskSnapshot::Jsonize() const
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

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", DiskSnapshotStateMapper::GetNameForDiskSnapshotState(m_state));
  }

  if(m_progressHasBeenSet)
  {
   payload.WithString("progress", m_progress);

  }

  if(m_fromDiskNameHasBeenSet)
  {
   payload.WithString("fromDiskName", m_fromDiskName);

  }

  if(m_fromDiskArnHasBeenSet)
  {
   payload.WithString("fromDiskArn", m_fromDiskArn);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
