/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ActionInvocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace ActionInvocationTypeMapper
      {

        static const int RESULT_HASH = HashingUtils::HashString("RESULT");
        static const int USER_CONFIRMATION_HASH = HashingUtils::HashString("USER_CONFIRMATION");
        static const int USER_CONFIRMATION_AND_RESULT_HASH = HashingUtils::HashString("USER_CONFIRMATION_AND_RESULT");


        ActionInvocationType GetActionInvocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESULT_HASH)
          {
            return ActionInvocationType::RESULT;
          }
          else if (hashCode == USER_CONFIRMATION_HASH)
          {
            return ActionInvocationType::USER_CONFIRMATION;
          }
          else if (hashCode == USER_CONFIRMATION_AND_RESULT_HASH)
          {
            return ActionInvocationType::USER_CONFIRMATION_AND_RESULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionInvocationType>(hashCode);
          }

          return ActionInvocationType::NOT_SET;
        }

        Aws::String GetNameForActionInvocationType(ActionInvocationType enumValue)
        {
          switch(enumValue)
          {
          case ActionInvocationType::NOT_SET:
            return {};
          case ActionInvocationType::RESULT:
            return "RESULT";
          case ActionInvocationType::USER_CONFIRMATION:
            return "USER_CONFIRMATION";
          case ActionInvocationType::USER_CONFIRMATION_AND_RESULT:
            return "USER_CONFIRMATION_AND_RESULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionInvocationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
