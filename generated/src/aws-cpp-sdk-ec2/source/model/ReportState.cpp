/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReportState.h>
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
      namespace ReportStateMapper
      {

        static const int running_HASH = HashingUtils::HashString("running");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int complete_HASH = HashingUtils::HashString("complete");
        static const int error_HASH = HashingUtils::HashString("error");


        ReportState GetReportStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == running_HASH)
          {
            return ReportState::running;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ReportState::cancelled;
          }
          else if (hashCode == complete_HASH)
          {
            return ReportState::complete;
          }
          else if (hashCode == error_HASH)
          {
            return ReportState::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportState>(hashCode);
          }

          return ReportState::NOT_SET;
        }

        Aws::String GetNameForReportState(ReportState enumValue)
        {
          switch(enumValue)
          {
          case ReportState::NOT_SET:
            return {};
          case ReportState::running:
            return "running";
          case ReportState::cancelled:
            return "cancelled";
          case ReportState::complete:
            return "complete";
          case ReportState::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
