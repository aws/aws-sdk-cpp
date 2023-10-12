/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/RelationshipStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace RelationshipStatusMapper
      {

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Paused_HASH = ConstExprHashingUtils::HashString("Paused");
        static constexpr uint32_t Invited_HASH = ConstExprHashingUtils::HashString("Invited");
        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Removed_HASH = ConstExprHashingUtils::HashString("Removed");
        static constexpr uint32_t Resigned_HASH = ConstExprHashingUtils::HashString("Resigned");
        static constexpr uint32_t EmailVerificationInProgress_HASH = ConstExprHashingUtils::HashString("EmailVerificationInProgress");
        static constexpr uint32_t EmailVerificationFailed_HASH = ConstExprHashingUtils::HashString("EmailVerificationFailed");
        static constexpr uint32_t RegionDisabled_HASH = ConstExprHashingUtils::HashString("RegionDisabled");
        static constexpr uint32_t AccountSuspended_HASH = ConstExprHashingUtils::HashString("AccountSuspended");


        RelationshipStatus GetRelationshipStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return RelationshipStatus::Enabled;
          }
          else if (hashCode == Paused_HASH)
          {
            return RelationshipStatus::Paused;
          }
          else if (hashCode == Invited_HASH)
          {
            return RelationshipStatus::Invited;
          }
          else if (hashCode == Created_HASH)
          {
            return RelationshipStatus::Created;
          }
          else if (hashCode == Removed_HASH)
          {
            return RelationshipStatus::Removed;
          }
          else if (hashCode == Resigned_HASH)
          {
            return RelationshipStatus::Resigned;
          }
          else if (hashCode == EmailVerificationInProgress_HASH)
          {
            return RelationshipStatus::EmailVerificationInProgress;
          }
          else if (hashCode == EmailVerificationFailed_HASH)
          {
            return RelationshipStatus::EmailVerificationFailed;
          }
          else if (hashCode == RegionDisabled_HASH)
          {
            return RelationshipStatus::RegionDisabled;
          }
          else if (hashCode == AccountSuspended_HASH)
          {
            return RelationshipStatus::AccountSuspended;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelationshipStatus>(hashCode);
          }

          return RelationshipStatus::NOT_SET;
        }

        Aws::String GetNameForRelationshipStatus(RelationshipStatus enumValue)
        {
          switch(enumValue)
          {
          case RelationshipStatus::NOT_SET:
            return {};
          case RelationshipStatus::Enabled:
            return "Enabled";
          case RelationshipStatus::Paused:
            return "Paused";
          case RelationshipStatus::Invited:
            return "Invited";
          case RelationshipStatus::Created:
            return "Created";
          case RelationshipStatus::Removed:
            return "Removed";
          case RelationshipStatus::Resigned:
            return "Resigned";
          case RelationshipStatus::EmailVerificationInProgress:
            return "EmailVerificationInProgress";
          case RelationshipStatus::EmailVerificationFailed:
            return "EmailVerificationFailed";
          case RelationshipStatus::RegionDisabled:
            return "RegionDisabled";
          case RelationshipStatus::AccountSuspended:
            return "AccountSuspended";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationshipStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
