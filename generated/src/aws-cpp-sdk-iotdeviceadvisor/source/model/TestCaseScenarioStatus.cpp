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

        static const int PASS_HASH = HashingUtils::HashString("PASS");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int PASS_WITH_WARNINGS_HASH = HashingUtils::HashString("PASS_WITH_WARNINGS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        TestCaseScenarioStatus GetTestCaseScenarioStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
