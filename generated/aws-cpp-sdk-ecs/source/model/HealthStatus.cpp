/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/HealthStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace HealthStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        HealthStatus GetHealthStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return HealthStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return HealthStatus::UNHEALTHY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return HealthStatus::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthStatus>(hashCode);
          }

          return HealthStatus::NOT_SET;
        }

        Aws::String GetNameForHealthStatus(HealthStatus enumValue)
        {
          switch(enumValue)
          {
          case HealthStatus::HEALTHY:
            return "HEALTHY";
          case HealthStatus::UNHEALTHY:
            return "UNHEALTHY";
          case HealthStatus::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
