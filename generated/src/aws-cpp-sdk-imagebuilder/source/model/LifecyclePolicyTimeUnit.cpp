/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyTimeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace LifecyclePolicyTimeUnitMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int WEEKS_HASH = HashingUtils::HashString("WEEKS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
        static const int YEARS_HASH = HashingUtils::HashString("YEARS");


        LifecyclePolicyTimeUnit GetLifecyclePolicyTimeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return LifecyclePolicyTimeUnit::DAYS;
          }
          else if (hashCode == WEEKS_HASH)
          {
            return LifecyclePolicyTimeUnit::WEEKS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return LifecyclePolicyTimeUnit::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return LifecyclePolicyTimeUnit::YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyTimeUnit>(hashCode);
          }

          return LifecyclePolicyTimeUnit::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyTimeUnit(LifecyclePolicyTimeUnit enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyTimeUnit::NOT_SET:
            return {};
          case LifecyclePolicyTimeUnit::DAYS:
            return "DAYS";
          case LifecyclePolicyTimeUnit::WEEKS:
            return "WEEKS";
          case LifecyclePolicyTimeUnit::MONTHS:
            return "MONTHS";
          case LifecyclePolicyTimeUnit::YEARS:
            return "YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyTimeUnitMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
