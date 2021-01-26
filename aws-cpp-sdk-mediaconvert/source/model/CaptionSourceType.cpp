/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CaptionSourceType.h>
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
      namespace CaptionSourceTypeMapper
      {

        static const int ANCILLARY_HASH = HashingUtils::HashString("ANCILLARY");
        static const int DVB_SUB_HASH = HashingUtils::HashString("DVB_SUB");
        static const int EMBEDDED_HASH = HashingUtils::HashString("EMBEDDED");
        static const int SCTE20_HASH = HashingUtils::HashString("SCTE20");
        static const int SCC_HASH = HashingUtils::HashString("SCC");
        static const int TTML_HASH = HashingUtils::HashString("TTML");
        static const int STL_HASH = HashingUtils::HashString("STL");
        static const int SRT_HASH = HashingUtils::HashString("SRT");
        static const int SMI_HASH = HashingUtils::HashString("SMI");
        static const int TELETEXT_HASH = HashingUtils::HashString("TELETEXT");
        static const int NULL_SOURCE_HASH = HashingUtils::HashString("NULL_SOURCE");
        static const int IMSC_HASH = HashingUtils::HashString("IMSC");


        CaptionSourceType GetCaptionSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANCILLARY_HASH)
          {
            return CaptionSourceType::ANCILLARY;
          }
          else if (hashCode == DVB_SUB_HASH)
          {
            return CaptionSourceType::DVB_SUB;
          }
          else if (hashCode == EMBEDDED_HASH)
          {
            return CaptionSourceType::EMBEDDED;
          }
          else if (hashCode == SCTE20_HASH)
          {
            return CaptionSourceType::SCTE20;
          }
          else if (hashCode == SCC_HASH)
          {
            return CaptionSourceType::SCC;
          }
          else if (hashCode == TTML_HASH)
          {
            return CaptionSourceType::TTML;
          }
          else if (hashCode == STL_HASH)
          {
            return CaptionSourceType::STL;
          }
          else if (hashCode == SRT_HASH)
          {
            return CaptionSourceType::SRT;
          }
          else if (hashCode == SMI_HASH)
          {
            return CaptionSourceType::SMI;
          }
          else if (hashCode == TELETEXT_HASH)
          {
            return CaptionSourceType::TELETEXT;
          }
          else if (hashCode == NULL_SOURCE_HASH)
          {
            return CaptionSourceType::NULL_SOURCE;
          }
          else if (hashCode == IMSC_HASH)
          {
            return CaptionSourceType::IMSC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptionSourceType>(hashCode);
          }

          return CaptionSourceType::NOT_SET;
        }

        Aws::String GetNameForCaptionSourceType(CaptionSourceType enumValue)
        {
          switch(enumValue)
          {
          case CaptionSourceType::ANCILLARY:
            return "ANCILLARY";
          case CaptionSourceType::DVB_SUB:
            return "DVB_SUB";
          case CaptionSourceType::EMBEDDED:
            return "EMBEDDED";
          case CaptionSourceType::SCTE20:
            return "SCTE20";
          case CaptionSourceType::SCC:
            return "SCC";
          case CaptionSourceType::TTML:
            return "TTML";
          case CaptionSourceType::STL:
            return "STL";
          case CaptionSourceType::SRT:
            return "SRT";
          case CaptionSourceType::SMI:
            return "SMI";
          case CaptionSourceType::TELETEXT:
            return "TELETEXT";
          case CaptionSourceType::NULL_SOURCE:
            return "NULL_SOURCE";
          case CaptionSourceType::IMSC:
            return "IMSC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptionSourceTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
