﻿/*
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
        static const int SCC_HASH = HashingUtils::HashString("SCC");
        static const int SRT_HASH = HashingUtils::HashString("SRT");
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
          else if (hashCode == SCC_HASH)
          {
            return CaptionDestinationType::SCC;
          }
          else if (hashCode == SRT_HASH)
          {
            return CaptionDestinationType::SRT;
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
          case CaptionDestinationType::SCC:
            return "SCC";
          case CaptionDestinationType::SRT:
            return "SRT";
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

            return "";
          }
        }

      } // namespace CaptionDestinationTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
