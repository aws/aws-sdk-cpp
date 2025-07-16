/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SearchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace SearchTypeMapper
      {

        static const int SEMANTIC_HASH = HashingUtils::HashString("SEMANTIC");


        SearchType GetSearchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEMANTIC_HASH)
          {
            return SearchType::SEMANTIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchType>(hashCode);
          }

          return SearchType::NOT_SET;
        }

        Aws::String GetNameForSearchType(SearchType enumValue)
        {
          switch(enumValue)
          {
          case SearchType::NOT_SET:
            return {};
          case SearchType::SEMANTIC:
            return "SEMANTIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
