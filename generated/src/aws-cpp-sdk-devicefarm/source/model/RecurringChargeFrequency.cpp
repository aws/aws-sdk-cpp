/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/RecurringChargeFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace RecurringChargeFrequencyMapper
      {

        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");


        RecurringChargeFrequency GetRecurringChargeFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTHLY_HASH)
          {
            return RecurringChargeFrequency::MONTHLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecurringChargeFrequency>(hashCode);
          }

          return RecurringChargeFrequency::NOT_SET;
        }

        Aws::String GetNameForRecurringChargeFrequency(RecurringChargeFrequency enumValue)
        {
          switch(enumValue)
          {
          case RecurringChargeFrequency::MONTHLY:
            return "MONTHLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecurringChargeFrequencyMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
