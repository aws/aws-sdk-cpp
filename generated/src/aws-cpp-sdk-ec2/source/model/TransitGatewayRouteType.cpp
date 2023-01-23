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

        static const int static__HASH = HashingUtils::HashString("static");
        static const int propagated_HASH = HashingUtils::HashString("propagated");


        TransitGatewayRouteType GetTransitGatewayRouteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
