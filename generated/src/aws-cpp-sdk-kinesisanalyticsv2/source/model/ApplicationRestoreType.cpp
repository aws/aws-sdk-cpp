/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ApplicationRestoreType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace ApplicationRestoreTypeMapper
      {

        static constexpr uint32_t SKIP_RESTORE_FROM_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("SKIP_RESTORE_FROM_SNAPSHOT");
        static constexpr uint32_t RESTORE_FROM_LATEST_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("RESTORE_FROM_LATEST_SNAPSHOT");
        static constexpr uint32_t RESTORE_FROM_CUSTOM_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("RESTORE_FROM_CUSTOM_SNAPSHOT");


        ApplicationRestoreType GetApplicationRestoreTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SKIP_RESTORE_FROM_SNAPSHOT_HASH)
          {
            return ApplicationRestoreType::SKIP_RESTORE_FROM_SNAPSHOT;
          }
          else if (hashCode == RESTORE_FROM_LATEST_SNAPSHOT_HASH)
          {
            return ApplicationRestoreType::RESTORE_FROM_LATEST_SNAPSHOT;
          }
          else if (hashCode == RESTORE_FROM_CUSTOM_SNAPSHOT_HASH)
          {
            return ApplicationRestoreType::RESTORE_FROM_CUSTOM_SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationRestoreType>(hashCode);
          }

          return ApplicationRestoreType::NOT_SET;
        }

        Aws::String GetNameForApplicationRestoreType(ApplicationRestoreType enumValue)
        {
          switch(enumValue)
          {
          case ApplicationRestoreType::NOT_SET:
            return {};
          case ApplicationRestoreType::SKIP_RESTORE_FROM_SNAPSHOT:
            return "SKIP_RESTORE_FROM_SNAPSHOT";
          case ApplicationRestoreType::RESTORE_FROM_LATEST_SNAPSHOT:
            return "RESTORE_FROM_LATEST_SNAPSHOT";
          case ApplicationRestoreType::RESTORE_FROM_CUSTOM_SNAPSHOT:
            return "RESTORE_FROM_CUSTOM_SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationRestoreTypeMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
