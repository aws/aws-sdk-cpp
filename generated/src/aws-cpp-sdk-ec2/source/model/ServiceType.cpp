/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceType.h>
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
      namespace ServiceTypeMapper
      {

        static const int Interface_HASH = HashingUtils::HashString("Interface");
        static const int Gateway_HASH = HashingUtils::HashString("Gateway");
        static const int GatewayLoadBalancer_HASH = HashingUtils::HashString("GatewayLoadBalancer");


        ServiceType GetServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Interface_HASH)
          {
            return ServiceType::Interface;
          }
          else if (hashCode == Gateway_HASH)
          {
            return ServiceType::Gateway;
          }
          else if (hashCode == GatewayLoadBalancer_HASH)
          {
            return ServiceType::GatewayLoadBalancer;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceType>(hashCode);
          }

          return ServiceType::NOT_SET;
        }

        Aws::String GetNameForServiceType(ServiceType enumValue)
        {
          switch(enumValue)
          {
          case ServiceType::Interface:
            return "Interface";
          case ServiceType::Gateway:
            return "Gateway";
          case ServiceType::GatewayLoadBalancer:
            return "GatewayLoadBalancer";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
