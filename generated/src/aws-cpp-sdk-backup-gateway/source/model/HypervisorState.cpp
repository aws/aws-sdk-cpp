/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/HypervisorState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupGateway
  {
    namespace Model
    {
      namespace HypervisorStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        HypervisorState GetHypervisorStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return HypervisorState::PENDING;
          }
          else if (hashCode == ONLINE_HASH)
          {
            return HypervisorState::ONLINE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return HypervisorState::OFFLINE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return HypervisorState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HypervisorState>(hashCode);
          }

          return HypervisorState::NOT_SET;
        }

        Aws::String GetNameForHypervisorState(HypervisorState enumValue)
        {
          switch(enumValue)
          {
          case HypervisorState::NOT_SET:
            return {};
          case HypervisorState::PENDING:
            return "PENDING";
          case HypervisorState::ONLINE:
            return "ONLINE";
          case HypervisorState::OFFLINE:
            return "OFFLINE";
          case HypervisorState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HypervisorStateMapper
    } // namespace Model
  } // namespace BackupGateway
} // namespace Aws
