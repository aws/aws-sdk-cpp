/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace ExecutionModeMapper
      {

        static const int graceful_HASH = HashingUtils::HashString("graceful");
        static const int ungraceful_HASH = HashingUtils::HashString("ungraceful");


        ExecutionMode GetExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == graceful_HASH)
          {
            return ExecutionMode::graceful;
          }
          else if (hashCode == ungraceful_HASH)
          {
            return ExecutionMode::ungraceful;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionMode>(hashCode);
          }

          return ExecutionMode::NOT_SET;
        }

        Aws::String GetNameForExecutionMode(ExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case ExecutionMode::NOT_SET:
            return {};
          case ExecutionMode::graceful:
            return "graceful";
          case ExecutionMode::ungraceful:
            return "ungraceful";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionModeMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
