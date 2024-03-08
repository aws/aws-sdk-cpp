/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/ResourceSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarconnections
  {
    namespace Model
    {
      namespace ResourceSyncStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        ResourceSyncStatus GetResourceSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return ResourceSyncStatus::FAILED;
          }
          else if (hashCode == INITIATED_HASH)
          {
            return ResourceSyncStatus::INITIATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ResourceSyncStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ResourceSyncStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSyncStatus>(hashCode);
          }

          return ResourceSyncStatus::NOT_SET;
        }

        Aws::String GetNameForResourceSyncStatus(ResourceSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceSyncStatus::NOT_SET:
            return {};
          case ResourceSyncStatus::FAILED:
            return "FAILED";
          case ResourceSyncStatus::INITIATED:
            return "INITIATED";
          case ResourceSyncStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ResourceSyncStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSyncStatusMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
