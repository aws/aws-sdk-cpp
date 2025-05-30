/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ReplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ReplicationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        ReplicationState GetReplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReplicationState::ACTIVE;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ReplicationState::STOPPED;
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
          case ReplicationState::ACTIVE:
            return "ACTIVE";
          case ReplicationState::STOPPED:
            return "STOPPED";
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
  } // namespace ivsrealtime
} // namespace Aws
