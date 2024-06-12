/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestSuiteLifecycle.h>
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
      namespace TestSuiteLifecycleMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        TestSuiteLifecycle GetTestSuiteLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return TestSuiteLifecycle::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return TestSuiteLifecycle::Updating;
          }
          else if (hashCode == Active_HASH)
          {
            return TestSuiteLifecycle::Active;
          }
          else if (hashCode == Failed_HASH)
          {
            return TestSuiteLifecycle::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TestSuiteLifecycle::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestSuiteLifecycle>(hashCode);
          }

          return TestSuiteLifecycle::NOT_SET;
        }

        Aws::String GetNameForTestSuiteLifecycle(TestSuiteLifecycle enumValue)
        {
          switch(enumValue)
          {
          case TestSuiteLifecycle::NOT_SET:
            return {};
          case TestSuiteLifecycle::Creating:
            return "Creating";
          case TestSuiteLifecycle::Updating:
            return "Updating";
          case TestSuiteLifecycle::Active:
            return "Active";
          case TestSuiteLifecycle::Failed:
            return "Failed";
          case TestSuiteLifecycle::Deleting:
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

      } // namespace TestSuiteLifecycleMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
