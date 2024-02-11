/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ReplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace ReplicationStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ReplicationState GetReplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ReplicationState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ReplicationState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationState>(hashCode);
          }

          return ReplicationState::NOT_SET;
        }

        Aws::String GetNameForReplicationState(ReplicationState enumValue)
        {
          switch(enumValue)
          {
          case ReplicationState::NOT_SET:
            return {};
          case ReplicationState::ENABLED:
            return "ENABLED";
          case ReplicationState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationStateMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
