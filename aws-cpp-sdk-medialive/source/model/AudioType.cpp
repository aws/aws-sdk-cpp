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

#include <aws/medialive/model/AudioType.h>
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
      namespace AudioTypeMapper
      {

        static const int CLEAN_EFFECTS_HASH = HashingUtils::HashString("CLEAN_EFFECTS");
        static const int HEARING_IMPAIRED_HASH = HashingUtils::HashString("HEARING_IMPAIRED");
        static const int UNDEFINED_HASH = HashingUtils::HashString("UNDEFINED");
        static const int VISUAL_IMPAIRED_COMMENTARY_HASH = HashingUtils::HashString("VISUAL_IMPAIRED_COMMENTARY");


        AudioType GetAudioTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLEAN_EFFECTS_HASH)
          {
            return AudioType::CLEAN_EFFECTS;
          }
          else if (hashCode == HEARING_IMPAIRED_HASH)
          {
            return AudioType::HEARING_IMPAIRED;
          }
          else if (hashCode == UNDEFINED_HASH)
          {
            return AudioType::UNDEFINED;
          }
          else if (hashCode == VISUAL_IMPAIRED_COMMENTARY_HASH)
          {
            return AudioType::VISUAL_IMPAIRED_COMMENTARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioType>(hashCode);
          }

          return AudioType::NOT_SET;
        }

        Aws::String GetNameForAudioType(AudioType enumValue)
        {
          switch(enumValue)
          {
          case AudioType::CLEAN_EFFECTS:
            return "CLEAN_EFFECTS";
          case AudioType::HEARING_IMPAIRED:
            return "HEARING_IMPAIRED";
          case AudioType::UNDEFINED:
            return "UNDEFINED";
          case AudioType::VISUAL_IMPAIRED_COMMENTARY:
            return "VISUAL_IMPAIRED_COMMENTARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
