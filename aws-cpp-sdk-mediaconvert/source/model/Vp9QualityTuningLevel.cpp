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

#include <aws/mediaconvert/model/Vp9QualityTuningLevel.h>
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
      namespace Vp9QualityTuningLevelMapper
      {

        static const int MULTI_PASS_HASH = HashingUtils::HashString("MULTI_PASS");
        static const int MULTI_PASS_HQ_HASH = HashingUtils::HashString("MULTI_PASS_HQ");


        Vp9QualityTuningLevel GetVp9QualityTuningLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_PASS_HASH)
          {
            return Vp9QualityTuningLevel::MULTI_PASS;
          }
          else if (hashCode == MULTI_PASS_HQ_HASH)
          {
            return Vp9QualityTuningLevel::MULTI_PASS_HQ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp9QualityTuningLevel>(hashCode);
          }

          return Vp9QualityTuningLevel::NOT_SET;
        }

        Aws::String GetNameForVp9QualityTuningLevel(Vp9QualityTuningLevel enumValue)
        {
          switch(enumValue)
          {
          case Vp9QualityTuningLevel::MULTI_PASS:
            return "MULTI_PASS";
          case Vp9QualityTuningLevel::MULTI_PASS_HQ:
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

      } // namespace Vp9QualityTuningLevelMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
