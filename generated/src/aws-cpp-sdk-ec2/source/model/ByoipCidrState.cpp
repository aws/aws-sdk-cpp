/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ByoipCidrState.h>
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
      namespace ByoipCidrStateMapper
      {

        static constexpr uint32_t advertised_HASH = ConstExprHashingUtils::HashString("advertised");
        static constexpr uint32_t deprovisioned_HASH = ConstExprHashingUtils::HashString("deprovisioned");
        static constexpr uint32_t failed_deprovision_HASH = ConstExprHashingUtils::HashString("failed-deprovision");
        static constexpr uint32_t failed_provision_HASH = ConstExprHashingUtils::HashString("failed-provision");
        static constexpr uint32_t pending_deprovision_HASH = ConstExprHashingUtils::HashString("pending-deprovision");
        static constexpr uint32_t pending_provision_HASH = ConstExprHashingUtils::HashString("pending-provision");
        static constexpr uint32_t provisioned_HASH = ConstExprHashingUtils::HashString("provisioned");
        static constexpr uint32_t provisioned_not_publicly_advertisable_HASH = ConstExprHashingUtils::HashString("provisioned-not-publicly-advertisable");


        ByoipCidrState GetByoipCidrStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == advertised_HASH)
          {
            return ByoipCidrState::advertised;
          }
          else if (hashCode == deprovisioned_HASH)
          {
            return ByoipCidrState::deprovisioned;
          }
          else if (hashCode == failed_deprovision_HASH)
          {
            return ByoipCidrState::failed_deprovision;
          }
          else if (hashCode == failed_provision_HASH)
          {
            return ByoipCidrState::failed_provision;
          }
          else if (hashCode == pending_deprovision_HASH)
          {
            return ByoipCidrState::pending_deprovision;
          }
          else if (hashCode == pending_provision_HASH)
          {
            return ByoipCidrState::pending_provision;
          }
          else if (hashCode == provisioned_HASH)
          {
            return ByoipCidrState::provisioned;
          }
          else if (hashCode == provisioned_not_publicly_advertisable_HASH)
          {
            return ByoipCidrState::provisioned_not_publicly_advertisable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ByoipCidrState>(hashCode);
          }

          return ByoipCidrState::NOT_SET;
        }

        Aws::String GetNameForByoipCidrState(ByoipCidrState enumValue)
        {
          switch(enumValue)
          {
          case ByoipCidrState::NOT_SET:
            return {};
          case ByoipCidrState::advertised:
            return "advertised";
          case ByoipCidrState::deprovisioned:
            return "deprovisioned";
          case ByoipCidrState::failed_deprovision:
            return "failed-deprovision";
          case ByoipCidrState::failed_provision:
            return "failed-provision";
          case ByoipCidrState::pending_deprovision:
            return "pending-deprovision";
          case ByoipCidrState::pending_provision:
            return "pending-provision";
          case ByoipCidrState::provisioned:
            return "provisioned";
          case ByoipCidrState::provisioned_not_publicly_advertisable:
            return "provisioned-not-publicly-advertisable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ByoipCidrStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
