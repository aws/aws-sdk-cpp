/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ProvisioningStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace ProvisioningStatusMapper
      {

        static const int UNASSOCIATED_HASH = HashingUtils::HashString("UNASSOCIATED");
        static const int PRE_ASSOCIATED_HASH = HashingUtils::HashString("PRE_ASSOCIATED");
        static const int DISCOVERED_HASH = HashingUtils::HashString("DISCOVERED");
        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int ISOLATED_HASH = HashingUtils::HashString("ISOLATED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ProvisioningStatus GetProvisioningStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNASSOCIATED_HASH)
          {
            return ProvisioningStatus::UNASSOCIATED;
          }
          else if (hashCode == PRE_ASSOCIATED_HASH)
          {
            return ProvisioningStatus::PRE_ASSOCIATED;
          }
          else if (hashCode == DISCOVERED_HASH)
          {
            return ProvisioningStatus::DISCOVERED;
          }
          else if (hashCode == ACTIVATED_HASH)
          {
            return ProvisioningStatus::ACTIVATED;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return ProvisioningStatus::DELETION_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ProvisioningStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == ISOLATED_HASH)
          {
            return ProvisioningStatus::ISOLATED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ProvisioningStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisioningStatus>(hashCode);
          }

          return ProvisioningStatus::NOT_SET;
        }

        Aws::String GetNameForProvisioningStatus(ProvisioningStatus enumValue)
        {
          switch(enumValue)
          {
          case ProvisioningStatus::NOT_SET:
            return {};
          case ProvisioningStatus::UNASSOCIATED:
            return "UNASSOCIATED";
          case ProvisioningStatus::PRE_ASSOCIATED:
            return "PRE_ASSOCIATED";
          case ProvisioningStatus::DISCOVERED:
            return "DISCOVERED";
          case ProvisioningStatus::ACTIVATED:
            return "ACTIVATED";
          case ProvisioningStatus::DELETION_FAILED:
            return "DELETION_FAILED";
          case ProvisioningStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ProvisioningStatus::ISOLATED:
            return "ISOLATED";
          case ProvisioningStatus::DELETED:
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

      } // namespace ProvisioningStatusMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
