/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReportInstanceReasonCodes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ReportInstanceReasonCodesMapper
      {

        static constexpr uint32_t instance_stuck_in_state_HASH = ConstExprHashingUtils::HashString("instance-stuck-in-state");
        static constexpr uint32_t unresponsive_HASH = ConstExprHashingUtils::HashString("unresponsive");
        static constexpr uint32_t not_accepting_credentials_HASH = ConstExprHashingUtils::HashString("not-accepting-credentials");
        static constexpr uint32_t password_not_available_HASH = ConstExprHashingUtils::HashString("password-not-available");
        static constexpr uint32_t performance_network_HASH = ConstExprHashingUtils::HashString("performance-network");
        static constexpr uint32_t performance_instance_store_HASH = ConstExprHashingUtils::HashString("performance-instance-store");
        static constexpr uint32_t performance_ebs_volume_HASH = ConstExprHashingUtils::HashString("performance-ebs-volume");
        static constexpr uint32_t performance_other_HASH = ConstExprHashingUtils::HashString("performance-other");
        static constexpr uint32_t other_HASH = ConstExprHashingUtils::HashString("other");


        ReportInstanceReasonCodes GetReportInstanceReasonCodesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == instance_stuck_in_state_HASH)
          {
            return ReportInstanceReasonCodes::instance_stuck_in_state;
          }
          else if (hashCode == unresponsive_HASH)
          {
            return ReportInstanceReasonCodes::unresponsive;
          }
          else if (hashCode == not_accepting_credentials_HASH)
          {
            return ReportInstanceReasonCodes::not_accepting_credentials;
          }
          else if (hashCode == password_not_available_HASH)
          {
            return ReportInstanceReasonCodes::password_not_available;
          }
          else if (hashCode == performance_network_HASH)
          {
            return ReportInstanceReasonCodes::performance_network;
          }
          else if (hashCode == performance_instance_store_HASH)
          {
            return ReportInstanceReasonCodes::performance_instance_store;
          }
          else if (hashCode == performance_ebs_volume_HASH)
          {
            return ReportInstanceReasonCodes::performance_ebs_volume;
          }
          else if (hashCode == performance_other_HASH)
          {
            return ReportInstanceReasonCodes::performance_other;
          }
          else if (hashCode == other_HASH)
          {
            return ReportInstanceReasonCodes::other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportInstanceReasonCodes>(hashCode);
          }

          return ReportInstanceReasonCodes::NOT_SET;
        }

        Aws::String GetNameForReportInstanceReasonCodes(ReportInstanceReasonCodes enumValue)
        {
          switch(enumValue)
          {
          case ReportInstanceReasonCodes::NOT_SET:
            return {};
          case ReportInstanceReasonCodes::instance_stuck_in_state:
            return "instance-stuck-in-state";
          case ReportInstanceReasonCodes::unresponsive:
            return "unresponsive";
          case ReportInstanceReasonCodes::not_accepting_credentials:
            return "not-accepting-credentials";
          case ReportInstanceReasonCodes::password_not_available:
            return "password-not-available";
          case ReportInstanceReasonCodes::performance_network:
            return "performance-network";
          case ReportInstanceReasonCodes::performance_instance_store:
            return "performance-instance-store";
          case ReportInstanceReasonCodes::performance_ebs_volume:
            return "performance-ebs-volume";
          case ReportInstanceReasonCodes::performance_other:
            return "performance-other";
          case ReportInstanceReasonCodes::other:
            return "other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportInstanceReasonCodesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
