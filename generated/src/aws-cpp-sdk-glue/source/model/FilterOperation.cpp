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

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int LTE_HASH = HashingUtils::HashString("LTE");
        static const int GTE_HASH = HashingUtils::HashString("GTE");
        static const int REGEX_HASH = HashingUtils::HashString("REGEX");
        static const int ISNULL_HASH = HashingUtils::HashString("ISNULL");


        FilterOperation GetFilterOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
