/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AsnAssociationState.h>
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
      namespace AsnAssociationStateMapper
      {

        static const int disassociated_HASH = HashingUtils::HashString("disassociated");
        static const int failed_disassociation_HASH = HashingUtils::HashString("failed-disassociation");
        static const int failed_association_HASH = HashingUtils::HashString("failed-association");
        static const int pending_disassociation_HASH = HashingUtils::HashString("pending-disassociation");
        static const int pending_association_HASH = HashingUtils::HashString("pending-association");
        static const int associated_HASH = HashingUtils::HashString("associated");


        AsnAssociationState GetAsnAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disassociated_HASH)
          {
            return AsnAssociationState::disassociated;
          }
          else if (hashCode == failed_disassociation_HASH)
          {
            return AsnAssociationState::failed_disassociation;
          }
          else if (hashCode == failed_association_HASH)
          {
            return AsnAssociationState::failed_association;
          }
          else if (hashCode == pending_disassociation_HASH)
          {
            return AsnAssociationState::pending_disassociation;
          }
          else if (hashCode == pending_association_HASH)
          {
            return AsnAssociationState::pending_association;
          }
          else if (hashCode == associated_HASH)
          {
            return AsnAssociationState::associated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsnAssociationState>(hashCode);
          }

          return AsnAssociationState::NOT_SET;
        }

        Aws::String GetNameForAsnAssociationState(AsnAssociationState enumValue)
        {
          switch(enumValue)
          {
          case AsnAssociationState::NOT_SET:
            return {};
          case AsnAssociationState::disassociated:
            return "disassociated";
          case AsnAssociationState::failed_disassociation:
            return "failed-disassociation";
          case AsnAssociationState::failed_association:
            return "failed-association";
          case AsnAssociationState::pending_disassociation:
            return "pending-disassociation";
          case AsnAssociationState::pending_association:
            return "pending-association";
          case AsnAssociationState::associated:
            return "associated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsnAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
