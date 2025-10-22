/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/AgentAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaignsV2
  {
    namespace Model
    {
      namespace AgentActionMapper
      {

        static const int DISCARD_HASH = HashingUtils::HashString("DISCARD");


        AgentAction GetAgentActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCARD_HASH)
          {
            return AgentAction::DISCARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentAction>(hashCode);
          }

          return AgentAction::NOT_SET;
        }

        Aws::String GetNameForAgentAction(AgentAction enumValue)
        {
          switch(enumValue)
          {
          case AgentAction::NOT_SET:
            return {};
          case AgentAction::DISCARD:
            return "DISCARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentActionMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
