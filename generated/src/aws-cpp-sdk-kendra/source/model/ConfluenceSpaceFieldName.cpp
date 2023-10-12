/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceSpaceFieldName.h>
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
      namespace ConfluenceSpaceFieldNameMapper
      {

        static constexpr uint32_t DISPLAY_URL_HASH = ConstExprHashingUtils::HashString("DISPLAY_URL");
        static constexpr uint32_t ITEM_TYPE_HASH = ConstExprHashingUtils::HashString("ITEM_TYPE");
        static constexpr uint32_t SPACE_KEY_HASH = ConstExprHashingUtils::HashString("SPACE_KEY");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");


        ConfluenceSpaceFieldName GetConfluenceSpaceFieldNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISPLAY_URL_HASH)
          {
            return ConfluenceSpaceFieldName::DISPLAY_URL;
          }
          else if (hashCode == ITEM_TYPE_HASH)
          {
            return ConfluenceSpaceFieldName::ITEM_TYPE;
          }
          else if (hashCode == SPACE_KEY_HASH)
          {
            return ConfluenceSpaceFieldName::SPACE_KEY;
          }
          else if (hashCode == URL_HASH)
          {
            return ConfluenceSpaceFieldName::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceSpaceFieldName>(hashCode);
          }

          return ConfluenceSpaceFieldName::NOT_SET;
        }

        Aws::String GetNameForConfluenceSpaceFieldName(ConfluenceSpaceFieldName enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceSpaceFieldName::NOT_SET:
            return {};
          case ConfluenceSpaceFieldName::DISPLAY_URL:
            return "DISPLAY_URL";
          case ConfluenceSpaceFieldName::ITEM_TYPE:
            return "ITEM_TYPE";
          case ConfluenceSpaceFieldName::SPACE_KEY:
            return "SPACE_KEY";
          case ConfluenceSpaceFieldName::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfluenceSpaceFieldNameMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
