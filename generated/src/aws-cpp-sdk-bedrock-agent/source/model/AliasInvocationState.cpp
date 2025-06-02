/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AliasInvocationState.h>
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
      namespace AliasInvocationStateMapper
      {

        static const int ACCEPT_INVOCATIONS_HASH = HashingUtils::HashString("ACCEPT_INVOCATIONS");
        static const int REJECT_INVOCATIONS_HASH = HashingUtils::HashString("REJECT_INVOCATIONS");


        AliasInvocationState GetAliasInvocationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_INVOCATIONS_HASH)
          {
            return AliasInvocationState::ACCEPT_INVOCATIONS;
          }
          else if (hashCode == REJECT_INVOCATIONS_HASH)
          {
            return AliasInvocationState::REJECT_INVOCATIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AliasInvocationState>(hashCode);
          }

          return AliasInvocationState::NOT_SET;
        }

        Aws::String GetNameForAliasInvocationState(AliasInvocationState enumValue)
        {
          switch(enumValue)
          {
          case AliasInvocationState::NOT_SET:
            return {};
          case AliasInvocationState::ACCEPT_INVOCATIONS:
            return "ACCEPT_INVOCATIONS";
          case AliasInvocationState::REJECT_INVOCATIONS:
            return "REJECT_INVOCATIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AliasInvocationStateMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
