/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceHealthState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceHealthStateMapper
      {

        static constexpr uint32_t initial_HASH = ConstExprHashingUtils::HashString("initial");
        static constexpr uint32_t healthy_HASH = ConstExprHashingUtils::HashString("healthy");
        static constexpr uint32_t unhealthy_HASH = ConstExprHashingUtils::HashString("unhealthy");
        static constexpr uint32_t unused_HASH = ConstExprHashingUtils::HashString("unused");
        static constexpr uint32_t draining_HASH = ConstExprHashingUtils::HashString("draining");
        static constexpr uint32_t unavailable_HASH = ConstExprHashingUtils::HashString("unavailable");


        InstanceHealthState GetInstanceHealthStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == initial_HASH)
          {
            return InstanceHealthState::initial;
          }
          else if (hashCode == healthy_HASH)
          {
            return InstanceHealthState::healthy;
          }
          else if (hashCode == unhealthy_HASH)
          {
            return InstanceHealthState::unhealthy;
          }
          else if (hashCode == unused_HASH)
          {
            return InstanceHealthState::unused;
          }
          else if (hashCode == draining_HASH)
          {
            return InstanceHealthState::draining;
          }
          else if (hashCode == unavailable_HASH)
          {
            return InstanceHealthState::unavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceHealthState>(hashCode);
          }

          return InstanceHealthState::NOT_SET;
        }

        Aws::String GetNameForInstanceHealthState(InstanceHealthState enumValue)
        {
          switch(enumValue)
          {
          case InstanceHealthState::NOT_SET:
            return {};
          case InstanceHealthState::initial:
            return "initial";
          case InstanceHealthState::healthy:
            return "healthy";
          case InstanceHealthState::unhealthy:
            return "unhealthy";
          case InstanceHealthState::unused:
            return "unused";
          case InstanceHealthState::draining:
            return "draining";
          case InstanceHealthState::unavailable:
            return "unavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceHealthStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
