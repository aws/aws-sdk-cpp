/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ActiveSpeakerPosition.h>
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
      namespace ActiveSpeakerPositionMapper
      {

        static constexpr uint32_t TopLeft_HASH = ConstExprHashingUtils::HashString("TopLeft");
        static constexpr uint32_t TopRight_HASH = ConstExprHashingUtils::HashString("TopRight");
        static constexpr uint32_t BottomLeft_HASH = ConstExprHashingUtils::HashString("BottomLeft");
        static constexpr uint32_t BottomRight_HASH = ConstExprHashingUtils::HashString("BottomRight");


        ActiveSpeakerPosition GetActiveSpeakerPositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TopLeft_HASH)
          {
            return ActiveSpeakerPosition::TopLeft;
          }
          else if (hashCode == TopRight_HASH)
          {
            return ActiveSpeakerPosition::TopRight;
          }
          else if (hashCode == BottomLeft_HASH)
          {
            return ActiveSpeakerPosition::BottomLeft;
          }
          else if (hashCode == BottomRight_HASH)
          {
            return ActiveSpeakerPosition::BottomRight;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActiveSpeakerPosition>(hashCode);
          }

          return ActiveSpeakerPosition::NOT_SET;
        }

        Aws::String GetNameForActiveSpeakerPosition(ActiveSpeakerPosition enumValue)
        {
          switch(enumValue)
          {
          case ActiveSpeakerPosition::NOT_SET:
            return {};
          case ActiveSpeakerPosition::TopLeft:
            return "TopLeft";
          case ActiveSpeakerPosition::TopRight:
            return "TopRight";
          case ActiveSpeakerPosition::BottomLeft:
            return "BottomLeft";
          case ActiveSpeakerPosition::BottomRight:
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

      } // namespace ActiveSpeakerPositionMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
