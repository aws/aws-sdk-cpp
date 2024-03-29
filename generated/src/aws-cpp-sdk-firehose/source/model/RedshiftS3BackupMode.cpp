﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/RedshiftS3BackupMode.h>
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
      namespace RedshiftS3BackupModeMapper
      {

        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int Enabled_HASH = HashingUtils::HashString("Enabled");


        RedshiftS3BackupMode GetRedshiftS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Disabled_HASH)
          {
            return RedshiftS3BackupMode::Disabled;
          }
          else if (hashCode == Enabled_HASH)
          {
            return RedshiftS3BackupMode::Enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftS3BackupMode>(hashCode);
          }

          return RedshiftS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForRedshiftS3BackupMode(RedshiftS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case RedshiftS3BackupMode::NOT_SET:
            return {};
          case RedshiftS3BackupMode::Disabled:
            return "Disabled";
          case RedshiftS3BackupMode::Enabled:
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

      } // namespace RedshiftS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
