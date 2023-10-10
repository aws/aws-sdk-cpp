/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/TlogAccessMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace TlogAccessModeMapper
      {

        static const int BackupOnly_HASH = HashingUtils::HashString("BackupOnly");
        static const int PreferBackup_HASH = HashingUtils::HashString("PreferBackup");
        static const int PreferTlog_HASH = HashingUtils::HashString("PreferTlog");
        static const int TlogOnly_HASH = HashingUtils::HashString("TlogOnly");


        TlogAccessMode GetTlogAccessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BackupOnly_HASH)
          {
            return TlogAccessMode::BackupOnly;
          }
          else if (hashCode == PreferBackup_HASH)
          {
            return TlogAccessMode::PreferBackup;
          }
          else if (hashCode == PreferTlog_HASH)
          {
            return TlogAccessMode::PreferTlog;
          }
          else if (hashCode == TlogOnly_HASH)
          {
            return TlogAccessMode::TlogOnly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TlogAccessMode>(hashCode);
          }

          return TlogAccessMode::NOT_SET;
        }

        Aws::String GetNameForTlogAccessMode(TlogAccessMode enumValue)
        {
          switch(enumValue)
          {
          case TlogAccessMode::NOT_SET:
            return {};
          case TlogAccessMode::BackupOnly:
            return "BackupOnly";
          case TlogAccessMode::PreferBackup:
            return "PreferBackup";
          case TlogAccessMode::PreferTlog:
            return "PreferTlog";
          case TlogAccessMode::TlogOnly:
            return "TlogOnly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TlogAccessModeMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
