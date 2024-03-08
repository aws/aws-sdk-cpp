/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/SuiteRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTDeviceAdvisor
  {
    namespace Model
    {
      namespace SuiteRunStatusMapper
      {

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int PASS_WITH_WARNINGS_HASH = HashingUtils::HashString("PASS_WITH_WARNINGS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        SuiteRunStatus GetSuiteRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return SuiteRunStatus::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return SuiteRunStatus::FAIL;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return SuiteRunStatus::CANCELED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SuiteRunStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return SuiteRunStatus::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return SuiteRunStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SuiteRunStatus::STOPPED;
          }
          else if (hashCode == PASS_WITH_WARNINGS_HASH)
          {
            return SuiteRunStatus::PASS_WITH_WARNINGS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return SuiteRunStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SuiteRunStatus>(hashCode);
          }

          return SuiteRunStatus::NOT_SET;
        }

        Aws::String GetNameForSuiteRunStatus(SuiteRunStatus enumValue)
        {
          switch(enumValue)
          {
          case SuiteRunStatus::NOT_SET:
            return {};
          case SuiteRunStatus::PASS:
            return "PASS";
          case SuiteRunStatus::FAIL:
            return "FAIL";
          case SuiteRunStatus::CANCELED:
            return "CANCELED";
          case SuiteRunStatus::PENDING:
            return "PENDING";
          case SuiteRunStatus::RUNNING:
            return "RUNNING";
          case SuiteRunStatus::STOPPING:
            return "STOPPING";
          case SuiteRunStatus::STOPPED:
            return "STOPPED";
          case SuiteRunStatus::PASS_WITH_WARNINGS:
            return "PASS_WITH_WARNINGS";
          case SuiteRunStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SuiteRunStatusMapper
    } // namespace Model
  } // namespace IoTDeviceAdvisor
} // namespace Aws
