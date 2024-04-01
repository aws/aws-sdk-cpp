/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/RunAs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace RunAsMapper
      {

        static const int QUEUE_CONFIGURED_USER_HASH = HashingUtils::HashString("QUEUE_CONFIGURED_USER");
        static const int WORKER_AGENT_USER_HASH = HashingUtils::HashString("WORKER_AGENT_USER");


        RunAs GetRunAsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUE_CONFIGURED_USER_HASH)
          {
            return RunAs::QUEUE_CONFIGURED_USER;
          }
          else if (hashCode == WORKER_AGENT_USER_HASH)
          {
            return RunAs::WORKER_AGENT_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunAs>(hashCode);
          }

          return RunAs::NOT_SET;
        }

        Aws::String GetNameForRunAs(RunAs enumValue)
        {
          switch(enumValue)
          {
          case RunAs::NOT_SET:
            return {};
          case RunAs::QUEUE_CONFIGURED_USER:
            return "QUEUE_CONFIGURED_USER";
          case RunAs::WORKER_AGENT_USER:
            return "WORKER_AGENT_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunAsMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
