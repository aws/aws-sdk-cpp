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

#include <aws/medialive/model/H264QualityLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace H264QualityLevelMapper
      {

        static const int ENHANCED_QUALITY_HASH = HashingUtils::HashString("ENHANCED_QUALITY");
        static const int STANDARD_QUALITY_HASH = HashingUtils::HashString("STANDARD_QUALITY");


        H264QualityLevel GetH264QualityLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENHANCED_QUALITY_HASH)
          {
            return H264QualityLevel::ENHANCED_QUALITY;
          }
          else if (hashCode == STANDARD_QUALITY_HASH)
          {
            return H264QualityLevel::STANDARD_QUALITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264QualityLevel>(hashCode);
          }

          return H264QualityLevel::NOT_SET;
        }

        Aws::String GetNameForH264QualityLevel(H264QualityLevel enumValue)
        {
          switch(enumValue)
          {
          case H264QualityLevel::ENHANCED_QUALITY:
            return "ENHANCED_QUALITY";
          case H264QualityLevel::STANDARD_QUALITY:
            return "STANDARD_QUALITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264QualityLevelMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
