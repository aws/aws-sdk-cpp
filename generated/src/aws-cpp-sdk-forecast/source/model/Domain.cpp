/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Domain.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace DomainMapper
      {

        static const int RETAIL_HASH = HashingUtils::HashString("RETAIL");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int INVENTORY_PLANNING_HASH = HashingUtils::HashString("INVENTORY_PLANNING");
        static const int EC2_CAPACITY_HASH = HashingUtils::HashString("EC2_CAPACITY");
        static const int WORK_FORCE_HASH = HashingUtils::HashString("WORK_FORCE");
        static const int WEB_TRAFFIC_HASH = HashingUtils::HashString("WEB_TRAFFIC");
        static const int METRICS_HASH = HashingUtils::HashString("METRICS");


        Domain GetDomainForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETAIL_HASH)
          {
            return Domain::RETAIL;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return Domain::CUSTOM;
          }
          else if (hashCode == INVENTORY_PLANNING_HASH)
          {
            return Domain::INVENTORY_PLANNING;
          }
          else if (hashCode == EC2_CAPACITY_HASH)
          {
            return Domain::EC2_CAPACITY;
          }
          else if (hashCode == WORK_FORCE_HASH)
          {
            return Domain::WORK_FORCE;
          }
          else if (hashCode == WEB_TRAFFIC_HASH)
          {
            return Domain::WEB_TRAFFIC;
          }
          else if (hashCode == METRICS_HASH)
          {
            return Domain::METRICS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Domain>(hashCode);
          }

          return Domain::NOT_SET;
        }

        Aws::String GetNameForDomain(Domain enumValue)
        {
          switch(enumValue)
          {
          case Domain::RETAIL:
            return "RETAIL";
          case Domain::CUSTOM:
            return "CUSTOM";
          case Domain::INVENTORY_PLANNING:
            return "INVENTORY_PLANNING";
          case Domain::EC2_CAPACITY:
            return "EC2_CAPACITY";
          case Domain::WORK_FORCE:
            return "WORK_FORCE";
          case Domain::WEB_TRAFFIC:
            return "WEB_TRAFFIC";
          case Domain::METRICS:
            return "METRICS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
