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

        static const int DISPLAY_URL_HASH = HashingUtils::HashString("DISPLAY_URL");
        static const int ITEM_TYPE_HASH = HashingUtils::HashString("ITEM_TYPE");
        static const int SPACE_KEY_HASH = HashingUtils::HashString("SPACE_KEY");
        static const int URL_HASH = HashingUtils::HashString("URL");


        ConfluenceSpaceFieldName GetConfluenceSpaceFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
