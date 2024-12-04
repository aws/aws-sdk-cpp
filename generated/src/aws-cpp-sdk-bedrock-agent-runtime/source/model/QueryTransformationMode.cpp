/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/QueryTransformationMode.h>
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
      namespace QueryTransformationModeMapper
      {

        static const int TEXT_TO_SQL_HASH = HashingUtils::HashString("TEXT_TO_SQL");


        QueryTransformationMode GetQueryTransformationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_TO_SQL_HASH)
          {
            return QueryTransformationMode::TEXT_TO_SQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryTransformationMode>(hashCode);
          }

          return QueryTransformationMode::NOT_SET;
        }

        Aws::String GetNameForQueryTransformationMode(QueryTransformationMode enumValue)
        {
          switch(enumValue)
          {
          case QueryTransformationMode::NOT_SET:
            return {};
          case QueryTransformationMode::TEXT_TO_SQL:
            return "TEXT_TO_SQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTransformationModeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
