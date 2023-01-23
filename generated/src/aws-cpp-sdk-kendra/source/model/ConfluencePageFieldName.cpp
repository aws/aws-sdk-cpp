/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluencePageFieldName.h>
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
      namespace ConfluencePageFieldNameMapper
      {

        static const int AUTHOR_HASH = HashingUtils::HashString("AUTHOR");
        static const int CONTENT_STATUS_HASH = HashingUtils::HashString("CONTENT_STATUS");
        static const int CREATED_DATE_HASH = HashingUtils::HashString("CREATED_DATE");
        static const int DISPLAY_URL_HASH = HashingUtils::HashString("DISPLAY_URL");
        static const int ITEM_TYPE_HASH = HashingUtils::HashString("ITEM_TYPE");
        static const int LABELS_HASH = HashingUtils::HashString("LABELS");
        static const int MODIFIED_DATE_HASH = HashingUtils::HashString("MODIFIED_DATE");
        static const int PARENT_ID_HASH = HashingUtils::HashString("PARENT_ID");
        static const int SPACE_KEY_HASH = HashingUtils::HashString("SPACE_KEY");
        static const int SPACE_NAME_HASH = HashingUtils::HashString("SPACE_NAME");
        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int VERSION_HASH = HashingUtils::HashString("VERSION");


        ConfluencePageFieldName GetConfluencePageFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTHOR_HASH)
          {
            return ConfluencePageFieldName::AUTHOR;
          }
          else if (hashCode == CONTENT_STATUS_HASH)
          {
            return ConfluencePageFieldName::CONTENT_STATUS;
          }
          else if (hashCode == CREATED_DATE_HASH)
          {
            return ConfluencePageFieldName::CREATED_DATE;
          }
          else if (hashCode == DISPLAY_URL_HASH)
          {
            return ConfluencePageFieldName::DISPLAY_URL;
          }
          else if (hashCode == ITEM_TYPE_HASH)
          {
            return ConfluencePageFieldName::ITEM_TYPE;
          }
          else if (hashCode == LABELS_HASH)
          {
            return ConfluencePageFieldName::LABELS;
          }
          else if (hashCode == MODIFIED_DATE_HASH)
          {
            return ConfluencePageFieldName::MODIFIED_DATE;
          }
          else if (hashCode == PARENT_ID_HASH)
          {
            return ConfluencePageFieldName::PARENT_ID;
          }
          else if (hashCode == SPACE_KEY_HASH)
          {
            return ConfluencePageFieldName::SPACE_KEY;
          }
          else if (hashCode == SPACE_NAME_HASH)
          {
            return ConfluencePageFieldName::SPACE_NAME;
          }
          else if (hashCode == URL_HASH)
          {
            return ConfluencePageFieldName::URL;
          }
          else if (hashCode == VERSION_HASH)
          {
            return ConfluencePageFieldName::VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluencePageFieldName>(hashCode);
          }

          return ConfluencePageFieldName::NOT_SET;
        }

        Aws::String GetNameForConfluencePageFieldName(ConfluencePageFieldName enumValue)
        {
          switch(enumValue)
          {
          case ConfluencePageFieldName::AUTHOR:
            return "AUTHOR";
          case ConfluencePageFieldName::CONTENT_STATUS:
            return "CONTENT_STATUS";
          case ConfluencePageFieldName::CREATED_DATE:
            return "CREATED_DATE";
          case ConfluencePageFieldName::DISPLAY_URL:
            return "DISPLAY_URL";
          case ConfluencePageFieldName::ITEM_TYPE:
            return "ITEM_TYPE";
          case ConfluencePageFieldName::LABELS:
            return "LABELS";
          case ConfluencePageFieldName::MODIFIED_DATE:
            return "MODIFIED_DATE";
          case ConfluencePageFieldName::PARENT_ID:
            return "PARENT_ID";
          case ConfluencePageFieldName::SPACE_KEY:
            return "SPACE_KEY";
          case ConfluencePageFieldName::SPACE_NAME:
            return "SPACE_NAME";
          case ConfluencePageFieldName::URL:
            return "URL";
          case ConfluencePageFieldName::VERSION:
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

      } // namespace ConfluencePageFieldNameMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
