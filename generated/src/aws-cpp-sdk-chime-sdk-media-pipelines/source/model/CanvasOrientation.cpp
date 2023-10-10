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

        static const int Landscape_HASH = HashingUtils::HashString("Landscape");
        static const int Portrait_HASH = HashingUtils::HashString("Portrait");


        CanvasOrientation GetCanvasOrientationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
