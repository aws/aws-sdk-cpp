/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/InstanceFleetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace InstanceFleetStateMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int BOOTSTRAPPING_HASH = HashingUtils::HashString("BOOTSTRAPPING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int RESIZING_HASH = HashingUtils::HashString("RESIZING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        InstanceFleetState GetInstanceFleetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return InstanceFleetState::PROVISIONING;
          }
          else if (hashCode == BOOTSTRAPPING_HASH)
          {
            return InstanceFleetState::BOOTSTRAPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InstanceFleetState::RUNNING;
          }
          else if (hashCode == RESIZING_HASH)
          {
            return InstanceFleetState::RESIZING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return InstanceFleetState::SUSPENDED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return InstanceFleetState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return InstanceFleetState::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceFleetState>(hashCode);
          }

          return InstanceFleetState::NOT_SET;
        }

        Aws::String GetNameForInstanceFleetState(InstanceFleetState enumValue)
        {
          switch(enumValue)
          {
          case InstanceFleetState::PROVISIONING:
            return "PROVISIONING";
          case InstanceFleetState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case InstanceFleetState::RUNNING:
            return "RUNNING";
          case InstanceFleetState::RESIZING:
            return "RESIZING";
          case InstanceFleetState::SUSPENDED:
            return "SUSPENDED";
          case InstanceFleetState::TERMINATING:
            return "TERMINATING";
          case InstanceFleetState::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceFleetStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
