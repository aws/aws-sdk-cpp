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

        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        ImageLayerSortBy GetImageLayerSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
