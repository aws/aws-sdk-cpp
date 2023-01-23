/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/AgentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace AgentStatusMapper
      {

        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");


        AgentStatus GetAgentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_HASH)
          {
            return AgentStatus::ONLINE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return AgentStatus::OFFLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentStatus>(hashCode);
          }

          return AgentStatus::NOT_SET;
        }

        Aws::String GetNameForAgentStatus(AgentStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentStatus::ONLINE:
            return "ONLINE";
          case AgentStatus::OFFLINE:
            return "OFFLINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
