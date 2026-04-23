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

#include <aws/mediaconvert/model/H265SampleAdaptiveOffsetFilterMode.h>
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
      namespace H265SampleAdaptiveOffsetFilterModeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ADAPTIVE_HASH = HashingUtils::HashString("ADAPTIVE");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        H265SampleAdaptiveOffsetFilterMode GetH265SampleAdaptiveOffsetFilterModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return H265SampleAdaptiveOffsetFilterMode::DEFAULT;
          }
          else if (hashCode == ADAPTIVE_HASH)
          {
            return H265SampleAdaptiveOffsetFilterMode::ADAPTIVE;
          }
          else if (hashCode == OFF_HASH)
          {
            return H265SampleAdaptiveOffsetFilterMode::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265SampleAdaptiveOffsetFilterMode>(hashCode);
          }

          return H265SampleAdaptiveOffsetFilterMode::NOT_SET;
        }

        Aws::String GetNameForH265SampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode enumValue)
        {
          switch(enumValue)
          {
          case H265SampleAdaptiveOffsetFilterMode::DEFAULT:
            return "DEFAULT";
          case H265SampleAdaptiveOffsetFilterMode::ADAPTIVE:
            return "ADAPTIVE";
          case H265SampleAdaptiveOffsetFilterMode::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265SampleAdaptiveOffsetFilterModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
