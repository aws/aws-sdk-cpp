/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/HealthState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlobalAccelerator
  {
    namespace Model
    {
      namespace HealthStateMapper
      {

        static constexpr uint32_t INITIAL_HASH = ConstExprHashingUtils::HashString("INITIAL");
        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");


        HealthState GetHealthStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIAL_HASH)
          {
            return HealthState::INITIAL;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return HealthState::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return HealthState::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthState>(hashCode);
          }

          return HealthState::NOT_SET;
        }

        Aws::String GetNameForHealthState(HealthState enumValue)
        {
          switch(enumValue)
          {
          case HealthState::NOT_SET:
            return {};
          case HealthState::INITIAL:
            return "INITIAL";
          case HealthState::HEALTHY:
            return "HEALTHY";
          case HealthState::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthStateMapper
    } // namespace Model
  } // namespace GlobalAccelerator
} // namespace Aws
