/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetOverflowBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace FleetOverflowBehaviorMapper
      {

        static const int QUEUE_HASH = HashingUtils::HashString("QUEUE");
        static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");


        FleetOverflowBehavior GetFleetOverflowBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUE_HASH)
          {
            return FleetOverflowBehavior::QUEUE;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return FleetOverflowBehavior::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetOverflowBehavior>(hashCode);
          }

          return FleetOverflowBehavior::NOT_SET;
        }

        Aws::String GetNameForFleetOverflowBehavior(FleetOverflowBehavior enumValue)
        {
          switch(enumValue)
          {
          case FleetOverflowBehavior::NOT_SET:
            return {};
          case FleetOverflowBehavior::QUEUE:
            return "QUEUE";
          case FleetOverflowBehavior::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetOverflowBehaviorMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
