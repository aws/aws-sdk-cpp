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

#include <aws/lightsail/model/AutoSnapshotStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AutoSnapshotStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int NotFound_HASH = HashingUtils::HashString("NotFound");


        AutoSnapshotStatus GetAutoSnapshotStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return AutoSnapshotStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutoSnapshotStatus::Failed;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AutoSnapshotStatus::InProgress;
          }
          else if (hashCode == NotFound_HASH)
          {
            return AutoSnapshotStatus::NotFound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoSnapshotStatus>(hashCode);
          }

          return AutoSnapshotStatus::NOT_SET;
        }

        Aws::String GetNameForAutoSnapshotStatus(AutoSnapshotStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoSnapshotStatus::Success:
            return "Success";
          case AutoSnapshotStatus::Failed:
            return "Failed";
          case AutoSnapshotStatus::InProgress:
            return "InProgress";
          case AutoSnapshotStatus::NotFound:
            return "NotFound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoSnapshotStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
