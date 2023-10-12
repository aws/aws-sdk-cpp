/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FastSnapshotRestoreStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FastSnapshotRestoreStateCodeMapper
      {

        static constexpr uint32_t enabling_HASH = ConstExprHashingUtils::HashString("enabling");
        static constexpr uint32_t optimizing_HASH = ConstExprHashingUtils::HashString("optimizing");
        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");
        static constexpr uint32_t disabling_HASH = ConstExprHashingUtils::HashString("disabling");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");


        FastSnapshotRestoreStateCode GetFastSnapshotRestoreStateCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabling_HASH)
          {
            return FastSnapshotRestoreStateCode::enabling;
          }
          else if (hashCode == optimizing_HASH)
          {
            return FastSnapshotRestoreStateCode::optimizing;
          }
          else if (hashCode == enabled_HASH)
          {
            return FastSnapshotRestoreStateCode::enabled;
          }
          else if (hashCode == disabling_HASH)
          {
            return FastSnapshotRestoreStateCode::disabling;
          }
          else if (hashCode == disabled_HASH)
          {
            return FastSnapshotRestoreStateCode::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FastSnapshotRestoreStateCode>(hashCode);
          }

          return FastSnapshotRestoreStateCode::NOT_SET;
        }

        Aws::String GetNameForFastSnapshotRestoreStateCode(FastSnapshotRestoreStateCode enumValue)
        {
          switch(enumValue)
          {
          case FastSnapshotRestoreStateCode::NOT_SET:
            return {};
          case FastSnapshotRestoreStateCode::enabling:
            return "enabling";
          case FastSnapshotRestoreStateCode::optimizing:
            return "optimizing";
          case FastSnapshotRestoreStateCode::enabled:
            return "enabled";
          case FastSnapshotRestoreStateCode::disabling:
            return "disabling";
          case FastSnapshotRestoreStateCode::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FastSnapshotRestoreStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
