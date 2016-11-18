/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/OfferingTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace OfferingTypeValuesMapper
      {

        static const int Heavy_Utilization_HASH = HashingUtils::HashString("Heavy Utilization");
        static const int Medium_Utilization_HASH = HashingUtils::HashString("Medium Utilization");
        static const int Light_Utilization_HASH = HashingUtils::HashString("Light Utilization");
        static const int No_Upfront_HASH = HashingUtils::HashString("No Upfront");
        static const int Partial_Upfront_HASH = HashingUtils::HashString("Partial Upfront");
        static const int All_Upfront_HASH = HashingUtils::HashString("All Upfront");


        OfferingTypeValues GetOfferingTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Heavy_Utilization_HASH)
          {
            return OfferingTypeValues::Heavy_Utilization;
          }
          else if (hashCode == Medium_Utilization_HASH)
          {
            return OfferingTypeValues::Medium_Utilization;
          }
          else if (hashCode == Light_Utilization_HASH)
          {
            return OfferingTypeValues::Light_Utilization;
          }
          else if (hashCode == No_Upfront_HASH)
          {
            return OfferingTypeValues::No_Upfront;
          }
          else if (hashCode == Partial_Upfront_HASH)
          {
            return OfferingTypeValues::Partial_Upfront;
          }
          else if (hashCode == All_Upfront_HASH)
          {
            return OfferingTypeValues::All_Upfront;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingTypeValues>(hashCode);
          }

          return OfferingTypeValues::NOT_SET;
        }

        Aws::String GetNameForOfferingTypeValues(OfferingTypeValues enumValue)
        {
          switch(enumValue)
          {
          case OfferingTypeValues::Heavy_Utilization:
            return "Heavy Utilization";
          case OfferingTypeValues::Medium_Utilization:
            return "Medium Utilization";
          case OfferingTypeValues::Light_Utilization:
            return "Light Utilization";
          case OfferingTypeValues::No_Upfront:
            return "No Upfront";
          case OfferingTypeValues::Partial_Upfront:
            return "Partial Upfront";
          case OfferingTypeValues::All_Upfront:
            return "All Upfront";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OfferingTypeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
