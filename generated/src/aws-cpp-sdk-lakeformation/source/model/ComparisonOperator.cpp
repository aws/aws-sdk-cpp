/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LakeFormation
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int LE_HASH = HashingUtils::HashString("LE");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int NOT_CONTAINS_HASH = HashingUtils::HashString("NOT_CONTAINS");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return ComparisonOperator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return ComparisonOperator::NE;
          }
          else if (hashCode == LE_HASH)
          {
            return ComparisonOperator::LE;
          }
          else if (hashCode == LT_HASH)
          {
            return ComparisonOperator::LT;
          }
          else if (hashCode == GE_HASH)
          {
            return ComparisonOperator::GE;
          }
          else if (hashCode == GT_HASH)
          {
            return ComparisonOperator::GT;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return ComparisonOperator::CONTAINS;
          }
          else if (hashCode == NOT_CONTAINS_HASH)
          {
            return ComparisonOperator::NOT_CONTAINS;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return ComparisonOperator::BEGINS_WITH;
          }
          else if (hashCode == IN_HASH)
          {
            return ComparisonOperator::IN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return ComparisonOperator::BETWEEN;
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
          case ComparisonOperator::NE:
            return "NE";
          case ComparisonOperator::LE:
            return "LE";
          case ComparisonOperator::LT:
            return "LT";
          case ComparisonOperator::GE:
            return "GE";
          case ComparisonOperator::GT:
            return "GT";
          case ComparisonOperator::CONTAINS:
            return "CONTAINS";
          case ComparisonOperator::NOT_CONTAINS:
            return "NOT_CONTAINS";
          case ComparisonOperator::BEGINS_WITH:
            return "BEGINS_WITH";
          case ComparisonOperator::IN:
            return "IN";
          case ComparisonOperator::BETWEEN:
            return "BETWEEN";
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
  } // namespace LakeFormation
} // namespace Aws
