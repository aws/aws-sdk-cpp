/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/LineTerminator.h>
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
      namespace LineTerminatorMapper
      {

        static const int CRLF_HASH = HashingUtils::HashString("CRLF");
        static const int LF_HASH = HashingUtils::HashString("LF");
        static const int CR_HASH = HashingUtils::HashString("CR");


        LineTerminator GetLineTerminatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRLF_HASH)
          {
            return LineTerminator::CRLF;
          }
          else if (hashCode == LF_HASH)
          {
            return LineTerminator::LF;
          }
          else if (hashCode == CR_HASH)
          {
            return LineTerminator::CR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineTerminator>(hashCode);
          }

          return LineTerminator::NOT_SET;
        }

        Aws::String GetNameForLineTerminator(LineTerminator enumValue)
        {
          switch(enumValue)
          {
          case LineTerminator::NOT_SET:
            return {};
          case LineTerminator::CRLF:
            return "CRLF";
          case LineTerminator::LF:
            return "LF";
          case LineTerminator::CR:
            return "CR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineTerminatorMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
