/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ConfigurationSyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace ConfigurationSyncStatusMapper
      {

        static const int InSync_HASH = HashingUtils::HashString("InSync");
        static const int OutOfSync_HASH = HashingUtils::HashString("OutOfSync");


        ConfigurationSyncStatus GetConfigurationSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InSync_HASH)
          {
            return ConfigurationSyncStatus::InSync;
          }
          else if (hashCode == OutOfSync_HASH)
          {
            return ConfigurationSyncStatus::OutOfSync;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationSyncStatus>(hashCode);
          }

          return ConfigurationSyncStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationSyncStatus(ConfigurationSyncStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationSyncStatus::InSync:
            return "InSync";
          case ConfigurationSyncStatus::OutOfSync:
            return "OutOfSync";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationSyncStatusMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
