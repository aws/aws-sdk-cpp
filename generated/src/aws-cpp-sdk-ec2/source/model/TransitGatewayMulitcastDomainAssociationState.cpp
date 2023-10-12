/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayMulitcastDomainAssociationState.h>
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
      namespace TransitGatewayMulitcastDomainAssociationStateMapper
      {

        static constexpr uint32_t pendingAcceptance_HASH = ConstExprHashingUtils::HashString("pendingAcceptance");
        static constexpr uint32_t associating_HASH = ConstExprHashingUtils::HashString("associating");
        static constexpr uint32_t associated_HASH = ConstExprHashingUtils::HashString("associated");
        static constexpr uint32_t disassociating_HASH = ConstExprHashingUtils::HashString("disassociating");
        static constexpr uint32_t disassociated_HASH = ConstExprHashingUtils::HashString("disassociated");
        static constexpr uint32_t rejected_HASH = ConstExprHashingUtils::HashString("rejected");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        TransitGatewayMulitcastDomainAssociationState GetTransitGatewayMulitcastDomainAssociationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pendingAcceptance_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::pendingAcceptance;
          }
          else if (hashCode == associating_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::disassociated;
          }
          else if (hashCode == rejected_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::rejected;
          }
          else if (hashCode == failed_HASH)
          {
            return TransitGatewayMulitcastDomainAssociationState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayMulitcastDomainAssociationState>(hashCode);
          }

          return TransitGatewayMulitcastDomainAssociationState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayMulitcastDomainAssociationState(TransitGatewayMulitcastDomainAssociationState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayMulitcastDomainAssociationState::NOT_SET:
            return {};
          case TransitGatewayMulitcastDomainAssociationState::pendingAcceptance:
            return "pendingAcceptance";
          case TransitGatewayMulitcastDomainAssociationState::associating:
            return "associating";
          case TransitGatewayMulitcastDomainAssociationState::associated:
            return "associated";
          case TransitGatewayMulitcastDomainAssociationState::disassociating:
            return "disassociating";
          case TransitGatewayMulitcastDomainAssociationState::disassociated:
            return "disassociated";
          case TransitGatewayMulitcastDomainAssociationState::rejected:
            return "rejected";
          case TransitGatewayMulitcastDomainAssociationState::failed:
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

      } // namespace TransitGatewayMulitcastDomainAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
