/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EventCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace EventCodeMapper
      {

        static const int instance_reboot_HASH = HashingUtils::HashString("instance-reboot");
        static const int system_reboot_HASH = HashingUtils::HashString("system-reboot");
        static const int system_maintenance_HASH = HashingUtils::HashString("system-maintenance");
        static const int instance_retirement_HASH = HashingUtils::HashString("instance-retirement");
        static const int instance_stop_HASH = HashingUtils::HashString("instance-stop");


        EventCode GetEventCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instance_reboot_HASH)
          {
            return EventCode::instance_reboot;
          }
          else if (hashCode == system_reboot_HASH)
          {
            return EventCode::system_reboot;
          }
          else if (hashCode == system_maintenance_HASH)
          {
            return EventCode::system_maintenance;
          }
          else if (hashCode == instance_retirement_HASH)
          {
            return EventCode::instance_retirement;
          }
          else if (hashCode == instance_stop_HASH)
          {
            return EventCode::instance_stop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventCode>(hashCode);
          }

          return EventCode::NOT_SET;
        }

        Aws::String GetNameForEventCode(EventCode enumValue)
        {
          switch(enumValue)
          {
          case EventCode::instance_reboot:
            return "instance-reboot";
          case EventCode::system_reboot:
            return "system-reboot";
          case EventCode::system_maintenance:
            return "system-maintenance";
          case EventCode::instance_retirement:
            return "instance-retirement";
          case EventCode::instance_stop:
            return "instance-stop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
