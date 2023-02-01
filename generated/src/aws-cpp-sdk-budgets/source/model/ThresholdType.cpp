/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/ThresholdType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace ThresholdTypeMapper
      {

        static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");
        static const int ABSOLUTE_VALUE_HASH = HashingUtils::HashString("ABSOLUTE_VALUE");


        ThresholdType GetThresholdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERCENTAGE_HASH)
          {
            return ThresholdType::PERCENTAGE;
          }
          else if (hashCode == ABSOLUTE_VALUE_HASH)
          {
            return ThresholdType::ABSOLUTE_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThresholdType>(hashCode);
          }

          return ThresholdType::NOT_SET;
        }

        Aws::String GetNameForThresholdType(ThresholdType enumValue)
        {
          switch(enumValue)
          {
          case ThresholdType::PERCENTAGE:
            return "PERCENTAGE";
          case ThresholdType::ABSOLUTE_VALUE:
            return "ABSOLUTE_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThresholdTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
