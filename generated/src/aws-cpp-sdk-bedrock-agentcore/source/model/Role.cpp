/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/Role.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace RoleMapper
      {

        static const int ASSISTANT_HASH = HashingUtils::HashString("ASSISTANT");
        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int TOOL_HASH = HashingUtils::HashString("TOOL");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        Role GetRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSISTANT_HASH)
          {
            return Role::ASSISTANT;
          }
          else if (hashCode == USER_HASH)
          {
            return Role::USER;
          }
          else if (hashCode == TOOL_HASH)
          {
            return Role::TOOL;
          }
          else if (hashCode == OTHER_HASH)
          {
            return Role::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Role>(hashCode);
          }

          return Role::NOT_SET;
        }

        Aws::String GetNameForRole(Role enumValue)
        {
          switch(enumValue)
          {
          case Role::NOT_SET:
            return {};
          case Role::ASSISTANT:
            return "ASSISTANT";
          case Role::USER:
            return "USER";
          case Role::TOOL:
            return "TOOL";
          case Role::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoleMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
