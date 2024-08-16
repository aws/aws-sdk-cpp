/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ImageSharedWithOthers.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace ImageSharedWithOthersMapper
      {

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");


        ImageSharedWithOthers GetImageSharedWithOthersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return ImageSharedWithOthers::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return ImageSharedWithOthers::FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageSharedWithOthers>(hashCode);
          }

          return ImageSharedWithOthers::NOT_SET;
        }

        Aws::String GetNameForImageSharedWithOthers(ImageSharedWithOthers enumValue)
        {
          switch(enumValue)
          {
          case ImageSharedWithOthers::NOT_SET:
            return {};
          case ImageSharedWithOthers::TRUE:
            return "TRUE";
          case ImageSharedWithOthers::FALSE:
            return "FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageSharedWithOthersMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
