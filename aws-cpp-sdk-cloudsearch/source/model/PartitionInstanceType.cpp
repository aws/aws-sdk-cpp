/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PartitionInstanceTypeMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
