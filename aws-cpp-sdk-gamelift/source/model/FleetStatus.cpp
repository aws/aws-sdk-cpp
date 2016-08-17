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
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace FleetStatusMapper
      {

        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int DOWNLOADING_HASH = HashingUtils::HashString("DOWNLOADING");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int BUILDING_HASH = HashingUtils::HashString("BUILDING");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        FleetStatus GetFleetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return FleetStatus::NEW_;
          }
          else if (hashCode == DOWNLOADING_HASH)
          {
            return FleetStatus::DOWNLOADING;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return FleetStatus::VALIDATING;
          }
          else if (hashCode == BUILDING_HASH)
          {
            return FleetStatus::BUILDING;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return FleetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FleetStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FleetStatus::DELETING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return FleetStatus::ERROR_;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return FleetStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetStatus>(hashCode);
          }

          return FleetStatus::NOT_SET;
        }

        Aws::String GetNameForFleetStatus(FleetStatus enumValue)
        {
          switch(enumValue)
          {
          case FleetStatus::NEW_:
            return "NEW";
          case FleetStatus::DOWNLOADING:
            return "DOWNLOADING";
          case FleetStatus::VALIDATING:
            return "VALIDATING";
          case FleetStatus::BUILDING:
            return "BUILDING";
          case FleetStatus::ACTIVATING:
            return "ACTIVATING";
          case FleetStatus::ACTIVE:
            return "ACTIVE";
          case FleetStatus::DELETING:
            return "DELETING";
          case FleetStatus::ERROR_:
            return "ERROR";
          case FleetStatus::TERMINATED:
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

      } // namespace FleetStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
