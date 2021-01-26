/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/TextTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace TextTypesMapper
      {

        static const int LINE_HASH = HashingUtils::HashString("LINE");
        static const int WORD_HASH = HashingUtils::HashString("WORD");


        TextTypes GetTextTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_HASH)
          {
            return TextTypes::LINE;
          }
          else if (hashCode == WORD_HASH)
          {
            return TextTypes::WORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextTypes>(hashCode);
          }

          return TextTypes::NOT_SET;
        }

        Aws::String GetNameForTextTypes(TextTypes enumValue)
        {
          switch(enumValue)
          {
          case TextTypes::LINE:
            return "LINE";
          case TextTypes::WORD:
            return "WORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextTypesMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
