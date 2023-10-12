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

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("VALIDATION_FAILED");
        static constexpr uint32_t SUSPENDED_HASH = ConstExprHashingUtils::HashString("SUSPENDED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t INACCESSIBLE_HASH = ConstExprHashingUtils::HashString("INACCESSIBLE");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
