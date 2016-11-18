/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/RouteOrigin.h>
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
      namespace RouteOriginMapper
      {

        static const int CreateRouteTable_HASH = HashingUtils::HashString("CreateRouteTable");
        static const int CreateRoute_HASH = HashingUtils::HashString("CreateRoute");
        static const int EnableVgwRoutePropagation_HASH = HashingUtils::HashString("EnableVgwRoutePropagation");


        RouteOrigin GetRouteOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateRouteTable_HASH)
          {
            return RouteOrigin::CreateRouteTable;
          }
          else if (hashCode == CreateRoute_HASH)
          {
            return RouteOrigin::CreateRoute;
          }
          else if (hashCode == EnableVgwRoutePropagation_HASH)
          {
            return RouteOrigin::EnableVgwRoutePropagation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteOrigin>(hashCode);
          }

          return RouteOrigin::NOT_SET;
        }

        Aws::String GetNameForRouteOrigin(RouteOrigin enumValue)
        {
          switch(enumValue)
          {
          case RouteOrigin::CreateRouteTable:
            return "CreateRouteTable";
          case RouteOrigin::CreateRoute:
            return "CreateRoute";
          case RouteOrigin::EnableVgwRoutePropagation:
            return "EnableVgwRoutePropagation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RouteOriginMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
