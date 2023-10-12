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

        static constexpr uint32_t RETAIL_HASH = ConstExprHashingUtils::HashString("RETAIL");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");
        static constexpr uint32_t INVENTORY_PLANNING_HASH = ConstExprHashingUtils::HashString("INVENTORY_PLANNING");
        static constexpr uint32_t EC2_CAPACITY_HASH = ConstExprHashingUtils::HashString("EC2_CAPACITY");
        static constexpr uint32_t WORK_FORCE_HASH = ConstExprHashingUtils::HashString("WORK_FORCE");
        static constexpr uint32_t WEB_TRAFFIC_HASH = ConstExprHashingUtils::HashString("WEB_TRAFFIC");
        static constexpr uint32_t METRICS_HASH = ConstExprHashingUtils::HashString("METRICS");


        Domain GetDomainForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case Domain::NOT_SET:
            return {};
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
