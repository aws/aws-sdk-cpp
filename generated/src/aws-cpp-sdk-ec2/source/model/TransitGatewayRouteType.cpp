/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRouteType.h>
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
      namespace TransitGatewayRouteTypeMapper
      {

        static constexpr uint32_t static__HASH = ConstExprHashingUtils::HashString("static");
        static constexpr uint32_t propagated_HASH = ConstExprHashingUtils::HashString("propagated");


        TransitGatewayRouteType GetTransitGatewayRouteTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == static__HASH)
          {
            return TransitGatewayRouteType::static_;
          }
          else if (hashCode == propagated_HASH)
          {
            return TransitGatewayRouteType::propagated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayRouteType>(hashCode);
          }

          return TransitGatewayRouteType::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayRouteType(TransitGatewayRouteType enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayRouteType::NOT_SET:
            return {};
          case TransitGatewayRouteType::static_:
            return "static";
          case TransitGatewayRouteType::propagated:
            return "propagated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayRouteTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
