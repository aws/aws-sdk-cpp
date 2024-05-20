/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailManagedWordType.h>
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
      namespace GuardrailManagedWordTypeMapper
      {

        static const int PROFANITY_HASH = HashingUtils::HashString("PROFANITY");


        GuardrailManagedWordType GetGuardrailManagedWordTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFANITY_HASH)
          {
            return GuardrailManagedWordType::PROFANITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailManagedWordType>(hashCode);
          }

          return GuardrailManagedWordType::NOT_SET;
        }

        Aws::String GetNameForGuardrailManagedWordType(GuardrailManagedWordType enumValue)
        {
          switch(enumValue)
          {
          case GuardrailManagedWordType::NOT_SET:
            return {};
          case GuardrailManagedWordType::PROFANITY:
            return "PROFANITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailManagedWordTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
