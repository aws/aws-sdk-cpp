/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ImageTypeMapper
      {

        static const int OWNED_HASH = HashingUtils::HashString("OWNED");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");


        ImageType GetImageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNED_HASH)
          {
            return ImageType::OWNED;
          }
          else if (hashCode == SHARED_HASH)
          {
            return ImageType::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageType>(hashCode);
          }

          return ImageType::NOT_SET;
        }

        Aws::String GetNameForImageType(ImageType enumValue)
        {
          switch(enumValue)
          {
          case ImageType::OWNED:
            return "OWNED";
          case ImageType::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
