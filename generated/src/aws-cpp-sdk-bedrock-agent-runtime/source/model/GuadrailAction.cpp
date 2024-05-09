/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuadrailAction.h>
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
      namespace GuadrailActionMapper
      {

        static const int INTERVENED_HASH = HashingUtils::HashString("INTERVENED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        GuadrailAction GetGuadrailActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERVENED_HASH)
          {
            return GuadrailAction::INTERVENED;
          }
          else if (hashCode == NONE_HASH)
          {
            return GuadrailAction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuadrailAction>(hashCode);
          }

          return GuadrailAction::NOT_SET;
        }

        Aws::String GetNameForGuadrailAction(GuadrailAction enumValue)
        {
          switch(enumValue)
          {
          case GuadrailAction::NOT_SET:
            return {};
          case GuadrailAction::INTERVENED:
            return "INTERVENED";
          case GuadrailAction::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuadrailActionMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
