/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ActionGroupState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace ActionGroupStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ActionGroupState GetActionGroupStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ActionGroupState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ActionGroupState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionGroupState>(hashCode);
          }

          return ActionGroupState::NOT_SET;
        }

        Aws::String GetNameForActionGroupState(ActionGroupState enumValue)
        {
          switch(enumValue)
          {
          case ActionGroupState::NOT_SET:
            return {};
          case ActionGroupState::ENABLED:
            return "ENABLED";
          case ActionGroupState::DISABLED:
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

      } // namespace ActionGroupStateMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
