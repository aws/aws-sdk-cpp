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

        static const int none_HASH = HashingUtils::HashString("none");
        static const int daily_HASH = HashingUtils::HashString("daily");
        static const int weekly_HASH = HashingUtils::HashString("weekly");
        static const int monthly_HASH = HashingUtils::HashString("monthly");


        PartitionLoadFrequency GetPartitionLoadFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
