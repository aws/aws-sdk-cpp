/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcPeeringConnectionStateReasonCode.h>
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
      namespace VpcPeeringConnectionStateReasonCodeMapper
      {

        static constexpr uint32_t initiating_request_HASH = ConstExprHashingUtils::HashString("initiating-request");
        static constexpr uint32_t pending_acceptance_HASH = ConstExprHashingUtils::HashString("pending-acceptance");
        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");
        static constexpr uint32_t rejected_HASH = ConstExprHashingUtils::HashString("rejected");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t expired_HASH = ConstExprHashingUtils::HashString("expired");
        static constexpr uint32_t provisioning_HASH = ConstExprHashingUtils::HashString("provisioning");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");


        VpcPeeringConnectionStateReasonCode GetVpcPeeringConnectionStateReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == initiating_request_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::initiating_request;
          }
          else if (hashCode == pending_acceptance_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::pending_acceptance;
          }
          else if (hashCode == active_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::active;
          }
          else if (hashCode == deleted_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::deleted;
          }
          else if (hashCode == rejected_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::rejected;
          }
          else if (hashCode == failed_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::failed;
          }
          else if (hashCode == expired_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::expired;
          }
          else if (hashCode == provisioning_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::provisioning;
          }
          else if (hashCode == deleting_HASH)
          {
            return VpcPeeringConnectionStateReasonCode::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcPeeringConnectionStateReasonCode>(hashCode);
          }

          return VpcPeeringConnectionStateReasonCode::NOT_SET;
        }

        Aws::String GetNameForVpcPeeringConnectionStateReasonCode(VpcPeeringConnectionStateReasonCode enumValue)
        {
          switch(enumValue)
          {
          case VpcPeeringConnectionStateReasonCode::NOT_SET:
            return {};
          case VpcPeeringConnectionStateReasonCode::initiating_request:
            return "initiating-request";
          case VpcPeeringConnectionStateReasonCode::pending_acceptance:
            return "pending-acceptance";
          case VpcPeeringConnectionStateReasonCode::active:
            return "active";
          case VpcPeeringConnectionStateReasonCode::deleted:
            return "deleted";
          case VpcPeeringConnectionStateReasonCode::rejected:
            return "rejected";
          case VpcPeeringConnectionStateReasonCode::failed:
            return "failed";
          case VpcPeeringConnectionStateReasonCode::expired:
            return "expired";
          case VpcPeeringConnectionStateReasonCode::provisioning:
            return "provisioning";
          case VpcPeeringConnectionStateReasonCode::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcPeeringConnectionStateReasonCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
