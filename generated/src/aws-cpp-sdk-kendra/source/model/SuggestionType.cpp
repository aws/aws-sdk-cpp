/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SuggestionType.h>
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
      namespace SuggestionTypeMapper
      {

        static const int QUERY_HASH = HashingUtils::HashString("QUERY");
        static const int DOCUMENT_ATTRIBUTES_HASH = HashingUtils::HashString("DOCUMENT_ATTRIBUTES");


        SuggestionType GetSuggestionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_HASH)
          {
            return SuggestionType::QUERY;
          }
          else if (hashCode == DOCUMENT_ATTRIBUTES_HASH)
          {
            return SuggestionType::DOCUMENT_ATTRIBUTES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuggestionType>(hashCode);
          }

          return SuggestionType::NOT_SET;
        }

        Aws::String GetNameForSuggestionType(SuggestionType enumValue)
        {
          switch(enumValue)
          {
          case SuggestionType::NOT_SET:
            return {};
          case SuggestionType::QUERY:
            return "QUERY";
          case SuggestionType::DOCUMENT_ATTRIBUTES:
            return "DOCUMENT_ATTRIBUTES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuggestionTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
