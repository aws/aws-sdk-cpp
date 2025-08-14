/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/TrustedEntitySetStatus.h>
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
      namespace TrustedEntitySetStatusMapper
      {

        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        TrustedEntitySetStatus GetTrustedEntitySetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INACTIVE_HASH)
          {
            return TrustedEntitySetStatus::INACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return TrustedEntitySetStatus::ACTIVATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return TrustedEntitySetStatus::ACTIVE;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return TrustedEntitySetStatus::DEACTIVATING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TrustedEntitySetStatus::ERROR_;
          }
          else if (hashCode == DELETE_PENDING_HASH)
          {
            return TrustedEntitySetStatus::DELETE_PENDING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return TrustedEntitySetStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustedEntitySetStatus>(hashCode);
          }

          return TrustedEntitySetStatus::NOT_SET;
        }

        Aws::String GetNameForTrustedEntitySetStatus(TrustedEntitySetStatus enumValue)
        {
          switch(enumValue)
          {
          case TrustedEntitySetStatus::NOT_SET:
            return {};
          case TrustedEntitySetStatus::INACTIVE:
            return "INACTIVE";
          case TrustedEntitySetStatus::ACTIVATING:
            return "ACTIVATING";
          case TrustedEntitySetStatus::ACTIVE:
            return "ACTIVE";
          case TrustedEntitySetStatus::DEACTIVATING:
            return "DEACTIVATING";
          case TrustedEntitySetStatus::ERROR_:
            return "ERROR";
          case TrustedEntitySetStatus::DELETE_PENDING:
            return "DELETE_PENDING";
          case TrustedEntitySetStatus::DELETED:
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

      } // namespace TrustedEntitySetStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
