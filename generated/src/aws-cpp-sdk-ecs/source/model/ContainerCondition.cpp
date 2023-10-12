/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerCondition.h>
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
      namespace ContainerConditionMapper
      {

        static constexpr uint32_t START_HASH = ConstExprHashingUtils::HashString("START");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");


        ContainerCondition GetContainerConditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_HASH)
          {
            return ContainerCondition::START;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ContainerCondition::COMPLETE;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ContainerCondition::SUCCESS;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return ContainerCondition::HEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerCondition>(hashCode);
          }

          return ContainerCondition::NOT_SET;
        }

        Aws::String GetNameForContainerCondition(ContainerCondition enumValue)
        {
          switch(enumValue)
          {
          case ContainerCondition::NOT_SET:
            return {};
          case ContainerCondition::START:
            return "START";
          case ContainerCondition::COMPLETE:
            return "COMPLETE";
          case ContainerCondition::SUCCESS:
            return "SUCCESS";
          case ContainerCondition::HEALTHY:
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

      } // namespace ContainerConditionMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
