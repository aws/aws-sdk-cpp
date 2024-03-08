/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicatorState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace ReplicatorStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReplicatorState GetReplicatorStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ReplicatorState::RUNNING;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ReplicatorState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ReplicatorState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicatorState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReplicatorState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicatorState>(hashCode);
          }

          return ReplicatorState::NOT_SET;
        }

        Aws::String GetNameForReplicatorState(ReplicatorState enumValue)
        {
          switch(enumValue)
          {
          case ReplicatorState::NOT_SET:
            return {};
          case ReplicatorState::RUNNING:
            return "RUNNING";
          case ReplicatorState::CREATING:
            return "CREATING";
          case ReplicatorState::UPDATING:
            return "UPDATING";
          case ReplicatorState::DELETING:
            return "DELETING";
          case ReplicatorState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicatorStateMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
