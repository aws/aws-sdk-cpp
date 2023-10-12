/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t Heavy_Utilization_HASH = ConstExprHashingUtils::HashString("Heavy Utilization");
        static constexpr uint32_t Medium_Utilization_HASH = ConstExprHashingUtils::HashString("Medium Utilization");
        static constexpr uint32_t Light_Utilization_HASH = ConstExprHashingUtils::HashString("Light Utilization");
        static constexpr uint32_t No_Upfront_HASH = ConstExprHashingUtils::HashString("No Upfront");
        static constexpr uint32_t Partial_Upfront_HASH = ConstExprHashingUtils::HashString("Partial Upfront");
        static constexpr uint32_t All_Upfront_HASH = ConstExprHashingUtils::HashString("All Upfront");


        OfferingTypeValues GetOfferingTypeValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case OfferingTypeValues::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace OfferingTypeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
