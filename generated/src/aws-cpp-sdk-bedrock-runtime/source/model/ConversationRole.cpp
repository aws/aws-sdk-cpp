/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConversationRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace ConversationRoleMapper
      {

        static const int user_HASH = HashingUtils::HashString("user");
        static const int assistant_HASH = HashingUtils::HashString("assistant");


        ConversationRole GetConversationRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == user_HASH)
          {
            return ConversationRole::user;
          }
          else if (hashCode == assistant_HASH)
          {
            return ConversationRole::assistant;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversationRole>(hashCode);
          }

          return ConversationRole::NOT_SET;
        }

        Aws::String GetNameForConversationRole(ConversationRole enumValue)
        {
          switch(enumValue)
          {
          case ConversationRole::NOT_SET:
            return {};
          case ConversationRole::user:
            return "user";
          case ConversationRole::assistant:
            return "assistant";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversationRoleMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
