/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/RxNormAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComprehendMedical
  {
    namespace Model
    {
      namespace RxNormAttributeTypeMapper
      {

        static constexpr uint32_t DOSAGE_HASH = ConstExprHashingUtils::HashString("DOSAGE");
        static constexpr uint32_t DURATION_HASH = ConstExprHashingUtils::HashString("DURATION");
        static constexpr uint32_t FORM_HASH = ConstExprHashingUtils::HashString("FORM");
        static constexpr uint32_t FREQUENCY_HASH = ConstExprHashingUtils::HashString("FREQUENCY");
        static constexpr uint32_t RATE_HASH = ConstExprHashingUtils::HashString("RATE");
        static constexpr uint32_t ROUTE_OR_MODE_HASH = ConstExprHashingUtils::HashString("ROUTE_OR_MODE");
        static constexpr uint32_t STRENGTH_HASH = ConstExprHashingUtils::HashString("STRENGTH");


        RxNormAttributeType GetRxNormAttributeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOSAGE_HASH)
          {
            return RxNormAttributeType::DOSAGE;
          }
          else if (hashCode == DURATION_HASH)
          {
            return RxNormAttributeType::DURATION;
          }
          else if (hashCode == FORM_HASH)
          {
            return RxNormAttributeType::FORM;
          }
          else if (hashCode == FREQUENCY_HASH)
          {
            return RxNormAttributeType::FREQUENCY;
          }
          else if (hashCode == RATE_HASH)
          {
            return RxNormAttributeType::RATE;
          }
          else if (hashCode == ROUTE_OR_MODE_HASH)
          {
            return RxNormAttributeType::ROUTE_OR_MODE;
          }
          else if (hashCode == STRENGTH_HASH)
          {
            return RxNormAttributeType::STRENGTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RxNormAttributeType>(hashCode);
          }

          return RxNormAttributeType::NOT_SET;
        }

        Aws::String GetNameForRxNormAttributeType(RxNormAttributeType enumValue)
        {
          switch(enumValue)
          {
          case RxNormAttributeType::NOT_SET:
            return {};
          case RxNormAttributeType::DOSAGE:
            return "DOSAGE";
          case RxNormAttributeType::DURATION:
            return "DURATION";
          case RxNormAttributeType::FORM:
            return "FORM";
          case RxNormAttributeType::FREQUENCY:
            return "FREQUENCY";
          case RxNormAttributeType::RATE:
            return "RATE";
          case RxNormAttributeType::ROUTE_OR_MODE:
            return "ROUTE_OR_MODE";
          case RxNormAttributeType::STRENGTH:
            return "STRENGTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RxNormAttributeTypeMapper
    } // namespace Model
  } // namespace ComprehendMedical
} // namespace Aws
