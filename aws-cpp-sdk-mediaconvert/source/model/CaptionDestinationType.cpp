/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionDestinationType.h>
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
      namespace CaptionDestinationTypeMapper
      {

        static const int BURN_IN_HASH = HashingUtils::HashString("BURN_IN");
        static const int DVB_SUB_HASH = HashingUtils::HashString("DVB_SUB");
        static const int EMBEDDED_HASH = HashingUtils::HashString("EMBEDDED");
        static const int EMBEDDED_PLUS_SCTE20_HASH = HashingUtils::HashString("EMBEDDED_PLUS_SCTE20");
        static const int IMSC_HASH = HashingUtils::HashString("IMSC");
        static const int SCTE20_PLUS_EMBEDDED_HASH = HashingUtils::HashString("SCTE20_PLUS_EMBEDDED");
        static const int SCC_HASH = HashingUtils::HashString("SCC");
        static const int SRT_HASH = HashingUtils::HashString("SRT");
        static const int SMI_HASH = HashingUtils::HashString("SMI");
        static const int TELETEXT_HASH = HashingUtils::HashString("TELETEXT");
        static const int TTML_HASH = HashingUtils::HashString("TTML");
        static const int WEBVTT_HASH = HashingUtils::HashString("WEBVTT");


        CaptionDestinationType GetCaptionDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BURN_IN_HASH)
          {
            return CaptionDestinationType::BURN_IN;
          }
          else if (hashCode == DVB_SUB_HASH)
          {
            return CaptionDestinationType::DVB_SUB;
          }
          else if (hashCode == EMBEDDED_HASH)
          {
            return CaptionDestinationType::EMBEDDED;
          }
          else if (hashCode == EMBEDDED_PLUS_SCTE20_HASH)
          {
            return CaptionDestinationType::EMBEDDED_PLUS_SCTE20;
          }
          else if (hashCode == IMSC_HASH)
          {
            return CaptionDestinationType::IMSC;
          }
          else if (hashCode == SCTE20_PLUS_EMBEDDED_HASH)
          {
            return CaptionDestinationType::SCTE20_PLUS_EMBEDDED;
          }
          else if (hashCode == SCC_HASH)
          {
            return CaptionDestinationType::SCC;
          }
          else if (hashCode == SRT_HASH)
          {
            return CaptionDestinationType::SRT;
          }
          else if (hashCode == SMI_HASH)
          {
            return CaptionDestinationType::SMI;
          }
          else if (hashCode == TELETEXT_HASH)
          {
            return CaptionDestinationType::TELETEXT;
          }
          else if (hashCode == TTML_HASH)
          {
            return CaptionDestinationType::TTML;
          }
          else if (hashCode == WEBVTT_HASH)
          {
            return CaptionDestinationType::WEBVTT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptionDestinationType>(hashCode);
          }

          return CaptionDestinationType::NOT_SET;
        }

        Aws::String GetNameForCaptionDestinationType(CaptionDestinationType enumValue)
        {
          switch(enumValue)
          {
          case CaptionDestinationType::BURN_IN:
            return "BURN_IN";
          case CaptionDestinationType::DVB_SUB:
            return "DVB_SUB";
          case CaptionDestinationType::EMBEDDED:
            return "EMBEDDED";
          case CaptionDestinationType::EMBEDDED_PLUS_SCTE20:
            return "EMBEDDED_PLUS_SCTE20";
          case CaptionDestinationType::IMSC:
            return "IMSC";
          case CaptionDestinationType::SCTE20_PLUS_EMBEDDED:
            return "SCTE20_PLUS_EMBEDDED";
          case CaptionDestinationType::SCC:
            return "SCC";
          case CaptionDestinationType::SRT:
            return "SRT";
          case CaptionDestinationType::SMI:
            return "SMI";
          case CaptionDestinationType::TELETEXT:
            return "TELETEXT";
          case CaptionDestinationType::TTML:
            return "TTML";
          case CaptionDestinationType::WEBVTT:
            return "WEBVTT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptionDestinationTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
