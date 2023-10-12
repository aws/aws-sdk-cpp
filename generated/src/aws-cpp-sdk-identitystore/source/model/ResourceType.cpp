/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IdentityStore
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t GROUP_HASH = ConstExprHashingUtils::HashString("GROUP");
        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t IDENTITY_STORE_HASH = ConstExprHashingUtils::HashString("IDENTITY_STORE");
        static constexpr uint32_t GROUP_MEMBERSHIP_HASH = ConstExprHashingUtils::HashString("GROUP_MEMBERSHIP");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_HASH)
          {
            return ResourceType::GROUP;
          }
          else if (hashCode == USER_HASH)
          {
            return ResourceType::USER;
          }
          else if (hashCode == IDENTITY_STORE_HASH)
          {
            return ResourceType::IDENTITY_STORE;
          }
          else if (hashCode == GROUP_MEMBERSHIP_HASH)
          {
            return ResourceType::GROUP_MEMBERSHIP;
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
          case ResourceType::GROUP:
            return "GROUP";
          case ResourceType::USER:
            return "USER";
          case ResourceType::IDENTITY_STORE:
            return "IDENTITY_STORE";
          case ResourceType::GROUP_MEMBERSHIP:
            return "GROUP_MEMBERSHIP";
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
  } // namespace IdentityStore
} // namespace Aws
