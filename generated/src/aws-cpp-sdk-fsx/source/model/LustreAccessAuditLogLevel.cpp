/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreAccessAuditLogLevel.h>
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
      namespace LustreAccessAuditLogLevelMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t WARN_ONLY_HASH = ConstExprHashingUtils::HashString("WARN_ONLY");
        static constexpr uint32_t ERROR_ONLY_HASH = ConstExprHashingUtils::HashString("ERROR_ONLY");
        static constexpr uint32_t WARN_ERROR_HASH = ConstExprHashingUtils::HashString("WARN_ERROR");


        LustreAccessAuditLogLevel GetLustreAccessAuditLogLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return LustreAccessAuditLogLevel::DISABLED;
          }
          else if (hashCode == WARN_ONLY_HASH)
          {
            return LustreAccessAuditLogLevel::WARN_ONLY;
          }
          else if (hashCode == ERROR_ONLY_HASH)
          {
            return LustreAccessAuditLogLevel::ERROR_ONLY;
          }
          else if (hashCode == WARN_ERROR_HASH)
          {
            return LustreAccessAuditLogLevel::WARN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LustreAccessAuditLogLevel>(hashCode);
          }

          return LustreAccessAuditLogLevel::NOT_SET;
        }

        Aws::String GetNameForLustreAccessAuditLogLevel(LustreAccessAuditLogLevel enumValue)
        {
          switch(enumValue)
          {
          case LustreAccessAuditLogLevel::NOT_SET:
            return {};
          case LustreAccessAuditLogLevel::DISABLED:
            return "DISABLED";
          case LustreAccessAuditLogLevel::WARN_ONLY:
            return "WARN_ONLY";
          case LustreAccessAuditLogLevel::ERROR_ONLY:
            return "ERROR_ONLY";
          case LustreAccessAuditLogLevel::WARN_ERROR:
            return "WARN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LustreAccessAuditLogLevelMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
