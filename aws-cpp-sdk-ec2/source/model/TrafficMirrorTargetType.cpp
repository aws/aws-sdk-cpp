/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorTargetType.h>
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
      namespace TrafficMirrorTargetTypeMapper
      {

        static const int network_interface_HASH = HashingUtils::HashString("network-interface");
        static const int network_load_balancer_HASH = HashingUtils::HashString("network-load-balancer");


        TrafficMirrorTargetType GetTrafficMirrorTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == network_interface_HASH)
          {
            return TrafficMirrorTargetType::network_interface;
          }
          else if (hashCode == network_load_balancer_HASH)
          {
            return TrafficMirrorTargetType::network_load_balancer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficMirrorTargetType>(hashCode);
          }

          return TrafficMirrorTargetType::NOT_SET;
        }

        Aws::String GetNameForTrafficMirrorTargetType(TrafficMirrorTargetType enumValue)
        {
          switch(enumValue)
          {
          case TrafficMirrorTargetType::network_interface:
            return "network-interface";
          case TrafficMirrorTargetType::network_load_balancer:
            return "network-load-balancer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficMirrorTargetTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
