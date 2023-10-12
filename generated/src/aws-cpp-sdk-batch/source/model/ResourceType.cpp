/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t GPU_HASH = ConstExprHashingUtils::HashString("GPU");
        static constexpr uint32_t VCPU_HASH = ConstExprHashingUtils::HashString("VCPU");
        static constexpr uint32_t MEMORY_HASH = ConstExprHashingUtils::HashString("MEMORY");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GPU_HASH)
          {
            return ResourceType::GPU;
          }
          else if (hashCode == VCPU_HASH)
          {
            return ResourceType::VCPU;
          }
          else if (hashCode == MEMORY_HASH)
          {
            return ResourceType::MEMORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::GPU:
            return "GPU";
          case ResourceType::VCPU:
            return "VCPU";
          case ResourceType::MEMORY:
            return "MEMORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
