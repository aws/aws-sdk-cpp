/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DatePartitionDelimiterValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace DatePartitionDelimiterValueMapper
      {

        static constexpr uint32_t SLASH_HASH = ConstExprHashingUtils::HashString("SLASH");
        static constexpr uint32_t UNDERSCORE_HASH = ConstExprHashingUtils::HashString("UNDERSCORE");
        static constexpr uint32_t DASH_HASH = ConstExprHashingUtils::HashString("DASH");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        DatePartitionDelimiterValue GetDatePartitionDelimiterValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SLASH_HASH)
          {
            return DatePartitionDelimiterValue::SLASH;
          }
          else if (hashCode == UNDERSCORE_HASH)
          {
            return DatePartitionDelimiterValue::UNDERSCORE;
          }
          else if (hashCode == DASH_HASH)
          {
            return DatePartitionDelimiterValue::DASH;
          }
          else if (hashCode == NONE_HASH)
          {
            return DatePartitionDelimiterValue::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatePartitionDelimiterValue>(hashCode);
          }

          return DatePartitionDelimiterValue::NOT_SET;
        }

        Aws::String GetNameForDatePartitionDelimiterValue(DatePartitionDelimiterValue enumValue)
        {
          switch(enumValue)
          {
          case DatePartitionDelimiterValue::NOT_SET:
            return {};
          case DatePartitionDelimiterValue::SLASH:
            return "SLASH";
          case DatePartitionDelimiterValue::UNDERSCORE:
            return "UNDERSCORE";
          case DatePartitionDelimiterValue::DASH:
            return "DASH";
          case DatePartitionDelimiterValue::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatePartitionDelimiterValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
