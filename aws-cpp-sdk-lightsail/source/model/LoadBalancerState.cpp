/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int active_HASH = HashingUtils::HashString("active");
        static const int provisioning_HASH = HashingUtils::HashString("provisioning");
        static const int active_impaired_HASH = HashingUtils::HashString("active_impaired");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        LoadBalancerState GetLoadBalancerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
