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

        static constexpr uint32_t PASS_HASH = ConstExprHashingUtils::HashString("PASS");
        static constexpr uint32_t FAIL_HASH = ConstExprHashingUtils::HashString("FAIL");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t PASS_WITH_WARNINGS_HASH = ConstExprHashingUtils::HashString("PASS_WITH_WARNINGS");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        SuiteRunStatus GetSuiteRunStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
