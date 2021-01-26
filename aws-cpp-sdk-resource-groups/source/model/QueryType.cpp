/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/QueryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroups
  {
    namespace Model
    {
      namespace QueryTypeMapper
      {

        static const int TAG_FILTERS_1_0_HASH = HashingUtils::HashString("TAG_FILTERS_1_0");
        static const int CLOUDFORMATION_STACK_1_0_HASH = HashingUtils::HashString("CLOUDFORMATION_STACK_1_0");


        QueryType GetQueryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAG_FILTERS_1_0_HASH)
          {
            return QueryType::TAG_FILTERS_1_0;
          }
          else if (hashCode == CLOUDFORMATION_STACK_1_0_HASH)
          {
            return QueryType::CLOUDFORMATION_STACK_1_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryType>(hashCode);
          }

          return QueryType::NOT_SET;
        }

        Aws::String GetNameForQueryType(QueryType enumValue)
        {
          switch(enumValue)
          {
          case QueryType::TAG_FILTERS_1_0:
            return "TAG_FILTERS_1_0";
          case QueryType::CLOUDFORMATION_STACK_1_0:
            return "CLOUDFORMATION_STACK_1_0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTypeMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
