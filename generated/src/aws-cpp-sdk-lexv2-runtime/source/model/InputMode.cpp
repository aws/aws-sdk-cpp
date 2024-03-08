/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/InputMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace InputModeMapper
      {

        static const int Text_HASH = HashingUtils::HashString("Text");
        static const int Speech_HASH = HashingUtils::HashString("Speech");
        static const int DTMF_HASH = HashingUtils::HashString("DTMF");


        InputMode GetInputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Text_HASH)
          {
            return InputMode::Text;
          }
          else if (hashCode == Speech_HASH)
          {
            return InputMode::Speech;
          }
          else if (hashCode == DTMF_HASH)
          {
            return InputMode::DTMF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputMode>(hashCode);
          }

          return InputMode::NOT_SET;
        }

        Aws::String GetNameForInputMode(InputMode enumValue)
        {
          switch(enumValue)
          {
          case InputMode::NOT_SET:
            return {};
          case InputMode::Text:
            return "Text";
          case InputMode::Speech:
            return "Speech";
          case InputMode::DTMF:
            return "DTMF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputModeMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
