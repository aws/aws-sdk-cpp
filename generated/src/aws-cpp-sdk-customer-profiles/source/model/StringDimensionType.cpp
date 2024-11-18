/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/StringDimensionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace StringDimensionTypeMapper
      {

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");


        StringDimensionType GetStringDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return StringDimensionType::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return StringDimensionType::EXCLUSIVE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return StringDimensionType::CONTAINS;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return StringDimensionType::BEGINS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return StringDimensionType::ENDS_WITH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringDimensionType>(hashCode);
          }

          return StringDimensionType::NOT_SET;
        }

        Aws::String GetNameForStringDimensionType(StringDimensionType enumValue)
        {
          switch(enumValue)
          {
          case StringDimensionType::NOT_SET:
            return {};
          case StringDimensionType::INCLUSIVE:
            return "INCLUSIVE";
          case StringDimensionType::EXCLUSIVE:
            return "EXCLUSIVE";
          case StringDimensionType::CONTAINS:
            return "CONTAINS";
          case StringDimensionType::BEGINS_WITH:
            return "BEGINS_WITH";
          case StringDimensionType::ENDS_WITH:
            return "ENDS_WITH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StringDimensionTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
