/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LastLaunchResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LastLaunchResultMapper
      {

        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        LastLaunchResult GetLastLaunchResultForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return LastLaunchResult::NOT_STARTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return LastLaunchResult::PENDING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return LastLaunchResult::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LastLaunchResult::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastLaunchResult>(hashCode);
          }

          return LastLaunchResult::NOT_SET;
        }

        Aws::String GetNameForLastLaunchResult(LastLaunchResult enumValue)
        {
          switch(enumValue)
          {
          case LastLaunchResult::NOT_SET:
            return {};
          case LastLaunchResult::NOT_STARTED:
            return "NOT_STARTED";
          case LastLaunchResult::PENDING:
            return "PENDING";
          case LastLaunchResult::SUCCEEDED:
            return "SUCCEEDED";
          case LastLaunchResult::FAILED:
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

      } // namespace LastLaunchResultMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
