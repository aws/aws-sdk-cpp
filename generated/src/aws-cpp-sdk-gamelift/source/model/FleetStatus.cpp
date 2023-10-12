/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t NEW__HASH = ConstExprHashingUtils::HashString("NEW");
        static constexpr uint32_t DOWNLOADING_HASH = ConstExprHashingUtils::HashString("DOWNLOADING");
        static constexpr uint32_t VALIDATING_HASH = ConstExprHashingUtils::HashString("VALIDATING");
        static constexpr uint32_t BUILDING_HASH = ConstExprHashingUtils::HashString("BUILDING");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NOT_FOUND");


        FleetStatus GetFleetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == NOT_FOUND_HASH)
          {
            return FleetStatus::NOT_FOUND;
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
          case FleetStatus::NOT_SET:
            return {};
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
          case FleetStatus::NOT_FOUND:
            return "NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
