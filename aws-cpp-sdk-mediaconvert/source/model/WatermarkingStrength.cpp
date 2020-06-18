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

#include <aws/mediaconvert/model/WatermarkingStrength.h>
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
      namespace WatermarkingStrengthMapper
      {

        static const int LIGHTEST_HASH = HashingUtils::HashString("LIGHTEST");
        static const int LIGHTER_HASH = HashingUtils::HashString("LIGHTER");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int STRONGER_HASH = HashingUtils::HashString("STRONGER");
        static const int STRONGEST_HASH = HashingUtils::HashString("STRONGEST");


        WatermarkingStrength GetWatermarkingStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIGHTEST_HASH)
          {
            return WatermarkingStrength::LIGHTEST;
          }
          else if (hashCode == LIGHTER_HASH)
          {
            return WatermarkingStrength::LIGHTER;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return WatermarkingStrength::DEFAULT;
          }
          else if (hashCode == STRONGER_HASH)
          {
            return WatermarkingStrength::STRONGER;
          }
          else if (hashCode == STRONGEST_HASH)
          {
            return WatermarkingStrength::STRONGEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WatermarkingStrength>(hashCode);
          }

          return WatermarkingStrength::NOT_SET;
        }

        Aws::String GetNameForWatermarkingStrength(WatermarkingStrength enumValue)
        {
          switch(enumValue)
          {
          case WatermarkingStrength::LIGHTEST:
            return "LIGHTEST";
          case WatermarkingStrength::LIGHTER:
            return "LIGHTER";
          case WatermarkingStrength::DEFAULT:
            return "DEFAULT";
          case WatermarkingStrength::STRONGER:
            return "STRONGER";
          case WatermarkingStrength::STRONGEST:
            return "STRONGEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WatermarkingStrengthMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
