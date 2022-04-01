/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/PerObjectSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace PerObjectSyncStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");


        PerObjectSyncStatus GetPerObjectSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return PerObjectSyncStatus::PENDING;
          }
          else if (hashCode == IN_SYNC_HASH)
          {
            return PerObjectSyncStatus::IN_SYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PerObjectSyncStatus>(hashCode);
          }

          return PerObjectSyncStatus::NOT_SET;
        }

        Aws::String GetNameForPerObjectSyncStatus(PerObjectSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case PerObjectSyncStatus::PENDING:
            return "PENDING";
          case PerObjectSyncStatus::IN_SYNC:
            return "IN_SYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PerObjectSyncStatusMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
