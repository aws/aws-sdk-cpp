/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TimeUnitsType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace TimeUnitsTypeMapper
      {

        static const int seconds_HASH = HashingUtils::HashString("seconds");
        static const int minutes_HASH = HashingUtils::HashString("minutes");
        static const int hours_HASH = HashingUtils::HashString("hours");
        static const int days_HASH = HashingUtils::HashString("days");


        TimeUnitsType GetTimeUnitsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == seconds_HASH)
          {
            return TimeUnitsType::seconds;
          }
          else if (hashCode == minutes_HASH)
          {
            return TimeUnitsType::minutes;
          }
          else if (hashCode == hours_HASH)
          {
            return TimeUnitsType::hours;
          }
          else if (hashCode == days_HASH)
          {
            return TimeUnitsType::days;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeUnitsType>(hashCode);
          }

          return TimeUnitsType::NOT_SET;
        }

        Aws::String GetNameForTimeUnitsType(TimeUnitsType enumValue)
        {
          switch(enumValue)
          {
          case TimeUnitsType::seconds:
            return "seconds";
          case TimeUnitsType::minutes:
            return "minutes";
          case TimeUnitsType::hours:
            return "hours";
          case TimeUnitsType::days:
            return "days";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeUnitsTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
