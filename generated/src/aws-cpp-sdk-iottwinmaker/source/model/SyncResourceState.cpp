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

        static constexpr uint32_t INITIALIZING_HASH = ConstExprHashingUtils::HashString("INITIALIZING");
        static constexpr uint32_t PROCESSING_HASH = ConstExprHashingUtils::HashString("PROCESSING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t IN_SYNC_HASH = ConstExprHashingUtils::HashString("IN_SYNC");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        SyncResourceState GetSyncResourceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SyncResourceState::NOT_SET:
            return {};
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
