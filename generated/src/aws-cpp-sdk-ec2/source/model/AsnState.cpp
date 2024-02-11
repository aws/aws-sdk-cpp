/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AsnState.h>
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
      namespace AsnStateMapper
      {

        static const int deprovisioned_HASH = HashingUtils::HashString("deprovisioned");
        static const int failed_deprovision_HASH = HashingUtils::HashString("failed-deprovision");
        static const int failed_provision_HASH = HashingUtils::HashString("failed-provision");
        static const int pending_deprovision_HASH = HashingUtils::HashString("pending-deprovision");
        static const int pending_provision_HASH = HashingUtils::HashString("pending-provision");
        static const int provisioned_HASH = HashingUtils::HashString("provisioned");


        AsnState GetAsnStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == deprovisioned_HASH)
          {
            return AsnState::deprovisioned;
          }
          else if (hashCode == failed_deprovision_HASH)
          {
            return AsnState::failed_deprovision;
          }
          else if (hashCode == failed_provision_HASH)
          {
            return AsnState::failed_provision;
          }
          else if (hashCode == pending_deprovision_HASH)
          {
            return AsnState::pending_deprovision;
          }
          else if (hashCode == pending_provision_HASH)
          {
            return AsnState::pending_provision;
          }
          else if (hashCode == provisioned_HASH)
          {
            return AsnState::provisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AsnState>(hashCode);
          }

          return AsnState::NOT_SET;
        }

        Aws::String GetNameForAsnState(AsnState enumValue)
        {
          switch(enumValue)
          {
          case AsnState::NOT_SET:
            return {};
          case AsnState::deprovisioned:
            return "deprovisioned";
          case AsnState::failed_deprovision:
            return "failed-deprovision";
          case AsnState::failed_provision:
            return "failed-provision";
          case AsnState::pending_deprovision:
            return "pending-deprovision";
          case AsnState::pending_provision:
            return "pending-provision";
          case AsnState::provisioned:
            return "provisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AsnStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
