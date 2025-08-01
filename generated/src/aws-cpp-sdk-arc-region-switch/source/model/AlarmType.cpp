/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/AlarmType.h>
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
      namespace AlarmTypeMapper
      {

        static const int applicationHealth_HASH = HashingUtils::HashString("applicationHealth");
        static const int trigger_HASH = HashingUtils::HashString("trigger");


        AlarmType GetAlarmTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == applicationHealth_HASH)
          {
            return AlarmType::applicationHealth;
          }
          else if (hashCode == trigger_HASH)
          {
            return AlarmType::trigger;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlarmType>(hashCode);
          }

          return AlarmType::NOT_SET;
        }

        Aws::String GetNameForAlarmType(AlarmType enumValue)
        {
          switch(enumValue)
          {
          case AlarmType::NOT_SET:
            return {};
          case AlarmType::applicationHealth:
            return "applicationHealth";
          case AlarmType::trigger:
            return "trigger";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlarmTypeMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
