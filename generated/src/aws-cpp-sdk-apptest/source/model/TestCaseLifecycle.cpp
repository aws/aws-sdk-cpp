/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestCaseLifecycle.h>
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
      namespace TestCaseLifecycleMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        TestCaseLifecycle GetTestCaseLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return TestCaseLifecycle::Active;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TestCaseLifecycle::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestCaseLifecycle>(hashCode);
          }

          return TestCaseLifecycle::NOT_SET;
        }

        Aws::String GetNameForTestCaseLifecycle(TestCaseLifecycle enumValue)
        {
          switch(enumValue)
          {
          case TestCaseLifecycle::NOT_SET:
            return {};
          case TestCaseLifecycle::Active:
            return "Active";
          case TestCaseLifecycle::Deleting:
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

      } // namespace TestCaseLifecycleMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
