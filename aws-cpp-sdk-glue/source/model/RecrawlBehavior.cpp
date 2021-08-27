/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RecrawlBehavior.h>
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
      namespace RecrawlBehaviorMapper
      {

        static const int CRAWL_EVERYTHING_HASH = HashingUtils::HashString("CRAWL_EVERYTHING");
        static const int CRAWL_NEW_FOLDERS_ONLY_HASH = HashingUtils::HashString("CRAWL_NEW_FOLDERS_ONLY");


        RecrawlBehavior GetRecrawlBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRAWL_EVERYTHING_HASH)
          {
            return RecrawlBehavior::CRAWL_EVERYTHING;
          }
          else if (hashCode == CRAWL_NEW_FOLDERS_ONLY_HASH)
          {
            return RecrawlBehavior::CRAWL_NEW_FOLDERS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecrawlBehavior>(hashCode);
          }

          return RecrawlBehavior::NOT_SET;
        }

        Aws::String GetNameForRecrawlBehavior(RecrawlBehavior enumValue)
        {
          switch(enumValue)
          {
          case RecrawlBehavior::CRAWL_EVERYTHING:
            return "CRAWL_EVERYTHING";
          case RecrawlBehavior::CRAWL_NEW_FOLDERS_ONLY:
            return "CRAWL_NEW_FOLDERS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecrawlBehaviorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
