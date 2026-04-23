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

#include <aws/ec2/model/TransitGatewayRouteTableState.h>
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
      namespace TransitGatewayRouteTableStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        TransitGatewayRouteTableState GetTransitGatewayRouteTableStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayRouteTableState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayRouteTableState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayRouteTableState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayRouteTableState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayRouteTableState>(hashCode);
          }

          return TransitGatewayRouteTableState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayRouteTableState(TransitGatewayRouteTableState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayRouteTableState::pending:
            return "pending";
          case TransitGatewayRouteTableState::available:
            return "available";
          case TransitGatewayRouteTableState::deleting:
            return "deleting";
          case TransitGatewayRouteTableState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayRouteTableStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
