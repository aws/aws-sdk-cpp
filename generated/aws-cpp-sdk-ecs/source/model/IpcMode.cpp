/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/IpcMode.h>
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
      namespace IpcModeMapper
      {

        static const int host_HASH = HashingUtils::HashString("host");
        static const int task_HASH = HashingUtils::HashString("task");
        static const int none_HASH = HashingUtils::HashString("none");


        IpcMode GetIpcModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == host_HASH)
          {
            return IpcMode::host;
          }
          else if (hashCode == task_HASH)
          {
            return IpcMode::task;
          }
          else if (hashCode == none_HASH)
          {
            return IpcMode::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpcMode>(hashCode);
          }

          return IpcMode::NOT_SET;
        }

        Aws::String GetNameForIpcMode(IpcMode enumValue)
        {
          switch(enumValue)
          {
          case IpcMode::host:
            return "host";
          case IpcMode::task:
            return "task";
          case IpcMode::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpcModeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
