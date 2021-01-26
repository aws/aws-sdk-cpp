/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/LogDriver.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace LogDriverMapper
      {

        static const int json_file_HASH = HashingUtils::HashString("json-file");
        static const int syslog_HASH = HashingUtils::HashString("syslog");
        static const int journald_HASH = HashingUtils::HashString("journald");
        static const int gelf_HASH = HashingUtils::HashString("gelf");
        static const int fluentd_HASH = HashingUtils::HashString("fluentd");
        static const int awslogs_HASH = HashingUtils::HashString("awslogs");
        static const int splunk_HASH = HashingUtils::HashString("splunk");
        static const int awsfirelens_HASH = HashingUtils::HashString("awsfirelens");


        LogDriver GetLogDriverForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == awsfirelens_HASH)
          {
            return LogDriver::awsfirelens;
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
          case LogDriver::awsfirelens:
            return "awsfirelens";
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
  } // namespace ECS
} // namespace Aws
