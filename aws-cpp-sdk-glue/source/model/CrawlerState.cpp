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

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");


        CrawlerState GetCrawlerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
