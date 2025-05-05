/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ManagedPolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ManagedPolicyTypeMapper
      {

        static const int CREATE_DOMAIN_UNIT_HASH = HashingUtils::HashString("CREATE_DOMAIN_UNIT");
        static const int OVERRIDE_DOMAIN_UNIT_OWNERS_HASH = HashingUtils::HashString("OVERRIDE_DOMAIN_UNIT_OWNERS");
        static const int ADD_TO_PROJECT_MEMBER_POOL_HASH = HashingUtils::HashString("ADD_TO_PROJECT_MEMBER_POOL");
        static const int OVERRIDE_PROJECT_OWNERS_HASH = HashingUtils::HashString("OVERRIDE_PROJECT_OWNERS");
        static const int CREATE_GLOSSARY_HASH = HashingUtils::HashString("CREATE_GLOSSARY");
        static const int CREATE_FORM_TYPE_HASH = HashingUtils::HashString("CREATE_FORM_TYPE");
        static const int CREATE_ASSET_TYPE_HASH = HashingUtils::HashString("CREATE_ASSET_TYPE");
        static const int CREATE_PROJECT_HASH = HashingUtils::HashString("CREATE_PROJECT");
        static const int CREATE_ENVIRONMENT_PROFILE_HASH = HashingUtils::HashString("CREATE_ENVIRONMENT_PROFILE");
        static const int DELEGATE_CREATE_ENVIRONMENT_PROFILE_HASH = HashingUtils::HashString("DELEGATE_CREATE_ENVIRONMENT_PROFILE");
        static const int CREATE_ENVIRONMENT_HASH = HashingUtils::HashString("CREATE_ENVIRONMENT");
        static const int CREATE_ENVIRONMENT_FROM_BLUEPRINT_HASH = HashingUtils::HashString("CREATE_ENVIRONMENT_FROM_BLUEPRINT");
        static const int CREATE_PROJECT_FROM_PROJECT_PROFILE_HASH = HashingUtils::HashString("CREATE_PROJECT_FROM_PROJECT_PROFILE");
        static const int USE_ASSET_TYPE_HASH = HashingUtils::HashString("USE_ASSET_TYPE");


        ManagedPolicyType GetManagedPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_DOMAIN_UNIT_HASH)
          {
            return ManagedPolicyType::CREATE_DOMAIN_UNIT;
          }
          else if (hashCode == OVERRIDE_DOMAIN_UNIT_OWNERS_HASH)
          {
            return ManagedPolicyType::OVERRIDE_DOMAIN_UNIT_OWNERS;
          }
          else if (hashCode == ADD_TO_PROJECT_MEMBER_POOL_HASH)
          {
            return ManagedPolicyType::ADD_TO_PROJECT_MEMBER_POOL;
          }
          else if (hashCode == OVERRIDE_PROJECT_OWNERS_HASH)
          {
            return ManagedPolicyType::OVERRIDE_PROJECT_OWNERS;
          }
          else if (hashCode == CREATE_GLOSSARY_HASH)
          {
            return ManagedPolicyType::CREATE_GLOSSARY;
          }
          else if (hashCode == CREATE_FORM_TYPE_HASH)
          {
            return ManagedPolicyType::CREATE_FORM_TYPE;
          }
          else if (hashCode == CREATE_ASSET_TYPE_HASH)
          {
            return ManagedPolicyType::CREATE_ASSET_TYPE;
          }
          else if (hashCode == CREATE_PROJECT_HASH)
          {
            return ManagedPolicyType::CREATE_PROJECT;
          }
          else if (hashCode == CREATE_ENVIRONMENT_PROFILE_HASH)
          {
            return ManagedPolicyType::CREATE_ENVIRONMENT_PROFILE;
          }
          else if (hashCode == DELEGATE_CREATE_ENVIRONMENT_PROFILE_HASH)
          {
            return ManagedPolicyType::DELEGATE_CREATE_ENVIRONMENT_PROFILE;
          }
          else if (hashCode == CREATE_ENVIRONMENT_HASH)
          {
            return ManagedPolicyType::CREATE_ENVIRONMENT;
          }
          else if (hashCode == CREATE_ENVIRONMENT_FROM_BLUEPRINT_HASH)
          {
            return ManagedPolicyType::CREATE_ENVIRONMENT_FROM_BLUEPRINT;
          }
          else if (hashCode == CREATE_PROJECT_FROM_PROJECT_PROFILE_HASH)
          {
            return ManagedPolicyType::CREATE_PROJECT_FROM_PROJECT_PROFILE;
          }
          else if (hashCode == USE_ASSET_TYPE_HASH)
          {
            return ManagedPolicyType::USE_ASSET_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedPolicyType>(hashCode);
          }

          return ManagedPolicyType::NOT_SET;
        }

        Aws::String GetNameForManagedPolicyType(ManagedPolicyType enumValue)
        {
          switch(enumValue)
          {
          case ManagedPolicyType::NOT_SET:
            return {};
          case ManagedPolicyType::CREATE_DOMAIN_UNIT:
            return "CREATE_DOMAIN_UNIT";
          case ManagedPolicyType::OVERRIDE_DOMAIN_UNIT_OWNERS:
            return "OVERRIDE_DOMAIN_UNIT_OWNERS";
          case ManagedPolicyType::ADD_TO_PROJECT_MEMBER_POOL:
            return "ADD_TO_PROJECT_MEMBER_POOL";
          case ManagedPolicyType::OVERRIDE_PROJECT_OWNERS:
            return "OVERRIDE_PROJECT_OWNERS";
          case ManagedPolicyType::CREATE_GLOSSARY:
            return "CREATE_GLOSSARY";
          case ManagedPolicyType::CREATE_FORM_TYPE:
            return "CREATE_FORM_TYPE";
          case ManagedPolicyType::CREATE_ASSET_TYPE:
            return "CREATE_ASSET_TYPE";
          case ManagedPolicyType::CREATE_PROJECT:
            return "CREATE_PROJECT";
          case ManagedPolicyType::CREATE_ENVIRONMENT_PROFILE:
            return "CREATE_ENVIRONMENT_PROFILE";
          case ManagedPolicyType::DELEGATE_CREATE_ENVIRONMENT_PROFILE:
            return "DELEGATE_CREATE_ENVIRONMENT_PROFILE";
          case ManagedPolicyType::CREATE_ENVIRONMENT:
            return "CREATE_ENVIRONMENT";
          case ManagedPolicyType::CREATE_ENVIRONMENT_FROM_BLUEPRINT:
            return "CREATE_ENVIRONMENT_FROM_BLUEPRINT";
          case ManagedPolicyType::CREATE_PROJECT_FROM_PROJECT_PROFILE:
            return "CREATE_PROJECT_FROM_PROJECT_PROFILE";
          case ManagedPolicyType::USE_ASSET_TYPE:
            return "USE_ASSET_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedPolicyTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
