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

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        CrawlerHistoryState GetCrawlerHistoryStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
