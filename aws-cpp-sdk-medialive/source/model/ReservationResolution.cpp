﻿/*
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

#include <aws/medialive/model/ReservationResolution.h>
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
      namespace ReservationResolutionMapper
      {

        static const int SD_HASH = HashingUtils::HashString("SD");
        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int UHD_HASH = HashingUtils::HashString("UHD");


        ReservationResolution GetReservationResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SD_HASH)
          {
            return ReservationResolution::SD;
          }
          else if (hashCode == HD_HASH)
          {
            return ReservationResolution::HD;
          }
          else if (hashCode == UHD_HASH)
          {
            return ReservationResolution::UHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationResolution>(hashCode);
          }

          return ReservationResolution::NOT_SET;
        }

        Aws::String GetNameForReservationResolution(ReservationResolution enumValue)
        {
          switch(enumValue)
          {
          case ReservationResolution::SD:
            return "SD";
          case ReservationResolution::HD:
            return "HD";
          case ReservationResolution::UHD:
            return "UHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReservationResolutionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
