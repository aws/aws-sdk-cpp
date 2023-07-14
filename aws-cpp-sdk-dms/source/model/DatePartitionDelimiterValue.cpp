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

        static const int SLASH_HASH = HashingUtils::HashString("SLASH");
        static const int UNDERSCORE_HASH = HashingUtils::HashString("UNDERSCORE");
        static const int DASH_HASH = HashingUtils::HashString("DASH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DatePartitionDelimiterValue GetDatePartitionDelimiterValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
