/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AttributeDimensionType.h>
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
      namespace AttributeDimensionTypeMapper
      {

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
        static const int AFTER_HASH = HashingUtils::HashString("AFTER");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int NOT_BETWEEN_HASH = HashingUtils::HashString("NOT_BETWEEN");
        static const int ON_HASH = HashingUtils::HashString("ON");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL");
        static const int LESS_THAN_OR_EQUAL_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL");
        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");


        AttributeDimensionType GetAttributeDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return AttributeDimensionType::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return AttributeDimensionType::EXCLUSIVE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return AttributeDimensionType::CONTAINS;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return AttributeDimensionType::BEGINS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return AttributeDimensionType::ENDS_WITH;
          }
          else if (hashCode == BEFORE_HASH)
          {
            return AttributeDimensionType::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return AttributeDimensionType::AFTER;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return AttributeDimensionType::BETWEEN;
          }
          else if (hashCode == NOT_BETWEEN_HASH)
          {
            return AttributeDimensionType::NOT_BETWEEN;
          }
          else if (hashCode == ON_HASH)
          {
            return AttributeDimensionType::ON;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return AttributeDimensionType::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return AttributeDimensionType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return AttributeDimensionType::GREATER_THAN_OR_EQUAL;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return AttributeDimensionType::LESS_THAN_OR_EQUAL;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return AttributeDimensionType::EQUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeDimensionType>(hashCode);
          }

          return AttributeDimensionType::NOT_SET;
        }

        Aws::String GetNameForAttributeDimensionType(AttributeDimensionType enumValue)
        {
          switch(enumValue)
          {
          case AttributeDimensionType::NOT_SET:
            return {};
          case AttributeDimensionType::INCLUSIVE:
            return "INCLUSIVE";
          case AttributeDimensionType::EXCLUSIVE:
            return "EXCLUSIVE";
          case AttributeDimensionType::CONTAINS:
            return "CONTAINS";
          case AttributeDimensionType::BEGINS_WITH:
            return "BEGINS_WITH";
          case AttributeDimensionType::ENDS_WITH:
            return "ENDS_WITH";
          case AttributeDimensionType::BEFORE:
            return "BEFORE";
          case AttributeDimensionType::AFTER:
            return "AFTER";
          case AttributeDimensionType::BETWEEN:
            return "BETWEEN";
          case AttributeDimensionType::NOT_BETWEEN:
            return "NOT_BETWEEN";
          case AttributeDimensionType::ON:
            return "ON";
          case AttributeDimensionType::GREATER_THAN:
            return "GREATER_THAN";
          case AttributeDimensionType::LESS_THAN:
            return "LESS_THAN";
          case AttributeDimensionType::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          case AttributeDimensionType::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
          case AttributeDimensionType::EQUAL:
            return "EQUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeDimensionTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
