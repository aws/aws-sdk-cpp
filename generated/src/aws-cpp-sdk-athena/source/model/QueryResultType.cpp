/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryResultType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace QueryResultTypeMapper
      {

        static const int DATA_MANIFEST_HASH = HashingUtils::HashString("DATA_MANIFEST");
        static const int DATA_ROWS_HASH = HashingUtils::HashString("DATA_ROWS");


        QueryResultType GetQueryResultTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_MANIFEST_HASH)
          {
            return QueryResultType::DATA_MANIFEST;
          }
          else if (hashCode == DATA_ROWS_HASH)
          {
            return QueryResultType::DATA_ROWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryResultType>(hashCode);
          }

          return QueryResultType::NOT_SET;
        }

        Aws::String GetNameForQueryResultType(QueryResultType enumValue)
        {
          switch(enumValue)
          {
          case QueryResultType::NOT_SET:
            return {};
          case QueryResultType::DATA_MANIFEST:
            return "DATA_MANIFEST";
          case QueryResultType::DATA_ROWS:
            return "DATA_ROWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryResultTypeMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
