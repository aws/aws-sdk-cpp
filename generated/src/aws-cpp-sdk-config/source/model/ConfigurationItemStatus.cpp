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

        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t ResourceDiscovered_HASH = ConstExprHashingUtils::HashString("ResourceDiscovered");
        static constexpr uint32_t ResourceNotRecorded_HASH = ConstExprHashingUtils::HashString("ResourceNotRecorded");
        static constexpr uint32_t ResourceDeleted_HASH = ConstExprHashingUtils::HashString("ResourceDeleted");
        static constexpr uint32_t ResourceDeletedNotRecorded_HASH = ConstExprHashingUtils::HashString("ResourceDeletedNotRecorded");


        ConfigurationItemStatus GetConfigurationItemStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConfigurationItemStatus::NOT_SET:
            return {};
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
