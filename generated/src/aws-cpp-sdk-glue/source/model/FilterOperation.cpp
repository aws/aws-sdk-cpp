/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FilterOperation.h>
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
      namespace FilterOperationMapper
      {

        static constexpr uint32_t EQ_HASH = ConstExprHashingUtils::HashString("EQ");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t LTE_HASH = ConstExprHashingUtils::HashString("LTE");
        static constexpr uint32_t GTE_HASH = ConstExprHashingUtils::HashString("GTE");
        static constexpr uint32_t REGEX_HASH = ConstExprHashingUtils::HashString("REGEX");
        static constexpr uint32_t ISNULL_HASH = ConstExprHashingUtils::HashString("ISNULL");


        FilterOperation GetFilterOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return FilterOperation::EQ;
          }
          else if (hashCode == LT_HASH)
          {
            return FilterOperation::LT;
          }
          else if (hashCode == GT_HASH)
          {
            return FilterOperation::GT;
          }
          else if (hashCode == LTE_HASH)
          {
            return FilterOperation::LTE;
          }
          else if (hashCode == GTE_HASH)
          {
            return FilterOperation::GTE;
          }
          else if (hashCode == REGEX_HASH)
          {
            return FilterOperation::REGEX;
          }
          else if (hashCode == ISNULL_HASH)
          {
            return FilterOperation::ISNULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterOperation>(hashCode);
          }

          return FilterOperation::NOT_SET;
        }

        Aws::String GetNameForFilterOperation(FilterOperation enumValue)
        {
          switch(enumValue)
          {
          case FilterOperation::NOT_SET:
            return {};
          case FilterOperation::EQ:
            return "EQ";
          case FilterOperation::LT:
            return "LT";
          case FilterOperation::GT:
            return "GT";
          case FilterOperation::LTE:
            return "LTE";
          case FilterOperation::GTE:
            return "GTE";
          case FilterOperation::REGEX:
            return "REGEX";
          case FilterOperation::ISNULL:
            return "ISNULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterOperationMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
