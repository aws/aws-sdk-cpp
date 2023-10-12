/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/LifecycleErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace LifecycleErrorCodeMapper
      {

        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t ScriptMissing_HASH = ConstExprHashingUtils::HashString("ScriptMissing");
        static constexpr uint32_t ScriptNotExecutable_HASH = ConstExprHashingUtils::HashString("ScriptNotExecutable");
        static constexpr uint32_t ScriptTimedOut_HASH = ConstExprHashingUtils::HashString("ScriptTimedOut");
        static constexpr uint32_t ScriptFailed_HASH = ConstExprHashingUtils::HashString("ScriptFailed");
        static constexpr uint32_t UnknownError_HASH = ConstExprHashingUtils::HashString("UnknownError");


        LifecycleErrorCode GetLifecycleErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return LifecycleErrorCode::Success;
          }
          else if (hashCode == ScriptMissing_HASH)
          {
            return LifecycleErrorCode::ScriptMissing;
          }
          else if (hashCode == ScriptNotExecutable_HASH)
          {
            return LifecycleErrorCode::ScriptNotExecutable;
          }
          else if (hashCode == ScriptTimedOut_HASH)
          {
            return LifecycleErrorCode::ScriptTimedOut;
          }
          else if (hashCode == ScriptFailed_HASH)
          {
            return LifecycleErrorCode::ScriptFailed;
          }
          else if (hashCode == UnknownError_HASH)
          {
            return LifecycleErrorCode::UnknownError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleErrorCode>(hashCode);
          }

          return LifecycleErrorCode::NOT_SET;
        }

        Aws::String GetNameForLifecycleErrorCode(LifecycleErrorCode enumValue)
        {
          switch(enumValue)
          {
          case LifecycleErrorCode::NOT_SET:
            return {};
          case LifecycleErrorCode::Success:
            return "Success";
          case LifecycleErrorCode::ScriptMissing:
            return "ScriptMissing";
          case LifecycleErrorCode::ScriptNotExecutable:
            return "ScriptNotExecutable";
          case LifecycleErrorCode::ScriptTimedOut:
            return "ScriptTimedOut";
          case LifecycleErrorCode::ScriptFailed:
            return "ScriptFailed";
          case LifecycleErrorCode::UnknownError:
            return "UnknownError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleErrorCodeMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
