/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CrawlState GetCrawlStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return CrawlState::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return CrawlState::SUCCEEDED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CrawlState::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CrawlState::FAILED;
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
          case CrawlState::RUNNING:
            return "RUNNING";
          case CrawlState::SUCCEEDED:
            return "SUCCEEDED";
          case CrawlState::CANCELLED:
            return "CANCELLED";
          case CrawlState::FAILED:
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

      } // namespace CrawlStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
