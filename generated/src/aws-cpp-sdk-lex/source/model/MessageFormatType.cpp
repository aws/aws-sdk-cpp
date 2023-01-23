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

        static const int PlainText_HASH = HashingUtils::HashString("PlainText");
        static const int CustomPayload_HASH = HashingUtils::HashString("CustomPayload");
        static const int SSML_HASH = HashingUtils::HashString("SSML");
        static const int Composite_HASH = HashingUtils::HashString("Composite");


        MessageFormatType GetMessageFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
