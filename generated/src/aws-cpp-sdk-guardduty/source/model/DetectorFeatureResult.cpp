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

        static constexpr uint32_t FLOW_LOGS_HASH = ConstExprHashingUtils::HashString("FLOW_LOGS");
        static constexpr uint32_t CLOUD_TRAIL_HASH = ConstExprHashingUtils::HashString("CLOUD_TRAIL");
        static constexpr uint32_t DNS_LOGS_HASH = ConstExprHashingUtils::HashString("DNS_LOGS");
        static constexpr uint32_t S3_DATA_EVENTS_HASH = ConstExprHashingUtils::HashString("S3_DATA_EVENTS");
        static constexpr uint32_t EKS_AUDIT_LOGS_HASH = ConstExprHashingUtils::HashString("EKS_AUDIT_LOGS");
        static constexpr uint32_t EBS_MALWARE_PROTECTION_HASH = ConstExprHashingUtils::HashString("EBS_MALWARE_PROTECTION");
        static constexpr uint32_t RDS_LOGIN_EVENTS_HASH = ConstExprHashingUtils::HashString("RDS_LOGIN_EVENTS");
        static constexpr uint32_t EKS_RUNTIME_MONITORING_HASH = ConstExprHashingUtils::HashString("EKS_RUNTIME_MONITORING");
        static constexpr uint32_t LAMBDA_NETWORK_LOGS_HASH = ConstExprHashingUtils::HashString("LAMBDA_NETWORK_LOGS");


        DetectorFeatureResult GetDetectorFeatureResultForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
