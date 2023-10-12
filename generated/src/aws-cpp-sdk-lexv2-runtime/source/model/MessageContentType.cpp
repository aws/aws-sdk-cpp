/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/MessageContentType.h>
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
      namespace MessageContentTypeMapper
      {

        static constexpr uint32_t CustomPayload_HASH = ConstExprHashingUtils::HashString("CustomPayload");
        static constexpr uint32_t ImageResponseCard_HASH = ConstExprHashingUtils::HashString("ImageResponseCard");
        static constexpr uint32_t PlainText_HASH = ConstExprHashingUtils::HashString("PlainText");
        static constexpr uint32_t SSML_HASH = ConstExprHashingUtils::HashString("SSML");


        MessageContentType GetMessageContentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CustomPayload_HASH)
          {
            return MessageContentType::CustomPayload;
          }
          else if (hashCode == ImageResponseCard_HASH)
          {
            return MessageContentType::ImageResponseCard;
          }
          else if (hashCode == PlainText_HASH)
          {
            return MessageContentType::PlainText;
          }
          else if (hashCode == SSML_HASH)
          {
            return MessageContentType::SSML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageContentType>(hashCode);
          }

          return MessageContentType::NOT_SET;
        }

        Aws::String GetNameForMessageContentType(MessageContentType enumValue)
        {
          switch(enumValue)
          {
          case MessageContentType::NOT_SET:
            return {};
          case MessageContentType::CustomPayload:
            return "CustomPayload";
          case MessageContentType::ImageResponseCard:
            return "ImageResponseCard";
          case MessageContentType::PlainText:
            return "PlainText";
          case MessageContentType::SSML:
            return "SSML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageContentTypeMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
