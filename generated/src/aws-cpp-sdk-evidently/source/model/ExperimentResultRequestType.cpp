/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentResultRequestType.h>
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
      namespace ExperimentResultRequestTypeMapper
      {

        static const int BaseStat_HASH = HashingUtils::HashString("BaseStat");
        static const int TreatmentEffect_HASH = HashingUtils::HashString("TreatmentEffect");
        static const int ConfidenceInterval_HASH = HashingUtils::HashString("ConfidenceInterval");
        static const int PValue_HASH = HashingUtils::HashString("PValue");


        ExperimentResultRequestType GetExperimentResultRequestTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BaseStat_HASH)
          {
            return ExperimentResultRequestType::BaseStat;
          }
          else if (hashCode == TreatmentEffect_HASH)
          {
            return ExperimentResultRequestType::TreatmentEffect;
          }
          else if (hashCode == ConfidenceInterval_HASH)
          {
            return ExperimentResultRequestType::ConfidenceInterval;
          }
          else if (hashCode == PValue_HASH)
          {
            return ExperimentResultRequestType::PValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentResultRequestType>(hashCode);
          }

          return ExperimentResultRequestType::NOT_SET;
        }

        Aws::String GetNameForExperimentResultRequestType(ExperimentResultRequestType enumValue)
        {
          switch(enumValue)
          {
          case ExperimentResultRequestType::NOT_SET:
            return {};
          case ExperimentResultRequestType::BaseStat:
            return "BaseStat";
          case ExperimentResultRequestType::TreatmentEffect:
            return "TreatmentEffect";
          case ExperimentResultRequestType::ConfidenceInterval:
            return "ConfidenceInterval";
          case ExperimentResultRequestType::PValue:
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

      } // namespace ExperimentResultRequestTypeMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
