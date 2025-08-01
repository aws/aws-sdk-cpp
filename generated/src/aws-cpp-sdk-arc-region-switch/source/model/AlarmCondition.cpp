/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/AlarmCondition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace AlarmConditionMapper
      {

        static const int red_HASH = HashingUtils::HashString("red");
        static const int green_HASH = HashingUtils::HashString("green");


        AlarmCondition GetAlarmConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == red_HASH)
          {
            return AlarmCondition::red;
          }
          else if (hashCode == green_HASH)
          {
            return AlarmCondition::green;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlarmCondition>(hashCode);
          }

          return AlarmCondition::NOT_SET;
        }

        Aws::String GetNameForAlarmCondition(AlarmCondition enumValue)
        {
          switch(enumValue)
          {
          case AlarmCondition::NOT_SET:
            return {};
          case AlarmCondition::red:
            return "red";
          case AlarmCondition::green:
            return "green";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlarmConditionMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
