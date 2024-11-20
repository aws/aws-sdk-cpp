/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExportableIdleField.h>
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
      namespace ExportableIdleFieldMapper
      {

        static const int AccountId_HASH = HashingUtils::HashString("AccountId");
        static const int ResourceArn_HASH = HashingUtils::HashString("ResourceArn");
        static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
        static const int LastRefreshTimestamp_HASH = HashingUtils::HashString("LastRefreshTimestamp");
        static const int LookbackPeriodInDays_HASH = HashingUtils::HashString("LookbackPeriodInDays");
        static const int SavingsOpportunity_HASH = HashingUtils::HashString("SavingsOpportunity");
        static const int SavingsOpportunityAfterDiscount_HASH = HashingUtils::HashString("SavingsOpportunityAfterDiscount");
        static const int UtilizationMetricsCpuMaximum_HASH = HashingUtils::HashString("UtilizationMetricsCpuMaximum");
        static const int UtilizationMetricsMemoryMaximum_HASH = HashingUtils::HashString("UtilizationMetricsMemoryMaximum");
        static const int UtilizationMetricsNetworkOutBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsNetworkOutBytesPerSecondMaximum");
        static const int UtilizationMetricsNetworkInBytesPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsNetworkInBytesPerSecondMaximum");
        static const int UtilizationMetricsDatabaseConnectionsMaximum_HASH = HashingUtils::HashString("UtilizationMetricsDatabaseConnectionsMaximum");
        static const int UtilizationMetricsEBSVolumeReadIOPSMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeReadIOPSMaximum");
        static const int UtilizationMetricsEBSVolumeWriteIOPSMaximum_HASH = HashingUtils::HashString("UtilizationMetricsEBSVolumeWriteIOPSMaximum");
        static const int UtilizationMetricsVolumeReadOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsVolumeReadOpsPerSecondMaximum");
        static const int UtilizationMetricsVolumeWriteOpsPerSecondMaximum_HASH = HashingUtils::HashString("UtilizationMetricsVolumeWriteOpsPerSecondMaximum");
        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int FindingDescription_HASH = HashingUtils::HashString("FindingDescription");
        static const int Tags_HASH = HashingUtils::HashString("Tags");


        ExportableIdleField GetExportableIdleFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AccountId_HASH)
          {
            return ExportableIdleField::AccountId;
          }
          else if (hashCode == ResourceArn_HASH)
          {
            return ExportableIdleField::ResourceArn;
          }
          else if (hashCode == ResourceId_HASH)
          {
            return ExportableIdleField::ResourceId;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return ExportableIdleField::ResourceType;
          }
          else if (hashCode == LastRefreshTimestamp_HASH)
          {
            return ExportableIdleField::LastRefreshTimestamp;
          }
          else if (hashCode == LookbackPeriodInDays_HASH)
          {
            return ExportableIdleField::LookbackPeriodInDays;
          }
          else if (hashCode == SavingsOpportunity_HASH)
          {
            return ExportableIdleField::SavingsOpportunity;
          }
          else if (hashCode == SavingsOpportunityAfterDiscount_HASH)
          {
            return ExportableIdleField::SavingsOpportunityAfterDiscount;
          }
          else if (hashCode == UtilizationMetricsCpuMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsCpuMaximum;
          }
          else if (hashCode == UtilizationMetricsMemoryMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsMemoryMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkOutBytesPerSecondMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsNetworkOutBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsNetworkInBytesPerSecondMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsNetworkInBytesPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsDatabaseConnectionsMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsDatabaseConnectionsMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeReadIOPSMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsEBSVolumeReadIOPSMaximum;
          }
          else if (hashCode == UtilizationMetricsEBSVolumeWriteIOPSMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsEBSVolumeWriteIOPSMaximum;
          }
          else if (hashCode == UtilizationMetricsVolumeReadOpsPerSecondMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsVolumeReadOpsPerSecondMaximum;
          }
          else if (hashCode == UtilizationMetricsVolumeWriteOpsPerSecondMaximum_HASH)
          {
            return ExportableIdleField::UtilizationMetricsVolumeWriteOpsPerSecondMaximum;
          }
          else if (hashCode == Finding_HASH)
          {
            return ExportableIdleField::Finding;
          }
          else if (hashCode == FindingDescription_HASH)
          {
            return ExportableIdleField::FindingDescription;
          }
          else if (hashCode == Tags_HASH)
          {
            return ExportableIdleField::Tags;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportableIdleField>(hashCode);
          }

          return ExportableIdleField::NOT_SET;
        }

        Aws::String GetNameForExportableIdleField(ExportableIdleField enumValue)
        {
          switch(enumValue)
          {
          case ExportableIdleField::NOT_SET:
            return {};
          case ExportableIdleField::AccountId:
            return "AccountId";
          case ExportableIdleField::ResourceArn:
            return "ResourceArn";
          case ExportableIdleField::ResourceId:
            return "ResourceId";
          case ExportableIdleField::ResourceType:
            return "ResourceType";
          case ExportableIdleField::LastRefreshTimestamp:
            return "LastRefreshTimestamp";
          case ExportableIdleField::LookbackPeriodInDays:
            return "LookbackPeriodInDays";
          case ExportableIdleField::SavingsOpportunity:
            return "SavingsOpportunity";
          case ExportableIdleField::SavingsOpportunityAfterDiscount:
            return "SavingsOpportunityAfterDiscount";
          case ExportableIdleField::UtilizationMetricsCpuMaximum:
            return "UtilizationMetricsCpuMaximum";
          case ExportableIdleField::UtilizationMetricsMemoryMaximum:
            return "UtilizationMetricsMemoryMaximum";
          case ExportableIdleField::UtilizationMetricsNetworkOutBytesPerSecondMaximum:
            return "UtilizationMetricsNetworkOutBytesPerSecondMaximum";
          case ExportableIdleField::UtilizationMetricsNetworkInBytesPerSecondMaximum:
            return "UtilizationMetricsNetworkInBytesPerSecondMaximum";
          case ExportableIdleField::UtilizationMetricsDatabaseConnectionsMaximum:
            return "UtilizationMetricsDatabaseConnectionsMaximum";
          case ExportableIdleField::UtilizationMetricsEBSVolumeReadIOPSMaximum:
            return "UtilizationMetricsEBSVolumeReadIOPSMaximum";
          case ExportableIdleField::UtilizationMetricsEBSVolumeWriteIOPSMaximum:
            return "UtilizationMetricsEBSVolumeWriteIOPSMaximum";
          case ExportableIdleField::UtilizationMetricsVolumeReadOpsPerSecondMaximum:
            return "UtilizationMetricsVolumeReadOpsPerSecondMaximum";
          case ExportableIdleField::UtilizationMetricsVolumeWriteOpsPerSecondMaximum:
            return "UtilizationMetricsVolumeWriteOpsPerSecondMaximum";
          case ExportableIdleField::Finding:
            return "Finding";
          case ExportableIdleField::FindingDescription:
            return "FindingDescription";
          case ExportableIdleField::Tags:
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

      } // namespace ExportableIdleFieldMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
