/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DetectorFeatureResult.h>
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
      namespace DetectorFeatureResultMapper
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
        static const int RUNTIME_MONITORING_HASH = HashingUtils::HashString("RUNTIME_MONITORING");


        DetectorFeatureResult GetDetectorFeatureResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOW_LOGS_HASH)
          {
            return DetectorFeatureResult::FLOW_LOGS;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return DetectorFeatureResult::CLOUD_TRAIL;
          }
          else if (hashCode == DNS_LOGS_HASH)
          {
            return DetectorFeatureResult::DNS_LOGS;
          }
          else if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return DetectorFeatureResult::S3_DATA_EVENTS;
          }
          else if (hashCode == EKS_AUDIT_LOGS_HASH)
          {
            return DetectorFeatureResult::EKS_AUDIT_LOGS;
          }
          else if (hashCode == EBS_MALWARE_PROTECTION_HASH)
          {
            return DetectorFeatureResult::EBS_MALWARE_PROTECTION;
          }
          else if (hashCode == RDS_LOGIN_EVENTS_HASH)
          {
            return DetectorFeatureResult::RDS_LOGIN_EVENTS;
          }
          else if (hashCode == EKS_RUNTIME_MONITORING_HASH)
          {
            return DetectorFeatureResult::EKS_RUNTIME_MONITORING;
          }
          else if (hashCode == LAMBDA_NETWORK_LOGS_HASH)
          {
            return DetectorFeatureResult::LAMBDA_NETWORK_LOGS;
          }
          else if (hashCode == RUNTIME_MONITORING_HASH)
          {
            return DetectorFeatureResult::RUNTIME_MONITORING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectorFeatureResult>(hashCode);
          }

          return DetectorFeatureResult::NOT_SET;
        }

        Aws::String GetNameForDetectorFeatureResult(DetectorFeatureResult enumValue)
        {
          switch(enumValue)
          {
          case DetectorFeatureResult::NOT_SET:
            return {};
          case DetectorFeatureResult::FLOW_LOGS:
            return "FLOW_LOGS";
          case DetectorFeatureResult::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case DetectorFeatureResult::DNS_LOGS:
            return "DNS_LOGS";
          case DetectorFeatureResult::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          case DetectorFeatureResult::EKS_AUDIT_LOGS:
            return "EKS_AUDIT_LOGS";
          case DetectorFeatureResult::EBS_MALWARE_PROTECTION:
            return "EBS_MALWARE_PROTECTION";
          case DetectorFeatureResult::RDS_LOGIN_EVENTS:
            return "RDS_LOGIN_EVENTS";
          case DetectorFeatureResult::EKS_RUNTIME_MONITORING:
            return "EKS_RUNTIME_MONITORING";
          case DetectorFeatureResult::LAMBDA_NETWORK_LOGS:
            return "LAMBDA_NETWORK_LOGS";
          case DetectorFeatureResult::RUNTIME_MONITORING:
            return "RUNTIME_MONITORING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetectorFeatureResultMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
