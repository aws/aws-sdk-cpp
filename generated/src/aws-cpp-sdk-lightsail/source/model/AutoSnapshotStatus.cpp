/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AutoSnapshotStatus.h>
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
      namespace AutoSnapshotStatusMapper
      {

        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t NotFound_HASH = ConstExprHashingUtils::HashString("NotFound");


        AutoSnapshotStatus GetAutoSnapshotStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return AutoSnapshotStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutoSnapshotStatus::Failed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AutoSnapshotStatus::InProgress;
          }
          else if (hashCode == NotFound_HASH)
          {
            return AutoSnapshotStatus::NotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoSnapshotStatus>(hashCode);
          }

          return AutoSnapshotStatus::NOT_SET;
        }

        Aws::String GetNameForAutoSnapshotStatus(AutoSnapshotStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoSnapshotStatus::NOT_SET:
            return {};
          case AutoSnapshotStatus::Success:
            return "Success";
          case AutoSnapshotStatus::Failed:
            return "Failed";
          case AutoSnapshotStatus::InProgress:
            return "InProgress";
          case AutoSnapshotStatus::NotFound:
            return "NotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoSnapshotStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
