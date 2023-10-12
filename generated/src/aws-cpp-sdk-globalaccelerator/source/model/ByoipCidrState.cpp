/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ByoipCidrState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace ByoipCidrStateMapper
      {

        static constexpr uint32_t PENDING_PROVISIONING_HASH = ConstExprHashingUtils::HashString("PENDING_PROVISIONING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t PENDING_ADVERTISING_HASH = ConstExprHashingUtils::HashString("PENDING_ADVERTISING");
        static constexpr uint32_t ADVERTISING_HASH = ConstExprHashingUtils::HashString("ADVERTISING");
        static constexpr uint32_t PENDING_WITHDRAWING_HASH = ConstExprHashingUtils::HashString("PENDING_WITHDRAWING");
        static constexpr uint32_t PENDING_DEPROVISIONING_HASH = ConstExprHashingUtils::HashString("PENDING_DEPROVISIONING");
        static constexpr uint32_t DEPROVISIONED_HASH = ConstExprHashingUtils::HashString("DEPROVISIONED");
        static constexpr uint32_t FAILED_PROVISION_HASH = ConstExprHashingUtils::HashString("FAILED_PROVISION");
        static constexpr uint32_t FAILED_ADVERTISING_HASH = ConstExprHashingUtils::HashString("FAILED_ADVERTISING");
        static constexpr uint32_t FAILED_WITHDRAW_HASH = ConstExprHashingUtils::HashString("FAILED_WITHDRAW");
        static constexpr uint32_t FAILED_DEPROVISION_HASH = ConstExprHashingUtils::HashString("FAILED_DEPROVISION");


        ByoipCidrState GetByoipCidrStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_PROVISIONING_HASH)
          {
            return ByoipCidrState::PENDING_PROVISIONING;
          }
          else if (hashCode == READY_HASH)
          {
            return ByoipCidrState::READY;
          }
          else if (hashCode == PENDING_ADVERTISING_HASH)
          {
            return ByoipCidrState::PENDING_ADVERTISING;
          }
          else if (hashCode == ADVERTISING_HASH)
          {
            return ByoipCidrState::ADVERTISING;
          }
          else if (hashCode == PENDING_WITHDRAWING_HASH)
          {
            return ByoipCidrState::PENDING_WITHDRAWING;
          }
          else if (hashCode == PENDING_DEPROVISIONING_HASH)
          {
            return ByoipCidrState::PENDING_DEPROVISIONING;
          }
          else if (hashCode == DEPROVISIONED_HASH)
          {
            return ByoipCidrState::DEPROVISIONED;
          }
          else if (hashCode == FAILED_PROVISION_HASH)
          {
            return ByoipCidrState::FAILED_PROVISION;
          }
          else if (hashCode == FAILED_ADVERTISING_HASH)
          {
            return ByoipCidrState::FAILED_ADVERTISING;
          }
          else if (hashCode == FAILED_WITHDRAW_HASH)
          {
            return ByoipCidrState::FAILED_WITHDRAW;
          }
          else if (hashCode == FAILED_DEPROVISION_HASH)
          {
            return ByoipCidrState::FAILED_DEPROVISION;
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
          case ByoipCidrState::PENDING_PROVISIONING:
            return "PENDING_PROVISIONING";
          case ByoipCidrState::READY:
            return "READY";
          case ByoipCidrState::PENDING_ADVERTISING:
            return "PENDING_ADVERTISING";
          case ByoipCidrState::ADVERTISING:
            return "ADVERTISING";
          case ByoipCidrState::PENDING_WITHDRAWING:
            return "PENDING_WITHDRAWING";
          case ByoipCidrState::PENDING_DEPROVISIONING:
            return "PENDING_DEPROVISIONING";
          case ByoipCidrState::DEPROVISIONED:
            return "DEPROVISIONED";
          case ByoipCidrState::FAILED_PROVISION:
            return "FAILED_PROVISION";
          case ByoipCidrState::FAILED_ADVERTISING:
            return "FAILED_ADVERTISING";
          case ByoipCidrState::FAILED_WITHDRAW:
            return "FAILED_WITHDRAW";
          case ByoipCidrState::FAILED_DEPROVISION:
            return "FAILED_DEPROVISION";
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
  } // namespace GlobalAccelerator
} // namespace Aws
