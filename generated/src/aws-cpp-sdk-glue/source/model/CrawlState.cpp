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

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        CrawlState GetCrawlStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
