/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TimeDimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TimeDimensionMapper
      {

        static const int Hours_HASH = HashingUtils::HashString("Hours");
        static const int Days_HASH = HashingUtils::HashString("Days");
        static const int Weeks_HASH = HashingUtils::HashString("Weeks");


        TimeDimension GetTimeDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Hours_HASH)
          {
            return TimeDimension::Hours;
          }
          else if (hashCode == Days_HASH)
          {
            return TimeDimension::Days;
          }
          else if (hashCode == Weeks_HASH)
          {
            return TimeDimension::Weeks;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeDimension>(hashCode);
          }

          return TimeDimension::NOT_SET;
        }

        Aws::String GetNameForTimeDimension(TimeDimension enumValue)
        {
          switch(enumValue)
          {
          case TimeDimension::NOT_SET:
            return {};
          case TimeDimension::Hours:
            return "Hours";
          case TimeDimension::Days:
            return "Days";
          case TimeDimension::Weeks:
            return "Weeks";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeDimensionMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
