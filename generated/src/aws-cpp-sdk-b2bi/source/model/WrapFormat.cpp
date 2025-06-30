/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/WrapFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace WrapFormatMapper
      {

        static const int SEGMENT_HASH = HashingUtils::HashString("SEGMENT");
        static const int ONE_LINE_HASH = HashingUtils::HashString("ONE_LINE");
        static const int LINE_LENGTH_HASH = HashingUtils::HashString("LINE_LENGTH");


        WrapFormat GetWrapFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEGMENT_HASH)
          {
            return WrapFormat::SEGMENT;
          }
          else if (hashCode == ONE_LINE_HASH)
          {
            return WrapFormat::ONE_LINE;
          }
          else if (hashCode == LINE_LENGTH_HASH)
          {
            return WrapFormat::LINE_LENGTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WrapFormat>(hashCode);
          }

          return WrapFormat::NOT_SET;
        }

        Aws::String GetNameForWrapFormat(WrapFormat enumValue)
        {
          switch(enumValue)
          {
          case WrapFormat::NOT_SET:
            return {};
          case WrapFormat::SEGMENT:
            return "SEGMENT";
          case WrapFormat::ONE_LINE:
            return "ONE_LINE";
          case WrapFormat::LINE_LENGTH:
            return "LINE_LENGTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WrapFormatMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
