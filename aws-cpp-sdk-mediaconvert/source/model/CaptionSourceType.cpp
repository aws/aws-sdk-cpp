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
        static const int SCC_HASH = HashingUtils::HashString("SCC");
        static const int TTML_HASH = HashingUtils::HashString("TTML");
        static const int STL_HASH = HashingUtils::HashString("STL");
        static const int SRT_HASH = HashingUtils::HashString("SRT");
        static const int TELETEXT_HASH = HashingUtils::HashString("TELETEXT");
        static const int NULL_SOURCE_HASH = HashingUtils::HashString("NULL_SOURCE");


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
          else if (hashCode == TELETEXT_HASH)
          {
            return CaptionSourceType::TELETEXT;
          }
          else if (hashCode == NULL_SOURCE_HASH)
          {
            return CaptionSourceType::NULL_SOURCE;
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
          case CaptionSourceType::SCC:
            return "SCC";
          case CaptionSourceType::TTML:
            return "TTML";
          case CaptionSourceType::STL:
            return "STL";
          case CaptionSourceType::SRT:
            return "SRT";
          case CaptionSourceType::TELETEXT:
            return "TELETEXT";
          case CaptionSourceType::NULL_SOURCE:
            return "NULL_SOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CaptionSourceTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
