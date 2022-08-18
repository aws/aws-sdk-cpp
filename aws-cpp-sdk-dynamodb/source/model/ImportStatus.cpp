/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ImportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ImportStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ImportStatus GetImportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ImportStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ImportStatus::COMPLETED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ImportStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ImportStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImportStatus::FAILED;
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
          case ImportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ImportStatus::COMPLETED:
            return "COMPLETED";
          case ImportStatus::CANCELLING:
            return "CANCELLING";
          case ImportStatus::CANCELLED:
            return "CANCELLED";
          case ImportStatus::FAILED:
            return "FAILED";
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
  } // namespace DynamoDB
} // namespace Aws
