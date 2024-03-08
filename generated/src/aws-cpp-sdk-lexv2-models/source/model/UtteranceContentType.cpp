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

        static const int PlainText_HASH = HashingUtils::HashString("PlainText");
        static const int CustomPayload_HASH = HashingUtils::HashString("CustomPayload");
        static const int SSML_HASH = HashingUtils::HashString("SSML");
        static const int ImageResponseCard_HASH = HashingUtils::HashString("ImageResponseCard");


        UtteranceContentType GetUtteranceContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
