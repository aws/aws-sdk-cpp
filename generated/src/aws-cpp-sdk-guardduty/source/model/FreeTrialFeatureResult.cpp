/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FreeTrialFeatureResult.h>
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
      namespace FreeTrialFeatureResultMapper
      {

        static const int FLOW_LOGS_HASH = HashingUtils::HashString("FLOW_LOGS");
        static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
        static const int DNS_LOGS_HASH = HashingUtils::HashString("DNS_LOGS");
        static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");
        static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
        static const int EBS_MALWARE_PROTECTION_HASH = HashingUtils::HashString("EBS_MALWARE_PROTECTION");
        static const int RDS_LOGIN_EVENTS_HASH = HashingUtils::HashString("RDS_LOGIN_EVENTS");
        static const int EKS_RUNTIME_MONITORING_HASH = HashingUtils::HashString("EKS_RUNTIME_MONITORING");
        static const int LAMBDA_NETWORK_LOGS_HASH = HashingUtils::HashString("LAMBDA_NETWORK_LOGS");
        static const int FARGATE_RUNTIME_MONITORING_HASH = HashingUtils::HashString("FARGATE_RUNTIME_MONITORING");
        static const int EC2_RUNTIME_MONITORING_HASH = HashingUtils::HashString("EC2_RUNTIME_MONITORING");


        FreeTrialFeatureResult GetFreeTrialFeatureResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOW_LOGS_HASH)
          {
            return FreeTrialFeatureResult::FLOW_LOGS;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return FreeTrialFeatureResult::CLOUD_TRAIL;
          }
          else if (hashCode == DNS_LOGS_HASH)
          {
            return FreeTrialFeatureResult::DNS_LOGS;
          }
          else if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return FreeTrialFeatureResult::S3_DATA_EVENTS;
          }
          else if (hashCode == EKS_AUDIT_LOGS_HASH)
          {
            return FreeTrialFeatureResult::EKS_AUDIT_LOGS;
          }
          else if (hashCode == EBS_MALWARE_PROTECTION_HASH)
          {
            return FreeTrialFeatureResult::EBS_MALWARE_PROTECTION;
          }
          else if (hashCode == RDS_LOGIN_EVENTS_HASH)
          {
            return FreeTrialFeatureResult::RDS_LOGIN_EVENTS;
          }
          else if (hashCode == EKS_RUNTIME_MONITORING_HASH)
          {
            return FreeTrialFeatureResult::EKS_RUNTIME_MONITORING;
          }
          else if (hashCode == LAMBDA_NETWORK_LOGS_HASH)
          {
            return FreeTrialFeatureResult::LAMBDA_NETWORK_LOGS;
          }
          else if (hashCode == FARGATE_RUNTIME_MONITORING_HASH)
          {
            return FreeTrialFeatureResult::FARGATE_RUNTIME_MONITORING;
          }
          else if (hashCode == EC2_RUNTIME_MONITORING_HASH)
          {
            return FreeTrialFeatureResult::EC2_RUNTIME_MONITORING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FreeTrialFeatureResult>(hashCode);
          }

          return FreeTrialFeatureResult::NOT_SET;
        }

        Aws::String GetNameForFreeTrialFeatureResult(FreeTrialFeatureResult enumValue)
        {
          switch(enumValue)
          {
          case FreeTrialFeatureResult::NOT_SET:
            return {};
          case FreeTrialFeatureResult::FLOW_LOGS:
            return "FLOW_LOGS";
          case FreeTrialFeatureResult::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case FreeTrialFeatureResult::DNS_LOGS:
            return "DNS_LOGS";
          case FreeTrialFeatureResult::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          case FreeTrialFeatureResult::EKS_AUDIT_LOGS:
            return "EKS_AUDIT_LOGS";
          case FreeTrialFeatureResult::EBS_MALWARE_PROTECTION:
            return "EBS_MALWARE_PROTECTION";
          case FreeTrialFeatureResult::RDS_LOGIN_EVENTS:
            return "RDS_LOGIN_EVENTS";
          case FreeTrialFeatureResult::EKS_RUNTIME_MONITORING:
            return "EKS_RUNTIME_MONITORING";
          case FreeTrialFeatureResult::LAMBDA_NETWORK_LOGS:
            return "LAMBDA_NETWORK_LOGS";
          case FreeTrialFeatureResult::FARGATE_RUNTIME_MONITORING:
            return "FARGATE_RUNTIME_MONITORING";
          case FreeTrialFeatureResult::EC2_RUNTIME_MONITORING:
            return "EC2_RUNTIME_MONITORING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FreeTrialFeatureResultMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
