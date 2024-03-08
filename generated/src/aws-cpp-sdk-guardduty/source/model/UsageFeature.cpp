/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageFeature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace UsageFeatureMapper
      {

        static const int FLOW_LOGS_HASH = HashingUtils::HashString("FLOW_LOGS");
        static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
        static const int DNS_LOGS_HASH = HashingUtils::HashString("DNS_LOGS");
        static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");
        static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
        static const int EBS_MALWARE_PROTECTION_HASH = HashingUtils::HashString("EBS_MALWARE_PROTECTION");
        static const int RDS_LOGIN_EVENTS_HASH = HashingUtils::HashString("RDS_LOGIN_EVENTS");
        static const int LAMBDA_NETWORK_LOGS_HASH = HashingUtils::HashString("LAMBDA_NETWORK_LOGS");
        static const int EKS_RUNTIME_MONITORING_HASH = HashingUtils::HashString("EKS_RUNTIME_MONITORING");
        static const int FARGATE_RUNTIME_MONITORING_HASH = HashingUtils::HashString("FARGATE_RUNTIME_MONITORING");
        static const int EC2_RUNTIME_MONITORING_HASH = HashingUtils::HashString("EC2_RUNTIME_MONITORING");
        static const int RDS_DBI_PROTECTION_PROVISIONED_HASH = HashingUtils::HashString("RDS_DBI_PROTECTION_PROVISIONED");
        static const int RDS_DBI_PROTECTION_SERVERLESS_HASH = HashingUtils::HashString("RDS_DBI_PROTECTION_SERVERLESS");


        UsageFeature GetUsageFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOW_LOGS_HASH)
          {
            return UsageFeature::FLOW_LOGS;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return UsageFeature::CLOUD_TRAIL;
          }
          else if (hashCode == DNS_LOGS_HASH)
          {
            return UsageFeature::DNS_LOGS;
          }
          else if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return UsageFeature::S3_DATA_EVENTS;
          }
          else if (hashCode == EKS_AUDIT_LOGS_HASH)
          {
            return UsageFeature::EKS_AUDIT_LOGS;
          }
          else if (hashCode == EBS_MALWARE_PROTECTION_HASH)
          {
            return UsageFeature::EBS_MALWARE_PROTECTION;
          }
          else if (hashCode == RDS_LOGIN_EVENTS_HASH)
          {
            return UsageFeature::RDS_LOGIN_EVENTS;
          }
          else if (hashCode == LAMBDA_NETWORK_LOGS_HASH)
          {
            return UsageFeature::LAMBDA_NETWORK_LOGS;
          }
          else if (hashCode == EKS_RUNTIME_MONITORING_HASH)
          {
            return UsageFeature::EKS_RUNTIME_MONITORING;
          }
          else if (hashCode == FARGATE_RUNTIME_MONITORING_HASH)
          {
            return UsageFeature::FARGATE_RUNTIME_MONITORING;
          }
          else if (hashCode == EC2_RUNTIME_MONITORING_HASH)
          {
            return UsageFeature::EC2_RUNTIME_MONITORING;
          }
          else if (hashCode == RDS_DBI_PROTECTION_PROVISIONED_HASH)
          {
            return UsageFeature::RDS_DBI_PROTECTION_PROVISIONED;
          }
          else if (hashCode == RDS_DBI_PROTECTION_SERVERLESS_HASH)
          {
            return UsageFeature::RDS_DBI_PROTECTION_SERVERLESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageFeature>(hashCode);
          }

          return UsageFeature::NOT_SET;
        }

        Aws::String GetNameForUsageFeature(UsageFeature enumValue)
        {
          switch(enumValue)
          {
          case UsageFeature::NOT_SET:
            return {};
          case UsageFeature::FLOW_LOGS:
            return "FLOW_LOGS";
          case UsageFeature::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case UsageFeature::DNS_LOGS:
            return "DNS_LOGS";
          case UsageFeature::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          case UsageFeature::EKS_AUDIT_LOGS:
            return "EKS_AUDIT_LOGS";
          case UsageFeature::EBS_MALWARE_PROTECTION:
            return "EBS_MALWARE_PROTECTION";
          case UsageFeature::RDS_LOGIN_EVENTS:
            return "RDS_LOGIN_EVENTS";
          case UsageFeature::LAMBDA_NETWORK_LOGS:
            return "LAMBDA_NETWORK_LOGS";
          case UsageFeature::EKS_RUNTIME_MONITORING:
            return "EKS_RUNTIME_MONITORING";
          case UsageFeature::FARGATE_RUNTIME_MONITORING:
            return "FARGATE_RUNTIME_MONITORING";
          case UsageFeature::EC2_RUNTIME_MONITORING:
            return "EC2_RUNTIME_MONITORING";
          case UsageFeature::RDS_DBI_PROTECTION_PROVISIONED:
            return "RDS_DBI_PROTECTION_PROVISIONED";
          case UsageFeature::RDS_DBI_PROTECTION_SERVERLESS:
            return "RDS_DBI_PROTECTION_SERVERLESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageFeatureMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
