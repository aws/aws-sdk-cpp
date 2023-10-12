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

        static constexpr uint32_t Text_HASH = ConstExprHashingUtils::HashString("Text");
        static constexpr uint32_t Speech_HASH = ConstExprHashingUtils::HashString("Speech");
        static constexpr uint32_t DTMF_HASH = ConstExprHashingUtils::HashString("DTMF");


        InputMode GetInputModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
