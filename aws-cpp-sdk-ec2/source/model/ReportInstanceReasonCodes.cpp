/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int instance_stuck_in_state_HASH = HashingUtils::HashString("instance-stuck-in-state");
        static const int unresponsive_HASH = HashingUtils::HashString("unresponsive");
        static const int not_accepting_credentials_HASH = HashingUtils::HashString("not-accepting-credentials");
        static const int password_not_available_HASH = HashingUtils::HashString("password-not-available");
        static const int performance_network_HASH = HashingUtils::HashString("performance-network");
        static const int performance_instance_store_HASH = HashingUtils::HashString("performance-instance-store");
        static const int performance_ebs_volume_HASH = HashingUtils::HashString("performance-ebs-volume");
        static const int performance_other_HASH = HashingUtils::HashString("performance-other");
        static const int other_HASH = HashingUtils::HashString("other");


        ReportInstanceReasonCodes GetReportInstanceReasonCodesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace ReportInstanceReasonCodesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
