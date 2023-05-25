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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        SyncJobState GetSyncJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
