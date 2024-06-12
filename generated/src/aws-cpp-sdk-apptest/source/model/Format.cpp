/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace FormatMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int VARIABLE_HASH = HashingUtils::HashString("VARIABLE");
        static const int LINE_SEQUENTIAL_HASH = HashingUtils::HashString("LINE_SEQUENTIAL");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return Format::FIXED;
          }
          else if (hashCode == VARIABLE_HASH)
          {
            return Format::VARIABLE;
          }
          else if (hashCode == LINE_SEQUENTIAL_HASH)
          {
            return Format::LINE_SEQUENTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::NOT_SET:
            return {};
          case Format::FIXED:
            return "FIXED";
          case Format::VARIABLE:
            return "VARIABLE";
          case Format::LINE_SEQUENTIAL:
            return "LINE_SEQUENTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
