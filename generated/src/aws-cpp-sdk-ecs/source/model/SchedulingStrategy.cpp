/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/SchedulingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace SchedulingStrategyMapper
      {

        static const int REPLICA_HASH = HashingUtils::HashString("REPLICA");
        static const int DAEMON_HASH = HashingUtils::HashString("DAEMON");


        SchedulingStrategy GetSchedulingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLICA_HASH)
          {
            return SchedulingStrategy::REPLICA;
          }
          else if (hashCode == DAEMON_HASH)
          {
            return SchedulingStrategy::DAEMON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchedulingStrategy>(hashCode);
          }

          return SchedulingStrategy::NOT_SET;
        }

        Aws::String GetNameForSchedulingStrategy(SchedulingStrategy enumValue)
        {
          switch(enumValue)
          {
          case SchedulingStrategy::REPLICA:
            return "REPLICA";
          case SchedulingStrategy::DAEMON:
            return "DAEMON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchedulingStrategyMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
