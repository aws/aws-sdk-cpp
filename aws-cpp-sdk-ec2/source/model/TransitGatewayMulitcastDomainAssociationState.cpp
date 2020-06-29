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

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");


        TransitGatewayMulitcastDomainAssociationState GetTransitGatewayMulitcastDomainAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
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
          case TransitGatewayMulitcastDomainAssociationState::associating:
            return "associating";
          case TransitGatewayMulitcastDomainAssociationState::associated:
            return "associated";
          case TransitGatewayMulitcastDomainAssociationState::disassociating:
            return "disassociating";
          case TransitGatewayMulitcastDomainAssociationState::disassociated:
            return "disassociated";
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
