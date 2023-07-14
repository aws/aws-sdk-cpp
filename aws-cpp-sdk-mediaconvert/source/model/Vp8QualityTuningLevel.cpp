/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp8QualityTuningLevel.h>
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
      namespace Vp8QualityTuningLevelMapper
      {

        static const int MULTI_PASS_HASH = HashingUtils::HashString("MULTI_PASS");
        static const int MULTI_PASS_HQ_HASH = HashingUtils::HashString("MULTI_PASS_HQ");


        Vp8QualityTuningLevel GetVp8QualityTuningLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_PASS_HASH)
          {
            return Vp8QualityTuningLevel::MULTI_PASS;
          }
          else if (hashCode == MULTI_PASS_HQ_HASH)
          {
            return Vp8QualityTuningLevel::MULTI_PASS_HQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp8QualityTuningLevel>(hashCode);
          }

          return Vp8QualityTuningLevel::NOT_SET;
        }

        Aws::String GetNameForVp8QualityTuningLevel(Vp8QualityTuningLevel enumValue)
        {
          switch(enumValue)
          {
          case Vp8QualityTuningLevel::MULTI_PASS:
            return "MULTI_PASS";
          case Vp8QualityTuningLevel::MULTI_PASS_HQ:
            return "MULTI_PASS_HQ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Vp8QualityTuningLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
