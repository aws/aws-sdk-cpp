/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace AgentStatusTypeMapper
      {

        static constexpr uint32_t ROUTABLE_HASH = ConstExprHashingUtils::HashString("ROUTABLE");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");
        static constexpr uint32_t OFFLINE_HASH = ConstExprHashingUtils::HashString("OFFLINE");


        AgentStatusType GetAgentStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROUTABLE_HASH)
          {
            return AgentStatusType::ROUTABLE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AgentStatusType::CUSTOM;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return AgentStatusType::OFFLINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentStatusType>(hashCode);
          }

          return AgentStatusType::NOT_SET;
        }

        Aws::String GetNameForAgentStatusType(AgentStatusType enumValue)
        {
          switch(enumValue)
          {
          case AgentStatusType::NOT_SET:
            return {};
          case AgentStatusType::ROUTABLE:
            return "ROUTABLE";
          case AgentStatusType::CUSTOM:
            return "CUSTOM";
          case AgentStatusType::OFFLINE:
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

      } // namespace AgentStatusTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
