/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/LogsConfigStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace LogsConfigStatusTypeMapper
      {

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        LogsConfigStatusType GetLogsConfigStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return LogsConfigStatusType::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LogsConfigStatusType::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogsConfigStatusType>(hashCode);
          }

          return LogsConfigStatusType::NOT_SET;
        }

        Aws::String GetNameForLogsConfigStatusType(LogsConfigStatusType enumValue)
        {
          switch(enumValue)
          {
          case LogsConfigStatusType::NOT_SET:
            return {};
          case LogsConfigStatusType::ENABLED:
            return "ENABLED";
          case LogsConfigStatusType::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogsConfigStatusTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
