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

#include <aws/savingsplans/model/SavingsPlansFilterName.h>
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
      namespace SavingsPlansFilterNameMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int ec2_instance_family_HASH = HashingUtils::HashString("ec2-instance-family");
        static const int commitment_HASH = HashingUtils::HashString("commitment");
        static const int upfront_HASH = HashingUtils::HashString("upfront");
        static const int term_HASH = HashingUtils::HashString("term");
        static const int savings_plan_type_HASH = HashingUtils::HashString("savings-plan-type");
        static const int payment_option_HASH = HashingUtils::HashString("payment-option");
        static const int start_HASH = HashingUtils::HashString("start");
        static const int end_HASH = HashingUtils::HashString("end");


        SavingsPlansFilterName GetSavingsPlansFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlansFilterName::region;
          }
          else if (hashCode == ec2_instance_family_HASH)
          {
            return SavingsPlansFilterName::ec2_instance_family;
          }
          else if (hashCode == commitment_HASH)
          {
            return SavingsPlansFilterName::commitment;
          }
          else if (hashCode == upfront_HASH)
          {
            return SavingsPlansFilterName::upfront;
          }
          else if (hashCode == term_HASH)
          {
            return SavingsPlansFilterName::term;
          }
          else if (hashCode == savings_plan_type_HASH)
          {
            return SavingsPlansFilterName::savings_plan_type;
          }
          else if (hashCode == payment_option_HASH)
          {
            return SavingsPlansFilterName::payment_option;
          }
          else if (hashCode == start_HASH)
          {
            return SavingsPlansFilterName::start;
          }
          else if (hashCode == end_HASH)
          {
            return SavingsPlansFilterName::end;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlansFilterName>(hashCode);
          }

          return SavingsPlansFilterName::NOT_SET;
        }

        Aws::String GetNameForSavingsPlansFilterName(SavingsPlansFilterName enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlansFilterName::region:
            return "region";
          case SavingsPlansFilterName::ec2_instance_family:
            return "ec2-instance-family";
          case SavingsPlansFilterName::commitment:
            return "commitment";
          case SavingsPlansFilterName::upfront:
            return "upfront";
          case SavingsPlansFilterName::term:
            return "term";
          case SavingsPlansFilterName::savings_plan_type:
            return "savings-plan-type";
          case SavingsPlansFilterName::payment_option:
            return "payment-option";
          case SavingsPlansFilterName::start:
            return "start";
          case SavingsPlansFilterName::end:
            return "end";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlansFilterNameMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
