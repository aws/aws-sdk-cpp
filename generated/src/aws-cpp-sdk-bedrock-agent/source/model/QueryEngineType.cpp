/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/QueryEngineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace QueryEngineTypeMapper
      {

        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");


        QueryEngineType GetQueryEngineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REDSHIFT_HASH)
          {
            return QueryEngineType::REDSHIFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryEngineType>(hashCode);
          }

          return QueryEngineType::NOT_SET;
        }

        Aws::String GetNameForQueryEngineType(QueryEngineType enumValue)
        {
          switch(enumValue)
          {
          case QueryEngineType::NOT_SET:
            return {};
          case QueryEngineType::REDSHIFT:
            return "REDSHIFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryEngineTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
