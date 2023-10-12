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

        static constexpr uint32_t BaseStat_HASH = ConstExprHashingUtils::HashString("BaseStat");
        static constexpr uint32_t TreatmentEffect_HASH = ConstExprHashingUtils::HashString("TreatmentEffect");
        static constexpr uint32_t ConfidenceInterval_HASH = ConstExprHashingUtils::HashString("ConfidenceInterval");
        static constexpr uint32_t PValue_HASH = ConstExprHashingUtils::HashString("PValue");


        ExperimentResultRequestType GetExperimentResultRequestTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
