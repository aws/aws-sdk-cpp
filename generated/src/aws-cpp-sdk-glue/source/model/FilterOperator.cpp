/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace FilterOperatorMapper
      {

        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GE_HASH = ConstExprHashingUtils::HashString("GE");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LE_HASH = ConstExprHashingUtils::HashString("LE");
        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");


        FilterOperator GetFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GT_HASH)
          {
            return FilterOperator::GT;
          }
          else if (hashCode == GE_HASH)
          {
            return FilterOperator::GE;
          }
          else if (hashCode == LT_HASH)
          {
            return FilterOperator::LT;
          }
          else if (hashCode == LE_HASH)
          {
            return FilterOperator::LE;
          }
          else if (hashCode == EQ_HASH)
          {
            return FilterOperator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return FilterOperator::NE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterOperator>(hashCode);
          }

          return FilterOperator::NOT_SET;
        }

        Aws::String GetNameForFilterOperator(FilterOperator enumValue)
        {
          switch(enumValue)
          {
          case FilterOperator::NOT_SET:
            return {};
          case FilterOperator::GT:
            return "GT";
          case FilterOperator::GE:
            return "GE";
          case FilterOperator::LT:
            return "LT";
          case FilterOperator::LE:
            return "LE";
          case FilterOperator::EQ:
            return "EQ";
          case FilterOperator::NE:
            return "NE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterOperatorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
