/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/WebCrawlerMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace WebCrawlerModeMapper
      {

        static constexpr uint32_t HOST_ONLY_HASH = ConstExprHashingUtils::HashString("HOST_ONLY");
        static constexpr uint32_t SUBDOMAINS_HASH = ConstExprHashingUtils::HashString("SUBDOMAINS");
        static constexpr uint32_t EVERYTHING_HASH = ConstExprHashingUtils::HashString("EVERYTHING");


        WebCrawlerMode GetWebCrawlerModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOST_ONLY_HASH)
          {
            return WebCrawlerMode::HOST_ONLY;
          }
          else if (hashCode == SUBDOMAINS_HASH)
          {
            return WebCrawlerMode::SUBDOMAINS;
          }
          else if (hashCode == EVERYTHING_HASH)
          {
            return WebCrawlerMode::EVERYTHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebCrawlerMode>(hashCode);
          }

          return WebCrawlerMode::NOT_SET;
        }

        Aws::String GetNameForWebCrawlerMode(WebCrawlerMode enumValue)
        {
          switch(enumValue)
          {
          case WebCrawlerMode::NOT_SET:
            return {};
          case WebCrawlerMode::HOST_ONLY:
            return "HOST_ONLY";
          case WebCrawlerMode::SUBDOMAINS:
            return "SUBDOMAINS";
          case WebCrawlerMode::EVERYTHING:
            return "EVERYTHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebCrawlerModeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
