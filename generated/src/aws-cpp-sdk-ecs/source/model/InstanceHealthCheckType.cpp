/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/InstanceHealthCheckType.h>
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
      namespace InstanceHealthCheckTypeMapper
      {

        static const int CONTAINER_RUNTIME_HASH = HashingUtils::HashString("CONTAINER_RUNTIME");


        InstanceHealthCheckType GetInstanceHealthCheckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTAINER_RUNTIME_HASH)
          {
            return InstanceHealthCheckType::CONTAINER_RUNTIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceHealthCheckType>(hashCode);
          }

          return InstanceHealthCheckType::NOT_SET;
        }

        Aws::String GetNameForInstanceHealthCheckType(InstanceHealthCheckType enumValue)
        {
          switch(enumValue)
          {
          case InstanceHealthCheckType::NOT_SET:
            return {};
          case InstanceHealthCheckType::CONTAINER_RUNTIME:
            return "CONTAINER_RUNTIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceHealthCheckTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
