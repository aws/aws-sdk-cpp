/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRouteTableAnnouncementState.h>
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
      namespace TransitGatewayRouteTableAnnouncementStateMapper
      {

        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t failing_HASH = ConstExprHashingUtils::HashString("failing");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        TransitGatewayRouteTableAnnouncementState GetTransitGatewayRouteTableAnnouncementStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return TransitGatewayRouteTableAnnouncementState::available;
          }
          else if (hashCode == pending_HASH)
          {
            return TransitGatewayRouteTableAnnouncementState::pending;
          }
          else if (hashCode == failing_HASH)
          {
            return TransitGatewayRouteTableAnnouncementState::failing;
          }
          else if (hashCode == failed_HASH)
          {
            return TransitGatewayRouteTableAnnouncementState::failed;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayRouteTableAnnouncementState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayRouteTableAnnouncementState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayRouteTableAnnouncementState>(hashCode);
          }

          return TransitGatewayRouteTableAnnouncementState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayRouteTableAnnouncementState(TransitGatewayRouteTableAnnouncementState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayRouteTableAnnouncementState::NOT_SET:
            return {};
          case TransitGatewayRouteTableAnnouncementState::available:
            return "available";
          case TransitGatewayRouteTableAnnouncementState::pending:
            return "pending";
          case TransitGatewayRouteTableAnnouncementState::failing:
            return "failing";
          case TransitGatewayRouteTableAnnouncementState::failed:
            return "failed";
          case TransitGatewayRouteTableAnnouncementState::deleting:
            return "deleting";
          case TransitGatewayRouteTableAnnouncementState::deleted:
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

      } // namespace TransitGatewayRouteTableAnnouncementStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
