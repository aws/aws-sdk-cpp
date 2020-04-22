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

#include <aws/redshift/model/UsageLimitLimitType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace UsageLimitLimitTypeMapper
      {

        static const int time_HASH = HashingUtils::HashString("time");
        static const int data_scanned_HASH = HashingUtils::HashString("data-scanned");


        UsageLimitLimitType GetUsageLimitLimitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == time_HASH)
          {
            return UsageLimitLimitType::time;
          }
          else if (hashCode == data_scanned_HASH)
          {
            return UsageLimitLimitType::data_scanned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageLimitLimitType>(hashCode);
          }

          return UsageLimitLimitType::NOT_SET;
        }

        Aws::String GetNameForUsageLimitLimitType(UsageLimitLimitType enumValue)
        {
          switch(enumValue)
          {
          case UsageLimitLimitType::time:
            return "time";
          case UsageLimitLimitType::data_scanned:
            return "data-scanned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageLimitLimitTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
