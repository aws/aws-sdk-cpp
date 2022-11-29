/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericSeparatorSymbol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace NumericSeparatorSymbolMapper
      {

        static const int COMMA_HASH = HashingUtils::HashString("COMMA");
        static const int DOT_HASH = HashingUtils::HashString("DOT");
        static const int SPACE_HASH = HashingUtils::HashString("SPACE");


        NumericSeparatorSymbol GetNumericSeparatorSymbolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMA_HASH)
          {
            return NumericSeparatorSymbol::COMMA;
          }
          else if (hashCode == DOT_HASH)
          {
            return NumericSeparatorSymbol::DOT;
          }
          else if (hashCode == SPACE_HASH)
          {
            return NumericSeparatorSymbol::SPACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumericSeparatorSymbol>(hashCode);
          }

          return NumericSeparatorSymbol::NOT_SET;
        }

        Aws::String GetNameForNumericSeparatorSymbol(NumericSeparatorSymbol enumValue)
        {
          switch(enumValue)
          {
          case NumericSeparatorSymbol::COMMA:
            return "COMMA";
          case NumericSeparatorSymbol::DOT:
            return "DOT";
          case NumericSeparatorSymbol::SPACE:
            return "SPACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NumericSeparatorSymbolMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
