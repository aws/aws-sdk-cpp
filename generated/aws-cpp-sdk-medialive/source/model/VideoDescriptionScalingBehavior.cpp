/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoDescriptionScalingBehavior.h>
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
      namespace VideoDescriptionScalingBehaviorMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int STRETCH_TO_OUTPUT_HASH = HashingUtils::HashString("STRETCH_TO_OUTPUT");


        VideoDescriptionScalingBehavior GetVideoDescriptionScalingBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return VideoDescriptionScalingBehavior::DEFAULT;
          }
          else if (hashCode == STRETCH_TO_OUTPUT_HASH)
          {
            return VideoDescriptionScalingBehavior::STRETCH_TO_OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoDescriptionScalingBehavior>(hashCode);
          }

          return VideoDescriptionScalingBehavior::NOT_SET;
        }

        Aws::String GetNameForVideoDescriptionScalingBehavior(VideoDescriptionScalingBehavior enumValue)
        {
          switch(enumValue)
          {
          case VideoDescriptionScalingBehavior::DEFAULT:
            return "DEFAULT";
          case VideoDescriptionScalingBehavior::STRETCH_TO_OUTPUT:
            return "STRETCH_TO_OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoDescriptionScalingBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
