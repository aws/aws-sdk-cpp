/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayAssociationState.h>
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
      namespace TransitGatewayAssociationStateMapper
      {

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");


        TransitGatewayAssociationState GetTransitGatewayAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return TransitGatewayAssociationState::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return TransitGatewayAssociationState::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return TransitGatewayAssociationState::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return TransitGatewayAssociationState::disassociated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayAssociationState>(hashCode);
          }

          return TransitGatewayAssociationState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayAssociationState(TransitGatewayAssociationState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayAssociationState::associating:
            return "associating";
          case TransitGatewayAssociationState::associated:
            return "associated";
          case TransitGatewayAssociationState::disassociating:
            return "disassociating";
          case TransitGatewayAssociationState::disassociated:
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

      } // namespace TransitGatewayAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
