/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteConfigurationTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace BatchDeleteConfigurationTaskStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BatchDeleteConfigurationTaskStatus GetBatchDeleteConfigurationTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return BatchDeleteConfigurationTaskStatus::INITIALIZING;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return BatchDeleteConfigurationTaskStatus::VALIDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return BatchDeleteConfigurationTaskStatus::DELETING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return BatchDeleteConfigurationTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BatchDeleteConfigurationTaskStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchDeleteConfigurationTaskStatus>(hashCode);
          }

          return BatchDeleteConfigurationTaskStatus::NOT_SET;
        }

        Aws::String GetNameForBatchDeleteConfigurationTaskStatus(BatchDeleteConfigurationTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case BatchDeleteConfigurationTaskStatus::NOT_SET:
            return {};
          case BatchDeleteConfigurationTaskStatus::INITIALIZING:
            return "INITIALIZING";
          case BatchDeleteConfigurationTaskStatus::VALIDATING:
            return "VALIDATING";
          case BatchDeleteConfigurationTaskStatus::DELETING:
            return "DELETING";
          case BatchDeleteConfigurationTaskStatus::COMPLETED:
            return "COMPLETED";
          case BatchDeleteConfigurationTaskStatus::FAILED:
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

      } // namespace BatchDeleteConfigurationTaskStatusMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
