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

#include <aws/savingsplans/model/SavingsPlanRateServiceCode.h>
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
      namespace SavingsPlanRateServiceCodeMapper
      {

        static const int AmazonEC2_HASH = HashingUtils::HashString("AmazonEC2");
        static const int AmazonECS_HASH = HashingUtils::HashString("AmazonECS");
        static const int AWSLambda_HASH = HashingUtils::HashString("AWSLambda");


        SavingsPlanRateServiceCode GetSavingsPlanRateServiceCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AmazonEC2_HASH)
          {
            return SavingsPlanRateServiceCode::AmazonEC2;
          }
          else if (hashCode == AmazonECS_HASH)
          {
            return SavingsPlanRateServiceCode::AmazonECS;
          }
          else if (hashCode == AWSLambda_HASH)
          {
            return SavingsPlanRateServiceCode::AWSLambda;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRateServiceCode>(hashCode);
          }

          return SavingsPlanRateServiceCode::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRateServiceCode(SavingsPlanRateServiceCode enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRateServiceCode::AmazonEC2:
            return "AmazonEC2";
          case SavingsPlanRateServiceCode::AmazonECS:
            return "AmazonECS";
          case SavingsPlanRateServiceCode::AWSLambda:
            return "AWSLambda";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRateServiceCodeMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
