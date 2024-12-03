/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RelayConversationHistory.h>
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
      namespace RelayConversationHistoryMapper
      {

        static const int TO_COLLABORATOR_HASH = HashingUtils::HashString("TO_COLLABORATOR");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RelayConversationHistory GetRelayConversationHistoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TO_COLLABORATOR_HASH)
          {
            return RelayConversationHistory::TO_COLLABORATOR;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RelayConversationHistory::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelayConversationHistory>(hashCode);
          }

          return RelayConversationHistory::NOT_SET;
        }

        Aws::String GetNameForRelayConversationHistory(RelayConversationHistory enumValue)
        {
          switch(enumValue)
          {
          case RelayConversationHistory::NOT_SET:
            return {};
          case RelayConversationHistory::TO_COLLABORATOR:
            return "TO_COLLABORATOR";
          case RelayConversationHistory::DISABLED:
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

      } // namespace RelayConversationHistoryMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
