/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerState.h>
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
      namespace LoadBalancerStateMapper
      {

        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t provisioning_HASH = ConstExprHashingUtils::HashString("provisioning");
        static constexpr uint32_t active_impaired_HASH = ConstExprHashingUtils::HashString("active_impaired");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t unknown_HASH = ConstExprHashingUtils::HashString("unknown");


        LoadBalancerState GetLoadBalancerStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return LoadBalancerState::active;
          }
          else if (hashCode == provisioning_HASH)
          {
            return LoadBalancerState::provisioning;
          }
          else if (hashCode == active_impaired_HASH)
          {
            return LoadBalancerState::active_impaired;
          }
          else if (hashCode == failed_HASH)
          {
            return LoadBalancerState::failed;
          }
          else if (hashCode == unknown_HASH)
          {
            return LoadBalancerState::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerState>(hashCode);
          }

          return LoadBalancerState::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerState(LoadBalancerState enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerState::NOT_SET:
            return {};
          case LoadBalancerState::active:
            return "active";
          case LoadBalancerState::provisioning:
            return "provisioning";
          case LoadBalancerState::active_impaired:
            return "active_impaired";
          case LoadBalancerState::failed:
            return "failed";
          case LoadBalancerState::unknown:
            return "unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerStateMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
