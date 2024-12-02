/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/IntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace IntegrationStatusMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        IntegrationStatus GetIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return IntegrationStatus::PROVISIONING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IntegrationStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IntegrationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationStatus>(hashCode);
          }

          return IntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case IntegrationStatus::NOT_SET:
            return {};
          case IntegrationStatus::PROVISIONING:
            return "PROVISIONING";
          case IntegrationStatus::ACTIVE:
            return "ACTIVE";
          case IntegrationStatus::FAILED:
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

      } // namespace IntegrationStatusMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
