/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/RuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace RuleTypeMapper
      {

        static constexpr uint32_t BINARY_LENGTH_HASH = ConstExprHashingUtils::HashString("BINARY_LENGTH");
        static constexpr uint32_t NUMBER_COMPARISON_HASH = ConstExprHashingUtils::HashString("NUMBER_COMPARISON");
        static constexpr uint32_t STRING_FROM_SET_HASH = ConstExprHashingUtils::HashString("STRING_FROM_SET");
        static constexpr uint32_t STRING_LENGTH_HASH = ConstExprHashingUtils::HashString("STRING_LENGTH");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BINARY_LENGTH_HASH)
          {
            return RuleType::BINARY_LENGTH;
          }
          else if (hashCode == NUMBER_COMPARISON_HASH)
          {
            return RuleType::NUMBER_COMPARISON;
          }
          else if (hashCode == STRING_FROM_SET_HASH)
          {
            return RuleType::STRING_FROM_SET;
          }
          else if (hashCode == STRING_LENGTH_HASH)
          {
            return RuleType::STRING_LENGTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleType>(hashCode);
          }

          return RuleType::NOT_SET;
        }

        Aws::String GetNameForRuleType(RuleType enumValue)
        {
          switch(enumValue)
          {
          case RuleType::NOT_SET:
            return {};
          case RuleType::BINARY_LENGTH:
            return "BINARY_LENGTH";
          case RuleType::NUMBER_COMPARISON:
            return "NUMBER_COMPARISON";
          case RuleType::STRING_FROM_SET:
            return "STRING_FROM_SET";
          case RuleType::STRING_LENGTH:
            return "STRING_LENGTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
