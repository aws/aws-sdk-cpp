/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/SearchJobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupSearch
  {
    namespace Model
    {
      namespace SearchJobStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SearchJobState GetSearchJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return SearchJobState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SearchJobState::COMPLETED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return SearchJobState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SearchJobState::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SearchJobState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchJobState>(hashCode);
          }

          return SearchJobState::NOT_SET;
        }

        Aws::String GetNameForSearchJobState(SearchJobState enumValue)
        {
          switch(enumValue)
          {
          case SearchJobState::NOT_SET:
            return {};
          case SearchJobState::RUNNING:
            return "RUNNING";
          case SearchJobState::COMPLETED:
            return "COMPLETED";
          case SearchJobState::STOPPING:
            return "STOPPING";
          case SearchJobState::STOPPED:
            return "STOPPED";
          case SearchJobState::FAILED:
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

      } // namespace SearchJobStateMapper
    } // namespace Model
  } // namespace BackupSearch
} // namespace Aws
