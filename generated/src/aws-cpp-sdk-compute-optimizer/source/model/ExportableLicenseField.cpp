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

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int ResourceArn_HASH = HashingUtils::HashString("ResourceArn");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingReasonCodes_HASH = HashingUtils::HashString("FindingReasonCodes");
        static const int CurrentLicenseConfigurationNumberOfCores_HASH = HashingUtils::HashString("CurrentLicenseConfigurationNumberOfCores");
        static const int CurrentLicenseConfigurationInstanceType_HASH = HashingUtils::HashString("CurrentLicenseConfigurationInstanceType");
        static const int CurrentLicenseConfigurationOperatingSystem_HASH = HashingUtils::HashString("CurrentLicenseConfigurationOperatingSystem");
        static const int CurrentLicenseConfigurationLicenseName_HASH = HashingUtils::HashString("CurrentLicenseConfigurationLicenseName");
        static const int CurrentLicenseConfigurationLicenseEdition_HASH = HashingUtils::HashString("CurrentLicenseConfigurationLicenseEdition");
        static const int CurrentLicenseConfigurationLicenseModel_HASH = HashingUtils::HashString("CurrentLicenseConfigurationLicenseModel");
        static const int CurrentLicenseConfigurationLicenseVersion_HASH = HashingUtils::HashString("CurrentLicenseConfigurationLicenseVersion");
        static const int CurrentLicenseConfigurationMetricsSource_HASH = HashingUtils::HashString("CurrentLicenseConfigurationMetricsSource");
        static const int RecommendationOptionsOperatingSystem_HASH = HashingUtils::HashString("RecommendationOptionsOperatingSystem");
        static const int RecommendationOptionsLicenseEdition_HASH = HashingUtils::HashString("RecommendationOptionsLicenseEdition");
        static const int RecommendationOptionsLicenseModel_HASH = HashingUtils::HashString("RecommendationOptionsLicenseModel");
        static const int RecommendationOptionsSavingsOpportunityPercentage_HASH = HashingUtils::HashString("RecommendationOptionsSavingsOpportunityPercentage");
        static const int RecommendationOptionsEstimatedMonthlySavingsCurrency_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsCurrency");
        static const int RecommendationOptionsEstimatedMonthlySavingsValue_HASH = HashingUtils::HashString("RecommendationOptionsEstimatedMonthlySavingsValue");
        static const int Tags_HASH = HashingUtils::HashString("Tags");


        ExportableLicenseField GetExportableLicenseFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
