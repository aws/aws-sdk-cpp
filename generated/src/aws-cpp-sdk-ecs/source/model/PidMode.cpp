/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PidMode.h>
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
      namespace PidModeMapper
      {

        static const int host_HASH = HashingUtils::HashString("host");
        static const int task_HASH = HashingUtils::HashString("task");


        PidMode GetPidModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == host_HASH)
          {
            return PidMode::host;
          }
          else if (hashCode == task_HASH)
          {
            return PidMode::task;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PidMode>(hashCode);
          }

          return PidMode::NOT_SET;
        }

        Aws::String GetNameForPidMode(PidMode enumValue)
        {
          switch(enumValue)
          {
          case PidMode::host:
            return "host";
          case PidMode::task:
            return "task";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PidModeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
