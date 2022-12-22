/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/SessionBackupMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace SessionBackupModeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");


        SessionBackupMode GetSessionBackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return SessionBackupMode::AUTOMATIC;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return SessionBackupMode::DEACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionBackupMode>(hashCode);
          }

          return SessionBackupMode::NOT_SET;
        }

        Aws::String GetNameForSessionBackupMode(SessionBackupMode enumValue)
        {
          switch(enumValue)
          {
          case SessionBackupMode::AUTOMATIC:
            return "AUTOMATIC";
          case SessionBackupMode::DEACTIVATED:
            return "DEACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionBackupModeMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
