/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ThreatEntitySetStatus.h>
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
      namespace ThreatEntitySetStatusMapper
      {

        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ThreatEntitySetStatus GetThreatEntitySetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INACTIVE_HASH)
          {
            return ThreatEntitySetStatus::INACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return ThreatEntitySetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ThreatEntitySetStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return ThreatEntitySetStatus::DEACTIVATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ThreatEntitySetStatus::ERROR_;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return ThreatEntitySetStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ThreatEntitySetStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatEntitySetStatus>(hashCode);
          }

          return ThreatEntitySetStatus::NOT_SET;
        }

        Aws::String GetNameForThreatEntitySetStatus(ThreatEntitySetStatus enumValue)
        {
          switch(enumValue)
          {
          case ThreatEntitySetStatus::NOT_SET:
            return {};
          case ThreatEntitySetStatus::INACTIVE:
            return "INACTIVE";
          case ThreatEntitySetStatus::ACTIVATING:
            return "ACTIVATING";
          case ThreatEntitySetStatus::ACTIVE:
            return "ACTIVE";
          case ThreatEntitySetStatus::DEACTIVATING:
            return "DEACTIVATING";
          case ThreatEntitySetStatus::ERROR_:
            return "ERROR";
          case ThreatEntitySetStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case ThreatEntitySetStatus::DELETED:
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

      } // namespace ThreatEntitySetStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
