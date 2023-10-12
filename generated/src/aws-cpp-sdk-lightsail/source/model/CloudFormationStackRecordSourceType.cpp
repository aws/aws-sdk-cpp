/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CloudFormationStackRecordSourceType.h>
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
      namespace CloudFormationStackRecordSourceTypeMapper
      {

        static constexpr uint32_t ExportSnapshotRecord_HASH = ConstExprHashingUtils::HashString("ExportSnapshotRecord");


        CloudFormationStackRecordSourceType GetCloudFormationStackRecordSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExportSnapshotRecord_HASH)
          {
            return CloudFormationStackRecordSourceType::ExportSnapshotRecord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudFormationStackRecordSourceType>(hashCode);
          }

          return CloudFormationStackRecordSourceType::NOT_SET;
        }

        Aws::String GetNameForCloudFormationStackRecordSourceType(CloudFormationStackRecordSourceType enumValue)
        {
          switch(enumValue)
          {
          case CloudFormationStackRecordSourceType::NOT_SET:
            return {};
          case CloudFormationStackRecordSourceType::ExportSnapshotRecord:
            return "ExportSnapshotRecord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudFormationStackRecordSourceTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
