/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
