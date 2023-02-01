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

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LE_HASH = HashingUtils::HashString("LE");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
