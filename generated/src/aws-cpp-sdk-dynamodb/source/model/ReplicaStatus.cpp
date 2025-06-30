/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ReplicaStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int REGION_DISABLED_HASH = HashingUtils::HashString("REGION_DISABLED");
        static const int INACCESSIBLE_ENCRYPTION_CREDENTIALS_HASH = HashingUtils::HashString("INACCESSIBLE_ENCRYPTION_CREDENTIALS");
        static const int ARCHIVING_HASH = HashingUtils::HashString("ARCHIVING");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");
        static const int REPLICATION_NOT_AUTHORIZED_HASH = HashingUtils::HashString("REPLICATION_NOT_AUTHORIZED");


        ReplicaStatus GetReplicaStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ReplicaStatus::CREATING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return ReplicaStatus::CREATION_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ReplicaStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicaStatus::DELETING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ReplicaStatus::ACTIVE;
          }
          else if (hashCode == REGION_DISABLED_HASH)
          {
            return ReplicaStatus::REGION_DISABLED;
          }
          else if (hashCode == INACCESSIBLE_ENCRYPTION_CREDENTIALS_HASH)
          {
            return ReplicaStatus::INACCESSIBLE_ENCRYPTION_CREDENTIALS;
          }
          else if (hashCode == ARCHIVING_HASH)
          {
            return ReplicaStatus::ARCHIVING;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return ReplicaStatus::ARCHIVED;
          }
          else if (hashCode == REPLICATION_NOT_AUTHORIZED_HASH)
          {
            return ReplicaStatus::REPLICATION_NOT_AUTHORIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicaStatus>(hashCode);
          }

          return ReplicaStatus::NOT_SET;
        }

        Aws::String GetNameForReplicaStatus(ReplicaStatus enumValue)
        {
          switch(enumValue)
          {
          case ReplicaStatus::NOT_SET:
            return {};
          case ReplicaStatus::CREATING:
            return "CREATING";
          case ReplicaStatus::CREATION_FAILED:
            return "CREATION_FAILED";
          case ReplicaStatus::UPDATING:
            return "UPDATING";
          case ReplicaStatus::DELETING:
            return "DELETING";
          case ReplicaStatus::ACTIVE:
            return "ACTIVE";
          case ReplicaStatus::REGION_DISABLED:
            return "REGION_DISABLED";
          case ReplicaStatus::INACCESSIBLE_ENCRYPTION_CREDENTIALS:
            return "INACCESSIBLE_ENCRYPTION_CREDENTIALS";
          case ReplicaStatus::ARCHIVING:
            return "ARCHIVING";
          case ReplicaStatus::ARCHIVED:
            return "ARCHIVED";
          case ReplicaStatus::REPLICATION_NOT_AUTHORIZED:
            return "REPLICATION_NOT_AUTHORIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicaStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
