/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConfigurationSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ConfigurationSourceMapper
      {

        static const int catalog_HASH = HashingUtils::HashString("catalog");
        static const int table_HASH = HashingUtils::HashString("table");


        ConfigurationSource GetConfigurationSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == catalog_HASH)
          {
            return ConfigurationSource::catalog;
          }
          else if (hashCode == table_HASH)
          {
            return ConfigurationSource::table;
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
          case ConfigurationSource::catalog:
            return "catalog";
          case ConfigurationSource::table:
            return "table";
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
  } // namespace Glue
} // namespace Aws
