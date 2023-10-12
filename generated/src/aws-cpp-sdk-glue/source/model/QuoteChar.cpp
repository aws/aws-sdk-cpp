/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/QuoteChar.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace QuoteCharMapper
      {

        static constexpr uint32_t quote_HASH = ConstExprHashingUtils::HashString("quote");
        static constexpr uint32_t quillemet_HASH = ConstExprHashingUtils::HashString("quillemet");
        static constexpr uint32_t single_quote_HASH = ConstExprHashingUtils::HashString("single_quote");
        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");


        QuoteChar GetQuoteCharForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == quote_HASH)
          {
            return QuoteChar::quote;
          }
          else if (hashCode == quillemet_HASH)
          {
            return QuoteChar::quillemet;
          }
          else if (hashCode == single_quote_HASH)
          {
            return QuoteChar::single_quote;
          }
          else if (hashCode == disabled_HASH)
          {
            return QuoteChar::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuoteChar>(hashCode);
          }

          return QuoteChar::NOT_SET;
        }

        Aws::String GetNameForQuoteChar(QuoteChar enumValue)
        {
          switch(enumValue)
          {
          case QuoteChar::NOT_SET:
            return {};
          case QuoteChar::quote:
            return "quote";
          case QuoteChar::quillemet:
            return "quillemet";
          case QuoteChar::single_quote:
            return "single_quote";
          case QuoteChar::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuoteCharMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
