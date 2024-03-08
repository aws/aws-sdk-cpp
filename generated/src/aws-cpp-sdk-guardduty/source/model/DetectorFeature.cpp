/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DetectorFeature.h>
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
      namespace DetectorFeatureMapper
      {

        static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");
        static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
        static const int EBS_MALWARE_PROTECTION_HASH = HashingUtils::HashString("EBS_MALWARE_PROTECTION");
        static const int RDS_LOGIN_EVENTS_HASH = HashingUtils::HashString("RDS_LOGIN_EVENTS");
        static const int EKS_RUNTIME_MONITORING_HASH = HashingUtils::HashString("EKS_RUNTIME_MONITORING");
        static const int LAMBDA_NETWORK_LOGS_HASH = HashingUtils::HashString("LAMBDA_NETWORK_LOGS");
        static const int RUNTIME_MONITORING_HASH = HashingUtils::HashString("RUNTIME_MONITORING");


        DetectorFeature GetDetectorFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return DetectorFeature::S3_DATA_EVENTS;
          }
          else if (hashCode == EKS_AUDIT_LOGS_HASH)
          {
            return DetectorFeature::EKS_AUDIT_LOGS;
          }
          else if (hashCode == EBS_MALWARE_PROTECTION_HASH)
          {
            return DetectorFeature::EBS_MALWARE_PROTECTION;
          }
          else if (hashCode == RDS_LOGIN_EVENTS_HASH)
          {
            return DetectorFeature::RDS_LOGIN_EVENTS;
          }
          else if (hashCode == EKS_RUNTIME_MONITORING_HASH)
          {
            return DetectorFeature::EKS_RUNTIME_MONITORING;
          }
          else if (hashCode == LAMBDA_NETWORK_LOGS_HASH)
          {
            return DetectorFeature::LAMBDA_NETWORK_LOGS;
          }
          else if (hashCode == RUNTIME_MONITORING_HASH)
          {
            return DetectorFeature::RUNTIME_MONITORING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectorFeature>(hashCode);
          }

          return DetectorFeature::NOT_SET;
        }

        Aws::String GetNameForDetectorFeature(DetectorFeature enumValue)
        {
          switch(enumValue)
          {
          case DetectorFeature::NOT_SET:
            return {};
          case DetectorFeature::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          case DetectorFeature::EKS_AUDIT_LOGS:
            return "EKS_AUDIT_LOGS";
          case DetectorFeature::EBS_MALWARE_PROTECTION:
            return "EBS_MALWARE_PROTECTION";
          case DetectorFeature::RDS_LOGIN_EVENTS:
            return "RDS_LOGIN_EVENTS";
          case DetectorFeature::EKS_RUNTIME_MONITORING:
            return "EKS_RUNTIME_MONITORING";
          case DetectorFeature::LAMBDA_NETWORK_LOGS:
            return "LAMBDA_NETWORK_LOGS";
          case DetectorFeature::RUNTIME_MONITORING:
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

      } // namespace DetectorFeatureMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
