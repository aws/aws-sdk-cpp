/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ExportSnapshotRecord.h>
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

ExportSnapshotRecord::ExportSnapshotRecord() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(RecordState::NOT_SET),
    m_stateHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_destinationInfoHasBeenSet(false)
{
}

ExportSnapshotRecord::ExportSnapshotRecord(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(RecordState::NOT_SET),
    m_stateHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_destinationInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ExportSnapshotRecord& ExportSnapshotRecord::operator =(JsonView jsonValue)
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
    m_state = RecordStateMapper::GetRecordStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceInfo"))
  {
    m_sourceInfo = jsonValue.GetObject("sourceInfo");

    m_sourceInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationInfo"))
  {
    m_destinationInfo = jsonValue.GetObject("destinationInfo");

    m_destinationInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportSnapshotRecord::Jsonize() const
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
   payload.WithString("state", RecordStateMapper::GetNameForRecordState(m_state));
  }

  if(m_sourceInfoHasBeenSet)
  {
   payload.WithObject("sourceInfo", m_sourceInfo.Jsonize());

  }

  if(m_destinationInfoHasBeenSet)
  {
   payload.WithObject("destinationInfo", m_destinationInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
