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

        static const int Application_HASH = HashingUtils::HashString("Application");
        static const int ConfigurationProfile_HASH = HashingUtils::HashString("ConfigurationProfile");
        static const int Deployment_HASH = HashingUtils::HashString("Deployment");
        static const int Environment_HASH = HashingUtils::HashString("Environment");
        static const int Configuration_HASH = HashingUtils::HashString("Configuration");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
