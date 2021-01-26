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

        static const int PENDING_PROVISIONING_HASH = HashingUtils::HashString("PENDING_PROVISIONING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int PENDING_ADVERTISING_HASH = HashingUtils::HashString("PENDING_ADVERTISING");
        static const int ADVERTISING_HASH = HashingUtils::HashString("ADVERTISING");
        static const int PENDING_WITHDRAWING_HASH = HashingUtils::HashString("PENDING_WITHDRAWING");
        static const int PENDING_DEPROVISIONING_HASH = HashingUtils::HashString("PENDING_DEPROVISIONING");
        static const int DEPROVISIONED_HASH = HashingUtils::HashString("DEPROVISIONED");
        static const int FAILED_PROVISION_HASH = HashingUtils::HashString("FAILED_PROVISION");
        static const int FAILED_ADVERTISING_HASH = HashingUtils::HashString("FAILED_ADVERTISING");
        static const int FAILED_WITHDRAW_HASH = HashingUtils::HashString("FAILED_WITHDRAW");
        static const int FAILED_DEPROVISION_HASH = HashingUtils::HashString("FAILED_DEPROVISION");


        ByoipCidrState GetByoipCidrStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
