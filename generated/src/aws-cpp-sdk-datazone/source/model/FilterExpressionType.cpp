/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FilterExpressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace FilterExpressionTypeMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        FilterExpressionType GetFilterExpressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return FilterExpressionType::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return FilterExpressionType::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterExpressionType>(hashCode);
          }

          return FilterExpressionType::NOT_SET;
        }

        Aws::String GetNameForFilterExpressionType(FilterExpressionType enumValue)
        {
          switch(enumValue)
          {
          case FilterExpressionType::NOT_SET:
            return {};
          case FilterExpressionType::INCLUDE:
            return "INCLUDE";
          case FilterExpressionType::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterExpressionTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
