/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataAssetActivityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace DataAssetActivityStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PUBLISHING_FAILED_HASH = HashingUtils::HashString("PUBLISHING_FAILED");
        static const int SUCCEEDED_CREATED_HASH = HashingUtils::HashString("SUCCEEDED_CREATED");
        static const int SUCCEEDED_UPDATED_HASH = HashingUtils::HashString("SUCCEEDED_UPDATED");
        static const int SKIPPED_ALREADY_IMPORTED_HASH = HashingUtils::HashString("SKIPPED_ALREADY_IMPORTED");
        static const int SKIPPED_ARCHIVED_HASH = HashingUtils::HashString("SKIPPED_ARCHIVED");
        static const int SKIPPED_NO_ACCESS_HASH = HashingUtils::HashString("SKIPPED_NO_ACCESS");
        static const int UNCHANGED_HASH = HashingUtils::HashString("UNCHANGED");


        DataAssetActivityStatus GetDataAssetActivityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return DataAssetActivityStatus::FAILED;
          }
          else if (hashCode == PUBLISHING_FAILED_HASH)
          {
            return DataAssetActivityStatus::PUBLISHING_FAILED;
          }
          else if (hashCode == SUCCEEDED_CREATED_HASH)
          {
            return DataAssetActivityStatus::SUCCEEDED_CREATED;
          }
          else if (hashCode == SUCCEEDED_UPDATED_HASH)
          {
            return DataAssetActivityStatus::SUCCEEDED_UPDATED;
          }
          else if (hashCode == SKIPPED_ALREADY_IMPORTED_HASH)
          {
            return DataAssetActivityStatus::SKIPPED_ALREADY_IMPORTED;
          }
          else if (hashCode == SKIPPED_ARCHIVED_HASH)
          {
            return DataAssetActivityStatus::SKIPPED_ARCHIVED;
          }
          else if (hashCode == SKIPPED_NO_ACCESS_HASH)
          {
            return DataAssetActivityStatus::SKIPPED_NO_ACCESS;
          }
          else if (hashCode == UNCHANGED_HASH)
          {
            return DataAssetActivityStatus::UNCHANGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataAssetActivityStatus>(hashCode);
          }

          return DataAssetActivityStatus::NOT_SET;
        }

        Aws::String GetNameForDataAssetActivityStatus(DataAssetActivityStatus enumValue)
        {
          switch(enumValue)
          {
          case DataAssetActivityStatus::NOT_SET:
            return {};
          case DataAssetActivityStatus::FAILED:
            return "FAILED";
          case DataAssetActivityStatus::PUBLISHING_FAILED:
            return "PUBLISHING_FAILED";
          case DataAssetActivityStatus::SUCCEEDED_CREATED:
            return "SUCCEEDED_CREATED";
          case DataAssetActivityStatus::SUCCEEDED_UPDATED:
            return "SUCCEEDED_UPDATED";
          case DataAssetActivityStatus::SKIPPED_ALREADY_IMPORTED:
            return "SKIPPED_ALREADY_IMPORTED";
          case DataAssetActivityStatus::SKIPPED_ARCHIVED:
            return "SKIPPED_ARCHIVED";
          case DataAssetActivityStatus::SKIPPED_NO_ACCESS:
            return "SKIPPED_NO_ACCESS";
          case DataAssetActivityStatus::UNCHANGED:
            return "UNCHANGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataAssetActivityStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
