/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerRouteInstallationStatus.h>
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
      namespace RouteServerRouteInstallationStatusMapper
      {

        static const int installed_HASH = HashingUtils::HashString("installed");
        static const int rejected_HASH = HashingUtils::HashString("rejected");


        RouteServerRouteInstallationStatus GetRouteServerRouteInstallationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == installed_HASH)
          {
            return RouteServerRouteInstallationStatus::installed;
          }
          else if (hashCode == rejected_HASH)
          {
            return RouteServerRouteInstallationStatus::rejected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerRouteInstallationStatus>(hashCode);
          }

          return RouteServerRouteInstallationStatus::NOT_SET;
        }

        Aws::String GetNameForRouteServerRouteInstallationStatus(RouteServerRouteInstallationStatus enumValue)
        {
          switch(enumValue)
          {
          case RouteServerRouteInstallationStatus::NOT_SET:
            return {};
          case RouteServerRouteInstallationStatus::installed:
            return "installed";
          case RouteServerRouteInstallationStatus::rejected:
            return "rejected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerRouteInstallationStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
