/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestRunStatus.h>
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
      namespace TestRunStatusMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        TestRunStatus GetTestRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return TestRunStatus::Success;
          }
          else if (hashCode == Running_HASH)
          {
            return TestRunStatus::Running;
          }
          else if (hashCode == Failed_HASH)
          {
            return TestRunStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TestRunStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestRunStatus>(hashCode);
          }

          return TestRunStatus::NOT_SET;
        }

        Aws::String GetNameForTestRunStatus(TestRunStatus enumValue)
        {
          switch(enumValue)
          {
          case TestRunStatus::NOT_SET:
            return {};
          case TestRunStatus::Success:
            return "Success";
          case TestRunStatus::Running:
            return "Running";
          case TestRunStatus::Failed:
            return "Failed";
          case TestRunStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestRunStatusMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
