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

        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int optimizing_HASH = HashingUtils::HashString("optimizing");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        FastSnapshotRestoreStateCode GetFastSnapshotRestoreStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
