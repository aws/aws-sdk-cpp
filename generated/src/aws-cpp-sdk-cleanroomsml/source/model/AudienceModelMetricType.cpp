/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/AudienceModelMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace AudienceModelMetricTypeMapper
      {

        static const int NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN_HASH = HashingUtils::HashString("NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN");
        static const int MEAN_RECIPROCAL_RANK_HASH = HashingUtils::HashString("MEAN_RECIPROCAL_RANK");
        static const int PRECISION_HASH = HashingUtils::HashString("PRECISION");
        static const int RECALL_HASH = HashingUtils::HashString("RECALL");


        AudienceModelMetricType GetAudienceModelMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN_HASH)
          {
            return AudienceModelMetricType::NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN;
          }
          else if (hashCode == MEAN_RECIPROCAL_RANK_HASH)
          {
            return AudienceModelMetricType::MEAN_RECIPROCAL_RANK;
          }
          else if (hashCode == PRECISION_HASH)
          {
            return AudienceModelMetricType::PRECISION;
          }
          else if (hashCode == RECALL_HASH)
          {
            return AudienceModelMetricType::RECALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudienceModelMetricType>(hashCode);
          }

          return AudienceModelMetricType::NOT_SET;
        }

        Aws::String GetNameForAudienceModelMetricType(AudienceModelMetricType enumValue)
        {
          switch(enumValue)
          {
          case AudienceModelMetricType::NOT_SET:
            return {};
          case AudienceModelMetricType::NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN:
            return "NORMALIZED_DISCOUNTED_CUMULATIVE_GAIN";
          case AudienceModelMetricType::MEAN_RECIPROCAL_RANK:
            return "MEAN_RECIPROCAL_RANK";
          case AudienceModelMetricType::PRECISION:
            return "PRECISION";
          case AudienceModelMetricType::RECALL:
            return "RECALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudienceModelMetricTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
