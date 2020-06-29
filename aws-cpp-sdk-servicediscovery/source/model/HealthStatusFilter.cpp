/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HealthStatusFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace HealthStatusFilterMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        HealthStatusFilter GetHealthStatusFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return HealthStatusFilter::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return HealthStatusFilter::UNHEALTHY;
          }
          else if (hashCode == ALL_HASH)
          {
            return HealthStatusFilter::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthStatusFilter>(hashCode);
          }

          return HealthStatusFilter::NOT_SET;
        }

        Aws::String GetNameForHealthStatusFilter(HealthStatusFilter enumValue)
        {
          switch(enumValue)
          {
          case HealthStatusFilter::HEALTHY:
            return "HEALTHY";
          case HealthStatusFilter::UNHEALTHY:
            return "UNHEALTHY";
          case HealthStatusFilter::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthStatusFilterMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
