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

#include <aws/medialive/model/AacVbrQuality.h>
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
      namespace AacVbrQualityMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HIGH_HASH = HashingUtils::HashString("MEDIUM_HIGH");
        static const int MEDIUM_LOW_HASH = HashingUtils::HashString("MEDIUM_LOW");


        AacVbrQuality GetAacVbrQualityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return AacVbrQuality::HIGH;
          }
          else if (hashCode == LOW_HASH)
          {
            return AacVbrQuality::LOW;
          }
          else if (hashCode == MEDIUM_HIGH_HASH)
          {
            return AacVbrQuality::MEDIUM_HIGH;
          }
          else if (hashCode == MEDIUM_LOW_HASH)
          {
            return AacVbrQuality::MEDIUM_LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacVbrQuality>(hashCode);
          }

          return AacVbrQuality::NOT_SET;
        }

        Aws::String GetNameForAacVbrQuality(AacVbrQuality enumValue)
        {
          switch(enumValue)
          {
          case AacVbrQuality::HIGH:
            return "HIGH";
          case AacVbrQuality::LOW:
            return "LOW";
          case AacVbrQuality::MEDIUM_HIGH:
            return "MEDIUM_HIGH";
          case AacVbrQuality::MEDIUM_LOW:
            return "MEDIUM_LOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacVbrQualityMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
