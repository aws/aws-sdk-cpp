/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailContentFilterConfidence.h>
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
      namespace GuardrailContentFilterConfidenceMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        GuardrailContentFilterConfidence GetGuardrailContentFilterConfidenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return GuardrailContentFilterConfidence::NONE;
          }
          else if (hashCode == LOW_HASH)
          {
            return GuardrailContentFilterConfidence::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return GuardrailContentFilterConfidence::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return GuardrailContentFilterConfidence::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContentFilterConfidence>(hashCode);
          }

          return GuardrailContentFilterConfidence::NOT_SET;
        }

        Aws::String GetNameForGuardrailContentFilterConfidence(GuardrailContentFilterConfidence enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContentFilterConfidence::NOT_SET:
            return {};
          case GuardrailContentFilterConfidence::NONE:
            return "NONE";
          case GuardrailContentFilterConfidence::LOW:
            return "LOW";
          case GuardrailContentFilterConfidence::MEDIUM:
            return "MEDIUM";
          case GuardrailContentFilterConfidence::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContentFilterConfidenceMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
