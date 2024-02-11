/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamPoolStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace KinesisVideoStreamPoolStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        KinesisVideoStreamPoolStatus GetKinesisVideoStreamPoolStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return KinesisVideoStreamPoolStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return KinesisVideoStreamPoolStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return KinesisVideoStreamPoolStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KinesisVideoStreamPoolStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return KinesisVideoStreamPoolStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KinesisVideoStreamPoolStatus>(hashCode);
          }

          return KinesisVideoStreamPoolStatus::NOT_SET;
        }

        Aws::String GetNameForKinesisVideoStreamPoolStatus(KinesisVideoStreamPoolStatus enumValue)
        {
          switch(enumValue)
          {
          case KinesisVideoStreamPoolStatus::NOT_SET:
            return {};
          case KinesisVideoStreamPoolStatus::CREATING:
            return "CREATING";
          case KinesisVideoStreamPoolStatus::ACTIVE:
            return "ACTIVE";
          case KinesisVideoStreamPoolStatus::UPDATING:
            return "UPDATING";
          case KinesisVideoStreamPoolStatus::DELETING:
            return "DELETING";
          case KinesisVideoStreamPoolStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KinesisVideoStreamPoolStatusMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
