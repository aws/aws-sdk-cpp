/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NumberComparisonType.h>
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
      namespace NumberComparisonTypeMapper
      {

        static const int GREATER_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_OR_EQUAL");
        static const int GREATER_HASH = HashingUtils::HashString("GREATER");
        static const int LESSER_OR_EQUAL_HASH = HashingUtils::HashString("LESSER_OR_EQUAL");
        static const int LESSER_HASH = HashingUtils::HashString("LESSER");
        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int NOT_EQUAL_HASH = HashingUtils::HashString("NOT_EQUAL");
        static const int RANGE_HASH = HashingUtils::HashString("RANGE");


        NumberComparisonType GetNumberComparisonTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_OR_EQUAL_HASH)
          {
            return NumberComparisonType::GREATER_OR_EQUAL;
          }
          else if (hashCode == GREATER_HASH)
          {
            return NumberComparisonType::GREATER;
          }
          else if (hashCode == LESSER_OR_EQUAL_HASH)
          {
            return NumberComparisonType::LESSER_OR_EQUAL;
          }
          else if (hashCode == LESSER_HASH)
          {
            return NumberComparisonType::LESSER;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return NumberComparisonType::EQUAL;
          }
          else if (hashCode == NOT_EQUAL_HASH)
          {
            return NumberComparisonType::NOT_EQUAL;
          }
          else if (hashCode == RANGE_HASH)
          {
            return NumberComparisonType::RANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumberComparisonType>(hashCode);
          }

          return NumberComparisonType::NOT_SET;
        }

        Aws::String GetNameForNumberComparisonType(NumberComparisonType enumValue)
        {
          switch(enumValue)
          {
          case NumberComparisonType::NOT_SET:
            return {};
          case NumberComparisonType::GREATER_OR_EQUAL:
            return "GREATER_OR_EQUAL";
          case NumberComparisonType::GREATER:
            return "GREATER";
          case NumberComparisonType::LESSER_OR_EQUAL:
            return "LESSER_OR_EQUAL";
          case NumberComparisonType::LESSER:
            return "LESSER";
          case NumberComparisonType::EQUAL:
            return "EQUAL";
          case NumberComparisonType::NOT_EQUAL:
            return "NOT_EQUAL";
          case NumberComparisonType::RANGE:
            return "RANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumberComparisonTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
