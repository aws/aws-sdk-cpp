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

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int ScriptMissing_HASH = HashingUtils::HashString("ScriptMissing");
        static const int ScriptNotExecutable_HASH = HashingUtils::HashString("ScriptNotExecutable");
        static const int ScriptTimedOut_HASH = HashingUtils::HashString("ScriptTimedOut");
        static const int ScriptFailed_HASH = HashingUtils::HashString("ScriptFailed");
        static const int UnknownError_HASH = HashingUtils::HashString("UnknownError");


        LifecycleErrorCode GetLifecycleErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
