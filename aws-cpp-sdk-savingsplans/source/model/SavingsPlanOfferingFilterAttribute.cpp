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

#include <aws/savingsplans/model/SavingsPlanOfferingFilterAttribute.h>
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
      namespace SavingsPlanOfferingFilterAttributeMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int instanceFamily_HASH = HashingUtils::HashString("instanceFamily");


        SavingsPlanOfferingFilterAttribute GetSavingsPlanOfferingFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanOfferingFilterAttribute::region;
          }
          else if (hashCode == instanceFamily_HASH)
          {
            return SavingsPlanOfferingFilterAttribute::instanceFamily;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanOfferingFilterAttribute>(hashCode);
          }

          return SavingsPlanOfferingFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanOfferingFilterAttribute(SavingsPlanOfferingFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanOfferingFilterAttribute::region:
            return "region";
          case SavingsPlanOfferingFilterAttribute::instanceFamily:
            return "instanceFamily";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanOfferingFilterAttributeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
