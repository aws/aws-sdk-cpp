/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/WarningCode.h>
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
      namespace WarningCodeMapper
      {

        static const int QUERY_LANGUAGE_INVALID_SYNTAX_HASH = HashingUtils::HashString("QUERY_LANGUAGE_INVALID_SYNTAX");


        WarningCode GetWarningCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_LANGUAGE_INVALID_SYNTAX_HASH)
          {
            return WarningCode::QUERY_LANGUAGE_INVALID_SYNTAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WarningCode>(hashCode);
          }

          return WarningCode::NOT_SET;
        }

        Aws::String GetNameForWarningCode(WarningCode enumValue)
        {
          switch(enumValue)
          {
          case WarningCode::NOT_SET:
            return {};
          case WarningCode::QUERY_LANGUAGE_INVALID_SYNTAX:
            return "QUERY_LANGUAGE_INVALID_SYNTAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WarningCodeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
