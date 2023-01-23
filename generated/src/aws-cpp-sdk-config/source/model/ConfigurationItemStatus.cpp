/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConfigurationItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ConfigurationItemStatusMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int ResourceDiscovered_HASH = HashingUtils::HashString("ResourceDiscovered");
        static const int ResourceNotRecorded_HASH = HashingUtils::HashString("ResourceNotRecorded");
        static const int ResourceDeleted_HASH = HashingUtils::HashString("ResourceDeleted");
        static const int ResourceDeletedNotRecorded_HASH = HashingUtils::HashString("ResourceDeletedNotRecorded");


        ConfigurationItemStatus GetConfigurationItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return ConfigurationItemStatus::OK;
          }
          else if (hashCode == ResourceDiscovered_HASH)
          {
            return ConfigurationItemStatus::ResourceDiscovered;
          }
          else if (hashCode == ResourceNotRecorded_HASH)
          {
            return ConfigurationItemStatus::ResourceNotRecorded;
          }
          else if (hashCode == ResourceDeleted_HASH)
          {
            return ConfigurationItemStatus::ResourceDeleted;
          }
          else if (hashCode == ResourceDeletedNotRecorded_HASH)
          {
            return ConfigurationItemStatus::ResourceDeletedNotRecorded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationItemStatus>(hashCode);
          }

          return ConfigurationItemStatus::NOT_SET;
        }

        Aws::String GetNameForConfigurationItemStatus(ConfigurationItemStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationItemStatus::OK:
            return "OK";
          case ConfigurationItemStatus::ResourceDiscovered:
            return "ResourceDiscovered";
          case ConfigurationItemStatus::ResourceNotRecorded:
            return "ResourceNotRecorded";
          case ConfigurationItemStatus::ResourceDeleted:
            return "ResourceDeleted";
          case ConfigurationItemStatus::ResourceDeletedNotRecorded:
            return "ResourceDeletedNotRecorded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationItemStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
