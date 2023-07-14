/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DiskSnapshotState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace DiskSnapshotStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int error_HASH = HashingUtils::HashString("error");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        DiskSnapshotState GetDiskSnapshotStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return DiskSnapshotState::pending;
          }
          else if (hashCode == completed_HASH)
          {
            return DiskSnapshotState::completed;
          }
          else if (hashCode == error_HASH)
          {
            return DiskSnapshotState::error;
          }
          else if (hashCode == unknown_HASH)
          {
            return DiskSnapshotState::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskSnapshotState>(hashCode);
          }

          return DiskSnapshotState::NOT_SET;
        }

        Aws::String GetNameForDiskSnapshotState(DiskSnapshotState enumValue)
        {
          switch(enumValue)
          {
          case DiskSnapshotState::pending:
            return "pending";
          case DiskSnapshotState::completed:
            return "completed";
          case DiskSnapshotState::error:
            return "error";
          case DiskSnapshotState::unknown:
            return "unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiskSnapshotStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
