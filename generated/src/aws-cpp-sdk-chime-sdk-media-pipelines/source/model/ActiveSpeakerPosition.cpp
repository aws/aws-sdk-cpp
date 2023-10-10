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

        static const int TopLeft_HASH = HashingUtils::HashString("TopLeft");
        static const int TopRight_HASH = HashingUtils::HashString("TopRight");
        static const int BottomLeft_HASH = HashingUtils::HashString("BottomLeft");
        static const int BottomRight_HASH = HashingUtils::HashString("BottomRight");


        ActiveSpeakerPosition GetActiveSpeakerPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
