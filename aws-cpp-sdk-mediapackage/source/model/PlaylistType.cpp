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

#include <aws/mediapackage/model/PlaylistType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace PlaylistTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int VOD_HASH = HashingUtils::HashString("VOD");


        PlaylistType GetPlaylistTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return PlaylistType::NONE;
          }
          else if (hashCode == EVENT_HASH)
          {
            return PlaylistType::EVENT;
          }
          else if (hashCode == VOD_HASH)
          {
            return PlaylistType::VOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlaylistType>(hashCode);
          }

          return PlaylistType::NOT_SET;
        }

        Aws::String GetNameForPlaylistType(PlaylistType enumValue)
        {
          switch(enumValue)
          {
          case PlaylistType::NONE:
            return "NONE";
          case PlaylistType::EVENT:
            return "EVENT";
          case PlaylistType::VOD:
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

      } // namespace PlaylistTypeMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
