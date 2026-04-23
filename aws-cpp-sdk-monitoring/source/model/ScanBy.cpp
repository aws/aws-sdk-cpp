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

#include <aws/monitoring/model/ScanBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace ScanByMapper
      {

        static const int TimestampDescending_HASH = HashingUtils::HashString("TimestampDescending");
        static const int TimestampAscending_HASH = HashingUtils::HashString("TimestampAscending");


        ScanBy GetScanByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TimestampDescending_HASH)
          {
            return ScanBy::TimestampDescending;
          }
          else if (hashCode == TimestampAscending_HASH)
          {
            return ScanBy::TimestampAscending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanBy>(hashCode);
          }

          return ScanBy::NOT_SET;
        }

        Aws::String GetNameForScanBy(ScanBy enumValue)
        {
          switch(enumValue)
          {
          case ScanBy::TimestampDescending:
            return "TimestampDescending";
          case ScanBy::TimestampAscending:
            return "TimestampAscending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanByMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
