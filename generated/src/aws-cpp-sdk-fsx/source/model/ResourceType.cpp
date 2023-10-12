/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t FILE_SYSTEM_HASH = ConstExprHashingUtils::HashString("FILE_SYSTEM");
        static constexpr uint32_t VOLUME_HASH = ConstExprHashingUtils::HashString("VOLUME");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILE_SYSTEM_HASH)
          {
            return ResourceType::FILE_SYSTEM;
          }
          else if (hashCode == VOLUME_HASH)
          {
            return ResourceType::VOLUME;
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
          case ResourceType::FILE_SYSTEM:
            return "FILE_SYSTEM";
          case ResourceType::VOLUME:
            return "VOLUME";
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
  } // namespace FSx
} // namespace Aws
