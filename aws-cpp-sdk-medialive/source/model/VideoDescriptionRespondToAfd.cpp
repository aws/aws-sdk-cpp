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

#include <aws/medialive/model/VideoDescriptionRespondToAfd.h>
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
      namespace VideoDescriptionRespondToAfdMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int RESPOND_HASH = HashingUtils::HashString("RESPOND");


        VideoDescriptionRespondToAfd GetVideoDescriptionRespondToAfdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return VideoDescriptionRespondToAfd::NONE;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return VideoDescriptionRespondToAfd::PASSTHROUGH;
          }
          else if (hashCode == RESPOND_HASH)
          {
            return VideoDescriptionRespondToAfd::RESPOND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoDescriptionRespondToAfd>(hashCode);
          }

          return VideoDescriptionRespondToAfd::NOT_SET;
        }

        Aws::String GetNameForVideoDescriptionRespondToAfd(VideoDescriptionRespondToAfd enumValue)
        {
          switch(enumValue)
          {
          case VideoDescriptionRespondToAfd::NONE:
            return "NONE";
          case VideoDescriptionRespondToAfd::PASSTHROUGH:
            return "PASSTHROUGH";
          case VideoDescriptionRespondToAfd::RESPOND:
            return "RESPOND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoDescriptionRespondToAfdMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
