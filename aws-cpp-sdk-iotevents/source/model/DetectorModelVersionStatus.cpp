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

#include <aws/iotevents/model/DetectorModelVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace DetectorModelVersionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DetectorModelVersionStatus GetDetectorModelVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DetectorModelVersionStatus::ACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return DetectorModelVersionStatus::ACTIVATING;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return DetectorModelVersionStatus::INACTIVE;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return DetectorModelVersionStatus::DEPRECATED;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return DetectorModelVersionStatus::DRAFT;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return DetectorModelVersionStatus::PAUSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DetectorModelVersionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectorModelVersionStatus>(hashCode);
          }

          return DetectorModelVersionStatus::NOT_SET;
        }

        Aws::String GetNameForDetectorModelVersionStatus(DetectorModelVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case DetectorModelVersionStatus::ACTIVE:
            return "ACTIVE";
          case DetectorModelVersionStatus::ACTIVATING:
            return "ACTIVATING";
          case DetectorModelVersionStatus::INACTIVE:
            return "INACTIVE";
          case DetectorModelVersionStatus::DEPRECATED:
            return "DEPRECATED";
          case DetectorModelVersionStatus::DRAFT:
            return "DRAFT";
          case DetectorModelVersionStatus::PAUSED:
            return "PAUSED";
          case DetectorModelVersionStatus::FAILED:
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

      } // namespace DetectorModelVersionStatusMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
