/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/ContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace ContentTypeMapper
      {

        static const int PlainText_HASH = HashingUtils::HashString("PlainText");
        static const int SSML_HASH = HashingUtils::HashString("SSML");
        static const int CustomPayload_HASH = HashingUtils::HashString("CustomPayload");


        ContentType GetContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PlainText_HASH)
          {
            return ContentType::PlainText;
          }
          else if (hashCode == SSML_HASH)
          {
            return ContentType::SSML;
          }
          else if (hashCode == CustomPayload_HASH)
          {
            return ContentType::CustomPayload;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentType>(hashCode);
          }

          return ContentType::NOT_SET;
        }

        Aws::String GetNameForContentType(ContentType enumValue)
        {
          switch(enumValue)
          {
          case ContentType::PlainText:
            return "PlainText";
          case ContentType::SSML:
            return "SSML";
          case ContentType::CustomPayload:
            return "CustomPayload";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
