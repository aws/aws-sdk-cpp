/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/SignalType.h>
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
      namespace SignalTypeMapper
      {

        static const int FINDING_HASH = HashingUtils::HashString("FINDING");
        static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
        static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");
        static const int EKS_AUDIT_LOGS_HASH = HashingUtils::HashString("EKS_AUDIT_LOGS");
        static const int FLOW_LOGS_HASH = HashingUtils::HashString("FLOW_LOGS");
        static const int DNS_LOGS_HASH = HashingUtils::HashString("DNS_LOGS");
        static const int RUNTIME_MONITORING_HASH = HashingUtils::HashString("RUNTIME_MONITORING");


        SignalType GetSignalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINDING_HASH)
          {
            return SignalType::FINDING;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return SignalType::CLOUD_TRAIL;
          }
          else if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return SignalType::S3_DATA_EVENTS;
          }
          else if (hashCode == EKS_AUDIT_LOGS_HASH)
          {
            return SignalType::EKS_AUDIT_LOGS;
          }
          else if (hashCode == FLOW_LOGS_HASH)
          {
            return SignalType::FLOW_LOGS;
          }
          else if (hashCode == DNS_LOGS_HASH)
          {
            return SignalType::DNS_LOGS;
          }
          else if (hashCode == RUNTIME_MONITORING_HASH)
          {
            return SignalType::RUNTIME_MONITORING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalType>(hashCode);
          }

          return SignalType::NOT_SET;
        }

        Aws::String GetNameForSignalType(SignalType enumValue)
        {
          switch(enumValue)
          {
          case SignalType::NOT_SET:
            return {};
          case SignalType::FINDING:
            return "FINDING";
          case SignalType::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case SignalType::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          case SignalType::EKS_AUDIT_LOGS:
            return "EKS_AUDIT_LOGS";
          case SignalType::FLOW_LOGS:
            return "FLOW_LOGS";
          case SignalType::DNS_LOGS:
            return "DNS_LOGS";
          case SignalType::RUNTIME_MONITORING:
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

      } // namespace SignalTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
