/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GraphQLApiType.h>
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
      namespace GraphQLApiTypeMapper
      {

        static const int GRAPHQL_HASH = HashingUtils::HashString("GRAPHQL");
        static const int MERGED_HASH = HashingUtils::HashString("MERGED");


        GraphQLApiType GetGraphQLApiTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRAPHQL_HASH)
          {
            return GraphQLApiType::GRAPHQL;
          }
          else if (hashCode == MERGED_HASH)
          {
            return GraphQLApiType::MERGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GraphQLApiType>(hashCode);
          }

          return GraphQLApiType::NOT_SET;
        }

        Aws::String GetNameForGraphQLApiType(GraphQLApiType enumValue)
        {
          switch(enumValue)
          {
          case GraphQLApiType::NOT_SET:
            return {};
          case GraphQLApiType::GRAPHQL:
            return "GRAPHQL";
          case GraphQLApiType::MERGED:
            return "MERGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GraphQLApiTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
