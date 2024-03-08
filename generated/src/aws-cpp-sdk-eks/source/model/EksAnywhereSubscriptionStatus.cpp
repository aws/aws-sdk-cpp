/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/EksAnywhereSubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace EksAnywhereSubscriptionStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int EXPIRING_HASH = HashingUtils::HashString("EXPIRING");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        EksAnywhereSubscriptionStatus GetEksAnywhereSubscriptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EksAnywhereSubscriptionStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EksAnywhereSubscriptionStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EksAnywhereSubscriptionStatus::UPDATING;
          }
          else if (hashCode == EXPIRING_HASH)
          {
            return EksAnywhereSubscriptionStatus::EXPIRING;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return EksAnywhereSubscriptionStatus::EXPIRED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EksAnywhereSubscriptionStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EksAnywhereSubscriptionStatus>(hashCode);
          }

          return EksAnywhereSubscriptionStatus::NOT_SET;
        }

        Aws::String GetNameForEksAnywhereSubscriptionStatus(EksAnywhereSubscriptionStatus enumValue)
        {
          switch(enumValue)
          {
          case EksAnywhereSubscriptionStatus::NOT_SET:
            return {};
          case EksAnywhereSubscriptionStatus::CREATING:
            return "CREATING";
          case EksAnywhereSubscriptionStatus::ACTIVE:
            return "ACTIVE";
          case EksAnywhereSubscriptionStatus::UPDATING:
            return "UPDATING";
          case EksAnywhereSubscriptionStatus::EXPIRING:
            return "EXPIRING";
          case EksAnywhereSubscriptionStatus::EXPIRED:
            return "EXPIRED";
          case EksAnywhereSubscriptionStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EksAnywhereSubscriptionStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
