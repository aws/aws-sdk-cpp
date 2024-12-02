/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/QueryLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace QueryLanguageMapper
      {

        static const int CWLI_HASH = HashingUtils::HashString("CWLI");
        static const int SQL_HASH = HashingUtils::HashString("SQL");
        static const int PPL_HASH = HashingUtils::HashString("PPL");


        QueryLanguage GetQueryLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CWLI_HASH)
          {
            return QueryLanguage::CWLI;
          }
          else if (hashCode == SQL_HASH)
          {
            return QueryLanguage::SQL;
          }
          else if (hashCode == PPL_HASH)
          {
            return QueryLanguage::PPL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryLanguage>(hashCode);
          }

          return QueryLanguage::NOT_SET;
        }

        Aws::String GetNameForQueryLanguage(QueryLanguage enumValue)
        {
          switch(enumValue)
          {
          case QueryLanguage::NOT_SET:
            return {};
          case QueryLanguage::CWLI:
            return "CWLI";
          case QueryLanguage::SQL:
            return "SQL";
          case QueryLanguage::PPL:
            return "PPL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryLanguageMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
