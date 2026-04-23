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
