/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ThreatIntelSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace ThreatIntelSetStatusMapper
      {

        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t ACTIVATING_HASH = ConstExprHashingUtils::HashString("ACTIVATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DEACTIVATING_HASH = ConstExprHashingUtils::HashString("DEACTIVATING");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t DELETE_PENDING_HASH = ConstExprHashingUtils::HashString("DELETE_PENDING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ThreatIntelSetStatus GetThreatIntelSetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INACTIVE_HASH)
          {
            return ThreatIntelSetStatus::INACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ThreatIntelSetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ThreatIntelSetStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return ThreatIntelSetStatus::DEACTIVATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ThreatIntelSetStatus::ERROR_;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return ThreatIntelSetStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ThreatIntelSetStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatIntelSetStatus>(hashCode);
          }

          return ThreatIntelSetStatus::NOT_SET;
        }

        Aws::String GetNameForThreatIntelSetStatus(ThreatIntelSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ThreatIntelSetStatus::NOT_SET:
            return {};
          case ThreatIntelSetStatus::INACTIVE:
            return "INACTIVE";
          case ThreatIntelSetStatus::ACTIVATING:
            return "ACTIVATING";
          case ThreatIntelSetStatus::ACTIVE:
            return "ACTIVE";
          case ThreatIntelSetStatus::DEACTIVATING:
            return "DEACTIVATING";
          case ThreatIntelSetStatus::ERROR_:
            return "ERROR";
          case ThreatIntelSetStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case ThreatIntelSetStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThreatIntelSetStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
