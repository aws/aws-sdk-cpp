/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ConfigurationItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace ConfigurationItemTypeMapper
      {

        static const int SERVER_HASH = HashingUtils::HashString("SERVER");
        static const int PROCESS_HASH = HashingUtils::HashString("PROCESS");
        static const int CONNECTION_HASH = HashingUtils::HashString("CONNECTION");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        ConfigurationItemType GetConfigurationItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVER_HASH)
          {
            return ConfigurationItemType::SERVER;
          }
          else if (hashCode == PROCESS_HASH)
          {
            return ConfigurationItemType::PROCESS;
          }
          else if (hashCode == CONNECTION_HASH)
          {
            return ConfigurationItemType::CONNECTION;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return ConfigurationItemType::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationItemType>(hashCode);
          }

          return ConfigurationItemType::NOT_SET;
        }

        Aws::String GetNameForConfigurationItemType(ConfigurationItemType enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationItemType::SERVER:
            return "SERVER";
          case ConfigurationItemType::PROCESS:
            return "PROCESS";
          case ConfigurationItemType::CONNECTION:
            return "CONNECTION";
          case ConfigurationItemType::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationItemTypeMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
