/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/PresenterPosition.h>
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
      namespace PresenterPositionMapper
      {

        static const int TopLeft_HASH = HashingUtils::HashString("TopLeft");
        static const int TopRight_HASH = HashingUtils::HashString("TopRight");
        static const int BottomLeft_HASH = HashingUtils::HashString("BottomLeft");
        static const int BottomRight_HASH = HashingUtils::HashString("BottomRight");


        PresenterPosition GetPresenterPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TopLeft_HASH)
          {
            return PresenterPosition::TopLeft;
          }
          else if (hashCode == TopRight_HASH)
          {
            return PresenterPosition::TopRight;
          }
          else if (hashCode == BottomLeft_HASH)
          {
            return PresenterPosition::BottomLeft;
          }
          else if (hashCode == BottomRight_HASH)
          {
            return PresenterPosition::BottomRight;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PresenterPosition>(hashCode);
          }

          return PresenterPosition::NOT_SET;
        }

        Aws::String GetNameForPresenterPosition(PresenterPosition enumValue)
        {
          switch(enumValue)
          {
          case PresenterPosition::TopLeft:
            return "TopLeft";
          case PresenterPosition::TopRight:
            return "TopRight";
          case PresenterPosition::BottomLeft:
            return "BottomLeft";
          case PresenterPosition::BottomRight:
            return "BottomRight";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PresenterPositionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
