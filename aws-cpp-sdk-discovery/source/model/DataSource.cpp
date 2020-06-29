/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DataSource.h>
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
      namespace DataSourceMapper
      {

        static const int AGENT_HASH = HashingUtils::HashString("AGENT");


        DataSource GetDataSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENT_HASH)
          {
            return DataSource::AGENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSource>(hashCode);
          }

          return DataSource::NOT_SET;
        }

        Aws::String GetNameForDataSource(DataSource enumValue)
        {
          switch(enumValue)
          {
          case DataSource::AGENT:
            return "AGENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
