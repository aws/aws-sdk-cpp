/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppReplicationConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace AppReplicationConfigurationStatusMapper
      {

        static const int NOT_CONFIGURED_HASH = HashingUtils::HashString("NOT_CONFIGURED");
        static const int CONFIGURED_HASH = HashingUtils::HashString("CONFIGURED");


        AppReplicationConfigurationStatus GetAppReplicationConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_CONFIGURED_HASH)
          {
            return AppReplicationConfigurationStatus::NOT_CONFIGURED;
          }
          else if (hashCode == CONFIGURED_HASH)
          {
            return AppReplicationConfigurationStatus::CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppReplicationConfigurationStatus>(hashCode);
          }

          return AppReplicationConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForAppReplicationConfigurationStatus(AppReplicationConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case AppReplicationConfigurationStatus::NOT_CONFIGURED:
            return "NOT_CONFIGURED";
          case AppReplicationConfigurationStatus::CONFIGURED:
            return "CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppReplicationConfigurationStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
