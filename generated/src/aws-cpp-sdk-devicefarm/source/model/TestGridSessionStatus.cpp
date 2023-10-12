/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/TestGridSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace TestGridSessionStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CLOSED_HASH = ConstExprHashingUtils::HashString("CLOSED");
        static constexpr uint32_t ERRORED_HASH = ConstExprHashingUtils::HashString("ERRORED");


        TestGridSessionStatus GetTestGridSessionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TestGridSessionStatus::ACTIVE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return TestGridSessionStatus::CLOSED;
          }
          else if (hashCode == ERRORED_HASH)
          {
            return TestGridSessionStatus::ERRORED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestGridSessionStatus>(hashCode);
          }

          return TestGridSessionStatus::NOT_SET;
        }

        Aws::String GetNameForTestGridSessionStatus(TestGridSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case TestGridSessionStatus::NOT_SET:
            return {};
          case TestGridSessionStatus::ACTIVE:
            return "ACTIVE";
          case TestGridSessionStatus::CLOSED:
            return "CLOSED";
          case TestGridSessionStatus::ERRORED:
            return "ERRORED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestGridSessionStatusMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
