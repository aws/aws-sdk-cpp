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

        static const int initial_HASH = HashingUtils::HashString("initial");
        static const int healthy_HASH = HashingUtils::HashString("healthy");
        static const int unhealthy_HASH = HashingUtils::HashString("unhealthy");
        static const int unused_HASH = HashingUtils::HashString("unused");
        static const int draining_HASH = HashingUtils::HashString("draining");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");


        InstanceHealthState GetInstanceHealthStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
