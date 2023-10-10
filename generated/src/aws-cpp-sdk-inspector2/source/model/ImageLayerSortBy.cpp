/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ImageLayerSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ImageLayerSortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ImageLayerSortBy GetImageLayerSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return ImageLayerSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ImageLayerSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return ImageLayerSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageLayerSortBy>(hashCode);
          }

          return ImageLayerSortBy::NOT_SET;
        }

        Aws::String GetNameForImageLayerSortBy(ImageLayerSortBy enumValue)
        {
          switch(enumValue)
          {
          case ImageLayerSortBy::NOT_SET:
            return {};
          case ImageLayerSortBy::CRITICAL:
            return "CRITICAL";
          case ImageLayerSortBy::HIGH:
            return "HIGH";
          case ImageLayerSortBy::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageLayerSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
