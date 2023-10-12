/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestCaseScenarioType.h>
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
      namespace TestCaseScenarioTypeMapper
      {

        static constexpr uint32_t Advanced_HASH = ConstExprHashingUtils::HashString("Advanced");
        static constexpr uint32_t Basic_HASH = ConstExprHashingUtils::HashString("Basic");


        TestCaseScenarioType GetTestCaseScenarioTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Advanced_HASH)
          {
            return TestCaseScenarioType::Advanced;
          }
          else if (hashCode == Basic_HASH)
          {
            return TestCaseScenarioType::Basic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestCaseScenarioType>(hashCode);
          }

          return TestCaseScenarioType::NOT_SET;
        }

        Aws::String GetNameForTestCaseScenarioType(TestCaseScenarioType enumValue)
        {
          switch(enumValue)
          {
          case TestCaseScenarioType::NOT_SET:
            return {};
          case TestCaseScenarioType::Advanced:
            return "Advanced";
          case TestCaseScenarioType::Basic:
            return "Basic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestCaseScenarioTypeMapper
    } // namespace Model
  } // namespace IoTDeviceAdvisor
} // namespace Aws
