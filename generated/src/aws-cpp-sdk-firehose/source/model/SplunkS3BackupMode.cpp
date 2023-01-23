/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SplunkS3BackupMode.h>
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
      namespace SplunkS3BackupModeMapper
      {

        static const int FailedEventsOnly_HASH = HashingUtils::HashString("FailedEventsOnly");
        static const int AllEvents_HASH = HashingUtils::HashString("AllEvents");


        SplunkS3BackupMode GetSplunkS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedEventsOnly_HASH)
          {
            return SplunkS3BackupMode::FailedEventsOnly;
          }
          else if (hashCode == AllEvents_HASH)
          {
            return SplunkS3BackupMode::AllEvents;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SplunkS3BackupMode>(hashCode);
          }

          return SplunkS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForSplunkS3BackupMode(SplunkS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case SplunkS3BackupMode::FailedEventsOnly:
            return "FailedEventsOnly";
          case SplunkS3BackupMode::AllEvents:
            return "AllEvents";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SplunkS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
