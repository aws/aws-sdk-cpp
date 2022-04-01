/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace InstanceStatusMapper
      {

        static const int CREATION_IN_PROGRESS_HASH = HashingUtils::HashString("CREATION_IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");


        InstanceStatus GetInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATION_IN_PROGRESS_HASH)
          {
            return InstanceStatus::CREATION_IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return InstanceStatus::ACTIVE;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return InstanceStatus::CREATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStatus>(hashCode);
          }

          return InstanceStatus::NOT_SET;
        }

        Aws::String GetNameForInstanceStatus(InstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case InstanceStatus::CREATION_IN_PROGRESS:
            return "CREATION_IN_PROGRESS";
          case InstanceStatus::ACTIVE:
            return "ACTIVE";
          case InstanceStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
