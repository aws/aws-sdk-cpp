/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfigData
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t Application_HASH = ConstExprHashingUtils::HashString("Application");
        static constexpr uint32_t ConfigurationProfile_HASH = ConstExprHashingUtils::HashString("ConfigurationProfile");
        static constexpr uint32_t Deployment_HASH = ConstExprHashingUtils::HashString("Deployment");
        static constexpr uint32_t Environment_HASH = ConstExprHashingUtils::HashString("Environment");
        static constexpr uint32_t Configuration_HASH = ConstExprHashingUtils::HashString("Configuration");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Application_HASH)
          {
            return ResourceType::Application;
          }
          else if (hashCode == ConfigurationProfile_HASH)
          {
            return ResourceType::ConfigurationProfile;
          }
          else if (hashCode == Deployment_HASH)
          {
            return ResourceType::Deployment;
          }
          else if (hashCode == Environment_HASH)
          {
            return ResourceType::Environment;
          }
          else if (hashCode == Configuration_HASH)
          {
            return ResourceType::Configuration;
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
          case ResourceType::Application:
            return "Application";
          case ResourceType::ConfigurationProfile:
            return "ConfigurationProfile";
          case ResourceType::Deployment:
            return "Deployment";
          case ResourceType::Environment:
            return "Environment";
          case ResourceType::Configuration:
            return "Configuration";
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
  } // namespace AppConfigData
} // namespace Aws
