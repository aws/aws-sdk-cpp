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

        static const int advertised_HASH = HashingUtils::HashString("advertised");
        static const int deprovisioned_HASH = HashingUtils::HashString("deprovisioned");
        static const int failed_deprovision_HASH = HashingUtils::HashString("failed-deprovision");
        static const int failed_provision_HASH = HashingUtils::HashString("failed-provision");
        static const int pending_deprovision_HASH = HashingUtils::HashString("pending-deprovision");
        static const int pending_provision_HASH = HashingUtils::HashString("pending-provision");
        static const int provisioned_HASH = HashingUtils::HashString("provisioned");
        static const int provisioned_not_publicly_advertisable_HASH = HashingUtils::HashString("provisioned-not-publicly-advertisable");


        ByoipCidrState GetByoipCidrStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
