/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpointType.h>
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
      namespace VerifiedAccessEndpointTypeMapper
      {

        static const int load_balancer_HASH = HashingUtils::HashString("load-balancer");
        static const int network_interface_HASH = HashingUtils::HashString("network-interface");


        VerifiedAccessEndpointType GetVerifiedAccessEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == load_balancer_HASH)
          {
            return VerifiedAccessEndpointType::load_balancer;
          }
          else if (hashCode == network_interface_HASH)
          {
            return VerifiedAccessEndpointType::network_interface;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedAccessEndpointType>(hashCode);
          }

          return VerifiedAccessEndpointType::NOT_SET;
        }

        Aws::String GetNameForVerifiedAccessEndpointType(VerifiedAccessEndpointType enumValue)
        {
          switch(enumValue)
          {
          case VerifiedAccessEndpointType::load_balancer:
            return "load-balancer";
          case VerifiedAccessEndpointType::network_interface:
            return "network-interface";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedAccessEndpointTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
