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

        static const int DOSAGE_HASH = HashingUtils::HashString("DOSAGE");
        static const int DURATION_HASH = HashingUtils::HashString("DURATION");
        static const int FORM_HASH = HashingUtils::HashString("FORM");
        static const int FREQUENCY_HASH = HashingUtils::HashString("FREQUENCY");
        static const int RATE_HASH = HashingUtils::HashString("RATE");
        static const int ROUTE_OR_MODE_HASH = HashingUtils::HashString("ROUTE_OR_MODE");
        static const int STRENGTH_HASH = HashingUtils::HashString("STRENGTH");


        RxNormAttributeType GetRxNormAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
