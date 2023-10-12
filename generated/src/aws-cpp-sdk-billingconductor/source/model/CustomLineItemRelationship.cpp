/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CustomLineItemRelationship.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BillingConductor
  {
    namespace Model
    {
      namespace CustomLineItemRelationshipMapper
      {

        static constexpr uint32_t PARENT_HASH = ConstExprHashingUtils::HashString("PARENT");
        static constexpr uint32_t CHILD_HASH = ConstExprHashingUtils::HashString("CHILD");


        CustomLineItemRelationship GetCustomLineItemRelationshipForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARENT_HASH)
          {
            return CustomLineItemRelationship::PARENT;
          }
          else if (hashCode == CHILD_HASH)
          {
            return CustomLineItemRelationship::CHILD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomLineItemRelationship>(hashCode);
          }

          return CustomLineItemRelationship::NOT_SET;
        }

        Aws::String GetNameForCustomLineItemRelationship(CustomLineItemRelationship enumValue)
        {
          switch(enumValue)
          {
          case CustomLineItemRelationship::NOT_SET:
            return {};
          case CustomLineItemRelationship::PARENT:
            return "PARENT";
          case CustomLineItemRelationship::CHILD:
            return "CHILD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomLineItemRelationshipMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
