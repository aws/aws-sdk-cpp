/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentResultResponseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ExperimentResultResponseTypeMapper
      {

        static constexpr uint32_t Mean_HASH = ConstExprHashingUtils::HashString("Mean");
        static constexpr uint32_t TreatmentEffect_HASH = ConstExprHashingUtils::HashString("TreatmentEffect");
        static constexpr uint32_t ConfidenceIntervalUpperBound_HASH = ConstExprHashingUtils::HashString("ConfidenceIntervalUpperBound");
        static constexpr uint32_t ConfidenceIntervalLowerBound_HASH = ConstExprHashingUtils::HashString("ConfidenceIntervalLowerBound");
        static constexpr uint32_t PValue_HASH = ConstExprHashingUtils::HashString("PValue");


        ExperimentResultResponseType GetExperimentResultResponseTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Mean_HASH)
          {
            return ExperimentResultResponseType::Mean;
          }
          else if (hashCode == TreatmentEffect_HASH)
          {
            return ExperimentResultResponseType::TreatmentEffect;
          }
          else if (hashCode == ConfidenceIntervalUpperBound_HASH)
          {
            return ExperimentResultResponseType::ConfidenceIntervalUpperBound;
          }
          else if (hashCode == ConfidenceIntervalLowerBound_HASH)
          {
            return ExperimentResultResponseType::ConfidenceIntervalLowerBound;
          }
          else if (hashCode == PValue_HASH)
          {
            return ExperimentResultResponseType::PValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentResultResponseType>(hashCode);
          }

          return ExperimentResultResponseType::NOT_SET;
        }

        Aws::String GetNameForExperimentResultResponseType(ExperimentResultResponseType enumValue)
        {
          switch(enumValue)
          {
          case ExperimentResultResponseType::NOT_SET:
            return {};
          case ExperimentResultResponseType::Mean:
            return "Mean";
          case ExperimentResultResponseType::TreatmentEffect:
            return "TreatmentEffect";
          case ExperimentResultResponseType::ConfidenceIntervalUpperBound:
            return "ConfidenceIntervalUpperBound";
          case ExperimentResultResponseType::ConfidenceIntervalLowerBound:
            return "ConfidenceIntervalLowerBound";
          case ExperimentResultResponseType::PValue:
            return "PValue";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperimentResultResponseTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
