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

#include <aws/medialive/model/HlsMode.h>
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
      namespace HlsModeMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int VOD_HASH = HashingUtils::HashString("VOD");


        HlsMode GetHlsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return HlsMode::LIVE;
          }
          else if (hashCode == VOD_HASH)
          {
            return HlsMode::VOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsMode>(hashCode);
          }

          return HlsMode::NOT_SET;
        }

        Aws::String GetNameForHlsMode(HlsMode enumValue)
        {
          switch(enumValue)
          {
          case HlsMode::LIVE:
            return "LIVE";
          case HlsMode::VOD:
            return "VOD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
