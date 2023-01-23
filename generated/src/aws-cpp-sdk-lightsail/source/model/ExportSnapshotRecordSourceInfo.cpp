/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ExportSnapshotRecordSourceInfo.h>
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

ExportSnapshotRecordSourceInfo::ExportSnapshotRecordSourceInfo() : 
    m_resourceType(ExportSnapshotRecordSourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_fromResourceNameHasBeenSet(false),
    m_fromResourceArnHasBeenSet(false),
    m_instanceSnapshotInfoHasBeenSet(false),
    m_diskSnapshotInfoHasBeenSet(false)
{
}

ExportSnapshotRecordSourceInfo::ExportSnapshotRecordSourceInfo(JsonView jsonValue) : 
    m_resourceType(ExportSnapshotRecordSourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_fromResourceNameHasBeenSet(false),
    m_fromResourceArnHasBeenSet(false),
    m_instanceSnapshotInfoHasBeenSet(false),
    m_diskSnapshotInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ExportSnapshotRecordSourceInfo& ExportSnapshotRecordSourceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ExportSnapshotRecordSourceTypeMapper::GetExportSnapshotRecordSourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("fromResourceName"))
  {
    m_fromResourceName = jsonValue.GetString("fromResourceName");

    m_fromResourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromResourceArn"))
  {
    m_fromResourceArn = jsonValue.GetString("fromResourceArn");

    m_fromResourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceSnapshotInfo"))
  {
    m_instanceSnapshotInfo = jsonValue.GetObject("instanceSnapshotInfo");

    m_instanceSnapshotInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diskSnapshotInfo"))
  {
    m_diskSnapshotInfo = jsonValue.GetObject("diskSnapshotInfo");

    m_diskSnapshotInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportSnapshotRecordSourceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ExportSnapshotRecordSourceTypeMapper::GetNameForExportSnapshotRecordSourceType(m_resourceType));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_fromResourceNameHasBeenSet)
  {
   payload.WithString("fromResourceName", m_fromResourceName);

  }

  if(m_fromResourceArnHasBeenSet)
  {
   payload.WithString("fromResourceArn", m_fromResourceArn);

  }

  if(m_instanceSnapshotInfoHasBeenSet)
  {
   payload.WithObject("instanceSnapshotInfo", m_instanceSnapshotInfo.Jsonize());

  }

  if(m_diskSnapshotInfoHasBeenSet)
  {
   payload.WithObject("diskSnapshotInfo", m_diskSnapshotInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
