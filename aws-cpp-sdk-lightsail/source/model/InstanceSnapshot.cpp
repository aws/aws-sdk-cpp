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

#include <aws/lightsail/model/InstanceSnapshot.h>
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

InstanceSnapshot::InstanceSnapshot() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(InstanceSnapshotState::NOT_SET),
    m_stateHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fromInstanceNameHasBeenSet(false),
    m_fromInstanceArnHasBeenSet(false),
    m_fromBlueprintIdHasBeenSet(false),
    m_fromBundleIdHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false)
{
}

InstanceSnapshot::InstanceSnapshot(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(InstanceSnapshotState::NOT_SET),
    m_stateHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fromInstanceNameHasBeenSet(false),
    m_fromInstanceArnHasBeenSet(false),
    m_fromBlueprintIdHasBeenSet(false),
    m_fromBundleIdHasBeenSet(false),
    m_sizeInGb(0),
    m_sizeInGbHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSnapshot& InstanceSnapshot::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = InstanceSnapshotStateMapper::GetInstanceSnapshotStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progress"))
  {
    m_progress = jsonValue.GetString("progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromInstanceName"))
  {
    m_fromInstanceName = jsonValue.GetString("fromInstanceName");

    m_fromInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromInstanceArn"))
  {
    m_fromInstanceArn = jsonValue.GetString("fromInstanceArn");

    m_fromInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromBlueprintId"))
  {
    m_fromBlueprintId = jsonValue.GetString("fromBlueprintId");

    m_fromBlueprintIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromBundleId"))
  {
    m_fromBundleId = jsonValue.GetString("fromBundleId");

    m_fromBundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeInGb"))
  {
    m_sizeInGb = jsonValue.GetInteger("sizeInGb");

    m_sizeInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSnapshot::Jsonize() const
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

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", InstanceSnapshotStateMapper::GetNameForInstanceSnapshotState(m_state));
  }

  if(m_progressHasBeenSet)
  {
   payload.WithString("progress", m_progress);

  }

  if(m_fromInstanceNameHasBeenSet)
  {
   payload.WithString("fromInstanceName", m_fromInstanceName);

  }

  if(m_fromInstanceArnHasBeenSet)
  {
   payload.WithString("fromInstanceArn", m_fromInstanceArn);

  }

  if(m_fromBlueprintIdHasBeenSet)
  {
   payload.WithString("fromBlueprintId", m_fromBlueprintId);

  }

  if(m_fromBundleIdHasBeenSet)
  {
   payload.WithString("fromBundleId", m_fromBundleId);

  }

  if(m_sizeInGbHasBeenSet)
  {
   payload.WithInteger("sizeInGb", m_sizeInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws