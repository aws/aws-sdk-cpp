/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GraphQLApiVisibility.h>
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
      namespace GraphQLApiVisibilityMapper
      {

        static constexpr uint32_t GLOBAL_HASH = ConstExprHashingUtils::HashString("GLOBAL");
        static constexpr uint32_t PRIVATE__HASH = ConstExprHashingUtils::HashString("PRIVATE");


        GraphQLApiVisibility GetGraphQLApiVisibilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GLOBAL_HASH)
          {
            return GraphQLApiVisibility::GLOBAL;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return GraphQLApiVisibility::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GraphQLApiVisibility>(hashCode);
          }

          return GraphQLApiVisibility::NOT_SET;
        }

        Aws::String GetNameForGraphQLApiVisibility(GraphQLApiVisibility enumValue)
        {
          switch(enumValue)
          {
          case GraphQLApiVisibility::NOT_SET:
            return {};
          case GraphQLApiVisibility::GLOBAL:
            return "GLOBAL";
          case GraphQLApiVisibility::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GraphQLApiVisibilityMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
