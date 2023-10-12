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

        static constexpr uint32_t AUTHOR_HASH = ConstExprHashingUtils::HashString("AUTHOR");
        static constexpr uint32_t CONTENT_STATUS_HASH = ConstExprHashingUtils::HashString("CONTENT_STATUS");
        static constexpr uint32_t CREATED_DATE_HASH = ConstExprHashingUtils::HashString("CREATED_DATE");
        static constexpr uint32_t DISPLAY_URL_HASH = ConstExprHashingUtils::HashString("DISPLAY_URL");
        static constexpr uint32_t ITEM_TYPE_HASH = ConstExprHashingUtils::HashString("ITEM_TYPE");
        static constexpr uint32_t LABELS_HASH = ConstExprHashingUtils::HashString("LABELS");
        static constexpr uint32_t MODIFIED_DATE_HASH = ConstExprHashingUtils::HashString("MODIFIED_DATE");
        static constexpr uint32_t PARENT_ID_HASH = ConstExprHashingUtils::HashString("PARENT_ID");
        static constexpr uint32_t SPACE_KEY_HASH = ConstExprHashingUtils::HashString("SPACE_KEY");
        static constexpr uint32_t SPACE_NAME_HASH = ConstExprHashingUtils::HashString("SPACE_NAME");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");
        static constexpr uint32_t VERSION_HASH = ConstExprHashingUtils::HashString("VERSION");


        ConfluencePageFieldName GetConfluencePageFieldNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConfluencePageFieldName::NOT_SET:
            return {};
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
