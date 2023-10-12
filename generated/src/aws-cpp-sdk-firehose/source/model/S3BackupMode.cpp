/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/S3BackupMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace S3BackupModeMapper
      {

        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");
        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");


        S3BackupMode GetS3BackupModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Disabled_HASH)
          {
            return S3BackupMode::Disabled;
          }
          else if (hashCode == Enabled_HASH)
          {
            return S3BackupMode::Enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3BackupMode>(hashCode);
          }

          return S3BackupMode::NOT_SET;
        }

        Aws::String GetNameForS3BackupMode(S3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case S3BackupMode::NOT_SET:
            return {};
          case S3BackupMode::Disabled:
            return "Disabled";
          case S3BackupMode::Enabled:
            return "Enabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
