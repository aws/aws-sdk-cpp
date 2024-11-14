/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpointProvisioningStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManagerUserSubscriptions
  {
    namespace Model
    {
      namespace LicenseServerEndpointProvisioningStatusMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int PROVISIONING_FAILED_HASH = HashingUtils::HashString("PROVISIONING_FAILED");
        static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        LicenseServerEndpointProvisioningStatus GetLicenseServerEndpointProvisioningStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return LicenseServerEndpointProvisioningStatus::PROVISIONING;
          }
          else if (hashCode == PROVISIONING_FAILED_HASH)
          {
            return LicenseServerEndpointProvisioningStatus::PROVISIONING_FAILED;
          }
          else if (hashCode == PROVISIONED_HASH)
          {
            return LicenseServerEndpointProvisioningStatus::PROVISIONED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return LicenseServerEndpointProvisioningStatus::DELETING;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return LicenseServerEndpointProvisioningStatus::DELETION_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LicenseServerEndpointProvisioningStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseServerEndpointProvisioningStatus>(hashCode);
          }

          return LicenseServerEndpointProvisioningStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseServerEndpointProvisioningStatus::NOT_SET:
            return {};
          case LicenseServerEndpointProvisioningStatus::PROVISIONING:
            return "PROVISIONING";
          case LicenseServerEndpointProvisioningStatus::PROVISIONING_FAILED:
            return "PROVISIONING_FAILED";
          case LicenseServerEndpointProvisioningStatus::PROVISIONED:
            return "PROVISIONED";
          case LicenseServerEndpointProvisioningStatus::DELETING:
            return "DELETING";
          case LicenseServerEndpointProvisioningStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          case LicenseServerEndpointProvisioningStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseServerEndpointProvisioningStatusMapper
    } // namespace Model
  } // namespace LicenseManagerUserSubscriptions
} // namespace Aws
