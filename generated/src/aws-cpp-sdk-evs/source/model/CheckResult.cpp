/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/CheckResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EVS
  {
    namespace Model
    {
      namespace CheckResultMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        CheckResult GetCheckResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return CheckResult::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CheckResult::FAILED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return CheckResult::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CheckResult>(hashCode);
          }

          return CheckResult::NOT_SET;
        }

        Aws::String GetNameForCheckResult(CheckResult enumValue)
        {
          switch(enumValue)
          {
          case CheckResult::NOT_SET:
            return {};
          case CheckResult::PASSED:
            return "PASSED";
          case CheckResult::FAILED:
            return "FAILED";
          case CheckResult::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CheckResultMapper
    } // namespace Model
  } // namespace EVS
} // namespace Aws
