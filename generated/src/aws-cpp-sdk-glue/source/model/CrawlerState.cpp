/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlerState.h>
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
      namespace CrawlerStateMapper
      {

        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");


        CrawlerState GetCrawlerStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return CrawlerState::READY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return CrawlerState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return CrawlerState::STOPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CrawlerState>(hashCode);
          }

          return CrawlerState::NOT_SET;
        }

        Aws::String GetNameForCrawlerState(CrawlerState enumValue)
        {
          switch(enumValue)
          {
          case CrawlerState::NOT_SET:
            return {};
          case CrawlerState::READY:
            return "READY";
          case CrawlerState::RUNNING:
            return "RUNNING";
          case CrawlerState::STOPPING:
            return "STOPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CrawlerStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
