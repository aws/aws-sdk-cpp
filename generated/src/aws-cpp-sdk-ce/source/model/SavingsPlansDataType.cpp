/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/SavingsPlansDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace SavingsPlansDataTypeMapper
      {

        static const int ATTRIBUTES_HASH = HashingUtils::HashString("ATTRIBUTES");
        static const int UTILIZATION_HASH = HashingUtils::HashString("UTILIZATION");
        static const int AMORTIZED_COMMITMENT_HASH = HashingUtils::HashString("AMORTIZED_COMMITMENT");
        static const int SAVINGS_HASH = HashingUtils::HashString("SAVINGS");


        SavingsPlansDataType GetSavingsPlansDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTRIBUTES_HASH)
          {
            return SavingsPlansDataType::ATTRIBUTES;
          }
          else if (hashCode == UTILIZATION_HASH)
          {
            return SavingsPlansDataType::UTILIZATION;
          }
          else if (hashCode == AMORTIZED_COMMITMENT_HASH)
          {
            return SavingsPlansDataType::AMORTIZED_COMMITMENT;
          }
          else if (hashCode == SAVINGS_HASH)
          {
            return SavingsPlansDataType::SAVINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlansDataType>(hashCode);
          }

          return SavingsPlansDataType::NOT_SET;
        }

        Aws::String GetNameForSavingsPlansDataType(SavingsPlansDataType enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlansDataType::NOT_SET:
            return {};
          case SavingsPlansDataType::ATTRIBUTES:
            return "ATTRIBUTES";
          case SavingsPlansDataType::UTILIZATION:
            return "UTILIZATION";
          case SavingsPlansDataType::AMORTIZED_COMMITMENT:
            return "AMORTIZED_COMMITMENT";
          case SavingsPlansDataType::SAVINGS:
            return "SAVINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlansDataTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
