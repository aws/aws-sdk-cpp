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

        static constexpr uint32_t SERVER_HASH = ConstExprHashingUtils::HashString("SERVER");
        static constexpr uint32_t PROCESS_HASH = ConstExprHashingUtils::HashString("PROCESS");
        static constexpr uint32_t CONNECTION_HASH = ConstExprHashingUtils::HashString("CONNECTION");
        static constexpr uint32_t APPLICATION_HASH = ConstExprHashingUtils::HashString("APPLICATION");


        ConfigurationItemType GetConfigurationItemTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConfigurationItemType::NOT_SET:
            return {};
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
