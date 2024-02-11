/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/SourceApiAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace SourceApiAssociationStatusMapper
      {

        static const int MERGE_SCHEDULED_HASH = HashingUtils::HashString("MERGE_SCHEDULED");
        static const int MERGE_FAILED_HASH = HashingUtils::HashString("MERGE_FAILED");
        static const int MERGE_SUCCESS_HASH = HashingUtils::HashString("MERGE_SUCCESS");
        static const int MERGE_IN_PROGRESS_HASH = HashingUtils::HashString("MERGE_IN_PROGRESS");
        static const int AUTO_MERGE_SCHEDULE_FAILED_HASH = HashingUtils::HashString("AUTO_MERGE_SCHEDULE_FAILED");
        static const int DELETION_SCHEDULED_HASH = HashingUtils::HashString("DELETION_SCHEDULED");
        static const int DELETION_IN_PROGRESS_HASH = HashingUtils::HashString("DELETION_IN_PROGRESS");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");


        SourceApiAssociationStatus GetSourceApiAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MERGE_SCHEDULED_HASH)
          {
            return SourceApiAssociationStatus::MERGE_SCHEDULED;
          }
          else if (hashCode == MERGE_FAILED_HASH)
          {
            return SourceApiAssociationStatus::MERGE_FAILED;
          }
          else if (hashCode == MERGE_SUCCESS_HASH)
          {
            return SourceApiAssociationStatus::MERGE_SUCCESS;
          }
          else if (hashCode == MERGE_IN_PROGRESS_HASH)
          {
            return SourceApiAssociationStatus::MERGE_IN_PROGRESS;
          }
          else if (hashCode == AUTO_MERGE_SCHEDULE_FAILED_HASH)
          {
            return SourceApiAssociationStatus::AUTO_MERGE_SCHEDULE_FAILED;
          }
          else if (hashCode == DELETION_SCHEDULED_HASH)
          {
            return SourceApiAssociationStatus::DELETION_SCHEDULED;
          }
          else if (hashCode == DELETION_IN_PROGRESS_HASH)
          {
            return SourceApiAssociationStatus::DELETION_IN_PROGRESS;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return SourceApiAssociationStatus::DELETION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceApiAssociationStatus>(hashCode);
          }

          return SourceApiAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForSourceApiAssociationStatus(SourceApiAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case SourceApiAssociationStatus::NOT_SET:
            return {};
          case SourceApiAssociationStatus::MERGE_SCHEDULED:
            return "MERGE_SCHEDULED";
          case SourceApiAssociationStatus::MERGE_FAILED:
            return "MERGE_FAILED";
          case SourceApiAssociationStatus::MERGE_SUCCESS:
            return "MERGE_SUCCESS";
          case SourceApiAssociationStatus::MERGE_IN_PROGRESS:
            return "MERGE_IN_PROGRESS";
          case SourceApiAssociationStatus::AUTO_MERGE_SCHEDULE_FAILED:
            return "AUTO_MERGE_SCHEDULE_FAILED";
          case SourceApiAssociationStatus::DELETION_SCHEDULED:
            return "DELETION_SCHEDULED";
          case SourceApiAssociationStatus::DELETION_IN_PROGRESS:
            return "DELETION_IN_PROGRESS";
          case SourceApiAssociationStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceApiAssociationStatusMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
