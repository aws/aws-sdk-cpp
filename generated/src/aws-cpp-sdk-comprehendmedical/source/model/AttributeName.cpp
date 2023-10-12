/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/AttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace AttributeNameMapper
      {

        static constexpr uint32_t SIGN_HASH = ConstExprHashingUtils::HashString("SIGN");
        static constexpr uint32_t SYMPTOM_HASH = ConstExprHashingUtils::HashString("SYMPTOM");
        static constexpr uint32_t DIAGNOSIS_HASH = ConstExprHashingUtils::HashString("DIAGNOSIS");
        static constexpr uint32_t NEGATION_HASH = ConstExprHashingUtils::HashString("NEGATION");
        static constexpr uint32_t PERTAINS_TO_FAMILY_HASH = ConstExprHashingUtils::HashString("PERTAINS_TO_FAMILY");
        static constexpr uint32_t HYPOTHETICAL_HASH = ConstExprHashingUtils::HashString("HYPOTHETICAL");
        static constexpr uint32_t LOW_CONFIDENCE_HASH = ConstExprHashingUtils::HashString("LOW_CONFIDENCE");
        static constexpr uint32_t PAST_HISTORY_HASH = ConstExprHashingUtils::HashString("PAST_HISTORY");
        static constexpr uint32_t FUTURE_HASH = ConstExprHashingUtils::HashString("FUTURE");


        AttributeName GetAttributeNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGN_HASH)
          {
            return AttributeName::SIGN;
          }
          else if (hashCode == SYMPTOM_HASH)
          {
            return AttributeName::SYMPTOM;
          }
          else if (hashCode == DIAGNOSIS_HASH)
          {
            return AttributeName::DIAGNOSIS;
          }
          else if (hashCode == NEGATION_HASH)
          {
            return AttributeName::NEGATION;
          }
          else if (hashCode == PERTAINS_TO_FAMILY_HASH)
          {
            return AttributeName::PERTAINS_TO_FAMILY;
          }
          else if (hashCode == HYPOTHETICAL_HASH)
          {
            return AttributeName::HYPOTHETICAL;
          }
          else if (hashCode == LOW_CONFIDENCE_HASH)
          {
            return AttributeName::LOW_CONFIDENCE;
          }
          else if (hashCode == PAST_HISTORY_HASH)
          {
            return AttributeName::PAST_HISTORY;
          }
          else if (hashCode == FUTURE_HASH)
          {
            return AttributeName::FUTURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeName>(hashCode);
          }

          return AttributeName::NOT_SET;
        }

        Aws::String GetNameForAttributeName(AttributeName enumValue)
        {
          switch(enumValue)
          {
          case AttributeName::NOT_SET:
            return {};
          case AttributeName::SIGN:
            return "SIGN";
          case AttributeName::SYMPTOM:
            return "SYMPTOM";
          case AttributeName::DIAGNOSIS:
            return "DIAGNOSIS";
          case AttributeName::NEGATION:
            return "NEGATION";
          case AttributeName::PERTAINS_TO_FAMILY:
            return "PERTAINS_TO_FAMILY";
          case AttributeName::HYPOTHETICAL:
            return "HYPOTHETICAL";
          case AttributeName::LOW_CONFIDENCE:
            return "LOW_CONFIDENCE";
          case AttributeName::PAST_HISTORY:
            return "PAST_HISTORY";
          case AttributeName::FUTURE:
            return "FUTURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeNameMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
