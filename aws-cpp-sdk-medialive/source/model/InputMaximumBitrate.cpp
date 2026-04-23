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

#include <aws/medialive/model/InputMaximumBitrate.h>
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
      namespace InputMaximumBitrateMapper
      {

        static const int MAX_10_MBPS_HASH = HashingUtils::HashString("MAX_10_MBPS");
        static const int MAX_20_MBPS_HASH = HashingUtils::HashString("MAX_20_MBPS");
        static const int MAX_50_MBPS_HASH = HashingUtils::HashString("MAX_50_MBPS");


        InputMaximumBitrate GetInputMaximumBitrateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAX_10_MBPS_HASH)
          {
            return InputMaximumBitrate::MAX_10_MBPS;
          }
          else if (hashCode == MAX_20_MBPS_HASH)
          {
            return InputMaximumBitrate::MAX_20_MBPS;
          }
          else if (hashCode == MAX_50_MBPS_HASH)
          {
            return InputMaximumBitrate::MAX_50_MBPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputMaximumBitrate>(hashCode);
          }

          return InputMaximumBitrate::NOT_SET;
        }

        Aws::String GetNameForInputMaximumBitrate(InputMaximumBitrate enumValue)
        {
          switch(enumValue)
          {
          case InputMaximumBitrate::MAX_10_MBPS:
            return "MAX_10_MBPS";
          case InputMaximumBitrate::MAX_20_MBPS:
            return "MAX_20_MBPS";
          case InputMaximumBitrate::MAX_50_MBPS:
            return "MAX_50_MBPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputMaximumBitrateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
