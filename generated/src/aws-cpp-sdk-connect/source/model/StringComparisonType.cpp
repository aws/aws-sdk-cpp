/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StringComparisonType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace StringComparisonTypeMapper
      {

        static constexpr uint32_t STARTS_WITH_HASH = ConstExprHashingUtils::HashString("STARTS_WITH");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t EXACT_HASH = ConstExprHashingUtils::HashString("EXACT");


        StringComparisonType GetStringComparisonTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTS_WITH_HASH)
          {
            return StringComparisonType::STARTS_WITH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return StringComparisonType::CONTAINS;
          }
          else if (hashCode == EXACT_HASH)
          {
            return StringComparisonType::EXACT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringComparisonType>(hashCode);
          }

          return StringComparisonType::NOT_SET;
        }

        Aws::String GetNameForStringComparisonType(StringComparisonType enumValue)
        {
          switch(enumValue)
          {
          case StringComparisonType::NOT_SET:
            return {};
          case StringComparisonType::STARTS_WITH:
            return "STARTS_WITH";
          case StringComparisonType::CONTAINS:
            return "CONTAINS";
          case StringComparisonType::EXACT:
            return "EXACT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StringComparisonTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
