/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerInstanceField.h>
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
      namespace ContainerInstanceFieldMapper
      {

        static constexpr uint32_t TAGS_HASH = ConstExprHashingUtils::HashString("TAGS");
        static constexpr uint32_t CONTAINER_INSTANCE_HEALTH_HASH = ConstExprHashingUtils::HashString("CONTAINER_INSTANCE_HEALTH");


        ContainerInstanceField GetContainerInstanceFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAGS_HASH)
          {
            return ContainerInstanceField::TAGS;
          }
          else if (hashCode == CONTAINER_INSTANCE_HEALTH_HASH)
          {
            return ContainerInstanceField::CONTAINER_INSTANCE_HEALTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerInstanceField>(hashCode);
          }

          return ContainerInstanceField::NOT_SET;
        }

        Aws::String GetNameForContainerInstanceField(ContainerInstanceField enumValue)
        {
          switch(enumValue)
          {
          case ContainerInstanceField::NOT_SET:
            return {};
          case ContainerInstanceField::TAGS:
            return "TAGS";
          case ContainerInstanceField::CONTAINER_INSTANCE_HEALTH:
            return "CONTAINER_INSTANCE_HEALTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerInstanceFieldMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
