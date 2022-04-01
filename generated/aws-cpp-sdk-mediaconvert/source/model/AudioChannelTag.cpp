/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AudioChannelTag.h>
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
      namespace AudioChannelTagMapper
      {

        static const int L_HASH = HashingUtils::HashString("L");
        static const int R_HASH = HashingUtils::HashString("R");
        static const int C_HASH = HashingUtils::HashString("C");
        static const int LFE_HASH = HashingUtils::HashString("LFE");
        static const int LS_HASH = HashingUtils::HashString("LS");
        static const int RS_HASH = HashingUtils::HashString("RS");
        static const int LC_HASH = HashingUtils::HashString("LC");
        static const int RC_HASH = HashingUtils::HashString("RC");
        static const int CS_HASH = HashingUtils::HashString("CS");
        static const int LSD_HASH = HashingUtils::HashString("LSD");
        static const int RSD_HASH = HashingUtils::HashString("RSD");
        static const int TCS_HASH = HashingUtils::HashString("TCS");
        static const int VHL_HASH = HashingUtils::HashString("VHL");
        static const int VHC_HASH = HashingUtils::HashString("VHC");
        static const int VHR_HASH = HashingUtils::HashString("VHR");


        AudioChannelTag GetAudioChannelTagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == L_HASH)
          {
            return AudioChannelTag::L;
          }
          else if (hashCode == R_HASH)
          {
            return AudioChannelTag::R;
          }
          else if (hashCode == C_HASH)
          {
            return AudioChannelTag::C;
          }
          else if (hashCode == LFE_HASH)
          {
            return AudioChannelTag::LFE;
          }
          else if (hashCode == LS_HASH)
          {
            return AudioChannelTag::LS;
          }
          else if (hashCode == RS_HASH)
          {
            return AudioChannelTag::RS;
          }
          else if (hashCode == LC_HASH)
          {
            return AudioChannelTag::LC;
          }
          else if (hashCode == RC_HASH)
          {
            return AudioChannelTag::RC;
          }
          else if (hashCode == CS_HASH)
          {
            return AudioChannelTag::CS;
          }
          else if (hashCode == LSD_HASH)
          {
            return AudioChannelTag::LSD;
          }
          else if (hashCode == RSD_HASH)
          {
            return AudioChannelTag::RSD;
          }
          else if (hashCode == TCS_HASH)
          {
            return AudioChannelTag::TCS;
          }
          else if (hashCode == VHL_HASH)
          {
            return AudioChannelTag::VHL;
          }
          else if (hashCode == VHC_HASH)
          {
            return AudioChannelTag::VHC;
          }
          else if (hashCode == VHR_HASH)
          {
            return AudioChannelTag::VHR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioChannelTag>(hashCode);
          }

          return AudioChannelTag::NOT_SET;
        }

        Aws::String GetNameForAudioChannelTag(AudioChannelTag enumValue)
        {
          switch(enumValue)
          {
          case AudioChannelTag::L:
            return "L";
          case AudioChannelTag::R:
            return "R";
          case AudioChannelTag::C:
            return "C";
          case AudioChannelTag::LFE:
            return "LFE";
          case AudioChannelTag::LS:
            return "LS";
          case AudioChannelTag::RS:
            return "RS";
          case AudioChannelTag::LC:
            return "LC";
          case AudioChannelTag::RC:
            return "RC";
          case AudioChannelTag::CS:
            return "CS";
          case AudioChannelTag::LSD:
            return "LSD";
          case AudioChannelTag::RSD:
            return "RSD";
          case AudioChannelTag::TCS:
            return "TCS";
          case AudioChannelTag::VHL:
            return "VHL";
          case AudioChannelTag::VHC:
            return "VHC";
          case AudioChannelTag::VHR:
            return "VHR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioChannelTagMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
