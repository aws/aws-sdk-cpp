/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LabelRating.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace LabelRatingMapper
      {

        static constexpr uint32_t ANOMALY_HASH = ConstExprHashingUtils::HashString("ANOMALY");
        static constexpr uint32_t NO_ANOMALY_HASH = ConstExprHashingUtils::HashString("NO_ANOMALY");
        static constexpr uint32_t NEUTRAL_HASH = ConstExprHashingUtils::HashString("NEUTRAL");


        LabelRating GetLabelRatingForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANOMALY_HASH)
          {
            return LabelRating::ANOMALY;
          }
          else if (hashCode == NO_ANOMALY_HASH)
          {
            return LabelRating::NO_ANOMALY;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return LabelRating::NEUTRAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelRating>(hashCode);
          }

          return LabelRating::NOT_SET;
        }

        Aws::String GetNameForLabelRating(LabelRating enumValue)
        {
          switch(enumValue)
          {
          case LabelRating::NOT_SET:
            return {};
          case LabelRating::ANOMALY:
            return "ANOMALY";
          case LabelRating::NO_ANOMALY:
            return "NO_ANOMALY";
          case LabelRating::NEUTRAL:
            return "NEUTRAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelRatingMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
