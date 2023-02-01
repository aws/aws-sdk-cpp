/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ImportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace ImportStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ImportStatus GetImportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return ImportStatus::INITIALIZING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ImportStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImportStatus::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ImportStatus::STOPPED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ImportStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportStatus>(hashCode);
          }

          return ImportStatus::NOT_SET;
        }

        Aws::String GetNameForImportStatus(ImportStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportStatus::INITIALIZING:
            return "INITIALIZING";
          case ImportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ImportStatus::FAILED:
            return "FAILED";
          case ImportStatus::STOPPED:
            return "STOPPED";
          case ImportStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
