/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/InstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace InstanceStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");


        InstanceStatus GetInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return InstanceStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return InstanceStatus::ACTIVE;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return InstanceStatus::TERMINATING;
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
          case InstanceStatus::PENDING:
            return "PENDING";
          case InstanceStatus::ACTIVE:
            return "ACTIVE";
          case InstanceStatus::TERMINATING:
            return "TERMINATING";
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
  } // namespace GameLift
} // namespace Aws
