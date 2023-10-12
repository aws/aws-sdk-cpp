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

        static constexpr uint32_t InstanceSnapshot_HASH = ConstExprHashingUtils::HashString("InstanceSnapshot");
        static constexpr uint32_t DiskSnapshot_HASH = ConstExprHashingUtils::HashString("DiskSnapshot");


        ExportSnapshotRecordSourceType GetExportSnapshotRecordSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ExportSnapshotRecordSourceType::NOT_SET:
            return {};
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
