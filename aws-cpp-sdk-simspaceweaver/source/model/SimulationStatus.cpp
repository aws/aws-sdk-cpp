/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SimSpaceWeaver
  {
    namespace Model
    {
      namespace SimulationStatusMapper
      {

        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        SimulationStatus GetSimulationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_HASH)
          {
            return SimulationStatus::UNKNOWN;
          }
          else if (hashCode == STARTING_HASH)
          {
            return SimulationStatus::STARTING;
          }
          else if (hashCode == STARTED_HASH)
          {
            return SimulationStatus::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return SimulationStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SimulationStatus::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SimulationStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SimulationStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return SimulationStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimulationStatus>(hashCode);
          }

          return SimulationStatus::NOT_SET;
        }

        Aws::String GetNameForSimulationStatus(SimulationStatus enumValue)
        {
          switch(enumValue)
          {
          case SimulationStatus::UNKNOWN:
            return "UNKNOWN";
          case SimulationStatus::STARTING:
            return "STARTING";
          case SimulationStatus::STARTED:
            return "STARTED";
          case SimulationStatus::STOPPING:
            return "STOPPING";
          case SimulationStatus::STOPPED:
            return "STOPPED";
          case SimulationStatus::FAILED:
            return "FAILED";
          case SimulationStatus::DELETING:
            return "DELETING";
          case SimulationStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimulationStatusMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
