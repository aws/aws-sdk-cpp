/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/PartitionInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearch
  {
    namespace Model
    {
      namespace PartitionInstanceTypeMapper
      {

        static const int search_m1_small_HASH = HashingUtils::HashString("search.m1.small");
        static const int search_m1_large_HASH = HashingUtils::HashString("search.m1.large");
        static const int search_m2_xlarge_HASH = HashingUtils::HashString("search.m2.xlarge");
        static const int search_m2_2xlarge_HASH = HashingUtils::HashString("search.m2.2xlarge");
        static const int search_m3_medium_HASH = HashingUtils::HashString("search.m3.medium");
        static const int search_m3_large_HASH = HashingUtils::HashString("search.m3.large");
        static const int search_m3_xlarge_HASH = HashingUtils::HashString("search.m3.xlarge");
        static const int search_m3_2xlarge_HASH = HashingUtils::HashString("search.m3.2xlarge");
        static const int search_small_HASH = HashingUtils::HashString("search.small");
        static const int search_medium_HASH = HashingUtils::HashString("search.medium");
        static const int search_large_HASH = HashingUtils::HashString("search.large");
        static const int search_xlarge_HASH = HashingUtils::HashString("search.xlarge");
        static const int search_2xlarge_HASH = HashingUtils::HashString("search.2xlarge");
        static const int search_previousgeneration_small_HASH = HashingUtils::HashString("search.previousgeneration.small");
        static const int search_previousgeneration_large_HASH = HashingUtils::HashString("search.previousgeneration.large");
        static const int search_previousgeneration_xlarge_HASH = HashingUtils::HashString("search.previousgeneration.xlarge");
        static const int search_previousgeneration_2xlarge_HASH = HashingUtils::HashString("search.previousgeneration.2xlarge");


        PartitionInstanceType GetPartitionInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == search_m1_small_HASH)
          {
            return PartitionInstanceType::search_m1_small;
          }
          else if (hashCode == search_m1_large_HASH)
          {
            return PartitionInstanceType::search_m1_large;
          }
          else if (hashCode == search_m2_xlarge_HASH)
          {
            return PartitionInstanceType::search_m2_xlarge;
          }
          else if (hashCode == search_m2_2xlarge_HASH)
          {
            return PartitionInstanceType::search_m2_2xlarge;
          }
          else if (hashCode == search_m3_medium_HASH)
          {
            return PartitionInstanceType::search_m3_medium;
          }
          else if (hashCode == search_m3_large_HASH)
          {
            return PartitionInstanceType::search_m3_large;
          }
          else if (hashCode == search_m3_xlarge_HASH)
          {
            return PartitionInstanceType::search_m3_xlarge;
          }
          else if (hashCode == search_m3_2xlarge_HASH)
          {
            return PartitionInstanceType::search_m3_2xlarge;
          }
          else if (hashCode == search_small_HASH)
          {
            return PartitionInstanceType::search_small;
          }
          else if (hashCode == search_medium_HASH)
          {
            return PartitionInstanceType::search_medium;
          }
          else if (hashCode == search_large_HASH)
          {
            return PartitionInstanceType::search_large;
          }
          else if (hashCode == search_xlarge_HASH)
          {
            return PartitionInstanceType::search_xlarge;
          }
          else if (hashCode == search_2xlarge_HASH)
          {
            return PartitionInstanceType::search_2xlarge;
          }
          else if (hashCode == search_previousgeneration_small_HASH)
          {
            return PartitionInstanceType::search_previousgeneration_small;
          }
          else if (hashCode == search_previousgeneration_large_HASH)
          {
            return PartitionInstanceType::search_previousgeneration_large;
          }
          else if (hashCode == search_previousgeneration_xlarge_HASH)
          {
            return PartitionInstanceType::search_previousgeneration_xlarge;
          }
          else if (hashCode == search_previousgeneration_2xlarge_HASH)
          {
            return PartitionInstanceType::search_previousgeneration_2xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartitionInstanceType>(hashCode);
          }

          return PartitionInstanceType::NOT_SET;
        }

        Aws::String GetNameForPartitionInstanceType(PartitionInstanceType enumValue)
        {
          switch(enumValue)
          {
          case PartitionInstanceType::NOT_SET:
            return {};
          case PartitionInstanceType::search_m1_small:
            return "search.m1.small";
          case PartitionInstanceType::search_m1_large:
            return "search.m1.large";
          case PartitionInstanceType::search_m2_xlarge:
            return "search.m2.xlarge";
          case PartitionInstanceType::search_m2_2xlarge:
            return "search.m2.2xlarge";
          case PartitionInstanceType::search_m3_medium:
            return "search.m3.medium";
          case PartitionInstanceType::search_m3_large:
            return "search.m3.large";
          case PartitionInstanceType::search_m3_xlarge:
            return "search.m3.xlarge";
          case PartitionInstanceType::search_m3_2xlarge:
            return "search.m3.2xlarge";
          case PartitionInstanceType::search_small:
            return "search.small";
          case PartitionInstanceType::search_medium:
            return "search.medium";
          case PartitionInstanceType::search_large:
            return "search.large";
          case PartitionInstanceType::search_xlarge:
            return "search.xlarge";
          case PartitionInstanceType::search_2xlarge:
            return "search.2xlarge";
          case PartitionInstanceType::search_previousgeneration_small:
            return "search.previousgeneration.small";
          case PartitionInstanceType::search_previousgeneration_large:
            return "search.previousgeneration.large";
          case PartitionInstanceType::search_previousgeneration_xlarge:
            return "search.previousgeneration.xlarge";
          case PartitionInstanceType::search_previousgeneration_2xlarge:
            return "search.previousgeneration.2xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartitionInstanceTypeMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
