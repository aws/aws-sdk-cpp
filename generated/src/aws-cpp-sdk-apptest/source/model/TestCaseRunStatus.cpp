/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestCaseRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace TestCaseRunStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        TestCaseRunStatus GetTestCaseRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return TestCaseRunStatus::Success;
          }
          else if (hashCode == Running_HASH)
          {
            return TestCaseRunStatus::Running;
          }
          else if (hashCode == Failed_HASH)
          {
            return TestCaseRunStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestCaseRunStatus>(hashCode);
          }

          return TestCaseRunStatus::NOT_SET;
        }

        Aws::String GetNameForTestCaseRunStatus(TestCaseRunStatus enumValue)
        {
          switch(enumValue)
          {
          case TestCaseRunStatus::NOT_SET:
            return {};
          case TestCaseRunStatus::Success:
            return "Success";
          case TestCaseRunStatus::Running:
            return "Running";
          case TestCaseRunStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestCaseRunStatusMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
