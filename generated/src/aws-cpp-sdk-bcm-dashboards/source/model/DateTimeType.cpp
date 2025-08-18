/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/DateTimeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDashboards
  {
    namespace Model
    {
      namespace DateTimeTypeMapper
      {

        static const int ABSOLUTE_HASH = HashingUtils::HashString("ABSOLUTE");
        static const int RELATIVE_HASH = HashingUtils::HashString("RELATIVE");


        DateTimeType GetDateTimeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABSOLUTE_HASH)
          {
            return DateTimeType::ABSOLUTE;
          }
          else if (hashCode == RELATIVE_HASH)
          {
            return DateTimeType::RELATIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DateTimeType>(hashCode);
          }

          return DateTimeType::NOT_SET;
        }

        Aws::String GetNameForDateTimeType(DateTimeType enumValue)
        {
          switch(enumValue)
          {
          case DateTimeType::NOT_SET:
            return {};
          case DateTimeType::ABSOLUTE:
            return "ABSOLUTE";
          case DateTimeType::RELATIVE:
            return "RELATIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DateTimeTypeMapper
    } // namespace Model
  } // namespace BCMDashboards
} // namespace Aws
