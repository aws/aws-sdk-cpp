/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/RepositorySyncStatus.h>
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
      namespace RepositorySyncStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INITIATED_HASH = HashingUtils::HashString("INITIATED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");


        RepositorySyncStatus GetRepositorySyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return RepositorySyncStatus::FAILED;
          }
          else if (hashCode == INITIATED_HASH)
          {
            return RepositorySyncStatus::INITIATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RepositorySyncStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return RepositorySyncStatus::SUCCEEDED;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return RepositorySyncStatus::QUEUED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositorySyncStatus>(hashCode);
          }

          return RepositorySyncStatus::NOT_SET;
        }

        Aws::String GetNameForRepositorySyncStatus(RepositorySyncStatus enumValue)
        {
          switch(enumValue)
          {
          case RepositorySyncStatus::NOT_SET:
            return {};
          case RepositorySyncStatus::FAILED:
            return "FAILED";
          case RepositorySyncStatus::INITIATED:
            return "INITIATED";
          case RepositorySyncStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RepositorySyncStatus::SUCCEEDED:
            return "SUCCEEDED";
          case RepositorySyncStatus::QUEUED:
            return "QUEUED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositorySyncStatusMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
