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

        static const int pendingAcceptance_HASH = HashingUtils::HashString("pendingAcceptance");
        static const int rollingBack_HASH = HashingUtils::HashString("rollingBack");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int rejected_HASH = HashingUtils::HashString("rejected");
        static const int rejecting_HASH = HashingUtils::HashString("rejecting");
        static const int failing_HASH = HashingUtils::HashString("failing");


        TransitGatewayAttachmentState GetTransitGatewayAttachmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pendingAcceptance_HASH)
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
