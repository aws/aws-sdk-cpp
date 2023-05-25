/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QueryResultType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace QueryResultTypeMapper
      {

        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int QUESTION_ANSWER_HASH = HashingUtils::HashString("QUESTION_ANSWER");
        static const int ANSWER_HASH = HashingUtils::HashString("ANSWER");


        QueryResultType GetQueryResultTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_HASH)
          {
            return QueryResultType::DOCUMENT;
          }
          else if (hashCode == QUESTION_ANSWER_HASH)
          {
            return QueryResultType::QUESTION_ANSWER;
          }
          else if (hashCode == ANSWER_HASH)
          {
            return QueryResultType::ANSWER;
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
          case QueryResultType::DOCUMENT:
            return "DOCUMENT";
          case QueryResultType::QUESTION_ANSWER:
            return "QUESTION_ANSWER";
          case QueryResultType::ANSWER:
            return "ANSWER";
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
  } // namespace kendra
} // namespace Aws
