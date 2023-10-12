/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/CanvasOrientation.h>
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
      namespace CanvasOrientationMapper
      {

        static constexpr uint32_t Landscape_HASH = ConstExprHashingUtils::HashString("Landscape");
        static constexpr uint32_t Portrait_HASH = ConstExprHashingUtils::HashString("Portrait");


        CanvasOrientation GetCanvasOrientationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Landscape_HASH)
          {
            return CanvasOrientation::Landscape;
          }
          else if (hashCode == Portrait_HASH)
          {
            return CanvasOrientation::Portrait;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanvasOrientation>(hashCode);
          }

          return CanvasOrientation::NOT_SET;
        }

        Aws::String GetNameForCanvasOrientation(CanvasOrientation enumValue)
        {
          switch(enumValue)
          {
          case CanvasOrientation::NOT_SET:
            return {};
          case CanvasOrientation::Landscape:
            return "Landscape";
          case CanvasOrientation::Portrait:
            return "Portrait";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanvasOrientationMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
