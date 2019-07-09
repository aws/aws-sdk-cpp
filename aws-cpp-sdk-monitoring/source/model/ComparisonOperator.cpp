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

#include <aws/monitoring/model/ComparisonOperator.h>
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
      namespace ComparisonOperatorMapper
      {

        static const int GreaterThanOrEqualToThreshold_HASH = HashingUtils::HashString("GreaterThanOrEqualToThreshold");
        static const int GreaterThanThreshold_HASH = HashingUtils::HashString("GreaterThanThreshold");
        static const int LessThanThreshold_HASH = HashingUtils::HashString("LessThanThreshold");
        static const int LessThanOrEqualToThreshold_HASH = HashingUtils::HashString("LessThanOrEqualToThreshold");
        static const int LessThanLowerOrGreaterThanUpperThreshold_HASH = HashingUtils::HashString("LessThanLowerOrGreaterThanUpperThreshold");
        static const int LessThanLowerThreshold_HASH = HashingUtils::HashString("LessThanLowerThreshold");
        static const int GreaterThanUpperThreshold_HASH = HashingUtils::HashString("GreaterThanUpperThreshold");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreaterThanOrEqualToThreshold_HASH)
          {
            return ComparisonOperator::GreaterThanOrEqualToThreshold;
          }
          else if (hashCode == GreaterThanThreshold_HASH)
          {
            return ComparisonOperator::GreaterThanThreshold;
          }
          else if (hashCode == LessThanThreshold_HASH)
          {
            return ComparisonOperator::LessThanThreshold;
          }
          else if (hashCode == LessThanOrEqualToThreshold_HASH)
          {
            return ComparisonOperator::LessThanOrEqualToThreshold;
          }
          else if (hashCode == LessThanLowerOrGreaterThanUpperThreshold_HASH)
          {
            return ComparisonOperator::LessThanLowerOrGreaterThanUpperThreshold;
          }
          else if (hashCode == LessThanLowerThreshold_HASH)
          {
            return ComparisonOperator::LessThanLowerThreshold;
          }
          else if (hashCode == GreaterThanUpperThreshold_HASH)
          {
            return ComparisonOperator::GreaterThanUpperThreshold;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonOperator>(hashCode);
          }

          return ComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case ComparisonOperator::GreaterThanOrEqualToThreshold:
            return "GreaterThanOrEqualToThreshold";
          case ComparisonOperator::GreaterThanThreshold:
            return "GreaterThanThreshold";
          case ComparisonOperator::LessThanThreshold:
            return "LessThanThreshold";
          case ComparisonOperator::LessThanOrEqualToThreshold:
            return "LessThanOrEqualToThreshold";
          case ComparisonOperator::LessThanLowerOrGreaterThanUpperThreshold:
            return "LessThanLowerOrGreaterThanUpperThreshold";
          case ComparisonOperator::LessThanLowerThreshold:
            return "LessThanLowerThreshold";
          case ComparisonOperator::GreaterThanUpperThreshold:
            return "GreaterThanUpperThreshold";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonOperatorMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
