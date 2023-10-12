/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayAttachmentState.h>
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
      namespace TransitGatewayAttachmentStateMapper
      {

        static constexpr uint32_t initiating_HASH = ConstExprHashingUtils::HashString("initiating");
        static constexpr uint32_t initiatingRequest_HASH = ConstExprHashingUtils::HashString("initiatingRequest");
        static constexpr uint32_t pendingAcceptance_HASH = ConstExprHashingUtils::HashString("pendingAcceptance");
        static constexpr uint32_t rollingBack_HASH = ConstExprHashingUtils::HashString("rollingBack");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t modifying_HASH = ConstExprHashingUtils::HashString("modifying");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t rejected_HASH = ConstExprHashingUtils::HashString("rejected");
        static constexpr uint32_t rejecting_HASH = ConstExprHashingUtils::HashString("rejecting");
        static constexpr uint32_t failing_HASH = ConstExprHashingUtils::HashString("failing");


        TransitGatewayAttachmentState GetTransitGatewayAttachmentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == initiating_HASH)
          {
            return TransitGatewayAttachmentState::initiating;
          }
          else if (hashCode == initiatingRequest_HASH)
          {
            return TransitGatewayAttachmentState::initiatingRequest;
          }
          else if (hashCode == pendingAcceptance_HASH)
          {
            return TransitGatewayAttachmentState::pendingAcceptance;
          }
          else if (hashCode == rollingBack_HASH)
          {
            return TransitGatewayAttachmentState::rollingBack;
          }
          else if (hashCode == pending_HASH)
          {
            return TransitGatewayAttachmentState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return TransitGatewayAttachmentState::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return TransitGatewayAttachmentState::modifying;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayAttachmentState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayAttachmentState::deleted;
          }
          else if (hashCode == failed_HASH)
          {
            return TransitGatewayAttachmentState::failed;
          }
          else if (hashCode == rejected_HASH)
          {
            return TransitGatewayAttachmentState::rejected;
          }
          else if (hashCode == rejecting_HASH)
          {
            return TransitGatewayAttachmentState::rejecting;
          }
          else if (hashCode == failing_HASH)
          {
            return TransitGatewayAttachmentState::failing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayAttachmentState>(hashCode);
          }

          return TransitGatewayAttachmentState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayAttachmentState(TransitGatewayAttachmentState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayAttachmentState::NOT_SET:
            return {};
          case TransitGatewayAttachmentState::initiating:
            return "initiating";
          case TransitGatewayAttachmentState::initiatingRequest:
            return "initiatingRequest";
          case TransitGatewayAttachmentState::pendingAcceptance:
            return "pendingAcceptance";
          case TransitGatewayAttachmentState::rollingBack:
            return "rollingBack";
          case TransitGatewayAttachmentState::pending:
            return "pending";
          case TransitGatewayAttachmentState::available:
            return "available";
          case TransitGatewayAttachmentState::modifying:
            return "modifying";
          case TransitGatewayAttachmentState::deleting:
            return "deleting";
          case TransitGatewayAttachmentState::deleted:
            return "deleted";
          case TransitGatewayAttachmentState::failed:
            return "failed";
          case TransitGatewayAttachmentState::rejected:
            return "rejected";
          case TransitGatewayAttachmentState::rejecting:
            return "rejecting";
          case TransitGatewayAttachmentState::failing:
            return "failing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayAttachmentStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
