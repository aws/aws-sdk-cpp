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

        static const int initiating_request_HASH = HashingUtils::HashString("initiating-request");
        static const int pending_acceptance_HASH = HashingUtils::HashString("pending-acceptance");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int rejected_HASH = HashingUtils::HashString("rejected");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int expired_HASH = HashingUtils::HashString("expired");
        static const int provisioning_HASH = HashingUtils::HashString("provisioning");
        static const int deleting_HASH = HashingUtils::HashString("deleting");


        VpcPeeringConnectionStateReasonCode GetVpcPeeringConnectionStateReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace VpcPeeringConnectionStateReasonCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
