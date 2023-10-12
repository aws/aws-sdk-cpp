/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ThumbnailConfigurationResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IVS
  {
    namespace Model
    {
      namespace ThumbnailConfigurationResolutionMapper
      {

        static constexpr uint32_t FULL_HD_HASH = ConstExprHashingUtils::HashString("FULL_HD");
        static constexpr uint32_t HD_HASH = ConstExprHashingUtils::HashString("HD");
        static constexpr uint32_t SD_HASH = ConstExprHashingUtils::HashString("SD");
        static constexpr uint32_t LOWEST_RESOLUTION_HASH = ConstExprHashingUtils::HashString("LOWEST_RESOLUTION");


        ThumbnailConfigurationResolution GetThumbnailConfigurationResolutionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_HD_HASH)
          {
            return ThumbnailConfigurationResolution::FULL_HD;
          }
          else if (hashCode == HD_HASH)
          {
            return ThumbnailConfigurationResolution::HD;
          }
          else if (hashCode == SD_HASH)
          {
            return ThumbnailConfigurationResolution::SD;
          }
          else if (hashCode == LOWEST_RESOLUTION_HASH)
          {
            return ThumbnailConfigurationResolution::LOWEST_RESOLUTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThumbnailConfigurationResolution>(hashCode);
          }

          return ThumbnailConfigurationResolution::NOT_SET;
        }

        Aws::String GetNameForThumbnailConfigurationResolution(ThumbnailConfigurationResolution enumValue)
        {
          switch(enumValue)
          {
          case ThumbnailConfigurationResolution::NOT_SET:
            return {};
          case ThumbnailConfigurationResolution::FULL_HD:
            return "FULL_HD";
          case ThumbnailConfigurationResolution::HD:
            return "HD";
          case ThumbnailConfigurationResolution::SD:
            return "SD";
          case ThumbnailConfigurationResolution::LOWEST_RESOLUTION:
            return "LOWEST_RESOLUTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThumbnailConfigurationResolutionMapper
    } // namespace Model
  } // namespace IVS
} // namespace Aws
