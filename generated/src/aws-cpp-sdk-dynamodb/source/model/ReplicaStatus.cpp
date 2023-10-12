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

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t REGION_DISABLED_HASH = ConstExprHashingUtils::HashString("REGION_DISABLED");
        static constexpr uint32_t INACCESSIBLE_ENCRYPTION_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("INACCESSIBLE_ENCRYPTION_CREDENTIALS");


        ReplicaStatus GetReplicaStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
