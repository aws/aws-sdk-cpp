﻿/**
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

        static const int simple_HASH = HashingUtils::HashString("simple");
        static const int structured_HASH = HashingUtils::HashString("structured");
        static const int lucene_HASH = HashingUtils::HashString("lucene");
        static const int dismax_HASH = HashingUtils::HashString("dismax");


        QueryParser GetQueryParserForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
