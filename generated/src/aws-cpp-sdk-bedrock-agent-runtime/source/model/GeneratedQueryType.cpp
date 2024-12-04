/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GeneratedQueryType.h>
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
      namespace GeneratedQueryTypeMapper
      {

        static const int REDSHIFT_SQL_HASH = HashingUtils::HashString("REDSHIFT_SQL");


        GeneratedQueryType GetGeneratedQueryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDSHIFT_SQL_HASH)
          {
            return GeneratedQueryType::REDSHIFT_SQL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedQueryType>(hashCode);
          }

          return GeneratedQueryType::NOT_SET;
        }

        Aws::String GetNameForGeneratedQueryType(GeneratedQueryType enumValue)
        {
          switch(enumValue)
          {
          case GeneratedQueryType::NOT_SET:
            return {};
          case GeneratedQueryType::REDSHIFT_SQL:
            return "REDSHIFT_SQL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedQueryTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
