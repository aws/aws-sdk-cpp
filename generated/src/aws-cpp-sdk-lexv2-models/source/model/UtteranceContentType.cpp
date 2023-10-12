/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/UtteranceContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace UtteranceContentTypeMapper
      {

        static constexpr uint32_t PlainText_HASH = ConstExprHashingUtils::HashString("PlainText");
        static constexpr uint32_t CustomPayload_HASH = ConstExprHashingUtils::HashString("CustomPayload");
        static constexpr uint32_t SSML_HASH = ConstExprHashingUtils::HashString("SSML");
        static constexpr uint32_t ImageResponseCard_HASH = ConstExprHashingUtils::HashString("ImageResponseCard");


        UtteranceContentType GetUtteranceContentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PlainText_HASH)
          {
            return UtteranceContentType::PlainText;
          }
          else if (hashCode == CustomPayload_HASH)
          {
            return UtteranceContentType::CustomPayload;
          }
          else if (hashCode == SSML_HASH)
          {
            return UtteranceContentType::SSML;
          }
          else if (hashCode == ImageResponseCard_HASH)
          {
            return UtteranceContentType::ImageResponseCard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UtteranceContentType>(hashCode);
          }

          return UtteranceContentType::NOT_SET;
        }

        Aws::String GetNameForUtteranceContentType(UtteranceContentType enumValue)
        {
          switch(enumValue)
          {
          case UtteranceContentType::NOT_SET:
            return {};
          case UtteranceContentType::PlainText:
            return "PlainText";
          case UtteranceContentType::CustomPayload:
            return "CustomPayload";
          case UtteranceContentType::SSML:
            return "SSML";
          case UtteranceContentType::ImageResponseCard:
            return "ImageResponseCard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UtteranceContentTypeMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
