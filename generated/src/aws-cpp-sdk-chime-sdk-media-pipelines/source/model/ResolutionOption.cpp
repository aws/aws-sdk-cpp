/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ResolutionOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace ResolutionOptionMapper
      {

        static constexpr uint32_t HD_HASH = ConstExprHashingUtils::HashString("HD");
        static constexpr uint32_t FHD_HASH = ConstExprHashingUtils::HashString("FHD");


        ResolutionOption GetResolutionOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HD_HASH)
          {
            return ResolutionOption::HD;
          }
          else if (hashCode == FHD_HASH)
          {
            return ResolutionOption::FHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolutionOption>(hashCode);
          }

          return ResolutionOption::NOT_SET;
        }

        Aws::String GetNameForResolutionOption(ResolutionOption enumValue)
        {
          switch(enumValue)
          {
          case ResolutionOption::NOT_SET:
            return {};
          case ResolutionOption::HD:
            return "HD";
          case ResolutionOption::FHD:
            return "FHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolutionOptionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
