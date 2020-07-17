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

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Paused_HASH = HashingUtils::HashString("Paused");
        static const int Invited_HASH = HashingUtils::HashString("Invited");
        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Removed_HASH = HashingUtils::HashString("Removed");
        static const int Resigned_HASH = HashingUtils::HashString("Resigned");
        static const int EmailVerificationInProgress_HASH = HashingUtils::HashString("EmailVerificationInProgress");
        static const int EmailVerificationFailed_HASH = HashingUtils::HashString("EmailVerificationFailed");
        static const int RegionDisabled_HASH = HashingUtils::HashString("RegionDisabled");
        static const int AccountSuspended_HASH = HashingUtils::HashString("AccountSuspended");


        RelationshipStatus GetRelationshipStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
