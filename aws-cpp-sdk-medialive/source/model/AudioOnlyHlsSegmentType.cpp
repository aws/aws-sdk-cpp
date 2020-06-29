/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioOnlyHlsSegmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AudioOnlyHlsSegmentTypeMapper
      {

        static const int AAC_HASH = HashingUtils::HashString("AAC");
        static const int FMP4_HASH = HashingUtils::HashString("FMP4");


        AudioOnlyHlsSegmentType GetAudioOnlyHlsSegmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AAC_HASH)
          {
            return AudioOnlyHlsSegmentType::AAC;
          }
          else if (hashCode == FMP4_HASH)
          {
            return AudioOnlyHlsSegmentType::FMP4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioOnlyHlsSegmentType>(hashCode);
          }

          return AudioOnlyHlsSegmentType::NOT_SET;
        }

        Aws::String GetNameForAudioOnlyHlsSegmentType(AudioOnlyHlsSegmentType enumValue)
        {
          switch(enumValue)
          {
          case AudioOnlyHlsSegmentType::AAC:
            return "AAC";
          case AudioOnlyHlsSegmentType::FMP4:
            return "FMP4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioOnlyHlsSegmentTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
