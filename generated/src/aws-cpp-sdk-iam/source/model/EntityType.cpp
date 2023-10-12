/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/EntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace EntityTypeMapper
      {

        static constexpr uint32_t User_HASH = ConstExprHashingUtils::HashString("User");
        static constexpr uint32_t Role_HASH = ConstExprHashingUtils::HashString("Role");
        static constexpr uint32_t Group_HASH = ConstExprHashingUtils::HashString("Group");
        static constexpr uint32_t LocalManagedPolicy_HASH = ConstExprHashingUtils::HashString("LocalManagedPolicy");
        static constexpr uint32_t AWSManagedPolicy_HASH = ConstExprHashingUtils::HashString("AWSManagedPolicy");


        EntityType GetEntityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == User_HASH)
          {
            return EntityType::User;
          }
          else if (hashCode == Role_HASH)
          {
            return EntityType::Role;
          }
          else if (hashCode == Group_HASH)
          {
            return EntityType::Group;
          }
          else if (hashCode == LocalManagedPolicy_HASH)
          {
            return EntityType::LocalManagedPolicy;
          }
          else if (hashCode == AWSManagedPolicy_HASH)
          {
            return EntityType::AWSManagedPolicy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntityType>(hashCode);
          }

          return EntityType::NOT_SET;
        }

        Aws::String GetNameForEntityType(EntityType enumValue)
        {
          switch(enumValue)
          {
          case EntityType::NOT_SET:
            return {};
          case EntityType::User:
            return "User";
          case EntityType::Role:
            return "Role";
          case EntityType::Group:
            return "Group";
          case EntityType::LocalManagedPolicy:
            return "LocalManagedPolicy";
          case EntityType::AWSManagedPolicy:
            return "AWSManagedPolicy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntityTypeMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
