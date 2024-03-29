﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/HsmStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSM
  {
    namespace Model
    {
      namespace HsmStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");


        HsmStatus GetHsmStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return HsmStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return HsmStatus::RUNNING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return HsmStatus::UPDATING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return HsmStatus::SUSPENDED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return HsmStatus::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return HsmStatus::TERMINATED;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return HsmStatus::DEGRADED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HsmStatus>(hashCode);
          }

          return HsmStatus::NOT_SET;
        }

        Aws::String GetNameForHsmStatus(HsmStatus enumValue)
        {
          switch(enumValue)
          {
          case HsmStatus::NOT_SET:
            return {};
          case HsmStatus::PENDING:
            return "PENDING";
          case HsmStatus::RUNNING:
            return "RUNNING";
          case HsmStatus::UPDATING:
            return "UPDATING";
          case HsmStatus::SUSPENDED:
            return "SUSPENDED";
          case HsmStatus::TERMINATING:
            return "TERMINATING";
          case HsmStatus::TERMINATED:
            return "TERMINATED";
          case HsmStatus::DEGRADED:
            return "DEGRADED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HsmStatusMapper
    } // namespace Model
  } // namespace CloudHSM
} // namespace Aws
