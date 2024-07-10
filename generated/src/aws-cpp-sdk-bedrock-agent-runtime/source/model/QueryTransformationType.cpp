/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/QueryTransformationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace QueryTransformationTypeMapper
      {

        static const int QUERY_DECOMPOSITION_HASH = HashingUtils::HashString("QUERY_DECOMPOSITION");


        QueryTransformationType GetQueryTransformationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_DECOMPOSITION_HASH)
          {
            return QueryTransformationType::QUERY_DECOMPOSITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryTransformationType>(hashCode);
          }

          return QueryTransformationType::NOT_SET;
        }

        Aws::String GetNameForQueryTransformationType(QueryTransformationType enumValue)
        {
          switch(enumValue)
          {
          case QueryTransformationType::NOT_SET:
            return {};
          case QueryTransformationType::QUERY_DECOMPOSITION:
            return "QUERY_DECOMPOSITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTransformationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
