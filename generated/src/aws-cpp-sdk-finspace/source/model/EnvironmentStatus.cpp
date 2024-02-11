/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static const int CREATE_REQUESTED_HASH = HashingUtils::HashString("CREATE_REQUESTED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETE_REQUESTED_HASH = HashingUtils::HashString("DELETE_REQUESTED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_CREATION_HASH = HashingUtils::HashString("FAILED_CREATION");
        static const int RETRY_DELETION_HASH = HashingUtils::HashString("RETRY_DELETION");
        static const int FAILED_DELETION_HASH = HashingUtils::HashString("FAILED_DELETION");
        static const int UPDATE_NETWORK_REQUESTED_HASH = HashingUtils::HashString("UPDATE_NETWORK_REQUESTED");
        static const int UPDATING_NETWORK_HASH = HashingUtils::HashString("UPDATING_NETWORK");
        static const int FAILED_UPDATING_NETWORK_HASH = HashingUtils::HashString("FAILED_UPDATING_NETWORK");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_REQUESTED_HASH)
          {
            return EnvironmentStatus::CREATE_REQUESTED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return EnvironmentStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return EnvironmentStatus::CREATED;
          }
          else if (hashCode == DELETE_REQUESTED_HASH)
          {
            return EnvironmentStatus::DELETE_REQUESTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EnvironmentStatus::DELETED;
          }
          else if (hashCode == FAILED_CREATION_HASH)
          {
            return EnvironmentStatus::FAILED_CREATION;
          }
          else if (hashCode == RETRY_DELETION_HASH)
          {
            return EnvironmentStatus::RETRY_DELETION;
          }
          else if (hashCode == FAILED_DELETION_HASH)
          {
            return EnvironmentStatus::FAILED_DELETION;
          }
          else if (hashCode == UPDATE_NETWORK_REQUESTED_HASH)
          {
            return EnvironmentStatus::UPDATE_NETWORK_REQUESTED;
          }
          else if (hashCode == UPDATING_NETWORK_HASH)
          {
            return EnvironmentStatus::UPDATING_NETWORK;
          }
          else if (hashCode == FAILED_UPDATING_NETWORK_HASH)
          {
            return EnvironmentStatus::FAILED_UPDATING_NETWORK;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return EnvironmentStatus::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentStatus>(hashCode);
          }

          return EnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentStatus::NOT_SET:
            return {};
          case EnvironmentStatus::CREATE_REQUESTED:
            return "CREATE_REQUESTED";
          case EnvironmentStatus::CREATING:
            return "CREATING";
          case EnvironmentStatus::CREATED:
            return "CREATED";
          case EnvironmentStatus::DELETE_REQUESTED:
            return "DELETE_REQUESTED";
          case EnvironmentStatus::DELETING:
            return "DELETING";
          case EnvironmentStatus::DELETED:
            return "DELETED";
          case EnvironmentStatus::FAILED_CREATION:
            return "FAILED_CREATION";
          case EnvironmentStatus::RETRY_DELETION:
            return "RETRY_DELETION";
          case EnvironmentStatus::FAILED_DELETION:
            return "FAILED_DELETION";
          case EnvironmentStatus::UPDATE_NETWORK_REQUESTED:
            return "UPDATE_NETWORK_REQUESTED";
          case EnvironmentStatus::UPDATING_NETWORK:
            return "UPDATING_NETWORK";
          case EnvironmentStatus::FAILED_UPDATING_NETWORK:
            return "FAILED_UPDATING_NETWORK";
          case EnvironmentStatus::SUSPENDED:
            return "SUSPENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
