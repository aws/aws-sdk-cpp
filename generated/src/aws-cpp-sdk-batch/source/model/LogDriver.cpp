/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/LogDriver.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace LogDriverMapper
      {

        static constexpr uint32_t json_file_HASH = ConstExprHashingUtils::HashString("json-file");
        static constexpr uint32_t syslog_HASH = ConstExprHashingUtils::HashString("syslog");
        static constexpr uint32_t journald_HASH = ConstExprHashingUtils::HashString("journald");
        static constexpr uint32_t gelf_HASH = ConstExprHashingUtils::HashString("gelf");
        static constexpr uint32_t fluentd_HASH = ConstExprHashingUtils::HashString("fluentd");
        static constexpr uint32_t awslogs_HASH = ConstExprHashingUtils::HashString("awslogs");
        static constexpr uint32_t splunk_HASH = ConstExprHashingUtils::HashString("splunk");


        LogDriver GetLogDriverForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == json_file_HASH)
          {
            return LogDriver::json_file;
          }
          else if (hashCode == syslog_HASH)
          {
            return LogDriver::syslog;
          }
          else if (hashCode == journald_HASH)
          {
            return LogDriver::journald;
          }
          else if (hashCode == gelf_HASH)
          {
            return LogDriver::gelf;
          }
          else if (hashCode == fluentd_HASH)
          {
            return LogDriver::fluentd;
          }
          else if (hashCode == awslogs_HASH)
          {
            return LogDriver::awslogs;
          }
          else if (hashCode == splunk_HASH)
          {
            return LogDriver::splunk;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogDriver>(hashCode);
          }

          return LogDriver::NOT_SET;
        }

        Aws::String GetNameForLogDriver(LogDriver enumValue)
        {
          switch(enumValue)
          {
          case LogDriver::NOT_SET:
            return {};
          case LogDriver::json_file:
            return "json-file";
          case LogDriver::syslog:
            return "syslog";
          case LogDriver::journald:
            return "journald";
          case LogDriver::gelf:
            return "gelf";
          case LogDriver::fluentd:
            return "fluentd";
          case LogDriver::awslogs:
            return "awslogs";
          case LogDriver::splunk:
            return "splunk";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogDriverMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
