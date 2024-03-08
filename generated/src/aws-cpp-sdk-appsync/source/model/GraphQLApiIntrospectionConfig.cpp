/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GraphQLApiIntrospectionConfig.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace GraphQLApiIntrospectionConfigMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        GraphQLApiIntrospectionConfig GetGraphQLApiIntrospectionConfigForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return GraphQLApiIntrospectionConfig::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return GraphQLApiIntrospectionConfig::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GraphQLApiIntrospectionConfig>(hashCode);
          }

          return GraphQLApiIntrospectionConfig::NOT_SET;
        }

        Aws::String GetNameForGraphQLApiIntrospectionConfig(GraphQLApiIntrospectionConfig enumValue)
        {
          switch(enumValue)
          {
          case GraphQLApiIntrospectionConfig::NOT_SET:
            return {};
          case GraphQLApiIntrospectionConfig::ENABLED:
            return "ENABLED";
          case GraphQLApiIntrospectionConfig::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GraphQLApiIntrospectionConfigMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
