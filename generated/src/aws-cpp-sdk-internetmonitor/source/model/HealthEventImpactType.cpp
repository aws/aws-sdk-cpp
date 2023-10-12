/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/HealthEventImpactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace HealthEventImpactTypeMapper
      {

        static constexpr uint32_t AVAILABILITY_HASH = ConstExprHashingUtils::HashString("AVAILABILITY");
        static constexpr uint32_t PERFORMANCE_HASH = ConstExprHashingUtils::HashString("PERFORMANCE");
        static constexpr uint32_t LOCAL_AVAILABILITY_HASH = ConstExprHashingUtils::HashString("LOCAL_AVAILABILITY");
        static constexpr uint32_t LOCAL_PERFORMANCE_HASH = ConstExprHashingUtils::HashString("LOCAL_PERFORMANCE");


        HealthEventImpactType GetHealthEventImpactTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABILITY_HASH)
          {
            return HealthEventImpactType::AVAILABILITY;
          }
          else if (hashCode == PERFORMANCE_HASH)
          {
            return HealthEventImpactType::PERFORMANCE;
          }
          else if (hashCode == LOCAL_AVAILABILITY_HASH)
          {
            return HealthEventImpactType::LOCAL_AVAILABILITY;
          }
          else if (hashCode == LOCAL_PERFORMANCE_HASH)
          {
            return HealthEventImpactType::LOCAL_PERFORMANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthEventImpactType>(hashCode);
          }

          return HealthEventImpactType::NOT_SET;
        }

        Aws::String GetNameForHealthEventImpactType(HealthEventImpactType enumValue)
        {
          switch(enumValue)
          {
          case HealthEventImpactType::NOT_SET:
            return {};
          case HealthEventImpactType::AVAILABILITY:
            return "AVAILABILITY";
          case HealthEventImpactType::PERFORMANCE:
            return "PERFORMANCE";
          case HealthEventImpactType::LOCAL_AVAILABILITY:
            return "LOCAL_AVAILABILITY";
          case HealthEventImpactType::LOCAL_PERFORMANCE:
            return "LOCAL_PERFORMANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthEventImpactTypeMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
