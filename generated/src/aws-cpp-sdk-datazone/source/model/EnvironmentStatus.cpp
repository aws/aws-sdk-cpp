/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int INACCESSIBLE_HASH = HashingUtils::HashString("INACCESSIBLE");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return EnvironmentStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return EnvironmentStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EnvironmentStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentStatus::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return EnvironmentStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return EnvironmentStatus::DELETE_FAILED;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return EnvironmentStatus::VALIDATION_FAILED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return EnvironmentStatus::SUSPENDED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EnvironmentStatus::DISABLED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return EnvironmentStatus::EXPIRED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EnvironmentStatus::DELETED;
          }
          else if (hashCode == INACCESSIBLE_HASH)
          {
            return EnvironmentStatus::INACCESSIBLE;
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
          case EnvironmentStatus::ACTIVE:
            return "ACTIVE";
          case EnvironmentStatus::CREATING:
            return "CREATING";
          case EnvironmentStatus::UPDATING:
            return "UPDATING";
          case EnvironmentStatus::DELETING:
            return "DELETING";
          case EnvironmentStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case EnvironmentStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case EnvironmentStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case EnvironmentStatus::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          case EnvironmentStatus::SUSPENDED:
            return "SUSPENDED";
          case EnvironmentStatus::DISABLED:
            return "DISABLED";
          case EnvironmentStatus::EXPIRED:
            return "EXPIRED";
          case EnvironmentStatus::DELETED:
            return "DELETED";
          case EnvironmentStatus::INACCESSIBLE:
            return "INACCESSIBLE";
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
  } // namespace DataZone
} // namespace Aws
