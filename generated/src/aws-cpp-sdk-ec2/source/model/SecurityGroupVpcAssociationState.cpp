/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SecurityGroupVpcAssociationState.h>
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
      namespace SecurityGroupVpcAssociationStateMapper
      {

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int association_failed_HASH = HashingUtils::HashString("association-failed");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");
        static const int disassociation_failed_HASH = HashingUtils::HashString("disassociation-failed");


        SecurityGroupVpcAssociationState GetSecurityGroupVpcAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return SecurityGroupVpcAssociationState::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return SecurityGroupVpcAssociationState::associated;
          }
          else if (hashCode == association_failed_HASH)
          {
            return SecurityGroupVpcAssociationState::association_failed;
          }
          else if (hashCode == disassociating_HASH)
          {
            return SecurityGroupVpcAssociationState::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return SecurityGroupVpcAssociationState::disassociated;
          }
          else if (hashCode == disassociation_failed_HASH)
          {
            return SecurityGroupVpcAssociationState::disassociation_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityGroupVpcAssociationState>(hashCode);
          }

          return SecurityGroupVpcAssociationState::NOT_SET;
        }

        Aws::String GetNameForSecurityGroupVpcAssociationState(SecurityGroupVpcAssociationState enumValue)
        {
          switch(enumValue)
          {
          case SecurityGroupVpcAssociationState::NOT_SET:
            return {};
          case SecurityGroupVpcAssociationState::associating:
            return "associating";
          case SecurityGroupVpcAssociationState::associated:
            return "associated";
          case SecurityGroupVpcAssociationState::association_failed:
            return "association-failed";
          case SecurityGroupVpcAssociationState::disassociating:
            return "disassociating";
          case SecurityGroupVpcAssociationState::disassociated:
            return "disassociated";
          case SecurityGroupVpcAssociationState::disassociation_failed:
            return "disassociation-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityGroupVpcAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
