/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestConfigurationLifecycle.h>
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
      namespace TestConfigurationLifecycleMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        TestConfigurationLifecycle GetTestConfigurationLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return TestConfigurationLifecycle::Active;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TestConfigurationLifecycle::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestConfigurationLifecycle>(hashCode);
          }

          return TestConfigurationLifecycle::NOT_SET;
        }

        Aws::String GetNameForTestConfigurationLifecycle(TestConfigurationLifecycle enumValue)
        {
          switch(enumValue)
          {
          case TestConfigurationLifecycle::NOT_SET:
            return {};
          case TestConfigurationLifecycle::Active:
            return "Active";
          case TestConfigurationLifecycle::Deleting:
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

      } // namespace TestConfigurationLifecycleMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
