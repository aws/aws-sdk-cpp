/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociationStatusCode.h>
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
      namespace AssociationStatusCodeMapper
      {

        static constexpr uint32_t associating_HASH = ConstExprHashingUtils::HashString("associating");
        static constexpr uint32_t associated_HASH = ConstExprHashingUtils::HashString("associated");
        static constexpr uint32_t association_failed_HASH = ConstExprHashingUtils::HashString("association-failed");
        static constexpr uint32_t disassociating_HASH = ConstExprHashingUtils::HashString("disassociating");
        static constexpr uint32_t disassociated_HASH = ConstExprHashingUtils::HashString("disassociated");


        AssociationStatusCode GetAssociationStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associating_HASH)
          {
            return AssociationStatusCode::associating;
          }
          else if (hashCode == associated_HASH)
          {
            return AssociationStatusCode::associated;
          }
          else if (hashCode == association_failed_HASH)
          {
            return AssociationStatusCode::association_failed;
          }
          else if (hashCode == disassociating_HASH)
          {
            return AssociationStatusCode::disassociating;
          }
          else if (hashCode == disassociated_HASH)
          {
            return AssociationStatusCode::disassociated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationStatusCode>(hashCode);
          }

          return AssociationStatusCode::NOT_SET;
        }

        Aws::String GetNameForAssociationStatusCode(AssociationStatusCode enumValue)
        {
          switch(enumValue)
          {
          case AssociationStatusCode::NOT_SET:
            return {};
          case AssociationStatusCode::associating:
            return "associating";
          case AssociationStatusCode::associated:
            return "associated";
          case AssociationStatusCode::association_failed:
            return "association-failed";
          case AssociationStatusCode::disassociating:
            return "disassociating";
          case AssociationStatusCode::disassociated:
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

      } // namespace AssociationStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
