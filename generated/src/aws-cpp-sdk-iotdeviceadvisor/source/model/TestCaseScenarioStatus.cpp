/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestCaseScenarioStatus.h>
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
      namespace TestCaseScenarioStatusMapper
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


        TestCaseScenarioStatus GetTestCaseScenarioStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASS_HASH)
          {
            return TestCaseScenarioStatus::PASS;
          }
          else if (hashCode == FAIL_HASH)
          {
            return TestCaseScenarioStatus::FAIL;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return TestCaseScenarioStatus::CANCELED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return TestCaseScenarioStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return TestCaseScenarioStatus::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return TestCaseScenarioStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return TestCaseScenarioStatus::STOPPED;
          }
          else if (hashCode == PASS_WITH_WARNINGS_HASH)
          {
            return TestCaseScenarioStatus::PASS_WITH_WARNINGS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TestCaseScenarioStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestCaseScenarioStatus>(hashCode);
          }

          return TestCaseScenarioStatus::NOT_SET;
        }

        Aws::String GetNameForTestCaseScenarioStatus(TestCaseScenarioStatus enumValue)
        {
          switch(enumValue)
          {
          case TestCaseScenarioStatus::NOT_SET:
            return {};
          case TestCaseScenarioStatus::PASS:
            return "PASS";
          case TestCaseScenarioStatus::FAIL:
            return "FAIL";
          case TestCaseScenarioStatus::CANCELED:
            return "CANCELED";
          case TestCaseScenarioStatus::PENDING:
            return "PENDING";
          case TestCaseScenarioStatus::RUNNING:
            return "RUNNING";
          case TestCaseScenarioStatus::STOPPING:
            return "STOPPING";
          case TestCaseScenarioStatus::STOPPED:
            return "STOPPED";
          case TestCaseScenarioStatus::PASS_WITH_WARNINGS:
            return "PASS_WITH_WARNINGS";
          case TestCaseScenarioStatus::ERROR_:
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

      } // namespace TestCaseScenarioStatusMapper
    } // namespace Model
  } // namespace IoTDeviceAdvisor
} // namespace Aws
