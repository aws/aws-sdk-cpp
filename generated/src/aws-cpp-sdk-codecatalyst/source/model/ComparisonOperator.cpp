/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GE_HASH = ConstExprHashingUtils::HashString("GE");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LE_HASH = ConstExprHashingUtils::HashString("LE");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return ComparisonOperator::EQ;
          }
          else if (hashCode == GT_HASH)
          {
            return ComparisonOperator::GT;
          }
          else if (hashCode == GE_HASH)
          {
            return ComparisonOperator::GE;
          }
          else if (hashCode == LT_HASH)
          {
            return ComparisonOperator::LT;
          }
          else if (hashCode == LE_HASH)
          {
            return ComparisonOperator::LE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonOperator>(hashCode);
          }

          return ComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case ComparisonOperator::NOT_SET:
            return {};
          case ComparisonOperator::EQ:
            return "EQ";
          case ComparisonOperator::GT:
            return "GT";
          case ComparisonOperator::GE:
            return "GE";
          case ComparisonOperator::LT:
            return "LT";
          case ComparisonOperator::LE:
            return "LE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonOperatorMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
