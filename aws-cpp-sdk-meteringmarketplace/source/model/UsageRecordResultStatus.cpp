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

#include <aws/meteringmarketplace/model/UsageRecordResultStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceMetering
  {
    namespace Model
    {
      namespace UsageRecordResultStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int CustomerNotSubscribed_HASH = HashingUtils::HashString("CustomerNotSubscribed");
        static const int DuplicateRecord_HASH = HashingUtils::HashString("DuplicateRecord");


        UsageRecordResultStatus GetUsageRecordResultStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return UsageRecordResultStatus::Success;
          }
          else if (hashCode == CustomerNotSubscribed_HASH)
          {
            return UsageRecordResultStatus::CustomerNotSubscribed;
          }
          else if (hashCode == DuplicateRecord_HASH)
          {
            return UsageRecordResultStatus::DuplicateRecord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageRecordResultStatus>(hashCode);
          }

          return UsageRecordResultStatus::NOT_SET;
        }

        Aws::String GetNameForUsageRecordResultStatus(UsageRecordResultStatus enumValue)
        {
          switch(enumValue)
          {
          case UsageRecordResultStatus::Success:
            return "Success";
          case UsageRecordResultStatus::CustomerNotSubscribed:
            return "CustomerNotSubscribed";
          case UsageRecordResultStatus::DuplicateRecord:
            return "DuplicateRecord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UsageRecordResultStatusMapper
    } // namespace Model
  } // namespace MarketplaceMetering
} // namespace Aws
