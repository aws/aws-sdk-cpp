/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/VaultState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace VaultStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        VaultState GetVaultStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return VaultState::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return VaultState::AVAILABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VaultState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VaultState>(hashCode);
          }

          return VaultState::NOT_SET;
        }

        Aws::String GetNameForVaultState(VaultState enumValue)
        {
          switch(enumValue)
          {
          case VaultState::NOT_SET:
            return {};
          case VaultState::CREATING:
            return "CREATING";
          case VaultState::AVAILABLE:
            return "AVAILABLE";
          case VaultState::FAILED:
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

      } // namespace VaultStateMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
