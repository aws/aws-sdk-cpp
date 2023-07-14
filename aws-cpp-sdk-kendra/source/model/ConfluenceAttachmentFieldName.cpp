/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceAttachmentFieldName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ConfluenceAttachmentFieldNameMapper
      {

        static const int AUTHOR_HASH = HashingUtils::HashString("AUTHOR");
        static const int CONTENT_TYPE_HASH = HashingUtils::HashString("CONTENT_TYPE");
        static const int CREATED_DATE_HASH = HashingUtils::HashString("CREATED_DATE");
        static const int DISPLAY_URL_HASH = HashingUtils::HashString("DISPLAY_URL");
        static const int FILE_SIZE_HASH = HashingUtils::HashString("FILE_SIZE");
        static const int ITEM_TYPE_HASH = HashingUtils::HashString("ITEM_TYPE");
        static const int PARENT_ID_HASH = HashingUtils::HashString("PARENT_ID");
        static const int SPACE_KEY_HASH = HashingUtils::HashString("SPACE_KEY");
        static const int SPACE_NAME_HASH = HashingUtils::HashString("SPACE_NAME");
        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int VERSION_HASH = HashingUtils::HashString("VERSION");


        ConfluenceAttachmentFieldName GetConfluenceAttachmentFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTHOR_HASH)
          {
            return ConfluenceAttachmentFieldName::AUTHOR;
          }
          else if (hashCode == CONTENT_TYPE_HASH)
          {
            return ConfluenceAttachmentFieldName::CONTENT_TYPE;
          }
          else if (hashCode == CREATED_DATE_HASH)
          {
            return ConfluenceAttachmentFieldName::CREATED_DATE;
          }
          else if (hashCode == DISPLAY_URL_HASH)
          {
            return ConfluenceAttachmentFieldName::DISPLAY_URL;
          }
          else if (hashCode == FILE_SIZE_HASH)
          {
            return ConfluenceAttachmentFieldName::FILE_SIZE;
          }
          else if (hashCode == ITEM_TYPE_HASH)
          {
            return ConfluenceAttachmentFieldName::ITEM_TYPE;
          }
          else if (hashCode == PARENT_ID_HASH)
          {
            return ConfluenceAttachmentFieldName::PARENT_ID;
          }
          else if (hashCode == SPACE_KEY_HASH)
          {
            return ConfluenceAttachmentFieldName::SPACE_KEY;
          }
          else if (hashCode == SPACE_NAME_HASH)
          {
            return ConfluenceAttachmentFieldName::SPACE_NAME;
          }
          else if (hashCode == URL_HASH)
          {
            return ConfluenceAttachmentFieldName::URL;
          }
          else if (hashCode == VERSION_HASH)
          {
            return ConfluenceAttachmentFieldName::VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceAttachmentFieldName>(hashCode);
          }

          return ConfluenceAttachmentFieldName::NOT_SET;
        }

        Aws::String GetNameForConfluenceAttachmentFieldName(ConfluenceAttachmentFieldName enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceAttachmentFieldName::AUTHOR:
            return "AUTHOR";
          case ConfluenceAttachmentFieldName::CONTENT_TYPE:
            return "CONTENT_TYPE";
          case ConfluenceAttachmentFieldName::CREATED_DATE:
            return "CREATED_DATE";
          case ConfluenceAttachmentFieldName::DISPLAY_URL:
            return "DISPLAY_URL";
          case ConfluenceAttachmentFieldName::FILE_SIZE:
            return "FILE_SIZE";
          case ConfluenceAttachmentFieldName::ITEM_TYPE:
            return "ITEM_TYPE";
          case ConfluenceAttachmentFieldName::PARENT_ID:
            return "PARENT_ID";
          case ConfluenceAttachmentFieldName::SPACE_KEY:
            return "SPACE_KEY";
          case ConfluenceAttachmentFieldName::SPACE_NAME:
            return "SPACE_NAME";
          case ConfluenceAttachmentFieldName::URL:
            return "URL";
          case ConfluenceAttachmentFieldName::VERSION:
            return "VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfluenceAttachmentFieldNameMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
