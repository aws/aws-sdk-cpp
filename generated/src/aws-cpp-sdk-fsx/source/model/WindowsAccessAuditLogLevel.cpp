/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/WindowsAccessAuditLogLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace WindowsAccessAuditLogLevelMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t SUCCESS_ONLY_HASH = ConstExprHashingUtils::HashString("SUCCESS_ONLY");
        static constexpr uint32_t FAILURE_ONLY_HASH = ConstExprHashingUtils::HashString("FAILURE_ONLY");
        static constexpr uint32_t SUCCESS_AND_FAILURE_HASH = ConstExprHashingUtils::HashString("SUCCESS_AND_FAILURE");


        WindowsAccessAuditLogLevel GetWindowsAccessAuditLogLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return WindowsAccessAuditLogLevel::DISABLED;
          }
          else if (hashCode == SUCCESS_ONLY_HASH)
          {
            return WindowsAccessAuditLogLevel::SUCCESS_ONLY;
          }
          else if (hashCode == FAILURE_ONLY_HASH)
          {
            return WindowsAccessAuditLogLevel::FAILURE_ONLY;
          }
          else if (hashCode == SUCCESS_AND_FAILURE_HASH)
          {
            return WindowsAccessAuditLogLevel::SUCCESS_AND_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WindowsAccessAuditLogLevel>(hashCode);
          }

          return WindowsAccessAuditLogLevel::NOT_SET;
        }

        Aws::String GetNameForWindowsAccessAuditLogLevel(WindowsAccessAuditLogLevel enumValue)
        {
          switch(enumValue)
          {
          case WindowsAccessAuditLogLevel::NOT_SET:
            return {};
          case WindowsAccessAuditLogLevel::DISABLED:
            return "DISABLED";
          case WindowsAccessAuditLogLevel::SUCCESS_ONLY:
            return "SUCCESS_ONLY";
          case WindowsAccessAuditLogLevel::FAILURE_ONLY:
            return "FAILURE_ONLY";
          case WindowsAccessAuditLogLevel::SUCCESS_AND_FAILURE:
            return "SUCCESS_AND_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WindowsAccessAuditLogLevelMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
