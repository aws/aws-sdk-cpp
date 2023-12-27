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

        static const int TAGS_HASH = HashingUtils::HashString("TAGS");
        static const int CONTAINER_INSTANCE_HEALTH_HASH = HashingUtils::HashString("CONTAINER_INSTANCE_HEALTH");


        ContainerInstanceField GetContainerInstanceFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
