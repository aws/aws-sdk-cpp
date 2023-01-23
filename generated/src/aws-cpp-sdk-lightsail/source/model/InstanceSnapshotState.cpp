/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceSnapshotState.h>
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
      namespace InstanceSnapshotStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int error_HASH = HashingUtils::HashString("error");
        static const int available_HASH = HashingUtils::HashString("available");


        InstanceSnapshotState GetInstanceSnapshotStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return InstanceSnapshotState::pending;
          }
          else if (hashCode == error_HASH)
          {
            return InstanceSnapshotState::error;
          }
          else if (hashCode == available_HASH)
          {
            return InstanceSnapshotState::available;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceSnapshotState>(hashCode);
          }

          return InstanceSnapshotState::NOT_SET;
        }

        Aws::String GetNameForInstanceSnapshotState(InstanceSnapshotState enumValue)
        {
          switch(enumValue)
          {
          case InstanceSnapshotState::pending:
            return "pending";
          case InstanceSnapshotState::error:
            return "error";
          case InstanceSnapshotState::available:
            return "available";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceSnapshotStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
