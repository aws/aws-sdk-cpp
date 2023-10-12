/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PartitionLoadFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace PartitionLoadFrequencyMapper
      {

        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");
        static constexpr uint32_t daily_HASH = ConstExprHashingUtils::HashString("daily");
        static constexpr uint32_t weekly_HASH = ConstExprHashingUtils::HashString("weekly");
        static constexpr uint32_t monthly_HASH = ConstExprHashingUtils::HashString("monthly");


        PartitionLoadFrequency GetPartitionLoadFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return PartitionLoadFrequency::none;
          }
          else if (hashCode == daily_HASH)
          {
            return PartitionLoadFrequency::daily;
          }
          else if (hashCode == weekly_HASH)
          {
            return PartitionLoadFrequency::weekly;
          }
          else if (hashCode == monthly_HASH)
          {
            return PartitionLoadFrequency::monthly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartitionLoadFrequency>(hashCode);
          }

          return PartitionLoadFrequency::NOT_SET;
        }

        Aws::String GetNameForPartitionLoadFrequency(PartitionLoadFrequency enumValue)
        {
          switch(enumValue)
          {
          case PartitionLoadFrequency::NOT_SET:
            return {};
          case PartitionLoadFrequency::none:
            return "none";
          case PartitionLoadFrequency::daily:
            return "daily";
          case PartitionLoadFrequency::weekly:
            return "weekly";
          case PartitionLoadFrequency::monthly:
            return "monthly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartitionLoadFrequencyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
