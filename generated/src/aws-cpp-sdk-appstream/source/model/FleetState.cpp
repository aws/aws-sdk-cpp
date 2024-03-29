﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/FleetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace FleetStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        FleetState GetFleetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return FleetState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return FleetState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return FleetState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return FleetState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetState>(hashCode);
          }

          return FleetState::NOT_SET;
        }

        Aws::String GetNameForFleetState(FleetState enumValue)
        {
          switch(enumValue)
          {
          case FleetState::NOT_SET:
            return {};
          case FleetState::STARTING:
            return "STARTING";
          case FleetState::RUNNING:
            return "RUNNING";
          case FleetState::STOPPING:
            return "STOPPING";
          case FleetState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
