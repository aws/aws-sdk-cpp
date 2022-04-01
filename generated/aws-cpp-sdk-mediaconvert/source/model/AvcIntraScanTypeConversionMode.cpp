﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraScanTypeConversionMode.h>
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
      namespace AvcIntraScanTypeConversionModeMapper
      {

        static const int INTERLACED_HASH = HashingUtils::HashString("INTERLACED");
        static const int INTERLACED_OPTIMIZE_HASH = HashingUtils::HashString("INTERLACED_OPTIMIZE");


        AvcIntraScanTypeConversionMode GetAvcIntraScanTypeConversionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return AvcIntraScanTypeConversionMode::INTERLACED;
          }
          else if (hashCode == INTERLACED_OPTIMIZE_HASH)
          {
            return AvcIntraScanTypeConversionMode::INTERLACED_OPTIMIZE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvcIntraScanTypeConversionMode>(hashCode);
          }

          return AvcIntraScanTypeConversionMode::NOT_SET;
        }

        Aws::String GetNameForAvcIntraScanTypeConversionMode(AvcIntraScanTypeConversionMode enumValue)
        {
          switch(enumValue)
          {
          case AvcIntraScanTypeConversionMode::INTERLACED:
            return "INTERLACED";
          case AvcIntraScanTypeConversionMode::INTERLACED_OPTIMIZE:
            return "INTERLACED_OPTIMIZE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AvcIntraScanTypeConversionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
