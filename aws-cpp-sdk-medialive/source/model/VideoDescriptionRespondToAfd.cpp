/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
