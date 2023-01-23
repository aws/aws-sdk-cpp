/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SyncResourceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace SyncResourceStateMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        SyncResourceState GetSyncResourceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return SyncResourceState::INITIALIZING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return SyncResourceState::PROCESSING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return SyncResourceState::DELETED;
          }
          else if (hashCode == IN_SYNC_HASH)
          {
            return SyncResourceState::IN_SYNC;
          }
          else if (hashCode == ERROR__HASH)
          {
            return SyncResourceState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncResourceState>(hashCode);
          }

          return SyncResourceState::NOT_SET;
        }

        Aws::String GetNameForSyncResourceState(SyncResourceState enumValue)
        {
          switch(enumValue)
          {
          case SyncResourceState::INITIALIZING:
            return "INITIALIZING";
          case SyncResourceState::PROCESSING:
            return "PROCESSING";
          case SyncResourceState::DELETED:
            return "DELETED";
          case SyncResourceState::IN_SYNC:
            return "IN_SYNC";
          case SyncResourceState::ERROR_:
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

      } // namespace SyncResourceStateMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
