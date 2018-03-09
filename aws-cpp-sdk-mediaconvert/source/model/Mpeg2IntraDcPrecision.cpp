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

#include <aws/mediaconvert/model/Mpeg2IntraDcPrecision.h>
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
      namespace Mpeg2IntraDcPrecisionMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int INTRA_DC_PRECISION_8_HASH = HashingUtils::HashString("INTRA_DC_PRECISION_8");
        static const int INTRA_DC_PRECISION_9_HASH = HashingUtils::HashString("INTRA_DC_PRECISION_9");
        static const int INTRA_DC_PRECISION_10_HASH = HashingUtils::HashString("INTRA_DC_PRECISION_10");
        static const int INTRA_DC_PRECISION_11_HASH = HashingUtils::HashString("INTRA_DC_PRECISION_11");


        Mpeg2IntraDcPrecision GetMpeg2IntraDcPrecisionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return Mpeg2IntraDcPrecision::AUTO;
          }
          else if (hashCode == INTRA_DC_PRECISION_8_HASH)
          {
            return Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_8;
          }
          else if (hashCode == INTRA_DC_PRECISION_9_HASH)
          {
            return Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_9;
          }
          else if (hashCode == INTRA_DC_PRECISION_10_HASH)
          {
            return Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_10;
          }
          else if (hashCode == INTRA_DC_PRECISION_11_HASH)
          {
            return Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_11;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2IntraDcPrecision>(hashCode);
          }

          return Mpeg2IntraDcPrecision::NOT_SET;
        }

        Aws::String GetNameForMpeg2IntraDcPrecision(Mpeg2IntraDcPrecision enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2IntraDcPrecision::AUTO:
            return "AUTO";
          case Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_8:
            return "INTRA_DC_PRECISION_8";
          case Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_9:
            return "INTRA_DC_PRECISION_9";
          case Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_10:
            return "INTRA_DC_PRECISION_10";
          case Mpeg2IntraDcPrecision::INTRA_DC_PRECISION_11:
            return "INTRA_DC_PRECISION_11";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Mpeg2IntraDcPrecisionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
