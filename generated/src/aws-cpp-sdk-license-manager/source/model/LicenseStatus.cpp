/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace LicenseStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_AVAILABLE_HASH = HashingUtils::HashString("PENDING_AVAILABLE");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int PENDING_DELETE_HASH = HashingUtils::HashString("PENDING_DELETE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        LicenseStatus GetLicenseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return LicenseStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_AVAILABLE_HASH)
          {
            return LicenseStatus::PENDING_AVAILABLE;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return LicenseStatus::DEACTIVATED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return LicenseStatus::SUSPENDED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return LicenseStatus::EXPIRED;
          }
          else if (hashCode == PENDING_DELETE_HASH)
          {
            return LicenseStatus::PENDING_DELETE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LicenseStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseStatus>(hashCode);
          }

          return LicenseStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseStatus(LicenseStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseStatus::NOT_SET:
            return {};
          case LicenseStatus::AVAILABLE:
            return "AVAILABLE";
          case LicenseStatus::PENDING_AVAILABLE:
            return "PENDING_AVAILABLE";
          case LicenseStatus::DEACTIVATED:
            return "DEACTIVATED";
          case LicenseStatus::SUSPENDED:
            return "SUSPENDED";
          case LicenseStatus::EXPIRED:
            return "EXPIRED";
          case LicenseStatus::PENDING_DELETE:
            return "PENDING_DELETE";
          case LicenseStatus::DELETED:
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

      } // namespace LicenseStatusMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
