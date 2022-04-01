/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AacAudioDescriptionBroadcasterMix.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AacAudioDescriptionBroadcasterMixMapper
      {

        static const int BROADCASTER_MIXED_AD_HASH = HashingUtils::HashString("BROADCASTER_MIXED_AD");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        AacAudioDescriptionBroadcasterMix GetAacAudioDescriptionBroadcasterMixForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BROADCASTER_MIXED_AD_HASH)
          {
            return AacAudioDescriptionBroadcasterMix::BROADCASTER_MIXED_AD;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return AacAudioDescriptionBroadcasterMix::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacAudioDescriptionBroadcasterMix>(hashCode);
          }

          return AacAudioDescriptionBroadcasterMix::NOT_SET;
        }

        Aws::String GetNameForAacAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix enumValue)
        {
          switch(enumValue)
          {
          case AacAudioDescriptionBroadcasterMix::BROADCASTER_MIXED_AD:
            return "BROADCASTER_MIXED_AD";
          case AacAudioDescriptionBroadcasterMix::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacAudioDescriptionBroadcasterMixMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
