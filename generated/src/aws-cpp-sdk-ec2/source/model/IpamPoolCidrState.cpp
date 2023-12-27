/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolCidrState.h>
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
      namespace IpamPoolCidrStateMapper
      {

        static const int pending_provision_HASH = HashingUtils::HashString("pending-provision");
        static const int provisioned_HASH = HashingUtils::HashString("provisioned");
        static const int failed_provision_HASH = HashingUtils::HashString("failed-provision");
        static const int pending_deprovision_HASH = HashingUtils::HashString("pending-deprovision");
        static const int deprovisioned_HASH = HashingUtils::HashString("deprovisioned");
        static const int failed_deprovision_HASH = HashingUtils::HashString("failed-deprovision");
        static const int pending_import_HASH = HashingUtils::HashString("pending-import");
        static const int failed_import_HASH = HashingUtils::HashString("failed-import");


        IpamPoolCidrState GetIpamPoolCidrStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_provision_HASH)
          {
            return IpamPoolCidrState::pending_provision;
          }
          else if (hashCode == provisioned_HASH)
          {
            return IpamPoolCidrState::provisioned;
          }
          else if (hashCode == failed_provision_HASH)
          {
            return IpamPoolCidrState::failed_provision;
          }
          else if (hashCode == pending_deprovision_HASH)
          {
            return IpamPoolCidrState::pending_deprovision;
          }
          else if (hashCode == deprovisioned_HASH)
          {
            return IpamPoolCidrState::deprovisioned;
          }
          else if (hashCode == failed_deprovision_HASH)
          {
            return IpamPoolCidrState::failed_deprovision;
          }
          else if (hashCode == pending_import_HASH)
          {
            return IpamPoolCidrState::pending_import;
          }
          else if (hashCode == failed_import_HASH)
          {
            return IpamPoolCidrState::failed_import;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolCidrState>(hashCode);
          }

          return IpamPoolCidrState::NOT_SET;
        }

        Aws::String GetNameForIpamPoolCidrState(IpamPoolCidrState enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolCidrState::NOT_SET:
            return {};
          case IpamPoolCidrState::pending_provision:
            return "pending-provision";
          case IpamPoolCidrState::provisioned:
            return "provisioned";
          case IpamPoolCidrState::failed_provision:
            return "failed-provision";
          case IpamPoolCidrState::pending_deprovision:
            return "pending-deprovision";
          case IpamPoolCidrState::deprovisioned:
            return "deprovisioned";
          case IpamPoolCidrState::failed_deprovision:
            return "failed-deprovision";
          case IpamPoolCidrState::pending_import:
            return "pending-import";
          case IpamPoolCidrState::failed_import:
            return "failed-import";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolCidrStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
