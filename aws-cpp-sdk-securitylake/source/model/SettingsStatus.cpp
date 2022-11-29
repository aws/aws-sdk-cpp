/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SettingsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace SettingsStatusMapper
      {

        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SettingsStatus GetSettingsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return SettingsStatus::INITIALIZED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SettingsStatus::PENDING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SettingsStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SettingsStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SettingsStatus>(hashCode);
          }

          return SettingsStatus::NOT_SET;
        }

        Aws::String GetNameForSettingsStatus(SettingsStatus enumValue)
        {
          switch(enumValue)
          {
          case SettingsStatus::INITIALIZED:
            return "INITIALIZED";
          case SettingsStatus::PENDING:
            return "PENDING";
          case SettingsStatus::COMPLETED:
            return "COMPLETED";
          case SettingsStatus::FAILED:
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

      } // namespace SettingsStatusMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
