/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthInputIncludeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace DescribeTargetHealthInputIncludeEnumMapper
      {

        static const int AnomalyDetection_HASH = HashingUtils::HashString("AnomalyDetection");
        static const int All_HASH = HashingUtils::HashString("All");


        DescribeTargetHealthInputIncludeEnum GetDescribeTargetHealthInputIncludeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AnomalyDetection_HASH)
          {
            return DescribeTargetHealthInputIncludeEnum::AnomalyDetection;
          }
          else if (hashCode == All_HASH)
          {
            return DescribeTargetHealthInputIncludeEnum::All;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeTargetHealthInputIncludeEnum>(hashCode);
          }

          return DescribeTargetHealthInputIncludeEnum::NOT_SET;
        }

        Aws::String GetNameForDescribeTargetHealthInputIncludeEnum(DescribeTargetHealthInputIncludeEnum enumValue)
        {
          switch(enumValue)
          {
          case DescribeTargetHealthInputIncludeEnum::NOT_SET:
            return {};
          case DescribeTargetHealthInputIncludeEnum::AnomalyDetection:
            return "AnomalyDetection";
          case DescribeTargetHealthInputIncludeEnum::All:
            return "All";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeTargetHealthInputIncludeEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
