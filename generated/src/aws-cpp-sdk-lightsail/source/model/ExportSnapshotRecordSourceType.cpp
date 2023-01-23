/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ExportSnapshotRecordSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ExportSnapshotRecordSourceTypeMapper
      {

        static const int InstanceSnapshot_HASH = HashingUtils::HashString("InstanceSnapshot");
        static const int DiskSnapshot_HASH = HashingUtils::HashString("DiskSnapshot");


        ExportSnapshotRecordSourceType GetExportSnapshotRecordSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceSnapshot_HASH)
          {
            return ExportSnapshotRecordSourceType::InstanceSnapshot;
          }
          else if (hashCode == DiskSnapshot_HASH)
          {
            return ExportSnapshotRecordSourceType::DiskSnapshot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportSnapshotRecordSourceType>(hashCode);
          }

          return ExportSnapshotRecordSourceType::NOT_SET;
        }

        Aws::String GetNameForExportSnapshotRecordSourceType(ExportSnapshotRecordSourceType enumValue)
        {
          switch(enumValue)
          {
          case ExportSnapshotRecordSourceType::InstanceSnapshot:
            return "InstanceSnapshot";
          case ExportSnapshotRecordSourceType::DiskSnapshot:
            return "DiskSnapshot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportSnapshotRecordSourceTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
