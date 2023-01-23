﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IamInstanceProfileAssociationState.h>
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
      namespace IamInstanceProfileAssociationStateMapper
      {

        static const int associating_HASH = HashingUtils::HashString("associating");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int disassociating_HASH = HashingUtils::HashString("disassociating");
        static const int disassociated_HASH = HashingUtils::HashString("disassociated");


        IamInstanceProfileAssociationState GetIamInstanceProfileAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return IamInstanceProfileAssociationState::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return IamInstanceProfileAssociationState::associated;
          }
          else if (hashCode == disassociating_HASH)
          {
            return IamInstanceProfileAssociationState::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return IamInstanceProfileAssociationState::disassociated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IamInstanceProfileAssociationState>(hashCode);
          }

          return IamInstanceProfileAssociationState::NOT_SET;
        }

        Aws::String GetNameForIamInstanceProfileAssociationState(IamInstanceProfileAssociationState enumValue)
        {
          switch(enumValue)
          {
          case IamInstanceProfileAssociationState::associating:
            return "associating";
          case IamInstanceProfileAssociationState::associated:
            return "associated";
          case IamInstanceProfileAssociationState::disassociating:
            return "disassociating";
          case IamInstanceProfileAssociationState::disassociated:
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

      } // namespace IamInstanceProfileAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
