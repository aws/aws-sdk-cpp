/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FleetAction.h>
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
      namespace FleetActionMapper
      {

        static const int AUTO_SCALING_HASH = HashingUtils::HashString("AUTO_SCALING");


        FleetAction GetFleetActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_SCALING_HASH)
          {
            return FleetAction::AUTO_SCALING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetAction>(hashCode);
          }

          return FleetAction::NOT_SET;
        }

        Aws::String GetNameForFleetAction(FleetAction enumValue)
        {
          switch(enumValue)
          {
          case FleetAction::AUTO_SCALING:
            return "AUTO_SCALING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetActionMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
