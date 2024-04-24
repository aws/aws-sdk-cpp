/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerSchedulingStrategy.h>
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
      namespace ContainerSchedulingStrategyMapper
      {

        static const int REPLICA_HASH = HashingUtils::HashString("REPLICA");
        static const int DAEMON_HASH = HashingUtils::HashString("DAEMON");


        ContainerSchedulingStrategy GetContainerSchedulingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLICA_HASH)
          {
            return ContainerSchedulingStrategy::REPLICA;
          }
          else if (hashCode == DAEMON_HASH)
          {
            return ContainerSchedulingStrategy::DAEMON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerSchedulingStrategy>(hashCode);
          }

          return ContainerSchedulingStrategy::NOT_SET;
        }

        Aws::String GetNameForContainerSchedulingStrategy(ContainerSchedulingStrategy enumValue)
        {
          switch(enumValue)
          {
          case ContainerSchedulingStrategy::NOT_SET:
            return {};
          case ContainerSchedulingStrategy::REPLICA:
            return "REPLICA";
          case ContainerSchedulingStrategy::DAEMON:
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

      } // namespace ContainerSchedulingStrategyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
