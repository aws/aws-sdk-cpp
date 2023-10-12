/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t core_HASH = ConstExprHashingUtils::HashString("core");
        static constexpr uint32_t cpu_HASH = ConstExprHashingUtils::HashString("cpu");
        static constexpr uint32_t data_HASH = ConstExprHashingUtils::HashString("data");
        static constexpr uint32_t fsize_HASH = ConstExprHashingUtils::HashString("fsize");
        static constexpr uint32_t locks_HASH = ConstExprHashingUtils::HashString("locks");
        static constexpr uint32_t memlock_HASH = ConstExprHashingUtils::HashString("memlock");
        static constexpr uint32_t msgqueue_HASH = ConstExprHashingUtils::HashString("msgqueue");
        static constexpr uint32_t nice_HASH = ConstExprHashingUtils::HashString("nice");
        static constexpr uint32_t nofile_HASH = ConstExprHashingUtils::HashString("nofile");
        static constexpr uint32_t nproc_HASH = ConstExprHashingUtils::HashString("nproc");
        static constexpr uint32_t rss_HASH = ConstExprHashingUtils::HashString("rss");
        static constexpr uint32_t rtprio_HASH = ConstExprHashingUtils::HashString("rtprio");
        static constexpr uint32_t rttime_HASH = ConstExprHashingUtils::HashString("rttime");
        static constexpr uint32_t sigpending_HASH = ConstExprHashingUtils::HashString("sigpending");
        static constexpr uint32_t stack_HASH = ConstExprHashingUtils::HashString("stack");


        UlimitName GetUlimitNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case UlimitName::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace UlimitNameMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
