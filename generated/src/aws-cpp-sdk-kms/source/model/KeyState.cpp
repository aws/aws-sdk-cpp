/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace KeyStateMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");
        static constexpr uint32_t PendingDeletion_HASH = ConstExprHashingUtils::HashString("PendingDeletion");
        static constexpr uint32_t PendingImport_HASH = ConstExprHashingUtils::HashString("PendingImport");
        static constexpr uint32_t PendingReplicaDeletion_HASH = ConstExprHashingUtils::HashString("PendingReplicaDeletion");
        static constexpr uint32_t Unavailable_HASH = ConstExprHashingUtils::HashString("Unavailable");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");


        KeyState GetKeyStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return KeyState::Creating;
          }
          else if (hashCode == Enabled_HASH)
          {
            return KeyState::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return KeyState::Disabled;
          }
          else if (hashCode == PendingDeletion_HASH)
          {
            return KeyState::PendingDeletion;
          }
          else if (hashCode == PendingImport_HASH)
          {
            return KeyState::PendingImport;
          }
          else if (hashCode == PendingReplicaDeletion_HASH)
          {
            return KeyState::PendingReplicaDeletion;
          }
          else if (hashCode == Unavailable_HASH)
          {
            return KeyState::Unavailable;
          }
          else if (hashCode == Updating_HASH)
          {
            return KeyState::Updating;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyState>(hashCode);
          }

          return KeyState::NOT_SET;
        }

        Aws::String GetNameForKeyState(KeyState enumValue)
        {
          switch(enumValue)
          {
          case KeyState::NOT_SET:
            return {};
          case KeyState::Creating:
            return "Creating";
          case KeyState::Enabled:
            return "Enabled";
          case KeyState::Disabled:
            return "Disabled";
          case KeyState::PendingDeletion:
            return "PendingDeletion";
          case KeyState::PendingImport:
            return "PendingImport";
          case KeyState::PendingReplicaDeletion:
            return "PendingReplicaDeletion";
          case KeyState::Unavailable:
            return "Unavailable";
          case KeyState::Updating:
            return "Updating";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyStateMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
