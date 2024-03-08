/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotReplicaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace BotReplicaStatusMapper
      {

        static const int Enabling_HASH = HashingUtils::HashString("Enabling");
        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        BotReplicaStatus GetBotReplicaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabling_HASH)
          {
            return BotReplicaStatus::Enabling;
          }
          else if (hashCode == Enabled_HASH)
          {
            return BotReplicaStatus::Enabled;
          }
          else if (hashCode == Deleting_HASH)
          {
            return BotReplicaStatus::Deleting;
          }
          else if (hashCode == Failed_HASH)
          {
            return BotReplicaStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BotReplicaStatus>(hashCode);
          }

          return BotReplicaStatus::NOT_SET;
        }

        Aws::String GetNameForBotReplicaStatus(BotReplicaStatus enumValue)
        {
          switch(enumValue)
          {
          case BotReplicaStatus::NOT_SET:
            return {};
          case BotReplicaStatus::Enabling:
            return "Enabling";
          case BotReplicaStatus::Enabled:
            return "Enabled";
          case BotReplicaStatus::Deleting:
            return "Deleting";
          case BotReplicaStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BotReplicaStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
