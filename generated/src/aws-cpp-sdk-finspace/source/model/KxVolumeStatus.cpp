/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxVolumeStatus.h>
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
      namespace KxVolumeStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        KxVolumeStatus GetKxVolumeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return KxVolumeStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return KxVolumeStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return KxVolumeStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return KxVolumeStatus::UPDATING;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return KxVolumeStatus::UPDATED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return KxVolumeStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KxVolumeStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return KxVolumeStatus::DELETED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return KxVolumeStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxVolumeStatus>(hashCode);
          }

          return KxVolumeStatus::NOT_SET;
        }

        Aws::String GetNameForKxVolumeStatus(KxVolumeStatus enumValue)
        {
          switch(enumValue)
          {
          case KxVolumeStatus::NOT_SET:
            return {};
          case KxVolumeStatus::CREATING:
            return "CREATING";
          case KxVolumeStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case KxVolumeStatus::ACTIVE:
            return "ACTIVE";
          case KxVolumeStatus::UPDATING:
            return "UPDATING";
          case KxVolumeStatus::UPDATED:
            return "UPDATED";
          case KxVolumeStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case KxVolumeStatus::DELETING:
            return "DELETING";
          case KxVolumeStatus::DELETED:
            return "DELETED";
          case KxVolumeStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxVolumeStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
