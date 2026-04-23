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

#include <aws/medialive/model/ReservationSpecialFeature.h>
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
      namespace ReservationSpecialFeatureMapper
      {

        static const int ADVANCED_AUDIO_HASH = HashingUtils::HashString("ADVANCED_AUDIO");
        static const int AUDIO_NORMALIZATION_HASH = HashingUtils::HashString("AUDIO_NORMALIZATION");


        ReservationSpecialFeature GetReservationSpecialFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADVANCED_AUDIO_HASH)
          {
            return ReservationSpecialFeature::ADVANCED_AUDIO;
          }
          else if (hashCode == AUDIO_NORMALIZATION_HASH)
          {
            return ReservationSpecialFeature::AUDIO_NORMALIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationSpecialFeature>(hashCode);
          }

          return ReservationSpecialFeature::NOT_SET;
        }

        Aws::String GetNameForReservationSpecialFeature(ReservationSpecialFeature enumValue)
        {
          switch(enumValue)
          {
          case ReservationSpecialFeature::ADVANCED_AUDIO:
            return "ADVANCED_AUDIO";
          case ReservationSpecialFeature::AUDIO_NORMALIZATION:
            return "AUDIO_NORMALIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationSpecialFeatureMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
