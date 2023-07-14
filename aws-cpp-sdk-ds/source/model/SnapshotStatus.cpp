/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/SnapshotStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace SnapshotStatusMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        SnapshotStatus GetSnapshotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return SnapshotStatus::Creating;
          }
          else if (hashCode == Completed_HASH)
          {
            return SnapshotStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return SnapshotStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotStatus>(hashCode);
          }

          return SnapshotStatus::NOT_SET;
        }

        Aws::String GetNameForSnapshotStatus(SnapshotStatus enumValue)
        {
          switch(enumValue)
          {
          case SnapshotStatus::Creating:
            return "Creating";
          case SnapshotStatus::Completed:
            return "Completed";
          case SnapshotStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
