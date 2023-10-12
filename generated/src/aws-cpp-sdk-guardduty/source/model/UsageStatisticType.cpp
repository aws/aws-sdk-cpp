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

        static constexpr uint32_t SUM_BY_ACCOUNT_HASH = ConstExprHashingUtils::HashString("SUM_BY_ACCOUNT");
        static constexpr uint32_t SUM_BY_DATA_SOURCE_HASH = ConstExprHashingUtils::HashString("SUM_BY_DATA_SOURCE");
        static constexpr uint32_t SUM_BY_RESOURCE_HASH = ConstExprHashingUtils::HashString("SUM_BY_RESOURCE");
        static constexpr uint32_t TOP_RESOURCES_HASH = ConstExprHashingUtils::HashString("TOP_RESOURCES");
        static constexpr uint32_t SUM_BY_FEATURES_HASH = ConstExprHashingUtils::HashString("SUM_BY_FEATURES");


        UsageStatisticType GetUsageStatisticTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == SUM_BY_FEATURES_HASH)
          {
            return UsageStatisticType::SUM_BY_FEATURES;
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
          case UsageStatisticType::NOT_SET:
            return {};
          case UsageStatisticType::SUM_BY_ACCOUNT:
            return "SUM_BY_ACCOUNT";
          case UsageStatisticType::SUM_BY_DATA_SOURCE:
            return "SUM_BY_DATA_SOURCE";
          case UsageStatisticType::SUM_BY_RESOURCE:
            return "SUM_BY_RESOURCE";
          case UsageStatisticType::TOP_RESOURCES:
            return "TOP_RESOURCES";
          case UsageStatisticType::SUM_BY_FEATURES:
            return "SUM_BY_FEATURES";
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
