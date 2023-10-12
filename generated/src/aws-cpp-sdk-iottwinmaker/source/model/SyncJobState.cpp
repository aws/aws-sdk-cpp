/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SyncJobState.h>
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
      namespace SyncJobStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t INITIALIZING_HASH = ConstExprHashingUtils::HashString("INITIALIZING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        SyncJobState GetSyncJobStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return SyncJobState::CREATING;
          }
          else if (hashCode == INITIALIZING_HASH)
          {
            return SyncJobState::INITIALIZING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return SyncJobState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SyncJobState::DELETING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return SyncJobState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncJobState>(hashCode);
          }

          return SyncJobState::NOT_SET;
        }

        Aws::String GetNameForSyncJobState(SyncJobState enumValue)
        {
          switch(enumValue)
          {
          case SyncJobState::NOT_SET:
            return {};
          case SyncJobState::CREATING:
            return "CREATING";
          case SyncJobState::INITIALIZING:
            return "INITIALIZING";
          case SyncJobState::ACTIVE:
            return "ACTIVE";
          case SyncJobState::DELETING:
            return "DELETING";
          case SyncJobState::ERROR_:
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

      } // namespace SyncJobStateMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
