/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ViewType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace ViewTypeMapper
      {

        static const int NEW_IMAGE_HASH = HashingUtils::HashString("NEW_IMAGE");
        static const int OLD_IMAGE_HASH = HashingUtils::HashString("OLD_IMAGE");
        static const int KEYS_ONLY_HASH = HashingUtils::HashString("KEYS_ONLY");
        static const int NEW_AND_OLD_IMAGES_HASH = HashingUtils::HashString("NEW_AND_OLD_IMAGES");


        ViewType GetViewTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW_IMAGE_HASH)
          {
            return ViewType::NEW_IMAGE;
          }
          else if (hashCode == OLD_IMAGE_HASH)
          {
            return ViewType::OLD_IMAGE;
          }
          else if (hashCode == KEYS_ONLY_HASH)
          {
            return ViewType::KEYS_ONLY;
          }
          else if (hashCode == NEW_AND_OLD_IMAGES_HASH)
          {
            return ViewType::NEW_AND_OLD_IMAGES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewType>(hashCode);
          }

          return ViewType::NOT_SET;
        }

        Aws::String GetNameForViewType(ViewType enumValue)
        {
          switch(enumValue)
          {
          case ViewType::NOT_SET:
            return {};
          case ViewType::NEW_IMAGE:
            return "NEW_IMAGE";
          case ViewType::OLD_IMAGE:
            return "OLD_IMAGE";
          case ViewType::KEYS_ONLY:
            return "KEYS_ONLY";
          case ViewType::NEW_AND_OLD_IMAGES:
            return "NEW_AND_OLD_IMAGES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewTypeMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
