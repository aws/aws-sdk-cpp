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

#include <aws/macie2/model/UsageStatisticsFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace UsageStatisticsFilterKeyMapper
      {

        static const int accountId_HASH = HashingUtils::HashString("accountId");


        UsageStatisticsFilterKey GetUsageStatisticsFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == accountId_HASH)
          {
            return UsageStatisticsFilterKey::accountId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageStatisticsFilterKey>(hashCode);
          }

          return UsageStatisticsFilterKey::NOT_SET;
        }

        Aws::String GetNameForUsageStatisticsFilterKey(UsageStatisticsFilterKey enumValue)
        {
          switch(enumValue)
          {
          case UsageStatisticsFilterKey::accountId:
            return "accountId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageStatisticsFilterKeyMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
