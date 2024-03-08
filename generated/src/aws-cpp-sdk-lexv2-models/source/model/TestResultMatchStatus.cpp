/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestResultMatchStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestResultMatchStatusMapper
      {

        static const int Matched_HASH = HashingUtils::HashString("Matched");
        static const int Mismatched_HASH = HashingUtils::HashString("Mismatched");
        static const int ExecutionError_HASH = HashingUtils::HashString("ExecutionError");


        TestResultMatchStatus GetTestResultMatchStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Matched_HASH)
          {
            return TestResultMatchStatus::Matched;
          }
          else if (hashCode == Mismatched_HASH)
          {
            return TestResultMatchStatus::Mismatched;
          }
          else if (hashCode == ExecutionError_HASH)
          {
            return TestResultMatchStatus::ExecutionError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestResultMatchStatus>(hashCode);
          }

          return TestResultMatchStatus::NOT_SET;
        }

        Aws::String GetNameForTestResultMatchStatus(TestResultMatchStatus enumValue)
        {
          switch(enumValue)
          {
          case TestResultMatchStatus::NOT_SET:
            return {};
          case TestResultMatchStatus::Matched:
            return "Matched";
          case TestResultMatchStatus::Mismatched:
            return "Mismatched";
          case TestResultMatchStatus::ExecutionError:
            return "ExecutionError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestResultMatchStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
