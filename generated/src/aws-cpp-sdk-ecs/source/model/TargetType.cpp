/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TargetType.h>
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
      namespace TargetTypeMapper
      {

        static const int container_instance_HASH = HashingUtils::HashString("container-instance");


        TargetType GetTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == container_instance_HASH)
          {
            return TargetType::container_instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetType>(hashCode);
          }

          return TargetType::NOT_SET;
        }

        Aws::String GetNameForTargetType(TargetType enumValue)
        {
          switch(enumValue)
          {
          case TargetType::container_instance:
            return "container-instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
