/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerFleetRemoveAttribute.h>
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
      namespace ContainerFleetRemoveAttributeMapper
      {

        static const int PER_INSTANCE_CONTAINER_GROUP_DEFINITION_HASH = HashingUtils::HashString("PER_INSTANCE_CONTAINER_GROUP_DEFINITION");


        ContainerFleetRemoveAttribute GetContainerFleetRemoveAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PER_INSTANCE_CONTAINER_GROUP_DEFINITION_HASH)
          {
            return ContainerFleetRemoveAttribute::PER_INSTANCE_CONTAINER_GROUP_DEFINITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerFleetRemoveAttribute>(hashCode);
          }

          return ContainerFleetRemoveAttribute::NOT_SET;
        }

        Aws::String GetNameForContainerFleetRemoveAttribute(ContainerFleetRemoveAttribute enumValue)
        {
          switch(enumValue)
          {
          case ContainerFleetRemoveAttribute::NOT_SET:
            return {};
          case ContainerFleetRemoveAttribute::PER_INSTANCE_CONTAINER_GROUP_DEFINITION:
            return "PER_INSTANCE_CONTAINER_GROUP_DEFINITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerFleetRemoveAttributeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
