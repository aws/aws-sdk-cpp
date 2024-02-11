/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace HookFailureModeMapper
      {

        static const int FAIL_HASH = HashingUtils::HashString("FAIL");
        static const int WARN_HASH = HashingUtils::HashString("WARN");


        HookFailureMode GetHookFailureModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAIL_HASH)
          {
            return HookFailureMode::FAIL;
          }
          else if (hashCode == WARN_HASH)
          {
            return HookFailureMode::WARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HookFailureMode>(hashCode);
          }

          return HookFailureMode::NOT_SET;
        }

        Aws::String GetNameForHookFailureMode(HookFailureMode enumValue)
        {
          switch(enumValue)
          {
          case HookFailureMode::NOT_SET:
            return {};
          case HookFailureMode::FAIL:
            return "FAIL";
          case HookFailureMode::WARN:
            return "WARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HookFailureModeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
