/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/IntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace IntegrationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");


        IntegrationStatus GetIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return IntegrationStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return IntegrationStatus::IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IntegrationStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return IntegrationStatus::INACTIVE;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return IntegrationStatus::DISABLING;
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
          case IntegrationStatus::PENDING:
            return "PENDING";
          case IntegrationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case IntegrationStatus::ACTIVE:
            return "ACTIVE";
          case IntegrationStatus::INACTIVE:
            return "INACTIVE";
          case IntegrationStatus::DISABLING:
            return "DISABLING";
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
  } // namespace Inspector2
} // namespace Aws
