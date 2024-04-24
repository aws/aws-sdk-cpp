/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerDependencyCondition.h>
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
      namespace ContainerDependencyConditionMapper
      {

        static const int START_HASH = HashingUtils::HashString("START");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");


        ContainerDependencyCondition GetContainerDependencyConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_HASH)
          {
            return ContainerDependencyCondition::START;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ContainerDependencyCondition::COMPLETE;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ContainerDependencyCondition::SUCCESS;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return ContainerDependencyCondition::HEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerDependencyCondition>(hashCode);
          }

          return ContainerDependencyCondition::NOT_SET;
        }

        Aws::String GetNameForContainerDependencyCondition(ContainerDependencyCondition enumValue)
        {
          switch(enumValue)
          {
          case ContainerDependencyCondition::NOT_SET:
            return {};
          case ContainerDependencyCondition::START:
            return "START";
          case ContainerDependencyCondition::COMPLETE:
            return "COMPLETE";
          case ContainerDependencyCondition::SUCCESS:
            return "SUCCESS";
          case ContainerDependencyCondition::HEALTHY:
            return "HEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerDependencyConditionMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
