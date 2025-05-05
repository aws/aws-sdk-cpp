/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/TargetEntityType.h>
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
      namespace TargetEntityTypeMapper
      {

        static const int DOMAIN_UNIT_HASH = HashingUtils::HashString("DOMAIN_UNIT");
        static const int ENVIRONMENT_BLUEPRINT_CONFIGURATION_HASH = HashingUtils::HashString("ENVIRONMENT_BLUEPRINT_CONFIGURATION");
        static const int ENVIRONMENT_PROFILE_HASH = HashingUtils::HashString("ENVIRONMENT_PROFILE");
        static const int ASSET_TYPE_HASH = HashingUtils::HashString("ASSET_TYPE");


        TargetEntityType GetTargetEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN_UNIT_HASH)
          {
            return TargetEntityType::DOMAIN_UNIT;
          }
          else if (hashCode == ENVIRONMENT_BLUEPRINT_CONFIGURATION_HASH)
          {
            return TargetEntityType::ENVIRONMENT_BLUEPRINT_CONFIGURATION;
          }
          else if (hashCode == ENVIRONMENT_PROFILE_HASH)
          {
            return TargetEntityType::ENVIRONMENT_PROFILE;
          }
          else if (hashCode == ASSET_TYPE_HASH)
          {
            return TargetEntityType::ASSET_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetEntityType>(hashCode);
          }

          return TargetEntityType::NOT_SET;
        }

        Aws::String GetNameForTargetEntityType(TargetEntityType enumValue)
        {
          switch(enumValue)
          {
          case TargetEntityType::NOT_SET:
            return {};
          case TargetEntityType::DOMAIN_UNIT:
            return "DOMAIN_UNIT";
          case TargetEntityType::ENVIRONMENT_BLUEPRINT_CONFIGURATION:
            return "ENVIRONMENT_BLUEPRINT_CONFIGURATION";
          case TargetEntityType::ENVIRONMENT_PROFILE:
            return "ENVIRONMENT_PROFILE";
          case TargetEntityType::ASSET_TYPE:
            return "ASSET_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetEntityTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
