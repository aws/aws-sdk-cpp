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

#include <aws/mediaconvert/model/HlsAudioOnlyContainer.h>
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
      namespace HlsAudioOnlyContainerMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int M2TS_HASH = HashingUtils::HashString("M2TS");


        HlsAudioOnlyContainer GetHlsAudioOnlyContainerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return HlsAudioOnlyContainer::AUTOMATIC;
          }
          else if (hashCode == M2TS_HASH)
          {
            return HlsAudioOnlyContainer::M2TS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsAudioOnlyContainer>(hashCode);
          }

          return HlsAudioOnlyContainer::NOT_SET;
        }

        Aws::String GetNameForHlsAudioOnlyContainer(HlsAudioOnlyContainer enumValue)
        {
          switch(enumValue)
          {
          case HlsAudioOnlyContainer::AUTOMATIC:
            return "AUTOMATIC";
          case HlsAudioOnlyContainer::M2TS:
            return "M2TS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsAudioOnlyContainerMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
