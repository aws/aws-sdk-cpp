/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ConfigChangeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace ConfigChangeStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Initializing_HASH = HashingUtils::HashString("Initializing");
        static const int Validating_HASH = HashingUtils::HashString("Validating");
        static const int ValidationFailed_HASH = HashingUtils::HashString("ValidationFailed");
        static const int ApplyingChanges_HASH = HashingUtils::HashString("ApplyingChanges");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int PendingUserInput_HASH = HashingUtils::HashString("PendingUserInput");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        ConfigChangeStatus GetConfigChangeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ConfigChangeStatus::Pending;
          }
          else if (hashCode == Initializing_HASH)
          {
            return ConfigChangeStatus::Initializing;
          }
          else if (hashCode == Validating_HASH)
          {
            return ConfigChangeStatus::Validating;
          }
          else if (hashCode == ValidationFailed_HASH)
          {
            return ConfigChangeStatus::ValidationFailed;
          }
          else if (hashCode == ApplyingChanges_HASH)
          {
            return ConfigChangeStatus::ApplyingChanges;
          }
          else if (hashCode == Completed_HASH)
          {
            return ConfigChangeStatus::Completed;
          }
          else if (hashCode == PendingUserInput_HASH)
          {
            return ConfigChangeStatus::PendingUserInput;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ConfigChangeStatus::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigChangeStatus>(hashCode);
          }

          return ConfigChangeStatus::NOT_SET;
        }

        Aws::String GetNameForConfigChangeStatus(ConfigChangeStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfigChangeStatus::NOT_SET:
            return {};
          case ConfigChangeStatus::Pending:
            return "Pending";
          case ConfigChangeStatus::Initializing:
            return "Initializing";
          case ConfigChangeStatus::Validating:
            return "Validating";
          case ConfigChangeStatus::ValidationFailed:
            return "ValidationFailed";
          case ConfigChangeStatus::ApplyingChanges:
            return "ApplyingChanges";
          case ConfigChangeStatus::Completed:
            return "Completed";
          case ConfigChangeStatus::PendingUserInput:
            return "PendingUserInput";
          case ConfigChangeStatus::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigChangeStatusMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
