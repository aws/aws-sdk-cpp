/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContextualGroundingFilterType.h>
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
      namespace GuardrailContextualGroundingFilterTypeMapper
      {

        static const int GROUNDING_HASH = HashingUtils::HashString("GROUNDING");
        static const int RELEVANCE_HASH = HashingUtils::HashString("RELEVANCE");


        GuardrailContextualGroundingFilterType GetGuardrailContextualGroundingFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUNDING_HASH)
          {
            return GuardrailContextualGroundingFilterType::GROUNDING;
          }
          else if (hashCode == RELEVANCE_HASH)
          {
            return GuardrailContextualGroundingFilterType::RELEVANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailContextualGroundingFilterType>(hashCode);
          }

          return GuardrailContextualGroundingFilterType::NOT_SET;
        }

        Aws::String GetNameForGuardrailContextualGroundingFilterType(GuardrailContextualGroundingFilterType enumValue)
        {
          switch(enumValue)
          {
          case GuardrailContextualGroundingFilterType::NOT_SET:
            return {};
          case GuardrailContextualGroundingFilterType::GROUNDING:
            return "GROUNDING";
          case GuardrailContextualGroundingFilterType::RELEVANCE:
            return "RELEVANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailContextualGroundingFilterTypeMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
