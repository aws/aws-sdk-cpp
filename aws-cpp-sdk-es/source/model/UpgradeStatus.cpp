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

#include <aws/es/model/UpgradeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace UpgradeStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int SUCCEEDED_WITH_ISSUES_HASH = HashingUtils::HashString("SUCCEEDED_WITH_ISSUES");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        UpgradeStatus GetUpgradeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return UpgradeStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return UpgradeStatus::SUCCEEDED;
          }
          else if (hashCode == SUCCEEDED_WITH_ISSUES_HASH)
          {
            return UpgradeStatus::SUCCEEDED_WITH_ISSUES;
          }
          else if (hashCode == FAILED_HASH)
          {
            return UpgradeStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpgradeStatus>(hashCode);
          }

          return UpgradeStatus::NOT_SET;
        }

        Aws::String GetNameForUpgradeStatus(UpgradeStatus enumValue)
        {
          switch(enumValue)
          {
          case UpgradeStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case UpgradeStatus::SUCCEEDED:
            return "SUCCEEDED";
          case UpgradeStatus::SUCCEEDED_WITH_ISSUES:
            return "SUCCEEDED_WITH_ISSUES";
          case UpgradeStatus::FAILED:
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

      } // namespace UpgradeStatusMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
