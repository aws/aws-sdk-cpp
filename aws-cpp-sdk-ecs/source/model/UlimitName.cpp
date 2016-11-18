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
#include <aws/ecs/model/UlimitName.h>
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
      namespace UlimitNameMapper
      {

        static const int core_HASH = HashingUtils::HashString("core");
        static const int cpu_HASH = HashingUtils::HashString("cpu");
        static const int data_HASH = HashingUtils::HashString("data");
        static const int fsize_HASH = HashingUtils::HashString("fsize");
        static const int locks_HASH = HashingUtils::HashString("locks");
        static const int memlock_HASH = HashingUtils::HashString("memlock");
        static const int msgqueue_HASH = HashingUtils::HashString("msgqueue");
        static const int nice_HASH = HashingUtils::HashString("nice");
        static const int nofile_HASH = HashingUtils::HashString("nofile");
        static const int nproc_HASH = HashingUtils::HashString("nproc");
        static const int rss_HASH = HashingUtils::HashString("rss");
        static const int rtprio_HASH = HashingUtils::HashString("rtprio");
        static const int rttime_HASH = HashingUtils::HashString("rttime");
        static const int sigpending_HASH = HashingUtils::HashString("sigpending");
        static const int stack_HASH = HashingUtils::HashString("stack");


        UlimitName GetUlimitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == core_HASH)
          {
            return UlimitName::core;
          }
          else if (hashCode == cpu_HASH)
          {
            return UlimitName::cpu;
          }
          else if (hashCode == data_HASH)
          {
            return UlimitName::data;
          }
          else if (hashCode == fsize_HASH)
          {
            return UlimitName::fsize;
          }
          else if (hashCode == locks_HASH)
          {
            return UlimitName::locks;
          }
          else if (hashCode == memlock_HASH)
          {
            return UlimitName::memlock;
          }
          else if (hashCode == msgqueue_HASH)
          {
            return UlimitName::msgqueue;
          }
          else if (hashCode == nice_HASH)
          {
            return UlimitName::nice;
          }
          else if (hashCode == nofile_HASH)
          {
            return UlimitName::nofile;
          }
          else if (hashCode == nproc_HASH)
          {
            return UlimitName::nproc;
          }
          else if (hashCode == rss_HASH)
          {
            return UlimitName::rss;
          }
          else if (hashCode == rtprio_HASH)
          {
            return UlimitName::rtprio;
          }
          else if (hashCode == rttime_HASH)
          {
            return UlimitName::rttime;
          }
          else if (hashCode == sigpending_HASH)
          {
            return UlimitName::sigpending;
          }
          else if (hashCode == stack_HASH)
          {
            return UlimitName::stack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UlimitName>(hashCode);
          }

          return UlimitName::NOT_SET;
        }

        Aws::String GetNameForUlimitName(UlimitName enumValue)
        {
          switch(enumValue)
          {
          case UlimitName::core:
            return "core";
          case UlimitName::cpu:
            return "cpu";
          case UlimitName::data:
            return "data";
          case UlimitName::fsize:
            return "fsize";
          case UlimitName::locks:
            return "locks";
          case UlimitName::memlock:
            return "memlock";
          case UlimitName::msgqueue:
            return "msgqueue";
          case UlimitName::nice:
            return "nice";
          case UlimitName::nofile:
            return "nofile";
          case UlimitName::nproc:
            return "nproc";
          case UlimitName::rss:
            return "rss";
          case UlimitName::rtprio:
            return "rtprio";
          case UlimitName::rttime:
            return "rttime";
          case UlimitName::sigpending:
            return "sigpending";
          case UlimitName::stack:
            return "stack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UlimitNameMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
