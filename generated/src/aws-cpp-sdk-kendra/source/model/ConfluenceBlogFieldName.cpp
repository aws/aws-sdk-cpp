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

        static constexpr uint32_t AUTHOR_HASH = ConstExprHashingUtils::HashString("AUTHOR");
        static constexpr uint32_t DISPLAY_URL_HASH = ConstExprHashingUtils::HashString("DISPLAY_URL");
        static constexpr uint32_t ITEM_TYPE_HASH = ConstExprHashingUtils::HashString("ITEM_TYPE");
        static constexpr uint32_t LABELS_HASH = ConstExprHashingUtils::HashString("LABELS");
        static constexpr uint32_t PUBLISH_DATE_HASH = ConstExprHashingUtils::HashString("PUBLISH_DATE");
        static constexpr uint32_t SPACE_KEY_HASH = ConstExprHashingUtils::HashString("SPACE_KEY");
        static constexpr uint32_t SPACE_NAME_HASH = ConstExprHashingUtils::HashString("SPACE_NAME");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");
        static constexpr uint32_t VERSION_HASH = ConstExprHashingUtils::HashString("VERSION");


        ConfluenceBlogFieldName GetConfluenceBlogFieldNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConfluenceBlogFieldName::NOT_SET:
            return {};
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
