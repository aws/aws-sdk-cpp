/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/ToFormat.h>
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
      namespace ToFormatMapper
      {

        static const int X12_HASH = HashingUtils::HashString("X12");


        ToFormat GetToFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X12_HASH)
          {
            return ToFormat::X12;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToFormat>(hashCode);
          }

          return ToFormat::NOT_SET;
        }

        Aws::String GetNameForToFormat(ToFormat enumValue)
        {
          switch(enumValue)
          {
          case ToFormat::NOT_SET:
            return {};
          case ToFormat::X12:
            return "X12";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToFormatMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
