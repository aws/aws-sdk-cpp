/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/IntervalUnitValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace IntervalUnitValuesMapper
      {

        static const int HOURS_HASH = HashingUtils::HashString("HOURS");


        IntervalUnitValues GetIntervalUnitValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURS_HASH)
          {
            return IntervalUnitValues::HOURS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntervalUnitValues>(hashCode);
          }

          return IntervalUnitValues::NOT_SET;
        }

        Aws::String GetNameForIntervalUnitValues(IntervalUnitValues enumValue)
        {
          switch(enumValue)
          {
          case IntervalUnitValues::HOURS:
            return "HOURS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntervalUnitValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
