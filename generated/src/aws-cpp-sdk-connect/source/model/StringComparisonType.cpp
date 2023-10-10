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

        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int EXACT_HASH = HashingUtils::HashString("EXACT");


        StringComparisonType GetStringComparisonTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
