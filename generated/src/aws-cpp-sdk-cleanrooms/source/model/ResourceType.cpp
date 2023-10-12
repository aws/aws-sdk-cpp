/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t CONFIGURED_TABLE_HASH = ConstExprHashingUtils::HashString("CONFIGURED_TABLE");
        static constexpr uint32_t COLLABORATION_HASH = ConstExprHashingUtils::HashString("COLLABORATION");
        static constexpr uint32_t MEMBERSHIP_HASH = ConstExprHashingUtils::HashString("MEMBERSHIP");
        static constexpr uint32_t CONFIGURED_TABLE_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("CONFIGURED_TABLE_ASSOCIATION");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURED_TABLE_HASH)
          {
            return ResourceType::CONFIGURED_TABLE;
          }
          else if (hashCode == COLLABORATION_HASH)
          {
            return ResourceType::COLLABORATION;
          }
          else if (hashCode == MEMBERSHIP_HASH)
          {
            return ResourceType::MEMBERSHIP;
          }
          else if (hashCode == CONFIGURED_TABLE_ASSOCIATION_HASH)
          {
            return ResourceType::CONFIGURED_TABLE_ASSOCIATION;
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
          case ResourceType::CONFIGURED_TABLE:
            return "CONFIGURED_TABLE";
          case ResourceType::COLLABORATION:
            return "COLLABORATION";
          case ResourceType::MEMBERSHIP:
            return "MEMBERSHIP";
          case ResourceType::CONFIGURED_TABLE_ASSOCIATION:
            return "CONFIGURED_TABLE_ASSOCIATION";
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
  } // namespace CleanRooms
} // namespace Aws
