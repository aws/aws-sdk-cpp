/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int ALREADY_ENABLED_HASH = HashingUtils::HashString("ALREADY_ENABLED");
        static const int ENABLE_IN_PROGRESS_HASH = HashingUtils::HashString("ENABLE_IN_PROGRESS");
        static const int DISABLE_IN_PROGRESS_HASH = HashingUtils::HashString("DISABLE_IN_PROGRESS");
        static const int SUSPEND_IN_PROGRESS_HASH = HashingUtils::HashString("SUSPEND_IN_PROGRESS");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int SSM_UNAVAILABLE_HASH = HashingUtils::HashString("SSM_UNAVAILABLE");
        static const int SSM_THROTTLED_HASH = HashingUtils::HashString("SSM_THROTTLED");
        static const int EVENTBRIDGE_UNAVAILABLE_HASH = HashingUtils::HashString("EVENTBRIDGE_UNAVAILABLE");
        static const int EVENTBRIDGE_THROTTLED_HASH = HashingUtils::HashString("EVENTBRIDGE_THROTTLED");
        static const int RESOURCE_SCAN_NOT_DISABLED_HASH = HashingUtils::HashString("RESOURCE_SCAN_NOT_DISABLED");
        static const int DISASSOCIATE_ALL_MEMBERS_HASH = HashingUtils::HashString("DISASSOCIATE_ALL_MEMBERS");
        static const int ACCOUNT_IS_ISOLATED_HASH = HashingUtils::HashString("ACCOUNT_IS_ISOLATED");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALREADY_ENABLED_HASH)
          {
            return ErrorCode::ALREADY_ENABLED;
          }
          else if (hashCode == ENABLE_IN_PROGRESS_HASH)
          {
            return ErrorCode::ENABLE_IN_PROGRESS;
          }
          else if (hashCode == DISABLE_IN_PROGRESS_HASH)
          {
            return ErrorCode::DISABLE_IN_PROGRESS;
          }
          else if (hashCode == SUSPEND_IN_PROGRESS_HASH)
          {
            return ErrorCode::SUSPEND_IN_PROGRESS;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return ErrorCode::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return ErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == SSM_UNAVAILABLE_HASH)
          {
            return ErrorCode::SSM_UNAVAILABLE;
          }
          else if (hashCode == SSM_THROTTLED_HASH)
          {
            return ErrorCode::SSM_THROTTLED;
          }
          else if (hashCode == EVENTBRIDGE_UNAVAILABLE_HASH)
          {
            return ErrorCode::EVENTBRIDGE_UNAVAILABLE;
          }
          else if (hashCode == EVENTBRIDGE_THROTTLED_HASH)
          {
            return ErrorCode::EVENTBRIDGE_THROTTLED;
          }
          else if (hashCode == RESOURCE_SCAN_NOT_DISABLED_HASH)
          {
            return ErrorCode::RESOURCE_SCAN_NOT_DISABLED;
          }
          else if (hashCode == DISASSOCIATE_ALL_MEMBERS_HASH)
          {
            return ErrorCode::DISASSOCIATE_ALL_MEMBERS;
          }
          else if (hashCode == ACCOUNT_IS_ISOLATED_HASH)
          {
            return ErrorCode::ACCOUNT_IS_ISOLATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::ALREADY_ENABLED:
            return "ALREADY_ENABLED";
          case ErrorCode::ENABLE_IN_PROGRESS:
            return "ENABLE_IN_PROGRESS";
          case ErrorCode::DISABLE_IN_PROGRESS:
            return "DISABLE_IN_PROGRESS";
          case ErrorCode::SUSPEND_IN_PROGRESS:
            return "SUSPEND_IN_PROGRESS";
          case ErrorCode::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case ErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ErrorCode::SSM_UNAVAILABLE:
            return "SSM_UNAVAILABLE";
          case ErrorCode::SSM_THROTTLED:
            return "SSM_THROTTLED";
          case ErrorCode::EVENTBRIDGE_UNAVAILABLE:
            return "EVENTBRIDGE_UNAVAILABLE";
          case ErrorCode::EVENTBRIDGE_THROTTLED:
            return "EVENTBRIDGE_THROTTLED";
          case ErrorCode::RESOURCE_SCAN_NOT_DISABLED:
            return "RESOURCE_SCAN_NOT_DISABLED";
          case ErrorCode::DISASSOCIATE_ALL_MEMBERS:
            return "DISASSOCIATE_ALL_MEMBERS";
          case ErrorCode::ACCOUNT_IS_ISOLATED:
            return "ACCOUNT_IS_ISOLATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
