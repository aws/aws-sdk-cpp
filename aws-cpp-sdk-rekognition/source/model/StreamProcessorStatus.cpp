/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StreamProcessorStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace StreamProcessorStatusMapper
      {

        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");


        StreamProcessorStatus GetStreamProcessorStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return StreamProcessorStatus::STOPPED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return StreamProcessorStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return StreamProcessorStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StreamProcessorStatus::FAILED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return StreamProcessorStatus::STOPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamProcessorStatus>(hashCode);
          }

          return StreamProcessorStatus::NOT_SET;
        }

        Aws::String GetNameForStreamProcessorStatus(StreamProcessorStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamProcessorStatus::STOPPED:
            return "STOPPED";
          case StreamProcessorStatus::STARTING:
            return "STARTING";
          case StreamProcessorStatus::RUNNING:
            return "RUNNING";
          case StreamProcessorStatus::FAILED:
            return "FAILED";
          case StreamProcessorStatus::STOPPING:
            return "STOPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamProcessorStatusMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
