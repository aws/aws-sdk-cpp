/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableLicenseField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace ExportableLicenseFieldMapper
      {

        static constexpr uint32_t AccountId_HASH = ConstExprHashingUtils::HashString("AccountId");
        static constexpr uint32_t ResourceArn_HASH = ConstExprHashingUtils::HashString("ResourceArn");
        static constexpr uint32_t LookbackPeriodInDays_HASH = ConstExprHashingUtils::HashString("LookbackPeriodInDays");
        static constexpr uint32_t LastRefreshTimestamp_HASH = ConstExprHashingUtils::HashString("LastRefreshTimestamp");
        static constexpr uint32_t Finding_HASH = ConstExprHashingUtils::HashString("Finding");
        static constexpr uint32_t FindingReasonCodes_HASH = ConstExprHashingUtils::HashString("FindingReasonCodes");
        static constexpr uint32_t CurrentLicenseConfigurationNumberOfCores_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationNumberOfCores");
        static constexpr uint32_t CurrentLicenseConfigurationInstanceType_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationInstanceType");
        static constexpr uint32_t CurrentLicenseConfigurationOperatingSystem_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationOperatingSystem");
        static constexpr uint32_t CurrentLicenseConfigurationLicenseName_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationLicenseName");
        static constexpr uint32_t CurrentLicenseConfigurationLicenseEdition_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationLicenseEdition");
        static constexpr uint32_t CurrentLicenseConfigurationLicenseModel_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationLicenseModel");
        static constexpr uint32_t CurrentLicenseConfigurationLicenseVersion_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationLicenseVersion");
        static constexpr uint32_t CurrentLicenseConfigurationMetricsSource_HASH = ConstExprHashingUtils::HashString("CurrentLicenseConfigurationMetricsSource");
        static constexpr uint32_t RecommendationOptionsOperatingSystem_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsOperatingSystem");
        static constexpr uint32_t RecommendationOptionsLicenseEdition_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsLicenseEdition");
        static constexpr uint32_t RecommendationOptionsLicenseModel_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsLicenseModel");
        static constexpr uint32_t RecommendationOptionsSavingsOpportunityPercentage_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static constexpr uint32_t RecommendationOptionsEstimatedMonthlySavingsValue_HASH = ConstExprHashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static constexpr uint32_t Tags_HASH = ConstExprHashingUtils::HashString("Tags");


        ExportableLicenseField GetExportableLicenseFieldForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableLicenseField::AccountId;
          }
          else if (hashCode == ResourceArn_HASH)
          {
            return ExportableLicenseField::ResourceArn;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableLicenseField::LookbackPeriodInDays;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableLicenseField::LastRefreshTimestamp;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableLicenseField::Finding;
          }
          else if (hashCode == FindingReasonCodes_HASH)
          {
            return ExportableLicenseField::FindingReasonCodes;
          }
          else if (hashCode == CurrentLicenseConfigurationNumberOfCores_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationNumberOfCores;
          }
          else if (hashCode == CurrentLicenseConfigurationInstanceType_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationInstanceType;
          }
          else if (hashCode == CurrentLicenseConfigurationOperatingSystem_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationOperatingSystem;
          }
          else if (hashCode == CurrentLicenseConfigurationLicenseName_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationLicenseName;
          }
          else if (hashCode == CurrentLicenseConfigurationLicenseEdition_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationLicenseEdition;
          }
          else if (hashCode == CurrentLicenseConfigurationLicenseModel_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationLicenseModel;
          }
          else if (hashCode == CurrentLicenseConfigurationLicenseVersion_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationLicenseVersion;
          }
          else if (hashCode == CurrentLicenseConfigurationMetricsSource_HASH)
          {
            return ExportableLicenseField::CurrentLicenseConfigurationMetricsSource;
          }
          else if (hashCode == RecommendationOptionsOperatingSystem_HASH)
          {
            return ExportableLicenseField::RecommendationOptionsOperatingSystem;
          }
          else if (hashCode == RecommendationOptionsLicenseEdition_HASH)
          {
            return ExportableLicenseField::RecommendationOptionsLicenseEdition;
          }
          else if (hashCode == RecommendationOptionsLicenseModel_HASH)
          {
            return ExportableLicenseField::RecommendationOptionsLicenseModel;
          }
          else if (hashCode == RecommendationOptionsSavingsOpportunityPercentage_HASH)
          {
            return ExportableLicenseField::RecommendationOptionsSavingsOpportunityPercentage;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH)
          {
            return ExportableLicenseField::RecommendationOptionsEstimatedMonthlySavingsCurrency;
          }
          else if (hashCode == RecommendationOptionsEstimatedMonthlySavingsValue_HASH)
          {
            return ExportableLicenseField::RecommendationOptionsEstimatedMonthlySavingsValue;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableLicenseField::Tags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableLicenseField>(hashCode);
          }

          return ExportableLicenseField::NOT_SET;
        }

        Aws::String GetNameForExportableLicenseField(ExportableLicenseField enumValue)
        {
          switch(enumValue)
          {
          case ExportableLicenseField::NOT_SET:
            return {};
          case ExportableLicenseField::AccountId:
            return "AccountId";
          case ExportableLicenseField::ResourceArn:
            return "ResourceArn";
          case ExportableLicenseField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableLicenseField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableLicenseField::Finding:
            return "Finding";
          case ExportableLicenseField::FindingReasonCodes:
            return "FindingReasonCodes";
          case ExportableLicenseField::CurrentLicenseConfigurationNumberOfCores:
            return "CurrentLicenseConfigurationNumberOfCores";
          case ExportableLicenseField::CurrentLicenseConfigurationInstanceType:
            return "CurrentLicenseConfigurationInstanceType";
          case ExportableLicenseField::CurrentLicenseConfigurationOperatingSystem:
            return "CurrentLicenseConfigurationOperatingSystem";
          case ExportableLicenseField::CurrentLicenseConfigurationLicenseName:
            return "CurrentLicenseConfigurationLicenseName";
          case ExportableLicenseField::CurrentLicenseConfigurationLicenseEdition:
            return "CurrentLicenseConfigurationLicenseEdition";
          case ExportableLicenseField::CurrentLicenseConfigurationLicenseModel:
            return "CurrentLicenseConfigurationLicenseModel";
          case ExportableLicenseField::CurrentLicenseConfigurationLicenseVersion:
            return "CurrentLicenseConfigurationLicenseVersion";
          case ExportableLicenseField::CurrentLicenseConfigurationMetricsSource:
            return "CurrentLicenseConfigurationMetricsSource";
          case ExportableLicenseField::RecommendationOptionsOperatingSystem:
            return "RecommendationOptionsOperatingSystem";
          case ExportableLicenseField::RecommendationOptionsLicenseEdition:
            return "RecommendationOptionsLicenseEdition";
          case ExportableLicenseField::RecommendationOptionsLicenseModel:
            return "RecommendationOptionsLicenseModel";
          case ExportableLicenseField::RecommendationOptionsSavingsOpportunityPercentage:
            return "RecommendationOptionsSavingsOpportunityPercentage";
          case ExportableLicenseField::RecommendationOptionsEstimatedMonthlySavingsCurrency:
            return "RecommendationOptionsEstimatedMonthlySavingsCurrency";
          case ExportableLicenseField::RecommendationOptionsEstimatedMonthlySavingsValue:
            return "RecommendationOptionsEstimatedMonthlySavingsValue";
          case ExportableLicenseField::Tags:
            return "Tags";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportableLicenseFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
