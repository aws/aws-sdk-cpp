/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/WriteForwardingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace WriteForwardingStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        WriteForwardingStatus GetWriteForwardingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return WriteForwardingStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return WriteForwardingStatus::disabled;
          }
          else if (hashCode == enabling_HASH)
          {
            return WriteForwardingStatus::enabling;
          }
          else if (hashCode == disabling_HASH)
          {
            return WriteForwardingStatus::disabling;
          }
          else if (hashCode == unknown_HASH)
          {
            return WriteForwardingStatus::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WriteForwardingStatus>(hashCode);
          }

          return WriteForwardingStatus::NOT_SET;
        }

        Aws::String GetNameForWriteForwardingStatus(WriteForwardingStatus enumValue)
        {
          switch(enumValue)
          {
          case WriteForwardingStatus::enabled:
            return "enabled";
          case WriteForwardingStatus::disabled:
            return "disabled";
          case WriteForwardingStatus::enabling:
            return "enabling";
          case WriteForwardingStatus::disabling:
            return "disabling";
          case WriteForwardingStatus::unknown:
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

      } // namespace WriteForwardingStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
