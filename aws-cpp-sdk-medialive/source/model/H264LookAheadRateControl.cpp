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

#include <aws/medialive/model/H264LookAheadRateControl.h>
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
      namespace H264LookAheadRateControlMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");


        H264LookAheadRateControl GetH264LookAheadRateControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return H264LookAheadRateControl::HIGH;
          }
          else if (hashCode == LOW_HASH)
          {
            return H264LookAheadRateControl::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return H264LookAheadRateControl::MEDIUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264LookAheadRateControl>(hashCode);
          }

          return H264LookAheadRateControl::NOT_SET;
        }

        Aws::String GetNameForH264LookAheadRateControl(H264LookAheadRateControl enumValue)
        {
          switch(enumValue)
          {
          case H264LookAheadRateControl::HIGH:
            return "HIGH";
          case H264LookAheadRateControl::LOW:
            return "LOW";
          case H264LookAheadRateControl::MEDIUM:
            return "MEDIUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264LookAheadRateControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
