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

        static const int available_HASH = HashingUtils::HashString("available");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int failing_HASH = HashingUtils::HashString("failing");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        TransitGatewayRouteTableAnnouncementState GetTransitGatewayRouteTableAnnouncementStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
