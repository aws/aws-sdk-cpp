/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/ReservationCodec.h>
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
      namespace ReservationCodecMapper
      {

        static const int MPEG2_HASH = HashingUtils::HashString("MPEG2");
        static const int AVC_HASH = HashingUtils::HashString("AVC");
        static const int HEVC_HASH = HashingUtils::HashString("HEVC");
        static const int AUDIO_HASH = HashingUtils::HashString("AUDIO");


        ReservationCodec GetReservationCodecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MPEG2_HASH)
          {
            return ReservationCodec::MPEG2;
          }
          else if (hashCode == AVC_HASH)
          {
            return ReservationCodec::AVC;
          }
          else if (hashCode == HEVC_HASH)
          {
            return ReservationCodec::HEVC;
          }
          else if (hashCode == AUDIO_HASH)
          {
            return ReservationCodec::AUDIO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationCodec>(hashCode);
          }

          return ReservationCodec::NOT_SET;
        }

        Aws::String GetNameForReservationCodec(ReservationCodec enumValue)
        {
          switch(enumValue)
          {
          case ReservationCodec::MPEG2:
            return "MPEG2";
          case ReservationCodec::AVC:
            return "AVC";
          case ReservationCodec::HEVC:
            return "HEVC";
          case ReservationCodec::AUDIO:
            return "AUDIO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationCodecMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
