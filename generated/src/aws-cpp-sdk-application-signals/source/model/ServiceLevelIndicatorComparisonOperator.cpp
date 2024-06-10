/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelIndicatorComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace ServiceLevelIndicatorComparisonOperatorMapper
      {

        static const int GreaterThanOrEqualTo_HASH = HashingUtils::HashString("GreaterThanOrEqualTo");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int LessThanOrEqualTo_HASH = HashingUtils::HashString("LessThanOrEqualTo");


        ServiceLevelIndicatorComparisonOperator GetServiceLevelIndicatorComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreaterThanOrEqualTo_HASH)
          {
            return ServiceLevelIndicatorComparisonOperator::GreaterThanOrEqualTo;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return ServiceLevelIndicatorComparisonOperator::GreaterThan;
          }
          else if (hashCode == LessThan_HASH)
          {
            return ServiceLevelIndicatorComparisonOperator::LessThan;
          }
          else if (hashCode == LessThanOrEqualTo_HASH)
          {
            return ServiceLevelIndicatorComparisonOperator::LessThanOrEqualTo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceLevelIndicatorComparisonOperator>(hashCode);
          }

          return ServiceLevelIndicatorComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForServiceLevelIndicatorComparisonOperator(ServiceLevelIndicatorComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case ServiceLevelIndicatorComparisonOperator::NOT_SET:
            return {};
          case ServiceLevelIndicatorComparisonOperator::GreaterThanOrEqualTo:
            return "GreaterThanOrEqualTo";
          case ServiceLevelIndicatorComparisonOperator::GreaterThan:
            return "GreaterThan";
          case ServiceLevelIndicatorComparisonOperator::LessThan:
            return "LessThan";
          case ServiceLevelIndicatorComparisonOperator::LessThanOrEqualTo:
            return "LessThanOrEqualTo";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceLevelIndicatorComparisonOperatorMapper
    } // namespace Model
  } // namespace ApplicationSignals
} // namespace Aws
