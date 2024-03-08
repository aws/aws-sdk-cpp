/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlerHistoryState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace CrawlerHistoryStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        CrawlerHistoryState GetCrawlerHistoryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return CrawlerHistoryState::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CrawlerHistoryState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CrawlerHistoryState::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return CrawlerHistoryState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrawlerHistoryState>(hashCode);
          }

          return CrawlerHistoryState::NOT_SET;
        }

        Aws::String GetNameForCrawlerHistoryState(CrawlerHistoryState enumValue)
        {
          switch(enumValue)
          {
          case CrawlerHistoryState::NOT_SET:
            return {};
          case CrawlerHistoryState::RUNNING:
            return "RUNNING";
          case CrawlerHistoryState::COMPLETED:
            return "COMPLETED";
          case CrawlerHistoryState::FAILED:
            return "FAILED";
          case CrawlerHistoryState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrawlerHistoryStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
