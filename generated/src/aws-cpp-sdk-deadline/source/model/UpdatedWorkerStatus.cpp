/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdatedWorkerStatus.h>
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
      namespace UpdatedWorkerStatusMapper
      {

        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        UpdatedWorkerStatus GetUpdatedWorkerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTED_HASH)
          {
            return UpdatedWorkerStatus::STARTED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return UpdatedWorkerStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return UpdatedWorkerStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdatedWorkerStatus>(hashCode);
          }

          return UpdatedWorkerStatus::NOT_SET;
        }

        Aws::String GetNameForUpdatedWorkerStatus(UpdatedWorkerStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdatedWorkerStatus::NOT_SET:
            return {};
          case UpdatedWorkerStatus::STARTED:
            return "STARTED";
          case UpdatedWorkerStatus::STOPPING:
            return "STOPPING";
          case UpdatedWorkerStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdatedWorkerStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
