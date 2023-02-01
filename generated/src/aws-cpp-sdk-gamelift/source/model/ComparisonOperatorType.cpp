/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ComparisonOperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace ComparisonOperatorTypeMapper
      {

        static const int GreaterThanOrEqualToThreshold_HASH = HashingUtils::HashString("GreaterThanOrEqualToThreshold");
        static const int GreaterThanThreshold_HASH = HashingUtils::HashString("GreaterThanThreshold");
        static const int LessThanThreshold_HASH = HashingUtils::HashString("LessThanThreshold");
        static const int LessThanOrEqualToThreshold_HASH = HashingUtils::HashString("LessThanOrEqualToThreshold");


        ComparisonOperatorType GetComparisonOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreaterThanOrEqualToThreshold_HASH)
          {
            return ComparisonOperatorType::GreaterThanOrEqualToThreshold;
          }
          else if (hashCode == GreaterThanThreshold_HASH)
          {
            return ComparisonOperatorType::GreaterThanThreshold;
          }
          else if (hashCode == LessThanThreshold_HASH)
          {
            return ComparisonOperatorType::LessThanThreshold;
          }
          else if (hashCode == LessThanOrEqualToThreshold_HASH)
          {
            return ComparisonOperatorType::LessThanOrEqualToThreshold;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonOperatorType>(hashCode);
          }

          return ComparisonOperatorType::NOT_SET;
        }

        Aws::String GetNameForComparisonOperatorType(ComparisonOperatorType enumValue)
        {
          switch(enumValue)
          {
          case ComparisonOperatorType::GreaterThanOrEqualToThreshold:
            return "GreaterThanOrEqualToThreshold";
          case ComparisonOperatorType::GreaterThanThreshold:
            return "GreaterThanThreshold";
          case ComparisonOperatorType::LessThanThreshold:
            return "LessThanThreshold";
          case ComparisonOperatorType::LessThanOrEqualToThreshold:
            return "LessThanOrEqualToThreshold";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonOperatorTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
