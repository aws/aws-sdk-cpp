/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetEventType.h>
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
      namespace FleetEventTypeMapper
      {

        static const int instance_change_HASH = HashingUtils::HashString("instance-change");
        static const int fleet_change_HASH = HashingUtils::HashString("fleet-change");
        static const int service_error_HASH = HashingUtils::HashString("service-error");


        FleetEventType GetFleetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instance_change_HASH)
          {
            return FleetEventType::instance_change;
          }
          else if (hashCode == fleet_change_HASH)
          {
            return FleetEventType::fleet_change;
          }
          else if (hashCode == service_error_HASH)
          {
            return FleetEventType::service_error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetEventType>(hashCode);
          }

          return FleetEventType::NOT_SET;
        }

        Aws::String GetNameForFleetEventType(FleetEventType enumValue)
        {
          switch(enumValue)
          {
          case FleetEventType::instance_change:
            return "instance-change";
          case FleetEventType::fleet_change:
            return "fleet-change";
          case FleetEventType::service_error:
            return "service-error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetEventTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
