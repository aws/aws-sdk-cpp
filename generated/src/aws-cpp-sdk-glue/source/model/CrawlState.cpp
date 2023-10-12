/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlState.h>
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
      namespace CrawlStateMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        CrawlState GetCrawlStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return CrawlState::RUNNING;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return CrawlState::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CrawlState::CANCELLED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return CrawlState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CrawlState::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CrawlState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrawlState>(hashCode);
          }

          return CrawlState::NOT_SET;
        }

        Aws::String GetNameForCrawlState(CrawlState enumValue)
        {
          switch(enumValue)
          {
          case CrawlState::NOT_SET:
            return {};
          case CrawlState::RUNNING:
            return "RUNNING";
          case CrawlState::CANCELLING:
            return "CANCELLING";
          case CrawlState::CANCELLED:
            return "CANCELLED";
          case CrawlState::SUCCEEDED:
            return "SUCCEEDED";
          case CrawlState::FAILED:
            return "FAILED";
          case CrawlState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrawlStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
