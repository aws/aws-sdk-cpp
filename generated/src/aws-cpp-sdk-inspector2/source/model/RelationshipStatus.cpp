/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/RelationshipStatus.h>
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
      namespace RelationshipStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int INVITED_HASH = HashingUtils::HashString("INVITED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");
        static const int RESIGNED_HASH = HashingUtils::HashString("RESIGNED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int EMAIL_VERIFICATION_IN_PROGRESS_HASH = HashingUtils::HashString("EMAIL_VERIFICATION_IN_PROGRESS");
        static const int EMAIL_VERIFICATION_FAILED_HASH = HashingUtils::HashString("EMAIL_VERIFICATION_FAILED");
        static const int REGION_DISABLED_HASH = HashingUtils::HashString("REGION_DISABLED");
        static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("ACCOUNT_SUSPENDED");
        static const int CANNOT_CREATE_DETECTOR_IN_ORG_MASTER_HASH = HashingUtils::HashString("CANNOT_CREATE_DETECTOR_IN_ORG_MASTER");


        RelationshipStatus GetRelationshipStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return RelationshipStatus::CREATED;
          }
          else if (hashCode == INVITED_HASH)
          {
            return RelationshipStatus::INVITED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RelationshipStatus::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return RelationshipStatus::ENABLED;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return RelationshipStatus::REMOVED;
          }
          else if (hashCode == RESIGNED_HASH)
          {
            return RelationshipStatus::RESIGNED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RelationshipStatus::DELETED;
          }
          else if (hashCode == EMAIL_VERIFICATION_IN_PROGRESS_HASH)
          {
            return RelationshipStatus::EMAIL_VERIFICATION_IN_PROGRESS;
          }
          else if (hashCode == EMAIL_VERIFICATION_FAILED_HASH)
          {
            return RelationshipStatus::EMAIL_VERIFICATION_FAILED;
          }
          else if (hashCode == REGION_DISABLED_HASH)
          {
            return RelationshipStatus::REGION_DISABLED;
          }
          else if (hashCode == ACCOUNT_SUSPENDED_HASH)
          {
            return RelationshipStatus::ACCOUNT_SUSPENDED;
          }
          else if (hashCode == CANNOT_CREATE_DETECTOR_IN_ORG_MASTER_HASH)
          {
            return RelationshipStatus::CANNOT_CREATE_DETECTOR_IN_ORG_MASTER;
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
          case RelationshipStatus::CREATED:
            return "CREATED";
          case RelationshipStatus::INVITED:
            return "INVITED";
          case RelationshipStatus::DISABLED:
            return "DISABLED";
          case RelationshipStatus::ENABLED:
            return "ENABLED";
          case RelationshipStatus::REMOVED:
            return "REMOVED";
          case RelationshipStatus::RESIGNED:
            return "RESIGNED";
          case RelationshipStatus::DELETED:
            return "DELETED";
          case RelationshipStatus::EMAIL_VERIFICATION_IN_PROGRESS:
            return "EMAIL_VERIFICATION_IN_PROGRESS";
          case RelationshipStatus::EMAIL_VERIFICATION_FAILED:
            return "EMAIL_VERIFICATION_FAILED";
          case RelationshipStatus::REGION_DISABLED:
            return "REGION_DISABLED";
          case RelationshipStatus::ACCOUNT_SUSPENDED:
            return "ACCOUNT_SUSPENDED";
          case RelationshipStatus::CANNOT_CREATE_DETECTOR_IN_ORG_MASTER:
            return "CANNOT_CREATE_DETECTOR_IN_ORG_MASTER";
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
  } // namespace Inspector2
} // namespace Aws
