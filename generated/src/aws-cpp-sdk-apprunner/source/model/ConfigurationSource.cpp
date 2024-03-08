/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ConfigurationSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace ConfigurationSourceMapper
      {

        static const int REPOSITORY_HASH = HashingUtils::HashString("REPOSITORY");
        static const int API_HASH = HashingUtils::HashString("API");


        ConfigurationSource GetConfigurationSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPOSITORY_HASH)
          {
            return ConfigurationSource::REPOSITORY;
          }
          else if (hashCode == API_HASH)
          {
            return ConfigurationSource::API;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationSource>(hashCode);
          }

          return ConfigurationSource::NOT_SET;
        }

        Aws::String GetNameForConfigurationSource(ConfigurationSource enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationSource::NOT_SET:
            return {};
          case ConfigurationSource::REPOSITORY:
            return "REPOSITORY";
          case ConfigurationSource::API:
            return "API";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationSourceMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
