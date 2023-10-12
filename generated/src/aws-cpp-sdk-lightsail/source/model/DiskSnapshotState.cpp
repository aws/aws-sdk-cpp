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

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t completed_HASH = ConstExprHashingUtils::HashString("completed");
        static constexpr uint32_t error_HASH = ConstExprHashingUtils::HashString("error");
        static constexpr uint32_t unknown_HASH = ConstExprHashingUtils::HashString("unknown");


        DiskSnapshotState GetDiskSnapshotStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DiskSnapshotState::NOT_SET:
            return {};
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
