/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/DestinationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTRoboRunner
  {
    namespace Model
    {
      namespace DestinationStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DECOMMISSIONED_HASH = HashingUtils::HashString("DECOMMISSIONED");


        DestinationState GetDestinationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DestinationState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DestinationState::DISABLED;
          }
          else if (hashCode == DECOMMISSIONED_HASH)
          {
            return DestinationState::DECOMMISSIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationState>(hashCode);
          }

          return DestinationState::NOT_SET;
        }

        Aws::String GetNameForDestinationState(DestinationState enumValue)
        {
          switch(enumValue)
          {
          case DestinationState::ENABLED:
            return "ENABLED";
          case DestinationState::DISABLED:
            return "DISABLED";
          case DestinationState::DECOMMISSIONED:
            return "DECOMMISSIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationStateMapper
    } // namespace Model
  } // namespace IoTRoboRunner
} // namespace Aws
