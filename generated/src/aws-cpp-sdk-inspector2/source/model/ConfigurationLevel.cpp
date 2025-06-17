/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ConfigurationLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ConfigurationLevelMapper
      {

        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");


        ConfigurationLevel GetConfigurationLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORGANIZATION_HASH)
          {
            return ConfigurationLevel::ORGANIZATION;
          }
          else if (hashCode == ACCOUNT_HASH)
          {
            return ConfigurationLevel::ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationLevel>(hashCode);
          }

          return ConfigurationLevel::NOT_SET;
        }

        Aws::String GetNameForConfigurationLevel(ConfigurationLevel enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationLevel::NOT_SET:
            return {};
          case ConfigurationLevel::ORGANIZATION:
            return "ORGANIZATION";
          case ConfigurationLevel::ACCOUNT:
            return "ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationLevelMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
