/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TextWrap.h>
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
      namespace TextWrapMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int WRAP_HASH = HashingUtils::HashString("WRAP");


        TextWrap GetTextWrapForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TextWrap::NONE;
          }
          else if (hashCode == WRAP_HASH)
          {
            return TextWrap::WRAP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextWrap>(hashCode);
          }

          return TextWrap::NOT_SET;
        }

        Aws::String GetNameForTextWrap(TextWrap enumValue)
        {
          switch(enumValue)
          {
          case TextWrap::NONE:
            return "NONE";
          case TextWrap::WRAP:
            return "WRAP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextWrapMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
