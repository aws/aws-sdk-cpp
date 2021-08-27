/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace SavingsPlanTypeMapper
      {

        static const int Compute_HASH = HashingUtils::HashString("Compute");
        static const int EC2Instance_HASH = HashingUtils::HashString("EC2Instance");


        SavingsPlanType GetSavingsPlanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Compute_HASH)
          {
            return SavingsPlanType::Compute;
          }
          else if (hashCode == EC2Instance_HASH)
          {
            return SavingsPlanType::EC2Instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanType>(hashCode);
          }

          return SavingsPlanType::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanType(SavingsPlanType enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanType::Compute:
            return "Compute";
          case SavingsPlanType::EC2Instance:
            return "EC2Instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanTypeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
