/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/MessageFormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeService
  {
    namespace Model
    {
      namespace MessageFormatTypeMapper
      {

        static constexpr uint32_t PlainText_HASH = ConstExprHashingUtils::HashString("PlainText");
        static constexpr uint32_t CustomPayload_HASH = ConstExprHashingUtils::HashString("CustomPayload");
        static constexpr uint32_t SSML_HASH = ConstExprHashingUtils::HashString("SSML");
        static constexpr uint32_t Composite_HASH = ConstExprHashingUtils::HashString("Composite");


        MessageFormatType GetMessageFormatTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PlainText_HASH)
          {
            return MessageFormatType::PlainText;
          }
          else if (hashCode == CustomPayload_HASH)
          {
            return MessageFormatType::CustomPayload;
          }
          else if (hashCode == SSML_HASH)
          {
            return MessageFormatType::SSML;
          }
          else if (hashCode == Composite_HASH)
          {
            return MessageFormatType::Composite;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageFormatType>(hashCode);
          }

          return MessageFormatType::NOT_SET;
        }

        Aws::String GetNameForMessageFormatType(MessageFormatType enumValue)
        {
          switch(enumValue)
          {
          case MessageFormatType::NOT_SET:
            return {};
          case MessageFormatType::PlainText:
            return "PlainText";
          case MessageFormatType::CustomPayload:
            return "CustomPayload";
          case MessageFormatType::SSML:
            return "SSML";
          case MessageFormatType::Composite:
            return "Composite";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageFormatTypeMapper
    } // namespace Model
  } // namespace LexRuntimeService
} // namespace Aws
