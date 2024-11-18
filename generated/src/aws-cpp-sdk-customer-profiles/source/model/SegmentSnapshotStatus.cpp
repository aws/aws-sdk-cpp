/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SegmentSnapshotStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace SegmentSnapshotStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SegmentSnapshotStatus GetSegmentSnapshotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return SegmentSnapshotStatus::COMPLETED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return SegmentSnapshotStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SegmentSnapshotStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentSnapshotStatus>(hashCode);
          }

          return SegmentSnapshotStatus::NOT_SET;
        }

        Aws::String GetNameForSegmentSnapshotStatus(SegmentSnapshotStatus enumValue)
        {
          switch(enumValue)
          {
          case SegmentSnapshotStatus::NOT_SET:
            return {};
          case SegmentSnapshotStatus::COMPLETED:
            return "COMPLETED";
          case SegmentSnapshotStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case SegmentSnapshotStatus::FAILED:
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

      } // namespace SegmentSnapshotStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
