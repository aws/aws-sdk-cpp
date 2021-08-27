/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace CanaryRunStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CanaryRunState GetCanaryRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return CanaryRunState::RUNNING;
          }
          else if (hashCode == PASSED_HASH)
          {
            return CanaryRunState::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CanaryRunState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryRunState>(hashCode);
          }

          return CanaryRunState::NOT_SET;
        }

        Aws::String GetNameForCanaryRunState(CanaryRunState enumValue)
        {
          switch(enumValue)
          {
          case CanaryRunState::RUNNING:
            return "RUNNING";
          case CanaryRunState::PASSED:
            return "PASSED";
          case CanaryRunState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryRunStateMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
