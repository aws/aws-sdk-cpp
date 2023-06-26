/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceBlogFieldName.h>
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
      namespace ConfluenceBlogFieldNameMapper
      {

        static const int AUTHOR_HASH = HashingUtils::HashString("AUTHOR");
        static const int DISPLAY_URL_HASH = HashingUtils::HashString("DISPLAY_URL");
        static const int ITEM_TYPE_HASH = HashingUtils::HashString("ITEM_TYPE");
        static const int LABELS_HASH = HashingUtils::HashString("LABELS");
        static const int PUBLISH_DATE_HASH = HashingUtils::HashString("PUBLISH_DATE");
        static const int SPACE_KEY_HASH = HashingUtils::HashString("SPACE_KEY");
        static const int SPACE_NAME_HASH = HashingUtils::HashString("SPACE_NAME");
        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int VERSION_HASH = HashingUtils::HashString("VERSION");


        ConfluenceBlogFieldName GetConfluenceBlogFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTHOR_HASH)
          {
            return ConfluenceBlogFieldName::AUTHOR;
          }
          else if (hashCode == DISPLAY_URL_HASH)
          {
            return ConfluenceBlogFieldName::DISPLAY_URL;
          }
          else if (hashCode == ITEM_TYPE_HASH)
          {
            return ConfluenceBlogFieldName::ITEM_TYPE;
          }
          else if (hashCode == LABELS_HASH)
          {
            return ConfluenceBlogFieldName::LABELS;
          }
          else if (hashCode == PUBLISH_DATE_HASH)
          {
            return ConfluenceBlogFieldName::PUBLISH_DATE;
          }
          else if (hashCode == SPACE_KEY_HASH)
          {
            return ConfluenceBlogFieldName::SPACE_KEY;
          }
          else if (hashCode == SPACE_NAME_HASH)
          {
            return ConfluenceBlogFieldName::SPACE_NAME;
          }
          else if (hashCode == URL_HASH)
          {
            return ConfluenceBlogFieldName::URL;
          }
          else if (hashCode == VERSION_HASH)
          {
            return ConfluenceBlogFieldName::VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceBlogFieldName>(hashCode);
          }

          return ConfluenceBlogFieldName::NOT_SET;
        }

        Aws::String GetNameForConfluenceBlogFieldName(ConfluenceBlogFieldName enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceBlogFieldName::AUTHOR:
            return "AUTHOR";
          case ConfluenceBlogFieldName::DISPLAY_URL:
            return "DISPLAY_URL";
          case ConfluenceBlogFieldName::ITEM_TYPE:
            return "ITEM_TYPE";
          case ConfluenceBlogFieldName::LABELS:
            return "LABELS";
          case ConfluenceBlogFieldName::PUBLISH_DATE:
            return "PUBLISH_DATE";
          case ConfluenceBlogFieldName::SPACE_KEY:
            return "SPACE_KEY";
          case ConfluenceBlogFieldName::SPACE_NAME:
            return "SPACE_NAME";
          case ConfluenceBlogFieldName::URL:
            return "URL";
          case ConfluenceBlogFieldName::VERSION:
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

      } // namespace ConfluenceBlogFieldNameMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
