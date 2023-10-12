/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteTableAssociationStateCode.h>
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
      namespace RouteTableAssociationStateCodeMapper
      {

        static constexpr uint32_t associating_HASH = ConstExprHashingUtils::HashString("associating");
        static constexpr uint32_t associated_HASH = ConstExprHashingUtils::HashString("associated");
        static constexpr uint32_t disassociating_HASH = ConstExprHashingUtils::HashString("disassociating");
        static constexpr uint32_t disassociated_HASH = ConstExprHashingUtils::HashString("disassociated");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        RouteTableAssociationStateCode GetRouteTableAssociationStateCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return RouteTableAssociationStateCode::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return RouteTableAssociationStateCode::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return RouteTableAssociationStateCode::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return RouteTableAssociationStateCode::disassociated;
          }
          else if (hashCode == failed_HASH)
          {
            return RouteTableAssociationStateCode::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTableAssociationStateCode>(hashCode);
          }

          return RouteTableAssociationStateCode::NOT_SET;
        }

        Aws::String GetNameForRouteTableAssociationStateCode(RouteTableAssociationStateCode enumValue)
        {
          switch(enumValue)
          {
          case RouteTableAssociationStateCode::NOT_SET:
            return {};
          case RouteTableAssociationStateCode::associating:
            return "associating";
          case RouteTableAssociationStateCode::associated:
            return "associated";
          case RouteTableAssociationStateCode::disassociating:
            return "disassociating";
          case RouteTableAssociationStateCode::disassociated:
            return "disassociated";
          case RouteTableAssociationStateCode::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTableAssociationStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
