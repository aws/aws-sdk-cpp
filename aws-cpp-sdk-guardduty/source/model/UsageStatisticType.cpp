/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageStatisticType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace UsageStatisticTypeMapper
      {

        static const int SUM_BY_ACCOUNT_HASH = HashingUtils::HashString("SUM_BY_ACCOUNT");
        static const int SUM_BY_DATA_SOURCE_HASH = HashingUtils::HashString("SUM_BY_DATA_SOURCE");
        static const int SUM_BY_RESOURCE_HASH = HashingUtils::HashString("SUM_BY_RESOURCE");
        static const int TOP_RESOURCES_HASH = HashingUtils::HashString("TOP_RESOURCES");


        UsageStatisticType GetUsageStatisticTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_BY_ACCOUNT_HASH)
          {
            return UsageStatisticType::SUM_BY_ACCOUNT;
          }
          else if (hashCode == SUM_BY_DATA_SOURCE_HASH)
          {
            return UsageStatisticType::SUM_BY_DATA_SOURCE;
          }
          else if (hashCode == SUM_BY_RESOURCE_HASH)
          {
            return UsageStatisticType::SUM_BY_RESOURCE;
          }
          else if (hashCode == TOP_RESOURCES_HASH)
          {
            return UsageStatisticType::TOP_RESOURCES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageStatisticType>(hashCode);
          }

          return UsageStatisticType::NOT_SET;
        }

        Aws::String GetNameForUsageStatisticType(UsageStatisticType enumValue)
        {
          switch(enumValue)
          {
          case UsageStatisticType::SUM_BY_ACCOUNT:
            return "SUM_BY_ACCOUNT";
          case UsageStatisticType::SUM_BY_DATA_SOURCE:
            return "SUM_BY_DATA_SOURCE";
          case UsageStatisticType::SUM_BY_RESOURCE:
            return "SUM_BY_RESOURCE";
          case UsageStatisticType::TOP_RESOURCES:
            return "TOP_RESOURCES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageStatisticTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
