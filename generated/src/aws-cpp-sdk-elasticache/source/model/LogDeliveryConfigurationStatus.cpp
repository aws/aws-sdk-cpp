/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/LogDeliveryConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace LogDeliveryConfigurationStatusMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int error_HASH = HashingUtils::HashString("error");


        LogDeliveryConfigurationStatus GetLogDeliveryConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return LogDeliveryConfigurationStatus::active;
          }
          else if (hashCode == enabling_HASH)
          {
            return LogDeliveryConfigurationStatus::enabling;
          }
          else if (hashCode == modifying_HASH)
          {
            return LogDeliveryConfigurationStatus::modifying;
          }
          else if (hashCode == disabling_HASH)
          {
            return LogDeliveryConfigurationStatus::disabling;
          }
          else if (hashCode == error_HASH)
          {
            return LogDeliveryConfigurationStatus::error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogDeliveryConfigurationStatus>(hashCode);
          }

          return LogDeliveryConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForLogDeliveryConfigurationStatus(LogDeliveryConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case LogDeliveryConfigurationStatus::NOT_SET:
            return {};
          case LogDeliveryConfigurationStatus::active:
            return "active";
          case LogDeliveryConfigurationStatus::enabling:
            return "enabling";
          case LogDeliveryConfigurationStatus::modifying:
            return "modifying";
          case LogDeliveryConfigurationStatus::disabling:
            return "disabling";
          case LogDeliveryConfigurationStatus::error:
            return "error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogDeliveryConfigurationStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
