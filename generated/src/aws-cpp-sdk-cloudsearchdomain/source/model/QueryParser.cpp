/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/QueryParser.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearchDomain
  {
    namespace Model
    {
      namespace QueryParserMapper
      {

        static constexpr uint32_t simple_HASH = ConstExprHashingUtils::HashString("simple");
        static constexpr uint32_t structured_HASH = ConstExprHashingUtils::HashString("structured");
        static constexpr uint32_t lucene_HASH = ConstExprHashingUtils::HashString("lucene");
        static constexpr uint32_t dismax_HASH = ConstExprHashingUtils::HashString("dismax");


        QueryParser GetQueryParserForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == simple_HASH)
          {
            return QueryParser::simple;
          }
          else if (hashCode == structured_HASH)
          {
            return QueryParser::structured;
          }
          else if (hashCode == lucene_HASH)
          {
            return QueryParser::lucene;
          }
          else if (hashCode == dismax_HASH)
          {
            return QueryParser::dismax;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryParser>(hashCode);
          }

          return QueryParser::NOT_SET;
        }

        Aws::String GetNameForQueryParser(QueryParser enumValue)
        {
          switch(enumValue)
          {
          case QueryParser::NOT_SET:
            return {};
          case QueryParser::simple:
            return "simple";
          case QueryParser::structured:
            return "structured";
          case QueryParser::lucene:
            return "lucene";
          case QueryParser::dismax:
            return "dismax";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryParserMapper
    } // namespace Model
  } // namespace CloudSearchDomain
} // namespace Aws
