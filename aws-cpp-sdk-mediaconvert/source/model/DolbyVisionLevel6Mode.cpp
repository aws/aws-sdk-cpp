/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DolbyVisionLevel6Mode.h>
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
      namespace DolbyVisionLevel6ModeMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int RECALCULATE_HASH = HashingUtils::HashString("RECALCULATE");
        static const int SPECIFY_HASH = HashingUtils::HashString("SPECIFY");


        DolbyVisionLevel6Mode GetDolbyVisionLevel6ModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return DolbyVisionLevel6Mode::PASSTHROUGH;
          }
          else if (hashCode == RECALCULATE_HASH)
          {
            return DolbyVisionLevel6Mode::RECALCULATE;
          }
          else if (hashCode == SPECIFY_HASH)
          {
            return DolbyVisionLevel6Mode::SPECIFY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DolbyVisionLevel6Mode>(hashCode);
          }

          return DolbyVisionLevel6Mode::NOT_SET;
        }

        Aws::String GetNameForDolbyVisionLevel6Mode(DolbyVisionLevel6Mode enumValue)
        {
          switch(enumValue)
          {
          case DolbyVisionLevel6Mode::PASSTHROUGH:
            return "PASSTHROUGH";
          case DolbyVisionLevel6Mode::RECALCULATE:
            return "RECALCULATE";
          case DolbyVisionLevel6Mode::SPECIFY:
            return "SPECIFY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DolbyVisionLevel6ModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
