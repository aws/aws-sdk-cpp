/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class ExportSnapshotRecordSourceType
  {
    NOT_SET,
    InstanceSnapshot,
    DiskSnapshot
  };

namespace ExportSnapshotRecordSourceTypeMapper
{
AWS_LIGHTSAIL_API ExportSnapshotRecordSourceType GetExportSnapshotRecordSourceTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForExportSnapshotRecordSourceType(ExportSnapshotRecordSourceType value);
} // namespace ExportSnapshotRecordSourceTypeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
