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

#include <aws/medialive/model/ReservationVideoQuality.h>
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
      namespace ReservationVideoQualityMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int ENHANCED_HASH = HashingUtils::HashString("ENHANCED");
        static const int PREMIUM_HASH = HashingUtils::HashString("PREMIUM");


        ReservationVideoQuality GetReservationVideoQualityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ReservationVideoQuality::STANDARD;
          }
          else if (hashCode == ENHANCED_HASH)
          {
            return ReservationVideoQuality::ENHANCED;
          }
          else if (hashCode == PREMIUM_HASH)
          {
            return ReservationVideoQuality::PREMIUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationVideoQuality>(hashCode);
          }

          return ReservationVideoQuality::NOT_SET;
        }

        Aws::String GetNameForReservationVideoQuality(ReservationVideoQuality enumValue)
        {
          switch(enumValue)
          {
          case ReservationVideoQuality::STANDARD:
            return "STANDARD";
          case ReservationVideoQuality::ENHANCED:
            return "ENHANCED";
          case ReservationVideoQuality::PREMIUM:
            return "PREMIUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationVideoQualityMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
