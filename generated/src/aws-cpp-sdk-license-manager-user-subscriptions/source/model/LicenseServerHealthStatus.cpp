/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/LicenseServerHealthStatus.h>
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
      namespace LicenseServerHealthStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");


        LicenseServerHealthStatus GetLicenseServerHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return LicenseServerHealthStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return LicenseServerHealthStatus::UNHEALTHY;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return LicenseServerHealthStatus::NOT_APPLICABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseServerHealthStatus>(hashCode);
          }

          return LicenseServerHealthStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseServerHealthStatus(LicenseServerHealthStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseServerHealthStatus::NOT_SET:
            return {};
          case LicenseServerHealthStatus::HEALTHY:
            return "HEALTHY";
          case LicenseServerHealthStatus::UNHEALTHY:
            return "UNHEALTHY";
          case LicenseServerHealthStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseServerHealthStatusMapper
    } // namespace Model
  } // namespace LicenseManagerUserSubscriptions
} // namespace Aws
