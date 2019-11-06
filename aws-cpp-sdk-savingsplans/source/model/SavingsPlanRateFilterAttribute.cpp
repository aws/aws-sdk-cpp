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

#include <aws/savingsplans/model/SavingsPlanRateFilterAttribute.h>
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
      namespace SavingsPlanRateFilterAttributeMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int instanceFamily_HASH = HashingUtils::HashString("instanceFamily");
        static const int instanceType_HASH = HashingUtils::HashString("instanceType");
        static const int productDescription_HASH = HashingUtils::HashString("productDescription");
        static const int tenancy_HASH = HashingUtils::HashString("tenancy");
        static const int productId_HASH = HashingUtils::HashString("productId");


        SavingsPlanRateFilterAttribute GetSavingsPlanRateFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanRateFilterAttribute::region;
          }
          else if (hashCode == instanceFamily_HASH)
          {
            return SavingsPlanRateFilterAttribute::instanceFamily;
          }
          else if (hashCode == instanceType_HASH)
          {
            return SavingsPlanRateFilterAttribute::instanceType;
          }
          else if (hashCode == productDescription_HASH)
          {
            return SavingsPlanRateFilterAttribute::productDescription;
          }
          else if (hashCode == tenancy_HASH)
          {
            return SavingsPlanRateFilterAttribute::tenancy;
          }
          else if (hashCode == productId_HASH)
          {
            return SavingsPlanRateFilterAttribute::productId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRateFilterAttribute>(hashCode);
          }

          return SavingsPlanRateFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRateFilterAttribute(SavingsPlanRateFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRateFilterAttribute::region:
            return "region";
          case SavingsPlanRateFilterAttribute::instanceFamily:
            return "instanceFamily";
          case SavingsPlanRateFilterAttribute::instanceType:
            return "instanceType";
          case SavingsPlanRateFilterAttribute::productDescription:
            return "productDescription";
          case SavingsPlanRateFilterAttribute::tenancy:
            return "tenancy";
          case SavingsPlanRateFilterAttribute::productId:
            return "productId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRateFilterAttributeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
