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

#include <aws/kinesisanalyticsv2/model/SnapshotStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace SnapshotStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SnapshotStatus GetSnapshotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return SnapshotStatus::CREATING;
          }
          else if (hashCode == READY_HASH)
          {
            return SnapshotStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SnapshotStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SnapshotStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotStatus>(hashCode);
          }

          return SnapshotStatus::NOT_SET;
        }

        Aws::String GetNameForSnapshotStatus(SnapshotStatus enumValue)
        {
          switch(enumValue)
          {
          case SnapshotStatus::CREATING:
            return "CREATING";
          case SnapshotStatus::READY:
            return "READY";
          case SnapshotStatus::DELETING:
            return "DELETING";
          case SnapshotStatus::FAILED:
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

      } // namespace SnapshotStatusMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
