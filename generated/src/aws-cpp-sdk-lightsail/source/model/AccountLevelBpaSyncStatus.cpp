/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccountLevelBpaSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AccountLevelBpaSyncStatusMapper
      {

        static constexpr uint32_t InSync_HASH = ConstExprHashingUtils::HashString("InSync");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t NeverSynced_HASH = ConstExprHashingUtils::HashString("NeverSynced");
        static constexpr uint32_t Defaulted_HASH = ConstExprHashingUtils::HashString("Defaulted");


        AccountLevelBpaSyncStatus GetAccountLevelBpaSyncStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InSync_HASH)
          {
            return AccountLevelBpaSyncStatus::InSync;
          }
          else if (hashCode == Failed_HASH)
          {
            return AccountLevelBpaSyncStatus::Failed;
          }
          else if (hashCode == NeverSynced_HASH)
          {
            return AccountLevelBpaSyncStatus::NeverSynced;
          }
          else if (hashCode == Defaulted_HASH)
          {
            return AccountLevelBpaSyncStatus::Defaulted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountLevelBpaSyncStatus>(hashCode);
          }

          return AccountLevelBpaSyncStatus::NOT_SET;
        }

        Aws::String GetNameForAccountLevelBpaSyncStatus(AccountLevelBpaSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountLevelBpaSyncStatus::NOT_SET:
            return {};
          case AccountLevelBpaSyncStatus::InSync:
            return "InSync";
          case AccountLevelBpaSyncStatus::Failed:
            return "Failed";
          case AccountLevelBpaSyncStatus::NeverSynced:
            return "NeverSynced";
          case AccountLevelBpaSyncStatus::Defaulted:
            return "Defaulted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountLevelBpaSyncStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
