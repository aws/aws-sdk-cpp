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

        static const int Mean_HASH = HashingUtils::HashString("Mean");
        static const int TreatmentEffect_HASH = HashingUtils::HashString("TreatmentEffect");
        static const int ConfidenceIntervalUpperBound_HASH = HashingUtils::HashString("ConfidenceIntervalUpperBound");
        static const int ConfidenceIntervalLowerBound_HASH = HashingUtils::HashString("ConfidenceIntervalLowerBound");
        static const int PValue_HASH = HashingUtils::HashString("PValue");


        ExperimentResultResponseType GetExperimentResultResponseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
