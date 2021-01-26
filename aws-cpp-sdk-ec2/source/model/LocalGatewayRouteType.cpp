/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayRouteType.h>
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
      namespace LocalGatewayRouteTypeMapper
      {

        static const int static__HASH = HashingUtils::HashString("static");
        static const int propagated_HASH = HashingUtils::HashString("propagated");


        LocalGatewayRouteType GetLocalGatewayRouteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == static__HASH)
          {
            return LocalGatewayRouteType::static_;
          }
          else if (hashCode == propagated_HASH)
          {
            return LocalGatewayRouteType::propagated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalGatewayRouteType>(hashCode);
          }

          return LocalGatewayRouteType::NOT_SET;
        }

        Aws::String GetNameForLocalGatewayRouteType(LocalGatewayRouteType enumValue)
        {
          switch(enumValue)
          {
          case LocalGatewayRouteType::static_:
            return "static";
          case LocalGatewayRouteType::propagated:
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

      } // namespace LocalGatewayRouteTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
