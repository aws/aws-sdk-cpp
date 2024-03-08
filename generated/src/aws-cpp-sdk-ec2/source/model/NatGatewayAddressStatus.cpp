/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NatGatewayAddressStatus.h>
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
      namespace NatGatewayAddressStatusMapper
      {

        static const int assigning_HASH = HashingUtils::HashString("assigning");
        static const int unassigning_HASH = HashingUtils::HashString("unassigning");
        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int succeeded_HASH = HashingUtils::HashString("succeeded");
        static const int failed_HASH = HashingUtils::HashString("failed");


        NatGatewayAddressStatus GetNatGatewayAddressStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == assigning_HASH)
          {
            return NatGatewayAddressStatus::assigning;
          }
          else if (hashCode == unassigning_HASH)
          {
            return NatGatewayAddressStatus::unassigning;
          }
          else if (hashCode == associating_HASH)
          {
            return NatGatewayAddressStatus::associating;
          }
          else if (hashCode == disassociating_HASH)
          {
            return NatGatewayAddressStatus::disassociating;
          }
          else if (hashCode == succeeded_HASH)
          {
            return NatGatewayAddressStatus::succeeded;
          }
          else if (hashCode == failed_HASH)
          {
            return NatGatewayAddressStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NatGatewayAddressStatus>(hashCode);
          }

          return NatGatewayAddressStatus::NOT_SET;
        }

        Aws::String GetNameForNatGatewayAddressStatus(NatGatewayAddressStatus enumValue)
        {
          switch(enumValue)
          {
          case NatGatewayAddressStatus::NOT_SET:
            return {};
          case NatGatewayAddressStatus::assigning:
            return "assigning";
          case NatGatewayAddressStatus::unassigning:
            return "unassigning";
          case NatGatewayAddressStatus::associating:
            return "associating";
          case NatGatewayAddressStatus::disassociating:
            return "disassociating";
          case NatGatewayAddressStatus::succeeded:
            return "succeeded";
          case NatGatewayAddressStatus::failed:
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

      } // namespace NatGatewayAddressStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
