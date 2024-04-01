/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DesiredWorkerStatus.h>
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
      namespace DesiredWorkerStatusMapper
      {

        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        DesiredWorkerStatus GetDesiredWorkerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return DesiredWorkerStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesiredWorkerStatus>(hashCode);
          }

          return DesiredWorkerStatus::NOT_SET;
        }

        Aws::String GetNameForDesiredWorkerStatus(DesiredWorkerStatus enumValue)
        {
          switch(enumValue)
          {
          case DesiredWorkerStatus::NOT_SET:
            return {};
          case DesiredWorkerStatus::STOPPED:
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

      } // namespace DesiredWorkerStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
