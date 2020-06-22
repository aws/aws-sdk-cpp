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

#include <aws/rekognition/model/TechnicalCueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace TechnicalCueTypeMapper
      {

        static const int ColorBars_HASH = HashingUtils::HashString("ColorBars");
        static const int EndCredits_HASH = HashingUtils::HashString("EndCredits");
        static const int BlackFrames_HASH = HashingUtils::HashString("BlackFrames");


        TechnicalCueType GetTechnicalCueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ColorBars_HASH)
          {
            return TechnicalCueType::ColorBars;
          }
          else if (hashCode == EndCredits_HASH)
          {
            return TechnicalCueType::EndCredits;
          }
          else if (hashCode == BlackFrames_HASH)
          {
            return TechnicalCueType::BlackFrames;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TechnicalCueType>(hashCode);
          }

          return TechnicalCueType::NOT_SET;
        }

        Aws::String GetNameForTechnicalCueType(TechnicalCueType enumValue)
        {
          switch(enumValue)
          {
          case TechnicalCueType::ColorBars:
            return "ColorBars";
          case TechnicalCueType::EndCredits:
            return "EndCredits";
          case TechnicalCueType::BlackFrames:
            return "BlackFrames";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TechnicalCueTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
