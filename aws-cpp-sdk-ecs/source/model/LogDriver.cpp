/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace LogDriverMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
