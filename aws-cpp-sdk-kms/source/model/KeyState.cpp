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

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int PendingDeletion_HASH = HashingUtils::HashString("PendingDeletion");
        static const int PendingImport_HASH = HashingUtils::HashString("PendingImport");
        static const int Unavailable_HASH = HashingUtils::HashString("Unavailable");


        KeyState GetKeyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
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
          else if (hashCode == Unavailable_HASH)
          {
            return KeyState::Unavailable;
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
          case KeyState::Enabled:
            return "Enabled";
          case KeyState::Disabled:
            return "Disabled";
          case KeyState::PendingDeletion:
            return "PendingDeletion";
          case KeyState::PendingImport:
            return "PendingImport";
          case KeyState::Unavailable:
            return "Unavailable";
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
