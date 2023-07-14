/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ViolationEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ViolationEventTypeMapper
      {

        static const int in_alarm_HASH = HashingUtils::HashString("in-alarm");
        static const int alarm_cleared_HASH = HashingUtils::HashString("alarm-cleared");
        static const int alarm_invalidated_HASH = HashingUtils::HashString("alarm-invalidated");


        ViolationEventType GetViolationEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == in_alarm_HASH)
          {
            return ViolationEventType::in_alarm;
          }
          else if (hashCode == alarm_cleared_HASH)
          {
            return ViolationEventType::alarm_cleared;
          }
          else if (hashCode == alarm_invalidated_HASH)
          {
            return ViolationEventType::alarm_invalidated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViolationEventType>(hashCode);
          }

          return ViolationEventType::NOT_SET;
        }

        Aws::String GetNameForViolationEventType(ViolationEventType enumValue)
        {
          switch(enumValue)
          {
          case ViolationEventType::in_alarm:
            return "in-alarm";
          case ViolationEventType::alarm_cleared:
            return "alarm-cleared";
          case ViolationEventType::alarm_invalidated:
            return "alarm-invalidated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViolationEventTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
